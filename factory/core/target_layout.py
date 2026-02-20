# Created: 2025-12-14 04:57 UTC • Last Modified: 2025-12-14 05:46 UTC
from __future__ import annotations

import hashlib
import json
import re
import os
import tempfile
import time
from pathlib import Path
from typing import Any, Optional


def targets_root() -> Path:
    return Path("targets")


def normalize_target_name(input_path: Path) -> str:
    name = input_path.name
    if name.endswith(".app"):
        name = name[:-4]
    return name


def safe_exec_dir_name(name: str) -> str:
    # Preserve readable names (spaces/dots) but remove path separators.
    return name.replace("/", "_").replace("\\", "_")


def unique_exec_name(desired: str, used: set[str], disambiguator: str) -> str:
    desired = safe_exec_dir_name(desired)
    if desired not in used:
        used.add(desired)
        return desired
    h = hashlib.sha256(disambiguator.encode("utf-8", errors="ignore")).hexdigest()[:8]
    candidate = f"{desired}__{h}"
    used.add(candidate)
    return candidate


def write_manifest(
    target_root: Path,
    input_path: Path,
    binaries: list[dict[str, Any]],
    bundle_index_rel: Optional[str] = None,
    bundle_inventory_run_id: Optional[str] = None,
) -> None:
    """Write MANIFEST.json with schema_version and relative paths.
    
    Schema v1:
    - All paths (binary_path, exec_dir) are relative to manifest location
    - input remains absolute (external reference to original source)
    - Enables portable manifest across machines
    
    Bundle linkage (optional):
    - bundle_index_rel: relative path from MANIFEST.json to BUNDLE_INDEX.json
    - bundle_inventory_run_id: run_id from bundle inventory for cross-reference
    
    Example:
        write_manifest(
            target_root=Path("targets/MediaMaster"),
            input_path=Path("/Applications/MediaMaster.app"),
            binaries=[...],
            bundle_index_rel="inventory/BUNDLE_INDEX.json",
            bundle_inventory_run_id="19b1b338",
        )
    """
    # Convert absolute paths to relative (relative to target_root where MANIFEST.json lives)
    relative_binaries = []
    for b in binaries:
        rel_binary = dict(b)
        if "binary_path" in rel_binary:
            try:
                rel_binary["binary_path"] = Path(rel_binary["binary_path"]).relative_to(target_root.resolve()).as_posix()
            except ValueError:
                # Keep absolute, but normalize to POSIX form
                rel_binary["binary_path"] = Path(rel_binary["binary_path"]).as_posix()
        if "exec_dir" in rel_binary:
            try:
                rel_binary["exec_dir"] = Path(rel_binary["exec_dir"]).relative_to(target_root.resolve()).as_posix()
            except ValueError:
                rel_binary["exec_dir"] = Path(rel_binary["exec_dir"]).as_posix()
        relative_binaries.append(rel_binary)
    
    manifest = {
        "schema_version": 1,
        "binaries": relative_binaries,
        # Keep input absolute for provenance, but store POSIX path
        "input": str(input_path.resolve().as_posix()),
    }
    
    # Add bundle inventory linkage if provided
    # Contract: bundle_index_rel is relative to MANIFEST.json directory (target_root)
    if bundle_index_rel:
        manifest["bundle_index_rel"] = Path(bundle_index_rel).as_posix()
    if bundle_inventory_run_id:
        manifest["bundle_inventory_run_id"] = bundle_inventory_run_id
    
    # Atomic write (temp + fsync + rename)
    manifest_path = target_root / "MANIFEST.json"
    manifest_path.parent.mkdir(parents=True, exist_ok=True)
    fd, tmp = tempfile.mkstemp(dir=str(manifest_path.parent), suffix='.json.tmp')
    try:
        with os.fdopen(fd, 'w') as f:
            json.dump(manifest, f, indent=2)
            f.write("\n")
            f.flush()
            os.fsync(f.fileno())
        os.replace(tmp, str(manifest_path))
    finally:
        try:
            if os.path.exists(tmp):
                os.unlink(tmp)
        except Exception:
            pass


