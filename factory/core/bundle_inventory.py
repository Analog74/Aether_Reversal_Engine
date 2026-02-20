#!/usr/bin/env python3
"""
Tier A Bundle Inventory — catalogs all files in an app bundle with BLAKE3 hashes.

Produces BUNDLE_INDEX.json with:
- Per-file records: relative_path, size_bytes, hash, hash_algo, kind, is_symlink, etc.
- Summary: totals, extension histogram, top-N largest, container_candidates list
- Full run metadata: schema_version, run_id, started_at, ended_at, args

Does NOT extract or carve containers (that's Tier B).

MODES:
  --mode explore  (default) Skip large file hashing, allow SHA256 fallback. Fast exploration.
  --mode ingest   Production mode: hash ALL files with BLAKE3. Fails if blake3 missing.
                  For Studio pipeline ingest. Guarantees hash_algo="blake3" for all files.

CONTAINER_CANDIDATES NOTE:
  Under --skip-hash-large (or --mode explore), container_candidates[] entries may have
  hash=null if the file exceeded the size threshold. Tier B must NOT assume a hash exists.
  Use --mode ingest (or --hash-all) if you need hashes for container identity/dedupe.

Usage:
    # Exploration (default: fast, may have sha256 or skipped hashes)
    python -m factory.core.bundle_inventory targets/MediaMaster/bundle

    # Production ingest (strict: all files hashed with blake3)
    python -m factory.core.bundle_inventory targets/MediaMaster/bundle --mode ingest

    # Explicit flags (equivalent to --mode ingest)
    python -m factory.core.bundle_inventory targets/MediaMaster/bundle --hash-all --require-blake3
"""

import argparse
import hashlib
import json
import os
import sys
import tempfile
import time
import uuid
from collections import defaultdict
from dataclasses import dataclass, field, asdict
from pathlib import Path
from typing import Optional, Any

# Schema version for BUNDLE_INDEX.json format
SCHEMA_VERSION = 1

# Check for BLAKE3 availability
BLAKE3_AVAILABLE = False
try:
    import blake3
    BLAKE3_AVAILABLE = True
except ImportError:
    pass


def hash_file_blake3(path: Path, max_bytes: Optional[int] = None) -> str:
    """Hash file with BLAKE3."""
    hasher = blake3.blake3()
    bytes_read = 0
    with open(path, "rb") as f:
        while chunk := f.read(1024 * 1024):  # 1MB chunks
            hasher.update(chunk)
            bytes_read += len(chunk)
            if max_bytes and bytes_read >= max_bytes:
                break
    return hasher.hexdigest()


def hash_file_sha256(path: Path, max_bytes: Optional[int] = None) -> str:
    """Hash file with SHA256 (fallback)."""
    hasher = hashlib.sha256()
    bytes_read = 0
    with open(path, "rb") as f:
        while chunk := f.read(1024 * 1024):
            hasher.update(chunk)
            bytes_read += len(chunk)
            if max_bytes and bytes_read >= max_bytes:
                break
    return hasher.hexdigest()


# File kind classification — extension sets
CONTAINER_CANDIDATE_EXTENSIONS = {
    ".dat", ".car", ".pak", ".zip", ".tar", ".gz", ".bz2", ".xz",
    ".rar", ".7z", ".cab", ".dmg", ".iso", ".db", ".sqlite", ".bin"
}
CODE_EXTENSIONS = {".dylib", ".so", ".a", ".o", ".framework"}
FONT_EXTENSIONS = {".ttf", ".otf", ".ttc", ".woff", ".woff2", ".eot"}
ICON_EXTENSIONS = {".icns", ".ico", ".png", ".jpg", ".jpeg", ".gif", ".bmp", ".tiff", ".svg", ".webp"}
HTML_EXTENSIONS = {".html", ".htm", ".css", ".js", ".json", ".xml", ".xrc"}
AUDIO_EXTENSIONS = {".wav", ".mp3", ".aac", ".ogg", ".flac", ".m4a", ".aiff", ".aif"}
VIDEO_EXTENSIONS = {".mp4", ".mov", ".avi", ".mkv", ".webm", ".m4v"}
SHADER_EXTENSIONS = {".glsl", ".hlsl", ".metal", ".frag", ".vert", ".shader"}


