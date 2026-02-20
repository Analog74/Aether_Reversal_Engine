#!/usr/bin/env python3
# Created: 2025-12-13 05:33 UTC • Last Modified: 2025-12-22 03:25 UTC
"""Lint Markdown links for missing local targets.

Checks markdown files for links like [text](relative/path.md) and verifies the target exists.

Notes:
- External links (http/https/mailto) are ignored.
- Pure anchors (#section) are ignored.
- Anchors on file links (path.md#section) are NOT validated (file existence only).
- This is intentionally conservative (low false positives) and aimed at catching broken
  intra-repo links after refactors.
"""

from __future__ import annotations

import argparse
import os
import re
import subprocess
import sys
from dataclasses import dataclass
from pathlib import Path
from typing import Iterable


_LINK_RE = re.compile(r"!?\[[^\]]*\]\(([^)]+)\)")


@dataclass(frozen=True)
class BrokenLink:
    source_file: Path
    raw_target: str
    resolved_target: Path


def _is_external(target: str) -> bool:
    lower = target.lower()
    return lower.startswith("http://") or lower.startswith("https://") or lower.startswith("mailto:")


def _normalize_target(raw: str) -> str:
    target = raw.strip()
    if target.startswith("<") and target.endswith(">"):
        target = target[1:-1].strip()

    # remove surrounding quotes (rare but seen)
    if (target.startswith('"') and target.endswith('"')) or (target.startswith("'") and target.endswith("'")):
        target = target[1:-1]

    return target


def _iter_md_files(repo_root: Path, include: list[str], exclude_prefix: list[str]) -> Iterable[Path]:
    excludes = [repo_root / p for p in exclude_prefix]

    def is_excluded(path: Path) -> bool:
        for ex in excludes:
            try:
                path.relative_to(ex)
                return True
            except ValueError:
                pass
        return False

    if include:
        for inc in include:
            p = (repo_root / inc).resolve()
            if p.is_dir():
                for md in p.rglob("*.md"):
                    if not is_excluded(md):
                        yield md
            elif p.is_file() and p.suffix.lower() == ".md":
                if not is_excluded(p):
                    yield p
        return

    for md in repo_root.rglob("*.md"):
        if is_excluded(md):
            continue
        # ignore anything under .git
        if ".git" in md.parts:
            continue
        yield md


def _iter_tracked_md_files(repo_root: Path, include: list[str], exclude_prefix: list[str]) -> Iterable[Path]:
    excludes = [repo_root / p for p in exclude_prefix]

    def is_excluded(path: Path) -> bool:
        for ex in excludes:
            try:
                path.relative_to(ex)
                return True
            except ValueError:
                pass
        return False

    try:
        proc = subprocess.run(
            ["git", "-C", str(repo_root), "ls-files", "*.md"],
            check=True,
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE,
            text=True,
        )
    except Exception as exc:
        raise RuntimeError(f"failed to list tracked Markdown via git: {exc}")

    tracked = [repo_root / line.strip() for line in proc.stdout.splitlines() if line.strip()]

    # If include filters are provided, only keep those paths (dir or file) intersected with tracked.
    if include:
        allowed: set[Path] = set()
        for inc in include:
            p = (repo_root / inc).resolve()
            if p.is_dir():
                for md in tracked:
                    try:
                        md.relative_to(p)
                        allowed.add(md)
                    except ValueError:
                        continue
            else:
                allowed.add(p)
        tracked = [md for md in tracked if md in allowed]

    for md in tracked:
        if is_excluded(md):
            continue
        if ".git" in md.parts:
            continue
        yield md


def _check_file(md_file: Path, repo_root: Path) -> list[BrokenLink]:
    text = md_file.read_text(encoding="utf-8", errors="replace")
    broken: list[BrokenLink] = []

    for match in _LINK_RE.finditer(text):
        raw = _normalize_target(match.group(1))
        if not raw or _is_external(raw):
            continue
        if raw.startswith("#"):
            continue
        if raw.startswith("/"):
            # absolute path link inside repo is allowed but must exist relative to repo root
            target_path = repo_root / raw.lstrip("/")
        else:
            # strip query fragments and anchors
            file_part = raw.split("#", 1)[0].split("?", 1)[0]
            if not file_part:
                continue
            target_path = (md_file.parent / file_part).resolve()

        # allow linking to directories
        if target_path.exists():
            continue

        broken.append(
            BrokenLink(
                source_file=md_file,
                raw_target=raw,
                resolved_target=target_path,
            )
        )

    return broken


def main() -> int:
    parser = argparse.ArgumentParser(description="Lint Markdown links for missing local targets")
    parser.add_argument(
        "--repo-root",
        default=None,
        help="Repo root (default: auto-detect from script location)",
    )
    parser.add_argument(
        "--include",
        action="append",
        default=[],
        help="Include only these paths (relative to repo root); may be repeated",
    )
    parser.add_argument(
        "--exclude-prefix",
        action="append",
        default=[],
        help="Exclude everything under this path prefix (relative to repo root); may be repeated",
    )
    parser.add_argument(
        "--tracked-only",
        action="store_true",
        help="Only lint git-tracked Markdown files (recommended; avoids local build artifacts)",
    )

    args = parser.parse_args()

    repo_root = Path(args.repo_root).resolve() if args.repo_root else Path(__file__).resolve().parents[1]

    exclude_prefix = args.exclude_prefix or [
        "SourceFiles",
        "targets",
        "ghidra_projects",
        "AetherDaemon/build",
        "tmp",
        "factory/tools/ghidra",
        "factory/tools/ghidra/ghidra_11.2_PUBLIC",
        "factory/tools/ghidra/docs",
    ]

    if bool(getattr(args, "tracked_only", False)):
        md_files = sorted(set(_iter_tracked_md_files(repo_root, args.include, exclude_prefix)))
    else:
        md_files = sorted(set(_iter_md_files(repo_root, args.include, exclude_prefix)))
    all_broken: list[BrokenLink] = []
    for md in md_files:
        try:
            all_broken.extend(_check_file(md, repo_root))
        except Exception as exc:  # keep linting
            print(f"ERROR reading {md}: {exc}", file=sys.stderr)
            return 2

    if not all_broken:
        print(f"OK: no missing local link targets across {len(md_files)} markdown files")
        return 0

    print(f"BROKEN: {len(all_broken)} missing local link targets across {len(md_files)} markdown files")
    for b in all_broken:
        rel_src = b.source_file.relative_to(repo_root)
        rel_tgt = os.path.relpath(b.resolved_target, repo_root)
        print(f"- {rel_src} -> {b.raw_target} (missing: {rel_tgt})")

    return 1


if __name__ == "__main__":
    raise SystemExit(main())
