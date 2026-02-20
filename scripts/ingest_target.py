#!/usr/bin/env python3
"""
Orchestrator for bundle inventory + manifest linking + extraction index + global index.

Usage examples (use the repo venv python to be explicit):
  /Volumes/Samples/_Projects/NI_BINARIES_DECOMP/Aether_Reversal_Engine/.venv/bin/python /Volumes/Samples/_Projects/NI_BINARIES_DECOMP/Aether_Reversal_Engine/scripts/ingest_target.py \
      --target targets/REAPER --hash-policy strict --link-manifest

  /Volumes/Samples/_Projects/NI_BINARIES_DECOMP/Aether_Reversal_Engine/.venv/bin/python /Volumes/Samples/_Projects/NI_BINARIES_DECOMP/Aether_Reversal_Engine/scripts/ingest_target.py \
      --target targets/REAPER --hash-policy compat

Features:
- Explicit hash policy: strict (BLAKE3 required) or compat (allow SHA256 fallback)
- Atomic JSON writes + lock around INDEX.json
- Writes only target-relative POSIX paths in output JSON
- Validates outputs after write
- Emits machine-readable inventory_run_report.json
"""
from __future__ import annotations
import argparse
import json
import os
import shutil
import sys
import time
from datetime import datetime
from pathlib import Path

import subprocess
from factory.core import bundle_inventory, target_layout


def atomic_write_json(path: Path, data: dict):
    path.parent.mkdir(parents=True, exist_ok=True)
    import tempfile
    fd, tmp = tempfile.mkstemp(dir=str(path.parent), suffix='.json.tmp')
    try:
        with os.fdopen(fd, 'w') as f:
            json.dump(data, f, indent=2)
            f.write('\n')
            f.flush()
            os.fsync(f.fileno())
        os.replace(tmp, str(path))
    finally:
        try:
            if tmp and os.path.exists(tmp):
                os.unlink(tmp)
        except Exception:
            pass


def _load_schema(name: str) -> dict:
    schema_path = Path('schemas') / name
    if not schema_path.exists():
        raise FileNotFoundError(f"Schema not found: {schema_path}")
    return json.loads(schema_path.read_text())


def _compute_checksum(path: Path) -> str:
    """Return blake3 checksum if available else sha256."""
    if not path.exists():
        return ""
    try:
        import blake3  # type: ignore
        return blake3.blake3(path.read_bytes()).hexdigest()
    except Exception:
        import hashlib
        return hashlib.sha256(path.read_bytes()).hexdigest()


def validate_manifest(manifest_path: Path) -> bool:
    try:
        m = json.loads(manifest_path.read_text())
        # Prefer jsonschema if available (strong validation)
        try:
            import jsonschema  # type: ignore
            schema = _load_schema('manifest.v1.json')
            jsonschema.validate(instance=m, schema=schema)
            return True
        except ImportError:
            # Fallback: basic structural checks
            print('[validate] jsonschema not installed — falling back to basic MANIFEST checks', file=sys.stderr)
            if 'schema_version' not in m:
                raise ValueError('schema_version missing')
            if 'binaries' not in m or not isinstance(m['binaries'], list):
                raise ValueError('binaries missing/invalid')
            return True
    except Exception as e:
        print(f"[validate] MANIFEST.json invalid: {e}", file=sys.stderr)
        return False


def validate_bundle_index(index_path: Path) -> bool:
    try:
        j = json.loads(index_path.read_text())
        required = ['run_id', 'files', 'summary']
        for k in required:
            if k not in j:
                raise ValueError(f'missing {k}')
        # Basic shape OK; bundle_inventory has more detailed validation during run
        return True
    except Exception as e:
        print(f"[validate] BUNDLE_INDEX.json invalid: {e}", file=sys.stderr)
        return False


def validate_extraction_index(ex_index_path: Path) -> bool:
    try:
        j = json.loads(ex_index_path.read_text())
        try:
            import jsonschema  # type: ignore
            schema = _load_schema('extraction_index.v1.json')
            jsonschema.validate(instance=j, schema=schema)
            return True
        except ImportError:
            print('[validate] jsonschema not installed — falling back to basic EXTRACTION_INDEX checks', file=sys.stderr)
            if 'decompiled_files' not in j:
                raise ValueError('decompiled_files missing')
            return True
    except Exception as e:
        print(f"[validate] EXTRACTION_INDEX.json invalid: {e}", file=sys.stderr)
        return False