def classify_kind(path: Path) -> str:
    """
    Classify file by extension into a kind category.
    
    Note: 'container_candidate' means the extension suggests it MIGHT be a
    container format, but Tier B must confirm structure before extraction.
    """
    ext = path.suffix.lower()
    name = path.name.lower()
    
    # Special names
    if name in {"pkginfo", "coderesources", "info.plist"}:
        return "metadata"
    
    if ext in CONTAINER_CANDIDATE_EXTENSIONS:
        return "container_candidate"
    if ext in CODE_EXTENSIONS:
        return "code"
    if ext in FONT_EXTENSIONS:
        return "font"
    if ext in ICON_EXTENSIONS:
        return "icon"
    if ext in HTML_EXTENSIONS:
        return "html"
    if ext in AUDIO_EXTENSIONS:
        return "audio"
    if ext in VIDEO_EXTENSIONS:
        return "video"
    if ext in SHADER_EXTENSIONS:
        return "shader"
    if ext == ".plist":
        return "metadata"
    if ext == ".strings":
        return "localization"
    if ext in {".nib", ".storyboardc"}:
        return "ui"
    if ext == ".swf":
        return "flash"
    
    return "other"


@dataclass
class FileRecord:
    """Per-file record in BUNDLE_INDEX.json."""
    relative_path: str
    size_bytes: int
    hash: Optional[str]
    hash_algo: Optional[str]
    hash_skipped: bool
    hash_skip_reason: Optional[str]
    kind: str
    is_symlink: bool
    symlink_target: Optional[str] = None
    symlink_external: bool = False
    error: Optional[str] = None


@dataclass
class BundleIndex:
    """Top-level structure for BUNDLE_INDEX.json."""
    schema_version: str
    run_id: str
    bundle_root: str
    bundle_root_realpath: str
    started_at: str
    ended_at: str
    args: dict
    hash_algo_default: str
    files: list = field(default_factory=list)
    summary: dict = field(default_factory=dict)


def atomic_write_json(path: Path, data: dict):
    """Write JSON atomically via temp + rename."""
    path.parent.mkdir(parents=True, exist_ok=True)
    fd, tmp_path = tempfile.mkstemp(suffix=".json", dir=path.parent)
    try:
        with os.fdopen(fd, "w") as f:
            json.dump(data, f, indent=2, sort_keys=False)
        os.replace(tmp_path, path)
    except Exception:
        if os.path.exists(tmp_path):
            os.unlink(tmp_path)
        raise


def atomic_write_text(path: Path, text: str):
    """Write text atomically via temp + rename."""
    path.parent.mkdir(parents=True, exist_ok=True)
    fd, tmp_path = tempfile.mkstemp(suffix=".txt", dir=path.parent)
    try:
        with os.fdopen(fd, "w") as f:
            f.write(text)
        os.replace(tmp_path, path)
    except Exception:
        if os.path.exists(tmp_path):
            os.unlink(tmp_path)
        raise


def infer_inventory_dir(bundle_root: Path) -> Path:
    """
    Infer the inventory output directory from bundle path.
    
    If bundle is at targets/<target>/bundle, output to targets/<target>/inventory.
    Otherwise, output to bundle_root/../inventory.
    """
    parent = bundle_root.parent
    if parent.name and bundle_root.name in {"bundle", "Contents"}:
        # targets/<target>/bundle → targets/<target>/inventory
        return parent / "inventory"
    else:
        # fallback: sibling directory
        return bundle_root.parent / f"{bundle_root.name}_inventory"


