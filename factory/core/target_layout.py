# Created: 2025-12-14 04:57 UTC • Last Modified: 2025-12-14 05:46 UTC
from __future__ import annotations

import hashlib
import json
import re
from pathlib import Path
from typing import Any


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


def write_manifest(target_root: Path, input_path: Path, binaries: list[dict[str, Any]]) -> None:
    manifest = {
        "app_root": str(target_root.resolve()),
        "binaries": binaries,
        "input": str(input_path.resolve()),
    }
    (target_root / "MANIFEST.json").write_text(json.dumps(manifest, indent=2) + "\n")


def write_index(targets_dir: Path) -> None:
    entries: list[dict[str, Any]] = []
    for target in sorted([p for p in targets_dir.iterdir() if p.is_dir()], key=lambda p: p.name):
        manifest_path = target / "MANIFEST.json"
        if not manifest_path.exists():
            continue
        try:
            manifest = json.loads(manifest_path.read_text())
        except Exception:
            continue

        binaries = manifest.get("binaries", [])
        for b in binaries:
            exec_dir = Path(b.get("exec_dir", ""))
            decompiled = exec_dir / "decompiled_real"
            cpp_count = len(list(decompiled.glob("*.cpp"))) if decompiled.exists() else 0
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

    (targets_dir / "INDEX.json").write_text(json.dumps({"entries": entries}, indent=2) + "\n")
