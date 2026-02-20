import json
import shutil
import os
import subprocess
import sys
import time
from pathlib import Path

REPO_ROOT = Path('.').resolve()
VENV_PY = sys.executable
INGEST = REPO_ROOT / 'scripts' / 'ingest_target.py'


def run_ingest_once(target_path: Path):
    env = dict(**os.environ)
    env['PYTHONPATH'] = str(REPO_ROOT)
    p = subprocess.run([VENV_PY, str(INGEST), '--target', str(target_path), '--hash-policy', 'strict', '--link-manifest'],
                       capture_output=True, text=True, env=env)
    return p.returncode, p.stdout, p.stderr


def _canonicalize_bundle(b):
    b = dict(b)
    for k in ('run_id', 'started_at', 'ended_at'):
        b.pop(k, None)
    # sort files by relative_path for deterministic comparison
    files = sorted(b.get('files', []), key=lambda r: r.get('relative_path', ''))
    b['files'] = [{k: v for k, v in sorted(rec.items()) if k != 'error'} for rec in files]
    # remove volatile summary fields if present
    summary = dict(b.get('summary', {}))
    for vf in ('started_at', 'ended_at'):
        summary.pop(vf, None)
    b['summary'] = summary
    return b


def _canonicalize_extraction(e):
    e = dict(e)
    e.pop('extracted_at', None)
    return e


def _canonicalize_run_report(r):
    r = dict(r)
    for k in ('run_id', 'started_at', 'ended_at', 'git_sha', 'output_checksums', 'timestamp'):
        r.pop(k, None)
    return r


def test_idempotent_ingest_runs_and_outputs_are_canonical_equal(tmp_path: Path):
    # copy target into isolated temp targets/REAPER
    src = REPO_ROOT / 'targets' / 'REAPER'
    tmp_targets = tmp_path / 'targets'
    tmp_targets.mkdir()
    shutil.copytree(src, tmp_targets / 'REAPER')
    local_target = tmp_targets / 'REAPER'

    rc1, out1, err1 = run_ingest_once(local_target)
    assert rc1 == 0, f"first ingest failed: {err1}\n{out1}"
    time.sleep(0.5)
    rc2, out2, err2 = run_ingest_once(local_target)
    assert rc2 == 0, f"second ingest failed: {err2}\n{out2}"

    b1 = json.loads((local_target / 'inventory' / 'BUNDLE_INDEX.json').read_text())
    b2 = json.loads((local_target / 'inventory' / 'BUNDLE_INDEX.json').read_text())
    assert _canonicalize_bundle(b1) == _canonicalize_bundle(b2)

    e1 = json.loads((local_target / 'exec' / 'REAPER' / 'EXTRACTION_INDEX.json').read_text())
    e2 = json.loads((local_target / 'exec' / 'REAPER' / 'EXTRACTION_INDEX.json').read_text())
    assert _canonicalize_extraction(e1) == _canonicalize_extraction(e2)

    r1 = json.loads((local_target / 'exec' / 'REAPER' / 'inventory_run_report.json').read_text())
    r2 = json.loads((local_target / 'exec' / 'REAPER' / 'inventory_run_report.json').read_text())
    assert _canonicalize_run_report(r1) == _canonicalize_run_report(r2)


def test_concurrent_ingest_does_not_corrupt_index(tmp_path: Path):
    # copy target into isolated tmp targets, run two concurrent ingests against it
    src = REPO_ROOT / 'targets' / 'REAPER'
    tmp_targets = tmp_path / 'targets'
    tmp_targets.mkdir()
    shutil.copytree(src, tmp_targets / 'REAPER')
    local_target = tmp_targets / 'REAPER'

    env = dict(**os.environ)
    env['PYTHONPATH'] = str(REPO_ROOT)
    p1 = subprocess.Popen([VENV_PY, str(INGEST), '--target', str(local_target), '--hash-policy', 'strict', '--link-manifest'],
                          stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True, env=env)
    p2 = subprocess.Popen([VENV_PY, str(INGEST), '--target', str(local_target), '--hash-policy', 'strict', '--link-manifest'],
                          stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True, env=env)
    out1, err1 = p1.communicate()
    out2, err2 = p2.communicate()
    assert p1.returncode == 0 and p2.returncode == 0, f"concurrent ingests failed: {p1.returncode}, {p2.returncode}\n{err1}\n{err2}"

    # Ensure INDEX.json produced under tmp_targets is valid JSON and contains REAPER entry
    from factory.core import target_layout
    target_layout.write_index(tmp_targets)
    idx = json.loads((tmp_targets / 'INDEX.json').read_text())
    assert isinstance(idx.get('entries'), list)
    assert any(e.get('target') == 'REAPER' for e in idx.get('entries', []))