def inventory_bundle(
    bundle_root: Path,
    output_dir: Optional[Path] = None,
    max_hash_bytes: Optional[int] = None,
    skip_hash_large: bool = False,
    hash_all: bool = False,
    large_threshold: int = 100 * 1024 * 1024,  # 100MB
    require_blake3: bool = True,
    allow_sha256: bool = False,
    heartbeat_interval: float = 2.0,
    cli_args: Optional[dict] = None,
    ingest_mode: bool = False,
) -> BundleIndex:
    """
    Inventory all files in a bundle, producing BUNDLE_INDEX.json.
    
    Args:
        bundle_root: Path to bundle (e.g., targets/X/bundle or X.app)
        output_dir: Where to write BUNDLE_INDEX.json (default: inferred inventory dir)
        max_hash_bytes: Only hash first N bytes of each file (None = full)
        skip_hash_large: Skip hashing files > large_threshold (default False)
        hash_all: Force hashing all files regardless of size (overrides skip_hash_large)
        large_threshold: Size above which to skip hashing if skip_hash_large
        require_blake3: Require BLAKE3 (fail if not available)
        allow_sha256: Allow SHA256 fallback (overrides require_blake3)
        heartbeat_interval: Seconds between stderr progress updates
        cli_args: Original CLI arguments for reproducibility
    """
    run_id = str(uuid.uuid4())[:8]
    started_at = time.strftime("%Y-%m-%dT%H:%M:%SZ", time.gmtime())
    start_time = time.time()
    
    # Validate hash algorithm
    if require_blake3 and not BLAKE3_AVAILABLE and not allow_sha256:
        print(
            "ERROR: BLAKE3 not available. Install with: pip install blake3\n"
            "       Or use --allow-sha256 to fall back to SHA256.",
            file=sys.stderr
        )
        sys.exit(1)
    
    if BLAKE3_AVAILABLE:
        hash_algo = "blake3"
        hash_func = hash_file_blake3
    else:
        hash_algo = "sha256"
        hash_func = hash_file_sha256
    
    # If hash_all is set, disable skip_hash_large
    if hash_all:
        skip_hash_large = False
    
    bundle_root = bundle_root.resolve()
    bundle_root_realpath = str(bundle_root)
    
    # Infer output directory if not specified
    if output_dir is None:
        output_dir = infer_inventory_dir(bundle_root)
    output_dir = output_dir.resolve()
    output_dir.mkdir(parents=True, exist_ok=True)
    
    status_json_path = output_dir / "bundle_status.json"
    status_txt_path = output_dir / "bundle_status.txt"
    index_path = output_dir / "BUNDLE_INDEX.json"
    
    # Collect all files first (for progress tracking)
    print(f"[bundle] run_id={run_id} scanning {bundle_root}", file=sys.stderr)
    all_files: list[Path] = []
    scan_errors: list[tuple[str, str]] = []
    
    for root, dirs, files in os.walk(bundle_root, followlinks=False):
        for name in files:
            all_files.append(Path(root) / name)
    
    # Sort for deterministic output
    all_files.sort(key=lambda p: str(p.relative_to(bundle_root)))
    
    total_files = len(all_files)
    total_bytes = 0
    for f in all_files:
        try:
            if not f.is_symlink():
                total_bytes += f.stat().st_size
        except Exception:
            pass
    
    print(f"[bundle] run_id={run_id} found {total_files} files, {total_bytes / 1024 / 1024:.1f} MB", file=sys.stderr)
    
    # Process files
    records: list[FileRecord] = []
    files_done = 0
    bytes_done = 0
    last_heartbeat = time.time()
    
    extension_counts: dict[str, int] = defaultdict(int)
    kind_counts: dict[str, int] = defaultdict(int)
    kind_bytes: dict[str, int] = defaultdict(int)
    container_candidates: list[dict] = []
    
    for file_path in all_files:
        relative_path = str(file_path.relative_to(bundle_root))
        is_symlink = file_path.is_symlink()
        symlink_target: Optional[str] = None
        symlink_external = False
        file_error: Optional[str] = None
        file_hash: Optional[str] = None
        file_hash_algo: Optional[str] = None
        hash_skipped = False
        hash_skip_reason: Optional[str] = None
        size_bytes = 0
        
        if is_symlink:
            # Handle symlink
            try:
                raw_target = os.readlink(file_path)
                symlink_target = raw_target
                # Check if symlink points outside bundle (safety)
                try:
                    resolved = file_path.resolve()
                    if not str(resolved).startswith(str(bundle_root)):
                        symlink_external = True
                except Exception:
                    symlink_external = True  # Can't resolve = treat as external
            except PermissionError:
                file_error = "permission_denied_symlink"
                symlink_target = None
            except Exception as e:
                file_error = f"symlink_error:{type(e).__name__}"
                symlink_target = None
            
            # Symlinks don't get hashed
            hash_skipped = True
            hash_skip_reason = "symlink"
        else:
            # Regular file
            try:
                size_bytes = file_path.stat().st_size
            except PermissionError:
                file_error = "permission_denied_stat"
                size_bytes = 0
            except Exception as e:
                file_error = f"stat_error:{type(e).__name__}"
                size_bytes = 0
            
            # Hash logic
            if file_error:
                hash_skipped = True
                hash_skip_reason = "file_error"
            elif size_bytes == 0:
                # Empty file — hash is well-defined but pointless
                hash_skipped = True
                hash_skip_reason = "empty_file"
            elif skip_hash_large and size_bytes > large_threshold:
                hash_skipped = True
                hash_skip_reason = f"size_exceeds_threshold:{large_threshold}"
            else:
                # Actually hash the file
                try:
                    effective_max = max_hash_bytes
                    file_hash = hash_func(file_path, effective_max)
                    file_hash_algo = hash_algo
                    if max_hash_bytes and size_bytes > max_hash_bytes:
                        hash_skip_reason = f"partial_hash:first_{max_hash_bytes}_bytes"
                except PermissionError:
                    file_error = "permission_denied_read"
                    hash_skipped = True
                    hash_skip_reason = "file_error"
                except Exception as e:
                    file_error = f"hash_error:{type(e).__name__}:{e}"
                    hash_skipped = True
                    hash_skip_reason = "file_error"
        
        kind = classify_kind(file_path)
        ext = file_path.suffix.lower() or "(none)"
        
        extension_counts[ext] += 1
        kind_counts[kind] += 1
        kind_bytes[kind] += size_bytes
        
        if kind == "container_candidate":
            container_candidates.append({
                "relative_path": relative_path,
                "size_bytes": size_bytes,
                "extension": ext,
                "hash": file_hash,
                "hash_algo": file_hash_algo,
            })
        
        records.append(FileRecord(
            relative_path=relative_path,
            size_bytes=size_bytes,
            hash=file_hash,
            hash_algo=file_hash_algo,
            hash_skipped=hash_skipped,
            hash_skip_reason=hash_skip_reason,
            kind=kind,
            is_symlink=is_symlink,
            symlink_target=symlink_target,
            symlink_external=symlink_external,
            error=file_error,
        ))
        
        files_done += 1
        bytes_done += size_bytes
        
        # Heartbeat
        now = time.time()
        if now - last_heartbeat >= heartbeat_interval:
            elapsed = now - start_time
            pct_files = 100.0 * files_done / total_files if total_files else 0
            pct_bytes = 100.0 * bytes_done / total_bytes if total_bytes else 0
            print(
                f"[bundle] run_id={run_id} | {elapsed:.0f}s | "
                f"files: {files_done}/{total_files} ({pct_files:.1f}%) | "
                f"bytes: {bytes_done / 1024 / 1024:.1f}/{total_bytes / 1024 / 1024:.1f} MB ({pct_bytes:.1f}%) | "
                f"{relative_path[:60]}",
                file=sys.stderr,
            )
            
            # Atomic status update
            status = {
                "run_id": run_id,
                "stage": "hashing",
                "files_done": files_done,
                "files_total": total_files,
                "bytes_done": bytes_done,
                "bytes_total": total_bytes,
                "elapsed_seconds": elapsed,
                "current_file": relative_path,
            }
            atomic_write_json(status_json_path, status)
            atomic_write_text(status_txt_path, f"RUNNING run_id={run_id} {files_done}/{total_files} files")
            last_heartbeat = now
    
    ended_at = time.strftime("%Y-%m-%dT%H:%M:%SZ", time.gmtime())
    
    # Build summary with sorted keys for determinism
    top_largest = sorted(records, key=lambda r: r.size_bytes, reverse=True)[:20]
    
    # Count files with errors
    error_count = sum(1 for r in records if r.error is not None)
    hash_skipped_count = sum(1 for r in records if r.hash_skipped)
    symlink_count = sum(1 for r in records if r.is_symlink)
    external_symlink_count = sum(1 for r in records if r.symlink_external)
    
    # Count files by hash algorithm (for safety audits)
    hash_algo_counts: dict[str, int] = {}
    for r in records:
        if r.hash_algo:
            hash_algo_counts[r.hash_algo] = hash_algo_counts.get(r.hash_algo, 0) + 1
        elif r.hash_skipped:
            hash_algo_counts["skipped"] = hash_algo_counts.get("skipped", 0) + 1
    
    summary = {
        "total_files": total_files,
        "total_bytes": total_bytes,
        "files_hashed": total_files - hash_skipped_count,
        "files_hash_skipped": hash_skipped_count,
        "files_with_errors": error_count,
        "hash_algo_counts": dict(sorted(hash_algo_counts.items())),
        "symlinks": symlink_count,
        "symlinks_external": external_symlink_count,
        "extension_histogram": dict(sorted(extension_counts.items())),
        "kind_counts": dict(sorted(kind_counts.items())),
        "kind_bytes": dict(sorted(kind_bytes.items())),
        "top_largest": [
            {"relative_path": r.relative_path, "size_bytes": r.size_bytes, "kind": r.kind}
            for r in top_largest
        ],
        # NOTE: Under --skip-hash-large or --mode explore, container_candidates may have hash=null
        # for entries exceeding the size threshold. Tier B must handle missing hashes.
        # Use --mode ingest to guarantee all container_candidates have blake3 hashes.
        "container_candidates": sorted(container_candidates, key=lambda x: -x["size_bytes"]),
    }
    
    # Build final index
    index = BundleIndex(
        schema_version=SCHEMA_VERSION,
        run_id=run_id,
        bundle_root=str(bundle_root),
        bundle_root_realpath=bundle_root_realpath,
        started_at=started_at,
        ended_at=ended_at,
        args=cli_args or {},
        hash_algo_default=hash_algo,
        files=[asdict(r) for r in records],
        summary=summary,
    )
    
    # Write final output
    elapsed = time.time() - start_time
    atomic_write_json(index_path, asdict(index))
    atomic_write_text(status_txt_path, f"COMPLETED run_id={run_id} {total_files} files in {elapsed:.1f}s")
    
    print(
        f"[bundle] run_id={run_id} COMPLETE | {elapsed:.1f}s | "
        f"{total_files} files | {total_bytes / 1024 / 1024:.1f} MB | "
        f"{len(container_candidates)} container_candidates | "
        f"{hash_skipped_count} hash_skipped | "
        f"{error_count} errors",
        file=sys.stderr,
    )
    print(f"[bundle] wrote {index_path}", file=sys.stderr)
    
    # Ingest mode validation: enforce strict invariants
    if ingest_mode:
        violations = []
        
        # Check 1: All hashed files must use blake3
        non_blake3 = [r for r in records if r.hash_algo and r.hash_algo != "blake3"]
        if non_blake3:
            violations.append(f"{len(non_blake3)} files hashed with non-blake3 algorithm")
        
        # Check 2: No hash_skipped except for symlinks whose targets are within the bundle
        # (symlinks with hash_skipped=true are OK only if symlink_external=false)
        skipped_non_symlink = [
            r for r in records 
            if r.hash_skipped and not r.is_symlink
        ]
        if skipped_non_symlink:
            violations.append(f"{len(skipped_non_symlink)} non-symlink files with hash_skipped=true")
        
        # Check 3: External symlinks break self-containment
        external_symlinks = [r for r in records if r.symlink_external]
        if external_symlinks:
            violations.append(
                f"{len(external_symlinks)} external symlinks (not self-contained): "
                + ", ".join(r.relative_path for r in external_symlinks[:5])
                + ("..." if len(external_symlinks) > 5 else "")
            )
        
        # Check 4: No file errors
        if error_count > 0:
            violations.append(f"{error_count} files with errors")
        
        if violations:
            print(f"[bundle] INGEST VALIDATION FAILED:", file=sys.stderr)
            for v in violations:
                print(f"  - {v}", file=sys.stderr)
            print(f"[bundle] Inventory written to {index_path} but ingest invariants violated.", file=sys.stderr)
            sys.exit(2)  # Distinct exit code: 1=config error, 2=validation failure
        else:
            print(f"[bundle] INGEST VALIDATION PASSED: all files blake3-hashed, self-contained, no errors", file=sys.stderr)
    
    # Suggest manifest linkage
    print(
        f"[bundle] TIP: Add to MANIFEST.json: \"bundle_index_rel\": \"{index_path.relative_to(bundle_root.parent)}\"",
        file=sys.stderr,
    )
    print(
        f"[bundle] TIP: Also add: \"bundle_inventory_run_id\": \"{run_id}\"",
        file=sys.stderr,
    )
    
    return index


