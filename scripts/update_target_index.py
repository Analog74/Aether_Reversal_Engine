#!/usr/bin/env python3
# Created: 2026-02-20 UTC
"""
@system TargetIndexUpdater
@brief Target-scoped INDEX.json updater — updates only one target's entries
@phase Phase 1 - Ingestion infrastructure

PURPOSE:
    Replace the slow `target_layout.write_index()` (which rglobs every target's
    decompiled_real/ tree) with a scoped updater that touches only the named
    target's entries in targets/INDEX.json.

    Also supports `--regen-nib-sidecars` to backfill or refresh NIB sidecar
    .info.json files for any target that has a nibs/ directory, using
    factory/core/nib_parser.py so the output always conforms to
    schemas/nib_sidecar.v1.json.

ARCHITECTURE:
    - Reads  : targets/<target>/MANIFEST.json
    - Writes : targets/INDEX.json (atomic write, lock-protected)
    - Optionally re-parses: targets/<target>/nibs/*.nib via nib_parser

USER WORKFLOW:
    # After running extract_mididesigner.py, refresh the index:
    python scripts/update_target_index.py --target MIDIDesigner

    # Additionally backfill NIB sidecars to current schema:
    python scripts/update_target_index.py --target MIDIDesigner --regen-nib-sidecars

    # Explicit targets dir (or set AETHER_TARGETS_DIR):
    python scripts/update_target_index.py --target Reaktor\\ 6 --targets-dir /path/to/targets

INTEGRATION POINTS:
    - Depends on: factory/core/nib_parser.py (imported lazily for --regen-nib-sidecars)
    - Depends on: targets/<target>/MANIFEST.json (schema_version 1 or legacy)
    - Writes to: targets/INDEX.json under .index.lock

FUTURE EXPANSION:
    - Phase 2: --all-targets mode to replace write_index() entirely with
               per-target parallel workers
    - Phase 3: --validate flag that checks every sidecar against its schema
"""
from __future__ import annotations

import argparse
import json
import os
import sys
import tempfile
import time
from pathlib import Path

_REPO = Path(__file__).parents[1]
if str(_REPO) not in sys.path:
    sys.path.insert(0, str(_REPO))


# ── Helpers ────────────────────────────────────────────────────────────────────


def _atomic_write_json(path: Path, data: object) -> None:
    """
    Write data as JSON to path atomically (temp + fsync + rename).

    Args:
        path: Destination file path.  Parent must exist.
        data: JSON-serialisable value.

    Side effects:
        Creates or overwrites path atomically.
    """
    path.parent.mkdir(parents=True, exist_ok=True)
    fd, tmp = tempfile.mkstemp(dir=str(path.parent), suffix=".json.tmp")
    try:
        with os.fdopen(fd, "w", encoding="utf-8") as f:
            json.dump(data, f, indent=2)
            f.write("\n")
            f.flush()
            os.fsync(f.fileno())
        os.replace(tmp, str(path))
    finally:
        if os.path.exists(tmp):
            try:
                os.unlink(tmp)
            except OSError:
                pass


def _atomic_write_text(path: Path, text: str) -> None:
    """
    Write text to path atomically.

    Args:
        path: Destination file path.
        text: UTF-8 text content.

    Side effects:
        Creates or overwrites path atomically.
    """
    path.parent.mkdir(parents=True, exist_ok=True)
    fd, tmp = tempfile.mkstemp(dir=str(path.parent), suffix=".txt.tmp")
    try:
        with os.fdopen(fd, "w", encoding="utf-8") as f:
            f.write(text)
            f.flush()
            os.fsync(f.fileno())
        os.replace(tmp, str(path))
    finally:
        if os.path.exists(tmp):
            try:
                os.unlink(tmp)
            except OSError:
                pass


# ── Index update ───────────────────────────────────────────────────────────────