def link_bundle_inventory(
    target_root: Path,
    bundle_index_rel: str,
    bundle_inventory_run_id: str,
) -> bool:
    """Patch an existing MANIFEST.json to add bundle inventory linkage.
    
    This is the recommended way to link a bundle inventory to a manifest
    after running bundle_inventory.py on a target's bundle directory.
    
    Contract:
    - bundle_index_rel is relative to the MANIFEST.json directory (target_root)
    - The path must not escape the target directory (no '..' components)
    - The referenced BUNDLE_INDEX.json must exist at that path
    - bundle_inventory_run_id must match the run_id in BUNDLE_INDEX.json
    
    Args:
        target_root: Directory containing MANIFEST.json
        bundle_index_rel: Relative path from target_root to BUNDLE_INDEX.json
        bundle_inventory_run_id: run_id from bundle_inventory for cross-reference
    
    Returns:
        True if MANIFEST.json was successfully updated, False otherwise
    """
    import os, sys
    manifest_path = target_root / "MANIFEST.json"
    if not manifest_path.exists():
        print(f"[link] MANIFEST.json not found at {manifest_path}", file=sys.stderr)
        return False
    
    # Validate: no path escape — resolve through symlinks, then enforce containment
    resolved = (target_root / bundle_index_rel).resolve()
    target_root_resolved = target_root.resolve()
    try:
        resolved.relative_to(target_root_resolved)
    except ValueError:
        print(
            f"[link] ERROR: bundle_index_rel escapes target root\n"
            f"  manifest:         {manifest_path}\n"
            f"  rel (raw):        {bundle_index_rel}\n"
            f"  rel (resolved):   {resolved}\n"
            f"  root (resolved):  {target_root_resolved}",
            file=sys.stderr,
        )
        return False
    
    # Validate: target file exists
    if not resolved.exists():
        print(f"[link] ERROR: BUNDLE_INDEX.json not found at {resolved}", file=sys.stderr)
        return False
    
    # Validate: run_id matches
    try:
        bundle_index = json.loads(resolved.read_text())
        actual_run_id = bundle_index.get("run_id")
        if actual_run_id != bundle_inventory_run_id:
            print(
                f"[link] ERROR: run_id mismatch: MANIFEST says '{bundle_inventory_run_id}' "
                f"but BUNDLE_INDEX.json has '{actual_run_id}'",
                file=sys.stderr,
            )
            return False
    except Exception as e:
        print(f"[link] ERROR: cannot read BUNDLE_INDEX.json: {e}", file=sys.stderr)
        return False
    
    # Patch manifest — atomic write via tmp + os.replace()
    try:
        manifest = json.loads(manifest_path.read_text())
        manifest["bundle_index_rel"] = bundle_index_rel
        manifest["bundle_inventory_run_id"] = bundle_inventory_run_id
        tmp_path = manifest_path.with_suffix(".json.tmp")
        tmp_path.write_text(json.dumps(manifest, indent=2) + "\n")
        os.replace(str(tmp_path), str(manifest_path))
        print(f"[link] Updated {manifest_path} with bundle_index_rel={bundle_index_rel}", file=sys.stderr)
        return True
    except Exception as e:
        # Clean up partial temp file if it exists
        try:
            tmp_path.unlink(missing_ok=True)
        except Exception:
            pass
        print(f"[link] ERROR: cannot update MANIFEST.json: {e}", file=sys.stderr)
        return False


def write_index(targets_dir: Path) -> None:
    """Write INDEX.json aggregating all target manifests.
    
    Handles both schema_version 1 (relative paths) and legacy manifests.
    """
    entries: list[dict[str, Any]] = []
    for target in sorted([p for p in targets_dir.iterdir() if p.is_dir()], key=lambda p: p.name):
        manifest_path = target / "MANIFEST.json"
        if not manifest_path.exists():
            continue
        try:
            manifest = json.loads(manifest_path.read_text())
        except Exception:
            continue

        schema_version = manifest.get("schema_version", 0)
        binaries = manifest.get("binaries", [])
        for b in binaries:
            # Resolve exec_dir: relative paths are relative to manifest parent (target dir)
            exec_dir_str = b.get("exec_dir", "")
            if schema_version >= 1:
                exec_dir = target / exec_dir_str
            else:
                exec_dir = Path(exec_dir_str)
            
            decompiled = exec_dir / "decompiled_real"
            # Use recursive count (rglob) to include nested files
            cpp_count = len(list(decompiled.rglob("*.cpp"))) if decompiled.exists() else 0
            entries.append(
                {
                    "target": target.name,
                    "binary_name": b.get("binary_name"),
                    "binary_path": b.get("binary_path"),
                    "exec_dir": b.get("exec_dir"),
                    "decompiled_cpp": cpp_count,
                    "has_reports": (exec_dir / "reports").exists(),
                    "has_assets": (exec_dir / "assets").exists(),
                }
            )

    # Acquire a simple lock to avoid concurrent INDEX.json writes
    lock_path = targets_dir / ".index.lock"
    start = time.time()
    while True:
        try:
            fd = os.open(str(lock_path), os.O_CREAT | os.O_EXCL | os.O_WRONLY)
            os.close(fd)
            break
        except FileExistsError:
            if time.time() - start > 10:
                raise TimeoutError("could not acquire index lock")
            time.sleep(0.1)
    try:
        # Atomic write to INDEX.json
        fd, tmppath = tempfile.mkstemp(dir=str(targets_dir), suffix='.json.tmp')
        with os.fdopen(fd, 'w') as f:
            json.dump({"schema_version": 1, "entries": entries}, f, indent=2)
            f.write("\n")
            f.flush(); os.fsync(f.fileno())
        os.replace(tmppath, str(targets_dir / "INDEX.json"))
    finally:
        try:
            lock_path.unlink()
        except Exception:
            pass