def main():
    parser = argparse.ArgumentParser(
        description="Tier A Bundle Inventory — catalog all files with BLAKE3 hashes",
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog="""
Modes:
  --mode explore  Fast exploration (default). May skip large files, allows SHA256 fallback.
  --mode ingest   Production mode. Hash ALL files with BLAKE3. Fails if blake3 unavailable.
                  Use this for Studio pipeline ingest to guarantee consistent hash identity.

Examples:
  # Exploration (fast, may skip large files or fall back to sha256)
  python -m factory.core.bundle_inventory targets/MediaMaster/bundle
  python -m factory.core.bundle_inventory targets/MediaMaster/bundle --skip-hash-large

  # Production ingest (strict: all files hashed with blake3)
  python -m factory.core.bundle_inventory targets/MediaMaster/bundle --mode ingest

  # Custom output directory
  python -m factory.core.bundle_inventory /path/to/App.app --output-dir ./my_inventory

Output:
  BUNDLE_INDEX.json  — full inventory with per-file hashes and metadata
  bundle_status.json — live progress during run
  bundle_status.txt  — human-readable status line

NOTE: Under exploration mode, container_candidates[] may have hash=null for large files.
      Use --mode ingest if you need hashes for container identity/dedupe in Tier B.
"""
    )
    parser.add_argument("bundle_root", type=Path, help="Path to bundle root (.app or extracted bundle)")
    parser.add_argument("--mode", choices=["explore", "ingest"], default="explore",
                        help="Mode: 'explore' (fast, may skip large) or 'ingest' (strict, all blake3)")
    parser.add_argument("--output-dir", type=Path, default=None,
                        help="Output directory (default: inferred from bundle path)")
    parser.add_argument("--max-hash-bytes", type=int, default=None,
                        help="Only hash first N bytes per file (partial hash)")
    parser.add_argument("--skip-hash-large", action="store_true",
                        help="Skip hashing files > threshold (exploration mode default)")
    parser.add_argument("--hash-all", action="store_true",
                        help="Force hashing ALL files (overrides --skip-hash-large)")
    parser.add_argument("--large-threshold", type=int, default=100*1024*1024,
                        help="Size threshold for --skip-hash-large (default: 100MB)")
    parser.add_argument("--require-blake3", action="store_true", default=False,
                        help="Require BLAKE3 (fail if unavailable, implied by --mode ingest)")
    parser.add_argument("--allow-sha256", action="store_true",
                        help="Allow SHA256 fallback if BLAKE3 unavailable")
    parser.add_argument("--link-manifest", action="store_true",
                        help="Auto-patch MANIFEST.json in target dir with bundle_index_rel + run_id")
    
    args = parser.parse_args()
    
    # Apply mode presets and validate flag conflicts
    if args.mode == "ingest":
        # Production mode: strict BLAKE3, hash everything
        # Flag conflicts: ingest mode is incompatible with relaxed flags
        conflicts = []
        if args.skip_hash_large:
            conflicts.append("--skip-hash-large")
        if args.allow_sha256:
            conflicts.append("--allow-sha256")
        if conflicts:
            print(
                f"ERROR: --mode ingest conflicts with {', '.join(conflicts)}.\n"
                "       Ingest mode requires strict BLAKE3 hashing of all files.\n"
                "       Remove conflicting flags or use --mode explore.",
                file=sys.stderr
            )
            sys.exit(1)
        
        if not BLAKE3_AVAILABLE:
            print(
                "ERROR: --mode ingest requires BLAKE3 but it's not available.\n"
                "       Install with: pip install blake3\n"
                "       Or use --mode explore with --allow-sha256 for exploration.",
                file=sys.stderr
            )
            sys.exit(1)
        args.hash_all = True
        args.require_blake3 = True
        args.allow_sha256 = False
        args.skip_hash_large = False
        print("[bundle] MODE=ingest: hash_all=true, require_blake3=true, allow_sha256=false", file=sys.stderr)
    
    if not args.bundle_root.exists():
        print(f"ERROR: bundle root does not exist: {args.bundle_root}", file=sys.stderr)
        sys.exit(1)
    
    # Capture CLI args for reproducibility (post-preset values)
    cli_args = {
        "mode": args.mode,
        "bundle_root": str(args.bundle_root),
        "output_dir": str(args.output_dir) if args.output_dir else None,
        "max_hash_bytes": args.max_hash_bytes,
        "skip_hash_large": args.skip_hash_large,
        "hash_all": args.hash_all,
        "large_threshold": args.large_threshold,
        "require_blake3": args.require_blake3,
        "allow_sha256": args.allow_sha256,
    }
    
    result = inventory_bundle(
        bundle_root=args.bundle_root,
        output_dir=args.output_dir,
        max_hash_bytes=args.max_hash_bytes,
        skip_hash_large=args.skip_hash_large,
        hash_all=args.hash_all,
        large_threshold=args.large_threshold,
        require_blake3=args.require_blake3,
        allow_sha256=args.allow_sha256,
        cli_args=cli_args,
        ingest_mode=(args.mode == "ingest"),
    )
    
    # Auto-link: patch MANIFEST.json if --link-manifest and target dir has one.
    # Only runs after inventory_bundle() returns (i.e. ingest validation passed
    # or mode was explore) — a failed ingest calls sys.exit(2) inside
    # inventory_bundle(), so we never reach here with a rejected inventory.
    if args.link_manifest:
        from factory.core.target_layout import link_bundle_inventory
        
        # Infer target root: parent of bundle dir (targets/<target>/bundle → targets/<target>)
        target_root = args.bundle_root.resolve().parent
        manifest_path = target_root / "MANIFEST.json"
        
        if not manifest_path.exists():
            print(
                f"[bundle] --link-manifest: no MANIFEST.json found at {manifest_path}",
                file=sys.stderr,
            )
            sys.exit(3)  # 3 = link failed (distinct from 1=config, 2=validation)
        
        # Compute relpath from target_root to BUNDLE_INDEX.json
        output_dir = args.output_dir or infer_inventory_dir(args.bundle_root.resolve())
        index_path = output_dir / "BUNDLE_INDEX.json"
        try:
            rel = str(index_path.resolve().relative_to(target_root.resolve()))
        except ValueError:
            print(
                f"[bundle] --link-manifest: BUNDLE_INDEX.json not under target root\n"
                f"  manifest:       {manifest_path}\n"
                f"  index (raw):    {index_path}\n"
                f"  index (resolved): {index_path.resolve()}\n"
                f"  root  (resolved): {target_root.resolve()}",
                file=sys.stderr,
            )
            sys.exit(3)
        
        ok = link_bundle_inventory(
            target_root=target_root,
            bundle_index_rel=rel,
            bundle_inventory_run_id=result.run_id,
        )
        if not ok:
            print(
                f"[bundle] --link-manifest: link_bundle_inventory() failed\n"
                f"  manifest: {manifest_path}\n"
                f"  index:    {index_path.resolve()}\n"
                f"  rel:      {rel}\n"
                f"  run_id:   {result.run_id}",
                file=sys.stderr,
            )
            sys.exit(3)  # 3 = link failed