def test_transactional_staging_no_partial_writes(tmp_path: Path):
    # copy REAPER target into tmp and simulate a crash after staging
    src = REPO_ROOT / 'targets' / 'REAPER'
    tmp_targets = tmp_path / 'targets'
    tmp_targets.mkdir()
    shutil.copytree(src, tmp_targets / 'REAPER')
    local_target = tmp_targets / 'REAPER'

    # snapshot originals
    orig_manifest = (local_target / 'MANIFEST.json').read_text()
    orig_ex = (local_target / 'exec' / 'REAPER' / 'EXTRACTION_INDEX.json').read_text()
    (tmp_targets / 'INDEX.json').write_text(json.dumps({"schema_version":1, "entries": []}))

    env = dict(**os.environ)
    env['PYTHONPATH'] = str(REPO_ROOT)
    env['INGEST_FAIL_POINT'] = 'after_staging'
    p = subprocess.run([VENV_PY, str(INGEST), '--target', str(local_target), '--hash-policy', 'strict', '--link-manifest'],
                       capture_output=True, text=True, env=env)
    # ingest should abort (failpoint)
    assert p.returncode != 0

    # ensure no partial writes occurred to MANIFEST.json or EXTRACTION_INDEX.json
    assert (local_target / 'MANIFEST.json').read_text() == orig_manifest
    assert (local_target / 'exec' / 'REAPER' / 'EXTRACTION_INDEX.json').read_text() == orig_ex

    # staging dir should exist (files staged but not committed)
    staging_root = local_target / '.ingest_staging'
    assert staging_root.exists()
    assert any(staging_root.iterdir())


import pytest


@pytest.mark.parametrize('failpoint', [
    'after_replace_manifest',
    'after_replace_bundle_index',
    'after_replace_extraction',
    'after_replace_targets_index',
])
def test_recovery_from_mid_commit_failpoints(tmp_path: Path, failpoint: str):
    # copy REAPER target into tmp and simulate crash at each failpoint, then recover
    src = REPO_ROOT / 'targets' / 'REAPER'
    tmp_targets = tmp_path / 'targets'
    tmp_targets.mkdir()
    shutil.copytree(src, tmp_targets / 'REAPER')
    local_target = tmp_targets / 'REAPER'

    env = dict(**os.environ)
    env['PYTHONPATH'] = str(REPO_ROOT)
    env['INGEST_FAIL_POINT'] = failpoint

    p = subprocess.run([VENV_PY, str(INGEST), '--target', str(local_target), '--hash-policy', 'strict', '--link-manifest'],
                       capture_output=True, text=True, env=env)
    # crashing run should return non-zero
    assert p.returncode != 0, f"expected failure at failpoint {failpoint}: stdout={p.stdout} stderr={p.stderr}"

    # staged files or backups should exist
    staging = local_target / '.ingest_staging'
    has_staging = staging.exists() and any(staging.rglob('*'))
    has_bak = any(local_target.rglob('*.bak.*'))
    assert has_staging or has_bak

    # Now run a normal ingest to trigger recovery path
    env.pop('INGEST_FAIL_POINT', None)
    rc, out, err = run_ingest_once(local_target)
    assert rc == 0, f"recovery ingest failed for {failpoint}: {err}\n{out}"

    # After successful ingest: staging cleaned and no .bak.* files remaining
    assert not (local_target / '.ingest_staging').exists()
    assert not any(local_target.rglob('*.bak.*'))

    # Validate resulting JSONs against schemas
    from factory.core import target_layout
    # validate manifest
    m = json.loads((local_target / 'MANIFEST.json').read_text())
    import jsonschema
    SCHEMAS = Path('schemas')
    schema_manifest = json.loads((SCHEMAS / 'manifest.v1.json').read_text())
    schema_extraction = json.loads((SCHEMAS / 'extraction_index.v1.json').read_text())
    schema_bundle = json.loads((SCHEMAS / 'bundle_index.v1.json').read_text())
    schema_targets = json.loads((SCHEMAS / 'targets_index.v1.json').read_text())

    jsonschema.validate(instance=m, schema=schema_manifest)
    # validate extraction index
    ex = json.loads((local_target / 'exec' / 'REAPER' / 'EXTRACTION_INDEX.json').read_text())
    jsonschema.validate(instance=ex, schema=schema_extraction)
    # validate bundle index
    b = json.loads((local_target / 'inventory' / 'BUNDLE_INDEX.json').read_text())
    jsonschema.validate(instance=b, schema=schema_bundle)
    # validate targets/INDEX.json
    target_layout.write_index(tmp_targets)
    idx = json.loads((tmp_targets / 'INDEX.json').read_text())
    jsonschema.validate(instance=idx, schema=schema_targets)
