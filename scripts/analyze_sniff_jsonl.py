#!/usr/bin/env python3
# Created: 2025-12-15 08:17 UTC • Last Modified: 2025-12-15 15:27 UTC
"""Analyze AetherDaemon --sniff-save JSONL captures.

This is intentionally lightweight and dependency-free.

Examples:
  python3 scripts/analyze_sniff_jsonl.py jam_sniff.jsonl
  python3 scripts/analyze_sniff_jsonl.py jam_sniff.jsonl --report-id 1
  python3 scripts/analyze_sniff_jsonl.py jam_sniff.jsonl --device "Maschine Jam" --top 30
"""

from __future__ import annotations

import argparse
import json
from collections import Counter, defaultdict
from pathlib import Path
from typing import Dict, Iterable, List, Optional, Tuple


def iter_jsonl(path: Path) -> Iterable[dict]:
    with path.open("r", encoding="utf-8", errors="replace") as f:
        for line_no, line in enumerate(f, start=1):
            line = line.strip()
            if not line:
                continue
            try:
                yield json.loads(line)
            except json.JSONDecodeError:
                # Keep going; captures can be truncated on crash.
                continue


def parse_delta(delta: str) -> List[Tuple[int, str, str]]:
    out: List[Tuple[int, str, str]] = []
    if not delta:
        return out

    # Expected format: "12:00->7F 13:01->00 ...(+N)" or "first_seen"
    for tok in delta.split():
        if tok.startswith("...("):
            break
        if tok == "first_seen":
            break
        # idx:AA->BB
        if ":" not in tok or "->" not in tok:
            continue
        idx_s, rest = tok.split(":", 1)
        try:
            idx = int(idx_s)
        except ValueError:
            continue
        before, after = rest.split("->", 1)
        before = before.strip()
        after = after.strip()
        if len(before) != 2 or len(after) != 2:
            continue
        out.append((idx, before.upper(), after.upper()))
    return out


def main() -> int:
    ap = argparse.ArgumentParser(description="Analyze AetherDaemon sniff JSONL captures")
    ap.add_argument("path", help="Path to JSONL capture (from --sniff-save)")
    ap.add_argument("--device", default=None, help="Filter by device name substring")
    ap.add_argument("--report-id", type=int, default=None, help="Filter by report_id (decimal)")
    ap.add_argument("--len", dest="length", type=int, default=None, help="Filter by report len")
    ap.add_argument("--top", type=int, default=20, help="How many top items to show")
    args = ap.parse_args()

    path = Path(args.path)
    if not path.exists():
        raise SystemExit(f"No such file: {path}")

    total = 0
    per_report = Counter()
    per_len = Counter()
    per_dev = Counter()

    # report_id -> offset -> count
    offset_counts: Dict[int, Counter] = defaultdict(Counter)
    # report_id -> (offset,before,after) -> count
    transition_counts: Dict[int, Counter] = defaultdict(Counter)

    for obj in iter_jsonl(path):
        dev = str(obj.get("device", ""))
        rid = obj.get("report_id", None)
        ln = obj.get("len", None)

        if args.device and args.device.lower() not in dev.lower():
            continue
        if args.report_id is not None and rid != args.report_id:
            continue
        if args.length is not None and ln != args.length:
            continue

        total += 1
        if isinstance(rid, int):
            per_report[rid] += 1
        if isinstance(ln, int):
            per_len[ln] += 1
        if dev:
            per_dev[dev] += 1

        if isinstance(rid, int):
            delta = str(obj.get("delta", ""))
            for idx, before, after in parse_delta(delta):
                offset_counts[rid][idx] += 1
                transition_counts[rid][(idx, before, after)] += 1

    print(f"File: {path}")
    print(f"Records matched: {total}")

    if per_dev:
        print("\nDevices:")
        for dev, cnt in per_dev.most_common(args.top):
            print(f"  {cnt:>6}  {dev}")

    if per_report:
        print("\nReport IDs:")
        for rid, cnt in per_report.most_common(args.top):
            print(f"  {cnt:>6}  0x{rid:02X} ({rid})")

    if per_len:
        print("\nLengths:")
        for ln, cnt in per_len.most_common(args.top):
            print(f"  {cnt:>6}  len={ln}")

    if per_report:
        print("\nTop changing offsets per report:")
        for rid, _cnt in per_report.most_common(args.top):
            oc = offset_counts.get(rid)
            if not oc:
                continue
            print(f"\n  report 0x{rid:02X}:")
            for idx, cnt in oc.most_common(min(args.top, 12)):
                print(f"    {cnt:>6}  offset={idx}")

            tc = transition_counts.get(rid)
            if tc:
                print("    top transitions:")
                for (idx, b, a), cnt in tc.most_common(min(args.top, 8)):
                    print(f"      {cnt:>6}  {idx}:{b}->{a}")

    return 0


if __name__ == "__main__":
    raise SystemExit(main())
