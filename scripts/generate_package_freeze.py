#!/usr/bin/env python3
"""
Generate PACKAGE_FREEZE.json for a target.

Usage:
  python3 scripts/generate_package_freeze.py --target targets/REAPER

Writes: <target>/exec/REAPER/PACKAGE_FREEZE.json (atomic)
Computes SHA256 for a small set of key deliverables and records
`decompiled_file_count` from extraction index.

This helper is provided so you can reproduce / verify the freeze
checksums locally or from CI (I can't execute it in your environment
from the agent process).
"""
import argparse
import hashlib
import json
import os
from pathlib import Path

KEY_FILES = [
    "targets/REAPER/MANIFEST.json",
    "targets/REAPER/exec/REAPER/EXTRACTION_INDEX.json",
    "targets/REAPER/exec/REAPER/analysis/call_graph/call_graph.json",
    "targets/REAPER/exec/REAPER/analysis/call_graph/call_graph_stats.txt",
    "targets/REAPER/exec/REAPER/analysis/triage/ReaProject/summary.txt",
    "targets/REAPER/exec/REAPER/analysis/triage/audioStreamer/summary.txt",
    "targets/REAPER/exec/REAPER/analysis/triage/VST_HostedPlugin/summary.txt",
    "targets/REAPER/exec/REAPER/decompiled_real/audioStreamer_CoreAudio__onsamples.cpp",
    "targets/REAPER/exec/REAPER/decompiled_real/VST_HostedPlugin__ProcessSamples.cpp",
    "targets/REAPER/exec/REAPER/decompiled_real/ReaProject__CommitPooledEnvEdits.cpp",
    "targets/REAPER/exec/REAPER/decompiled_real/SaveProject.cpp",
]


def sha256_of_file(p: Path) -> str:
    h = hashlib.sha256()
    with p.open("rb") as fh:
        for chunk in iter(lambda: fh.read(8192), b""):
            h.update(chunk)
    return h.hexdigest()


def count_decompiled_files(exec_root: Path) -> int:
    droot = exec_root / "decompiled_real"
    if not droot.exists():
        return 0
    return sum(1 for _ in droot.rglob("*.cpp"))


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--target", required=True, help="path to targets/REAPER (or other target)")
    args = ap.parse_args()

    target_root = Path(args.target)
    exec_root = target_root / "exec" / "REAPER"
    out_path = exec_root / "PACKAGE_FREEZE.json"

    os.makedirs(exec_root, exist_ok=True)

    result = {
        "generated_at": __import__("datetime").datetime.utcnow().isoformat() + "Z",
        "decompiled_file_count": count_decompiled_files(exec_root),
        "files": {},
    }

    for rel in KEY_FILES:
        p = Path(rel)
        # allow both absolute and relative paths that reference this repo
        if not p.exists():
            # try relative to target root
            p = target_root.parent / rel
        if not p.exists():
            result["files"][rel] = {"missing": True}
            continue
        result["files"][rel] = {"sha256": sha256_of_file(p)}

    # atomic write
    tmp = out_path.with_suffix(".tmp")
    with tmp.open("w") as fh:
        json.dump(result, fh, indent=2, sort_keys=True)
        fh.flush()
        os.fsync(fh.fileno())
    tmp.replace(out_path)
    print(f"WROTE {out_path}")


if __name__ == "__main__":
    main()