def _check_invocation() -> None:
    """Guard against direct file execution which breaks package imports.

    Running `python3 factory/core/bundle_inventory.py …` puts factory/core on
    sys.path, so `import factory.core.target_layout` may resolve to a stale
    editable install instead of the workspace copy.  The correct invocation is:

        python3 -m factory.core.bundle_inventory …

    This guard imports target_layout and verifies its __file__ lives under the
    same repo root as this script.  If not, it prints both paths and exits.
    """
    from pathlib import Path

    repo_root = Path(__file__).resolve().parents[2]

    try:
        import factory.core.target_layout as tl
    except ImportError:
        print(
            "ERROR: cannot import factory.core.target_layout.\n"
            "  Run as module:  python3 -m factory.core.bundle_inventory …\n"
            "  Direct file execution puts factory/core on sys.path, breaking\n"
            "  package imports.",
            file=sys.stderr,
        )
        sys.exit(1)

    tl_path = Path(tl.__file__).resolve()
    if not str(tl_path).startswith(str(repo_root)):
        print(
            f"ERROR: factory.core.target_layout resolved outside repo root.\n"
            f"  expected under: {repo_root}\n"
            f"  resolved to:    {tl_path}\n"
            f"  Run as module:  python3 -m factory.core.bundle_inventory …",
            file=sys.stderr,
        )
        sys.exit(1)


if __name__ == "__main__":
    _check_invocation()
    main()