def _build_entries(target_root: Path, manifest: dict, target_name: str) -> list[dict]:
    """
    Build fresh INDEX.json entries from a MANIFEST.json dict.

    Handles both schema_version=1 (relative paths) and legacy (absolute paths).

    Args:
        target_root: Directory containing the target (e.g. targets/MIDIDesigner).
        manifest:    Parsed MANIFEST.json dict.
        target_name: Value for the 'target' key in each entry (= target_root.name).

    Returns:
        List of entry dicts consumable by INDEX.json.
    """
    schema_version = manifest.get("schema_version", 0)
    entries: list[dict] = []

    for b in manifest.get("binaries", []):
        exec_dir_str = b.get("exec_dir", "")
        exec_dir = (
            target_root / exec_dir_str if schema_version >= 1 else Path(exec_dir_str)
        )

        decompiled = exec_dir / "decompiled_real"
        cpp_count = (
            sum(1 for _ in decompiled.rglob("*.cpp")) if decompiled.exists() else 0
        )

        has_reports = (exec_dir / "reports").exists() or (target_root / "reports").exists()
        has_assets  = (exec_dir / "assets").exists()  or (target_root / "assets").exists()

        entries.append({
            "target":        target_name,
            "binary_name":   b.get("binary_name"),
            "binary_path":   b.get("binary_path"),
            "exec_dir":      exec_dir_str,
            "decompiled_cpp": cpp_count,
            "has_reports":   has_reports,
            "has_assets":    has_assets,
        })

    return entries


def _update_index(index_path: Path, target_name: str, new_entries: list[dict]) -> tuple[int, int]:
    """
    Atomically replace target_name's entries in index_path.

    Args:
        index_path:  Path to targets/INDEX.json.
        target_name: Name of the target whose entries are being replaced.
        new_entries: Fresh entries to insert (from _build_entries).

    Returns:
        (old_count, new_count) for reporting.

    Side effects:
        Acquires .index.lock, rewrites index_path atomically, releases lock.
        Raises TimeoutError if the lock cannot be acquired within 10 seconds.
    """
    lock_path = index_path.parent / ".index.lock"
    deadline = time.time() + 10.0
    while True:
        try:
            fd = os.open(str(lock_path), os.O_CREAT | os.O_EXCL | os.O_WRONLY)
            os.close(fd)
            break
        except FileExistsError:
            if time.time() > deadline:
                raise TimeoutError("could not acquire .index.lock within 10 s")
            time.sleep(0.05)

    try:
        if index_path.exists():
            index = json.loads(index_path.read_text(encoding="utf-8"))
        else:
            index = {"schema_version": 1, "entries": []}

        old_count = sum(1 for e in index["entries"] if e.get("target") == target_name)
        kept = [e for e in index["entries"] if e.get("target") != target_name]

        # Insert at alphabetically correct position to keep the file sorted
        insert_at = next(
            (i for i, e in enumerate(kept) if e.get("target", "") > target_name),
            len(kept),
        )
        for offset, entry in enumerate(new_entries):
            kept.insert(insert_at + offset, entry)

        index["entries"] = kept
        _atomic_write_json(index_path, index)
        return old_count, len(new_entries)
    finally:
        try:
            lock_path.unlink(missing_ok=True)
        except OSError:
            pass


# ── NIB sidecar regeneration ───────────────────────────────────────────────────


def _write_nib_summary(txt_path: Path, nib_name: str, info: dict) -> None:
    """
    Write a human-readable .txt summary alongside a NIB .info.json sidecar.

    Args:
        txt_path: Destination .txt path.
        nib_name: Name of the .nib file (for the header).
        info:     Sidecar dict from parse_nibarchive().

    Side effects:
        Writes txt_path atomically.
    """
    lines = [f"# NIBArchive: {nib_name}", f"# parser_version: {info.get('parser_version', '?')}", ""]
    if "error" in info:
        lines.append(f"Error: {info['error']}")
    else:
        lines += [
            f"Format  : {info.get('format', '?')} v{info.get('version', '?')}",
            f"Objects : {info.get('n_objects', '?')}",
            f"Keys    : {info.get('n_keys', '?')}",
            f"Values  : {info.get('n_values', '?')}",
            "",
            "## UIKit / Framework Classes",
        ]
        for cls in info.get("class_names", []):
            lines.append(f"  - {cls}")
        lines += ["", "## UIKit Property Keys"]
        for k in info.get("key_names", [])[:80]:
            lines.append(f"  - {k}")
        lines += ["", "## Outlet / iVar Names"]
        for o in info.get("outlet_names", [])[:60]:
            lines.append(f"  - {o}")

    _atomic_write_text(txt_path, "\n".join(lines) + "\n")


