# Created: 2025-12-14 04:57 UTC • Last Modified: 2025-12-14 05:46 UTC
from __future__ import annotations

import os
from dataclasses import dataclass
from pathlib import Path
from typing import Iterable


MACHO_MAGICS = {
    b"\xfe\xed\xfa\xce",  # MH_MAGIC
    b"\xce\xfa\xed\xfe",  # MH_CIGAM
    b"\xfe\xed\xfa\xcf",  # MH_MAGIC_64
    b"\xcf\xfa\xed\xfe",  # MH_CIGAM_64
    b"\xca\xfe\xba\xbe",  # FAT_MAGIC
    b"\xbe\xba\xfe\xca",  # FAT_CIGAM
}


def is_probably_macho(path: Path) -> bool:
    try:
        if not path.is_file() or path.is_symlink():
            return False
        with path.open("rb") as f:
            magic = f.read(4)
        return magic in MACHO_MAGICS
    except Exception:
        return False


def _iter_candidate_paths(root: Path) -> Iterable[Path]:
    # Heuristic traversal: prefer typical bundle locations first.
    bundle_contents = root / "Contents"
    if bundle_contents.exists():
        preferred = [
            bundle_contents / "MacOS",
            bundle_contents / "Frameworks",
            bundle_contents / "PlugIns",
            bundle_contents / "XPCServices",
            bundle_contents / "Helpers",
        ]
        for p in preferred:
            if p.exists():
                yield from p.rglob("*")
        # Fall back to the rest of Contents
        yield from bundle_contents.rglob("*")
        return

    # Nonstandard bundles (like wrapped apps): just scan the directory.
    yield from root.rglob("*")


def discover_macho_binaries(input_path: Path) -> list[Path]:
    input_path = Path(input_path)

    if input_path.is_file():
        return [input_path] if is_probably_macho(input_path) else []

    if not input_path.is_dir():
        return []

    found: list[Path] = []
    seen: set[str] = set()

    for candidate in _iter_candidate_paths(input_path):
        if not candidate.is_file():
            continue
        # Skip obvious non-executables by extension unless they still look Mach-O.
        if candidate.suffix.lower() in {".png", ".jpg", ".jpeg", ".gif", ".tiff", ".icns", ".json", ".plist", ".nib", ".storyboardc", ".car"}:
            continue
        if is_probably_macho(candidate):
            real = os.path.realpath(candidate)
            if real in seen:
                continue
            seen.add(real)
            found.append(candidate)

    # Stable ordering for manifests.
    return sorted(found, key=lambda p: str(p))
