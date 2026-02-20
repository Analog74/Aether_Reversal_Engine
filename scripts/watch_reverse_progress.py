#!/usr/bin/env python3
# Created: 2026-01-07 05:05 UTC • Last Modified: 2026-01-07 05:07 UTC
from __future__ import annotations

import argparse
import json
import os
import subprocess
import sys
import time
from pathlib import Path

# Allow running from repo root without installation
REPO_ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(REPO_ROOT))

from factory.core import macho_discovery, target_layout  # noqa: E402


def _read_pid(pid_file: Path) -> int | None:
    try:
        raw = pid_file.read_text().strip()
        return int(raw)
    except Exception:
        return None


def _pid_alive(pid: int) -> bool:
    try:
        os.kill(pid, 0)
        return True
    except OSError:
        return False


def _pid_etime(pid: int) -> str:
    try:
        # macOS ps supports etime; trim spaces.
        out = subprocess.check_output(["ps", "-p", str(pid), "-o", "etime="], text=True)
        return out.strip() or "?"
    except Exception:
        return "?"


def _infer_total_from_manifest(manifest_path: Path) -> int | None:
    try:
        manifest = json.loads(manifest_path.read_text())
        inp = manifest.get("input")
        if not inp:
            return None
        binaries = macho_discovery.discover_binaries(Path(inp))
        return len(binaries)
    except Exception:
        return None


def _manifest_count(manifest_path: Path) -> int:
    try:
        manifest = json.loads(manifest_path.read_text())
        return len(manifest.get("binaries", []))
    except Exception:
        return 0


def _tail_current_item(log_path: Path) -> str:
    if not log_path:
        return ""
    try:
        data = log_path.read_text(errors="ignore").splitlines()
    except Exception:
        return ""
    for line in reversed(data[-400:]):
        if "Decompiling:" in line or "Skipping existing:" in line:
            return line.strip()
    return ""


def _bar(pct: float, width: int = 28) -> str:
    pct = 0.0 if pct < 0 else 100.0 if pct > 100 else pct
    filled = int((pct / 100.0) * width)
    return "[" + "#" * filled + "-" * (width - filled) + "]"


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--pid-file", required=True, type=Path)
    ap.add_argument("--manifest", required=True, type=Path)
    ap.add_argument("--log", type=Path, default=None, help="Optional log file to show current binary")
    ap.add_argument("--total", type=int, default=0, help="Total binaries; 0 means infer from manifest input")
    ap.add_argument("--interval", type=float, default=10.0)
    ap.add_argument("--update-index-on-finish", action="store_true")
    args = ap.parse_args()

    start = time.monotonic()
    total = args.total if args.total and args.total > 0 else _infer_total_from_manifest(args.manifest)

    interactive = sys.stdout.isatty()

    if not total:
        print("[watch] Could not infer total binaries; progress will be count-only.")

    while True:
        pid = _read_pid(args.pid_file)
        alive = bool(pid) and _pid_alive(pid)
        done = _manifest_count(args.manifest)

        pct = (done / total * 100.0) if total else 0.0
        elapsed = time.monotonic() - start
        runner_etime = _pid_etime(pid) if (pid and alive) else "-"
        cur = _tail_current_item(args.log) if args.log else ""

        if total:
            line = f"{_bar(pct)} {done}/{total} ({pct:5.1f}%) watcher {elapsed/60.0:6.1f}m runner {runner_etime}"
        else:
            line = f"{done} binaries completed watcher {elapsed/60.0:6.1f}m runner {runner_etime}"
        if cur:
            line += f" | {cur}"

        # In an interactive terminal, draw a single updating progress line.
        # When redirected to a file (nohup), write newline-delimited records to avoid \r artifacts.
        if interactive:
            sys.stdout.write("\r" + line[:2000])
            sys.stdout.flush()
        else:
            ts = time.strftime("%Y-%m-%d %H:%M:%S")
            sys.stdout.write(f"{ts} {line[:2000]}\n")
            sys.stdout.flush()

        if not alive:
            break
        time.sleep(args.interval)

    sys.stdout.write("\n")
    sys.stdout.flush()

    if args.update_index_on_finish:
        try:
            target_layout.write_index(target_layout.targets_root())
            print("[watch] Updated targets/INDEX.json")
        except Exception as e:
            print(f"[watch] Failed to update targets/INDEX.json: {e}")

    print("[watch] Runner process finished.")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
