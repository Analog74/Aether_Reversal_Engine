#!/usr/bin/env python3
# Created: 2025-12-14 04:31 UTC • Last Modified: 2025-12-14 04:31 UTC
"""Stamp Created/Revised timestamps into Markdown files.

Policy:
- Adds a visible stamp line: "> Created: ... • Revised: ..."
- If a stamp exists, only updates Revised.
- If no stamp exists, inserts after the first H1/H2 heading if present, else at top.

Usage:
  python3 scripts/stamp_markdown_timestamps.py --all-tracked
  python3 scripts/stamp_markdown_timestamps.py path/to/file.md [...]

Notes:
- Uses UTC timestamps.
- Designed for GitHub-rendered Markdown (no YAML frontmatter).
"""

from __future__ import annotations

import argparse
import datetime as _dt
import subprocess
import sys
from pathlib import Path


STAMP_PREFIX = "> Created: "
SEARCH_WINDOW_LINES = 30


def utc_now_stamp() -> str:
    # e.g. 2025-12-13 21:04 UTC
    return _dt.datetime.now(tz=_dt.timezone.utc).strftime("%Y-%m-%d %H:%M UTC")


def is_stamp_line(line: str) -> bool:
    return line.startswith(STAMP_PREFIX) and "Revised:" in line


def has_stamp(path: Path) -> bool:
    text = path.read_text(encoding="utf-8")
    lines = text.splitlines()
    for line in lines[:SEARCH_WINDOW_LINES]:
        if is_stamp_line(line.strip()):
            return True
    return False


def render_stamp(created: str, revised: str) -> str:
    return f"> Created: {created} • Revised: {revised}"


def update_file(path: Path, now: str) -> bool:
    original = path.read_text(encoding="utf-8")
    lines = original.splitlines()

    # Find existing stamp
    for i, line in enumerate(lines[:SEARCH_WINDOW_LINES]):
        if is_stamp_line(line.strip()):
            # Parse created part, preserve it
            # Format: > Created: <created> • Revised: <revised>
            text = line.strip()[len(STAMP_PREFIX) :]
            if "• Revised:" in text:
                created = text.split("• Revised:", 1)[0].strip()
            else:
                created = "(unknown)"
            lines[i] = render_stamp(created, now)
            new_text = "\n".join(lines) + ("\n" if original.endswith("\n") else "")
            if new_text != original:
                path.write_text(new_text, encoding="utf-8")
                return True
            return False

    # No existing stamp: insert
    created = now
    stamp_line = render_stamp(created, now)

    insert_at = 0
    # If the file starts with a heading, insert after the first heading line.
    # Also skip leading blank lines.
    first_nonblank = 0
    while first_nonblank < len(lines) and lines[first_nonblank].strip() == "":
        first_nonblank += 1

    if first_nonblank < len(lines) and lines[first_nonblank].lstrip().startswith("#"):
        insert_at = first_nonblank + 1
        # If there isn't a blank line after heading, add one.
        to_insert = ["", stamp_line, ""]
    else:
        insert_at = 0
        to_insert = [stamp_line, ""]

    new_lines = lines[:insert_at] + to_insert + lines[insert_at:]
    new_text = "\n".join(new_lines) + ("\n" if original.endswith("\n") else "")
    if new_text != original:
        path.write_text(new_text, encoding="utf-8")
        return True
    return False


def tracked_markdown_files() -> list[Path]:
    out = subprocess.check_output(["git", "ls-files", "*.md"], text=True)
    return [Path(p) for p in out.splitlines() if p.strip()]


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("--all-tracked", action="store_true", help="Stamp all tracked *.md files")
    parser.add_argument(
        "--check",
        action="store_true",
        help="Do not modify files; fail if any target Markdown file is missing a Created/Revised stamp",
    )
    parser.add_argument("paths", nargs="*", help="Specific Markdown files to stamp")
    args = parser.parse_args()

    if not args.all_tracked and not args.paths:
        parser.error("Provide --all-tracked or one or more paths")

    if args.all_tracked:
        paths = tracked_markdown_files()
    else:
        paths = [Path(p) for p in args.paths]

    if args.check:
        missing: list[str] = []
        checked = 0
        for path in paths:
            if path.suffix.lower() != ".md":
                continue
            if not path.exists():
                missing.append(str(path))
                continue
            checked += 1
            if not has_stamp(path):
                missing.append(str(path))

        if missing:
            print("ERROR: Missing Created/Revised stamp in:")
            for p in missing:
                print(f"- {p}")
            print("\nFix by running:")
            print("  python3 scripts/stamp_markdown_timestamps.py --all-tracked")
            return 1

        print(f"OK: {checked} Markdown file(s) have a Created/Revised stamp")
        return 0

    now = utc_now_stamp()

    changed = 0
    for path in paths:
        if path.suffix.lower() != ".md":
            continue
        if not path.exists():
            print(f"WARN: missing file: {path}", file=sys.stderr)
            continue
        if update_file(path, now):
            changed += 1

    print(f"Stamped {len(paths)} file(s); modified {changed}.")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