def regen_nib_sidecars(target_root: Path) -> tuple[int, int]:
    """
    Re-generate .info.json and .txt sidecars for all .nib files in
    targets/<target>/nibs/ using the current nib_parser version.

    Useful after upgrading nib_parser or to backfill targets extracted before
    the schema was frozen.

    Args:
        target_root: Path to the target directory (e.g. targets/MIDIDesigner).

    Returns:
        (processed, failed) counts.

    Side effects:
        Writes <stem>.info.json and <stem>.txt for each .nib in nibs/.
    """
    from factory.core.nib_parser import parse_nibarchive, validate_nib_sidecar

    nibs_dir = target_root / "nibs"
    if not nibs_dir.exists():
        return 0, 0

    processed = 0
    failed = 0
    for nib in sorted(nibs_dir.glob("*.nib")):
        info = parse_nibarchive(nib)
        valid, errs = validate_nib_sidecar(info)
        if not valid:
            print(f"  WARN: {nib.name} sidecar failed schema validation: {errs}", file=sys.stderr)
            failed += 1

        _atomic_write_json(nibs_dir / f"{nib.stem}.info.json", info)
        _write_nib_summary(nibs_dir / f"{nib.stem}.txt", nib.name, info)
        processed += 1

    return processed, failed


# ── CLI ────────────────────────────────────────────────────────────────────────


def main() -> int:
    """
    CLI entry point for update_target_index.

    Returns:
        0 on success, non-zero on error.
    """
    ap = argparse.ArgumentParser(
        description=(
            "Update a single target's entries in targets/INDEX.json.\n"
            "Much faster than write_index() which scans all targets.\n\n"
            "Examples:\n"
            "  python scripts/update_target_index.py --target MIDIDesigner\n"
            "  python scripts/update_target_index.py --target MIDIDesigner --regen-nib-sidecars"
        ),
        formatter_class=argparse.RawDescriptionHelpFormatter,
    )
    ap.add_argument(
        "--target",
        required=True,
        help="Target directory name inside targets/ (e.g. MIDIDesigner).",
    )
    ap.add_argument(
        "--targets-dir",
        default=os.getenv("AETHER_TARGETS_DIR", str(_REPO / "targets")),
        help="Root targets directory. Env: AETHER_TARGETS_DIR (default: targets/).",
    )
    ap.add_argument(
        "--regen-nib-sidecars",
        action="store_true",
        help=(
            "Re-generate <stem>.info.json and <stem>.txt for all .nib files in "
            "targets/<target>/nibs/ using the current nib_parser. "
            "Backfills sidecars missing schema_version/source_sha256."
        ),
    )
    args = ap.parse_args()

    targets_dir  = Path(args.targets_dir)
    target_name  = args.target
    target_root  = targets_dir / target_name
    manifest_path = target_root / "MANIFEST.json"
    index_path   = targets_dir / "INDEX.json"

    if not target_root.exists():
        print(f"ERROR: target directory not found: {target_root}", file=sys.stderr)
        return 2

    if not manifest_path.exists():
        print(f"ERROR: MANIFEST.json not found at {manifest_path}", file=sys.stderr)
        return 2

    # ── Optional NIB sidecar regeneration ─────────────────────────────────────
    if args.regen_nib_sidecars:
        print(f"[nib-sidecars] Regenerating for {target_name}...")
        processed, failed = regen_nib_sidecars(target_root)
        if failed:
            print(
                f"  ⚠  {processed} processed, {failed} failed schema validation "
                f"(check stderr above)",
                file=sys.stderr,
            )
        else:
            print(f"  ✓ {processed} NIB sidecars written (0 failures)")

    # ── Index update ───────────────────────────────────────────────────────────
    print(f"[index] Updating INDEX.json for target: {target_name}")
    manifest = json.loads(manifest_path.read_text(encoding="utf-8"))
    new_entries = _build_entries(target_root, manifest, target_name)

    if not new_entries:
        print(f"  WARN: MANIFEST.json has no binaries — INDEX.json not modified.", file=sys.stderr)
        return 0

    old_count, new_count = _update_index(index_path, target_name, new_entries)
    print(f"  ✓ Replaced {old_count} old → {new_count} new entries in {index_path}")

    # Report decompiled counts so the caller can see the state at a glance
    for e in new_entries:
        cpp = e.get("decompiled_cpp", 0)
        tag = f"{cpp:,} .cpp" if cpp else "no Ghidra run yet"
        print(f"    {e['binary_name']:<40} {tag}")

    return 0


if __name__ == "__main__":
    sys.exit(main())