def validate_targets_index(targets_index_path: Path, target_name: str) -> bool:
    try:
        j = json.loads(targets_index_path.read_text())
        # Optional: strong JSON Schema validation for targets/INDEX.json
        try:
            import jsonschema  # type: ignore
            schema = _load_schema('targets_index.v1.json')
            jsonschema.validate(instance=j, schema=schema)
        except ImportError:
            print('[validate] jsonschema not installed — skipping full INDEX.json schema validation', file=sys.stderr)
        for e in j.get('entries', []):
            if e.get('target') == target_name:
                return True
        raise ValueError('target not present in INDEX.json')
    except Exception as e:
        print(f"[validate] targets/INDEX.json invalid: {e}", file=sys.stderr)
        return False


def run(target: Path, hash_policy: str, link_manifest: bool, validate: bool = True, cleanup_stale_days: int = 7, dry_run: bool = False) -> int:
    """Main orchestration.
    - target: path to targets/<Target> (must contain bundle/ or be a bundle path)
    - hash_policy: 'strict' or 'compat'
    """
    # Resolve target root
    target = Path(target)
    if target.exists() and (target / 'bundle').exists():
        target_root = target
    elif target.is_dir() and target.name.endswith('.app'):
        # allow passing in a bundle path -> infer targets/<name>
        target_root = Path('targets') / target.name.replace('.app', '')
    else:
        # accept targets/<name>
        if str(target).startswith('targets'):
            target_root = target
        else:
            target_root = Path('targets') / target.name

    if not (target_root / 'bundle').exists():
        print(f"ERROR: target bundle not found at {target_root / 'bundle'}", file=sys.stderr)
        return 2

    # Startup recovery: detect leftover staging or backups and repair/commit where possible
    def _recover_incomplete_runs(target_root: Path) -> dict:
        """Attempt to commit valid staged runs or restore backups for incomplete/invalid staging.
        Returns a summary dict with action counts and paths for inclusion in the run report.
        """
        summary = {
            'staged_committed': 0,
            'staged_removed': 0,
            'backups_restored': 0,
            'bak_removed': 0,
            'errors': [],
            'staged_paths': [],
            'restored_paths': [],
        }
        staging_base = target_root / '.ingest_staging'
        # 1) If staging subdirs exist: for each run try to commit if complete+valid; otherwise restore backups
        if staging_base.exists():
            for run_dir in sorted(staging_base.iterdir()):
                try:
                    if not run_dir.is_dir():
                        continue
                    print(f"[recover] Found staged run: {run_dir}", file=sys.stderr)
                    staged_manifest = run_dir / 'MANIFEST.json'
                    if not staged_manifest.exists():
                        # incomplete staging -> cleanup and try restoring backups
                        print(f"[recover] staged manifest missing for {run_dir}, cleaning staging and restoring backups", file=sys.stderr)
                        shutil.rmtree(run_dir, ignore_errors=True)
                        summary['staged_removed'] += 1
                        continue
                    manifest_obj = json.loads(staged_manifest.read_text())
                    exec_rel = manifest_obj['binaries'][0]['exec_dir']
                    staged_bundle = run_dir / 'inventory' / 'BUNDLE_INDEX.json'
                    staged_ex = run_dir / exec_rel / 'EXTRACTION_INDEX.json'
                    staged_run_report = run_dir / exec_rel / 'inventory_run_report.json'
                    staged_complete = staged_manifest.exists() and staged_bundle.exists() and staged_ex.exists() and staged_run_report.exists()
                    if not staged_complete:
                        print(f"[recover] staged run incomplete ({run_dir}), removing staging and restoring backups", file=sys.stderr)
                        shutil.rmtree(run_dir, ignore_errors=True)
                        summary['staged_removed'] += 1
                        continue

                    # Validate staged artifacts (prefer jsonschema)
                    valid = True
                    try:
                        import jsonschema  # type: ignore
                        jsonschema.validate(instance=json.loads(staged_manifest.read_text()), schema=_load_schema('manifest.v1.json'))
                        jsonschema.validate(instance=json.loads(staged_ex.read_text()), schema=_load_schema('extraction_index.v1.json'))
                        # Accept legacy bundle schema_version values when reading
                        bjson = json.loads(staged_bundle.read_text())
                        if isinstance(bjson.get('schema_version'), str) and bjson.get('schema_version') == '1.1.0':
                            # normalize for validation
                            bjson['schema_version'] = 1
                        jsonschema.validate(instance=bjson, schema=_load_schema('bundle_index.v1.json'))
                    except ImportError:
                        # fallback to lightweight checks
                        valid &= validate_manifest(staged_manifest)
                        valid &= validate_extraction_index(staged_ex)
                        valid &= validate_bundle_index(staged_bundle)
                    except Exception as e:
                        print(f"[recover] staged validation failed: {e}", file=sys.stderr)
                        valid = False

                    if valid:
                        # Commit staged files (backup-then-replace)
                        mappings = [
                            (staged_manifest, target_root / 'MANIFEST.json'),
                            (staged_bundle, target_root / 'inventory' / 'BUNDLE_INDEX.json'),
                            (staged_ex, target_root / exec_rel / 'EXTRACTION_INDEX.json'),
                            (staged_run_report, target_root / exec_rel / 'inventory_run_report.json'),
                        ]
                        backups = []
                        try:
                            for staged_p, final_p in mappings:
                                final_p.parent.mkdir(parents=True, exist_ok=True)
                                if final_p.exists():
                                    bak = final_p.with_name(final_p.name + f'.bak.{run_dir.name}')
                                    os.replace(str(final_p), str(bak))
                                    backups.append((final_p, bak))
                                os.replace(str(staged_p), str(final_p))
                            print(f"[recover] Committed staged run {run_dir.name}", file=sys.stderr)
                            summary['staged_committed'] += 1
                            summary['staged_paths'].append(str(run_dir))
                        except Exception as e:
                            # rollback
                            for final_p, bak in backups:
                                try:
                                    if bak.exists():
                                        os.replace(str(bak), str(final_p))
                                        summary['backups_restored'] += 1
                                        summary['restored_paths'].append(str(final_p))
                                except Exception:
                                    pass
                            print(f"[recover] commit failed for staged run {run_dir.name}: {e}", file=sys.stderr)
                            summary['errors'].append(str(e))
                        finally:
                            shutil.rmtree(run_dir, ignore_errors=True)
                    else:
                        # invalid staged run — cleanup and attempt to restore .bak files
                        print(f"[recover] staged run {run_dir.name} invalid — cleaning and restoring backups", file=sys.stderr)
                        shutil.rmtree(run_dir, ignore_errors=True)
                        summary['staged_removed'] += 1
                        # restore any .bak.* found under target_root
                        for bak in target_root.rglob('*.bak.*'):
                            try:
                                orig_name = bak.name.split('.bak.')[0]
                                final_p = bak.with_name(orig_name)
                                if not final_p.exists():
                                    os.replace(str(bak), str(final_p))
                                    summary['backups_restored'] += 1
                                    summary['restored_paths'].append(str(final_p))
                            except Exception:
                                pass
                except Exception as e:
                    print(f"[recover] unexpected error while recovering {run_dir}: {e}", file=sys.stderr)
                    summary['errors'].append(str(e))
        # 2) Repair stray .bak.* files when no staging present
        for bak in list(target_root.rglob('*.bak.*')):
            try:
                orig_name = bak.name.split('.bak.')[0]
                final_p = bak.with_name(orig_name)
                if not final_p.exists():
                    os.replace(str(bak), str(final_p))
                    print(f"[recover] Restored backup {bak} -> {final_p}", file=sys.stderr)
                    summary['backups_restored'] += 1
                    summary['restored_paths'].append(str(final_p))
                else:
                    # remove stale bak
                    try:
                        bak.unlink()
                        summary['bak_removed'] += 1
                    except Exception:
                        pass
            except Exception as e:
                print(f"[recover] error restoring bak {bak}: {e}", file=sys.stderr)
                summary['errors'].append(str(e))

        return summary

    recovery_summary = _recover_incomplete_runs(target_root)

    # Cleanup stale staging / bak files (optional) — performed after recovery
    def _cleanup_stale_staging(target_root: Path, days: int, dry_run: bool) -> dict:
        summary = {'staged_removed': 0, 'bak_removed': 0, 'paths': [], 'dry_run': bool(dry_run)}
        if days is None:
            return summary
        cutoff = time.time() - (int(days) * 24 * 3600)
        # Acquire simple lock to avoid races
        lock_path = target_root / '.ingest_cleanup.lock'
        start = time.time()
        got_lock = False
        while True:
            try:
                fd = os.open(str(lock_path), os.O_CREAT | os.O_EXCL | os.O_WRONLY)
                os.close(fd)
                got_lock = True
                break
            except FileExistsError:
                if time.time() - start > 5:
                    # cannot acquire lock — skip cleanup to be safe
                    return summary
                time.sleep(0.05)
        try:
            staging_base = target_root / '.ingest_staging'
            if staging_base.exists():
                for run_dir in list(staging_base.iterdir()):
                    try:
                        mtime = run_dir.stat().st_mtime
                        if mtime <= cutoff:
                            summary['paths'].append(str(run_dir))
                            if not dry_run:
                                shutil.rmtree(run_dir, ignore_errors=True)
                                summary['staged_removed'] += 1
                    except Exception:
                        pass
            # orphan bak files
            for bak in list(target_root.rglob('*.bak.*')):
                try:
                    if bak.stat().st_mtime <= cutoff:
                        summary['paths'].append(str(bak))
                        if not dry_run:
                            bak.unlink()
                            summary['bak_removed'] += 1
                except Exception:
                    pass
        finally:
            try:
                lock_path.unlink()
            except Exception:
                pass
        return summary

    cleanup_summary = _cleanup_stale_staging(target_root, cleanup_stale_days, dry_run)

    # record start time for run-report / audit
    _run_start_ts = datetime.utcnow().isoformat() + 'Z'

    # Hash policy mapping
    if hash_policy == 'strict':
        # require blake3
        try:
            import blake3  # type: ignore
        except Exception:
            print('ERROR: BLAKE3 required for strict mode. Install `pip install blake3`', file=sys.stderr)
            return 3
        mode = 'ingest'
        allow_sha256 = False
        require_blake3 = True
        hash_all = True
    else:
        mode = 'explore'
        allow_sha256 = True
        require_blake3 = False
        hash_all = False
        print('[ingest] WARNING: running in compat mode (SHA256 fallback allowed). Outputs will be marked).', file=sys.stderr)

    # Run bundle inventory
    bundle_root = target_root / 'bundle'
    inventory_result = bundle_inventory.inventory_bundle(
        bundle_root=bundle_root,
        allow_sha256=allow_sha256,
        require_blake3=require_blake3,
        hash_all=hash_all,
        cli_args={"invoked_by": "scripts/ingest_target.py", "hash_policy": hash_policy},
    )

    # Instead of writing files directly, stage all JSON outputs and commit atomically (best-effort)
    output_dir = bundle_inventory.infer_inventory_dir(bundle_root)
    index_path = output_dir / 'BUNDLE_INDEX.json'
    rel = str(index_path.relative_to(target_root)).replace('\\', '/')

    # prepare staging area
    staging_root = target_root / '.ingest_staging' / inventory_result.run_id
    staging_root.mkdir(parents=True, exist_ok=True)

    def _stage_json(final_path: Path, data: dict) -> Path:
        relp = final_path.relative_to(target_root)
        staged = staging_root / relp
        staged.parent.mkdir(parents=True, exist_ok=True)
        with open(staged, 'w') as f:
            json.dump(data, f, indent=2)
            f.write('\n')
            f.flush(); os.fsync(f.fileno())
        return staged

    def _stage_copy(src: Path, final_path: Path) -> Path:
        relp = final_path.relative_to(target_root)
        staged = staging_root / relp
        staged.parent.mkdir(parents=True, exist_ok=True)
        shutil.copy2(src, staged)
        return staged

    # Stage BUNDLE_INDEX.json (copy from bundle_inventory output)
    staged_bundle_index = _stage_copy(index_path, target_root / rel)

    # STRICT structural validation on the staged bundle index (strong check)
    if hash_policy == 'strict':
        try:
            import jsonschema  # type: ignore
            schema = _load_schema('bundle_index.v1.json')
            jsonschema.validate(instance=json.loads(staged_bundle_index.read_text()), schema=schema)
        except ImportError:
            # fallback to structural checks already implemented
            bundle_index = json.loads(staged_bundle_index.read_text())
            if bundle_index.get('hash_algo_default') and bundle_index.get('hash_algo_default') != 'blake3':
                print('[ingest] ERROR: bundle_index declares non-blake3 default while strict mode requested', file=sys.stderr)
                return 5
            skipped = bundle_index.get('summary', {}).get('files_hash_skipped', 0)
            if bundle_index.get('summary', {}).get('total_files', 0) and skipped:
                print(f"[ingest] ERROR: {skipped} files skipped hashing under strict mode", file=sys.stderr)
                return 5
            for rec in bundle_index.get('files', []):
                if rec.get('hash_skipped'):
                    print(f"[ingest] ERROR: file {rec.get('relative_path')} unexpectedly has hash_skipped under strict mode", file=sys.stderr)
                    return 5
                if rec.get('hash_algo') != 'blake3':
                    print(f"[ingest] ERROR: file {rec.get('relative_path')} hash_algo={rec.get('hash_algo')} (expected blake3)", file=sys.stderr)
                    return 5
                if not rec.get('hash'):
                    print(f"[ingest] ERROR: file {rec.get('relative_path')} missing 'hash' digest under strict mode", file=sys.stderr)
                    return 5

    # Prepare extraction index + run report and stage them
    manifest_obj = json.loads((target_root / 'MANIFEST.json').read_text())
    exec_rel = manifest_obj['binaries'][0]['exec_dir']
    exec_dir = target_root / exec_rel

    asset_index_rel = (Path(exec_rel) / 'assets' / 'ASSET_INDEX.json').as_posix()
    bundle_index_rel = Path(rel).as_posix()
    decompiled_count = len(list((exec_dir / 'decompiled_real').rglob('*.cpp')))

    extraction_index = {
        'schema_version': 1,
        'binary': manifest_obj['binaries'][0]['binary_path'],
        'asset_index_rel': asset_index_rel,
        'bundle_index_rel': bundle_index_rel,
        'decompiled_files': decompiled_count,
        'extracted_at': datetime.utcnow().isoformat() + 'Z',
        'hash_policy': hash_policy,
        'warnings': []
    }
    staged_ex = _stage_json(target_root / exec_rel / 'EXTRACTION_INDEX.json', extraction_index)

    # Stage MANIFEST.json patch (do NOT modify live manifest yet)
    manifest_obj['bundle_index_rel'] = bundle_index_rel
    manifest_obj['bundle_inventory_run_id'] = inventory_result.run_id
    staged_manifest = _stage_json(target_root / 'MANIFEST.json', manifest_obj)

    # Compose enhanced run report and stage it
    _run_end_ts = datetime.utcnow().isoformat() + 'Z'
    try:
        git_sha = subprocess.run(['git','rev-parse','--short','HEAD'], capture_output=True, text=True).stdout.strip()
    except Exception:
        git_sha = ''
    outputs = {
        'bundle_index': str(index_path.relative_to(target_root)),
        'extraction_index': str((Path(exec_rel) / 'EXTRACTION_INDEX.json')),
        'targets_index': 'targets/INDEX.json'
    }
    output_checksums = {k: _compute_checksum((target_root / v) if v.startswith('exec') or v.startswith('inventory') else Path(v)) for k, v in outputs.items()}
    run_report = {
        'run_id': inventory_result.run_id,
        'target': target_root.name,
        'bundle_index_rel': bundle_index_rel,
        'asset_index_rel': asset_index_rel,
        'decompiled_files': decompiled_count,
        'hash_policy': hash_policy,
        'started_at': _run_start_ts,
        'ended_at': _run_end_ts,
        'tool': 'scripts/ingest_target.py',
        'git_sha': git_sha,
        'warnings_count': len(extraction_index.get('warnings', [])),
        'output_checksums': output_checksums,
        'recovery': recovery_summary,
        'cleanup': cleanup_summary,
    }
    staged_run = _stage_json(target_root / exec_rel / 'inventory_run_report.json', run_report)

    # FAILPOINT for tests: simulate crash after staging but before commit
    if os.environ.get('INGEST_FAIL_POINT') == 'after_staging':
        print('[ingest] FAILPOINT=after_staging - aborting before commit (test)', file=sys.stderr)
        return 99

    # Commit staged files with backup-then-replace pattern (best-effort all-or-nothing)
    staged_map = {
        staged_manifest: target_root / 'MANIFEST.json',
        staged_bundle_index: target_root / rel,
        staged_ex: target_root / exec_rel / 'EXTRACTION_INDEX.json',
        staged_run: target_root / exec_rel / 'inventory_run_report.json',
    }

    backups = []
    try:
        # Commit in explicit order with per-step failpoints
        commit_steps = [
            ('manifest', staged_manifest, target_root / 'MANIFEST.json', 'after_replace_manifest'),
            ('bundle_index', staged_bundle_index, target_root / rel, 'after_replace_bundle_index'),
            ('extraction', staged_ex, target_root / exec_rel / 'EXTRACTION_INDEX.json', 'after_replace_extraction'),
            ('run_report', staged_run, target_root / exec_rel / 'inventory_run_report.json', 'after_replace_extraction'),
        ]
        for name, staged_p, final_p, fp in commit_steps:
            final_p.parent.mkdir(parents=True, exist_ok=True)
            if final_p.exists():
                bak = final_p.with_name(final_p.name + f'.bak.{inventory_result.run_id}')
                os.replace(str(final_p), str(bak))
                backups.append((final_p, bak))
            os.replace(str(staged_p), str(final_p))
            # failpoint after each replace
            if os.environ.get('INGEST_FAIL_POINT') == fp:
                print(f"[ingest] FAILPOINT={fp} - aborting during commit (test)", file=sys.stderr)
                raise RuntimeError(f"FAILPOINT {fp}")

        # commit complete -> remove backups
        for _final, bak in backups:
            try:
                os.unlink(bak)
            except Exception:
                pass
        # cleanup staging dir
        try:
            shutil.rmtree(staging_root)
        except Exception:
            pass
    except Exception as e:
        # rollback: restore any backups we created
        for final_p, bak in backups:
            try:
                if bak.exists():
                    os.replace(str(bak), str(final_p))
            except Exception:
                pass
        print(f"[ingest] ERROR: commit failed, rolled back partial changes: {e}", file=sys.stderr)
        return 6

    # Rebuild global index (uses internal locking)
    target_layout.write_index(Path('targets'))

    # failpoint after updating targets INDEX.json
    if os.environ.get('INGEST_FAIL_POINT') == 'after_replace_targets_index':
        print('[ingest] FAILPOINT=after_replace_targets_index - aborting after INDEX.json update (test)', file=sys.stderr)
        return 99

    # Rebuild global index (uses internal locking)
    target_layout.write_index(Path('targets'))

    # Compose enhanced inventory run report (audit-grade)
    _run_end_ts = datetime.utcnow().isoformat() + 'Z'
    try:
        # git sha (short), best-effort
        git_sha = subprocess.run(['git','rev-parse','--short','HEAD'], capture_output=True, text=True).stdout.strip()
    except Exception:
        git_sha = ''

    outputs = {
        'bundle_index': str(index_path.relative_to(target_root)),
        'extraction_index': str(ex_index_path.relative_to(target_root)),
        'targets_index': 'targets/INDEX.json'
    }
    output_checksums = {}
    for k, p_rel in outputs.items():
        try:
            p = (target_root / p_rel) if p_rel.startswith('exec') or p_rel.startswith('inventory') else Path(p_rel)
            output_checksums[k] = _compute_checksum(p)
        except Exception:
            output_checksums[k] = ''

    run_report = {
        'run_id': inventory_result.run_id,
        'target': target_root.name,
        'bundle_index_rel': bundle_index_rel,
        'asset_index_rel': asset_index_rel,
        'decompiled_files': decompiled_count,
        'hash_policy': hash_policy,
        'started_at': _run_start_ts,
        'ended_at': _run_end_ts,
        'tool': 'scripts/ingest_target.py',
        'git_sha': git_sha,
        'warnings_count': len(extraction_index.get('warnings', [])),
        'output_checksums': output_checksums,
        'recovery': recovery_summary,
        'cleanup': cleanup_summary,
    }
    atomic_write_json(exec_dir / 'inventory_run_report.json', run_report)

    # Validate outputs if requested
    ok = True
    if validate:
        ok &= validate_bundle_index(index_path)
        ok &= validate_manifest(target_root / 'MANIFEST.json')
        ok &= validate_extraction_index(ex_index_path)
        ok &= validate_targets_index(Path('targets') / 'INDEX.json', target_root.name)

    if not ok:
        print('[ingest] Validation failed', file=sys.stderr)
        return 4

    print('[ingest] Completed successfully:', run_report)
    return 0


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--target', required=True, help='targets/<Target> directory or path to .app')
    ap.add_argument('--hash-policy', choices=['strict', 'compat'], default='strict')
    ap.add_argument('--link-manifest', action='store_true', default=True)
    ap.add_argument('--no-validate', action='store_true', dest='no_validate')
    ap.add_argument('--cleanup-stale-days', type=int, default=7,
                    help='Remove staged runs and bak files older than N days (default: 7)')
    ap.add_argument('--dry-run', action='store_true', dest='dry_run', help='Show cleanup actions but do not delete')
    ap.add_argument('--no-dry-run', action='store_false', dest='dry_run')
    args = ap.parse_args()

    rc = run(Path(args.target), args.hash_policy, args.link_manifest, validate=not args.no_validate, cleanup_stale_days=args.cleanup_stale_days, dry_run=bool(args.dry_run))
    sys.exit(rc)


if __name__ == '__main__':
    main()
