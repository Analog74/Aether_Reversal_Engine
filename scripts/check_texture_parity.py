#!/usr/bin/env python3
# Created: 2026-02-20 • Part of Aether RE toolkit
from __future__ import annotations
"""
@brief Real-data parity gate: verify Rust atlas_recover output is byte-identical
       to Python-generated reference fixtures.

PURPOSE:
  Guards against silent regressions in the Rust Stage B reconstructor by
  comparing the SHA-256 hash of every successfully reconstructed PNG against
  gold-standard values captured by the Python implementation.

  Run Python first to generate fixtures:
      python3 scripts/reconstruct_textures.py \\
          --json   targets/TouchOSC/textures/texture_atlas.json \\
          --binary targets/TouchOSC/binary/TouchOSC \\
          --out    targets/TouchOSC/textures/ \\
          --export-fixtures

  Then run this gate to verify the Rust output matches:
      python3 scripts/check_texture_parity.py \\
          --fixtures targets/TouchOSC/textures/fixtures/manifest.json \\
          --json     targets/TouchOSC/textures/texture_atlas.json \\
          --binary   targets/TouchOSC/binary/TouchOSC \\
          --out      /tmp/atlas_parity_check/

USER WORKFLOW:
  1. Generate Python reference: reconstruct_textures.py --export-fixtures
  2. Run parity gate (this script)
  3. Gate exits 0 if all hashes match, 1 if any mismatch

INTEGRATION POINTS:
  - Input:  fixtures/manifest.json  (from reconstruct_textures.py --export-fixtures)
  - Input:  texture_atlas.json      (Stage A output — same JSON both tools use)
  - Input:  binary                  (same Mach-O both tools read)
  - Tool:   atlas_recover binary    (tools/atlas_recover/target/release/atlas_recover)
  - Output: parity_report.json      (written to --out dir)

EXIT CODES:
  0  All fixture entries matched (or no testable entries found)
  1  One or more hash mismatches
  2  Usage or argument error
  3  atlas_recover binary not found or execution failed
"""

import argparse
import hashlib
import json
import os
import subprocess
import sys
import tempfile
from pathlib import Path

# ── Helpers ───────────────────────────────────────────────────────────────────

def sha256_file(path: Path) -> str:
    """Compute the SHA-256 hexdigest of a file."""
    h = hashlib.sha256()
    with open(path, "rb") as f:
        for chunk in iter(lambda: f.read(65536), b""):
            h.update(chunk)
    return h.hexdigest()


def find_rust_binary(explicit: Path | None) -> Path | None:
    """
    Locate the atlas_recover release binary.

    Search order:
      1. --rust-bin CLI flag (if provided)
      2. tools/atlas_recover/target/release/atlas_recover (repo-relative)
      3. PATH lookup via `which` (system install)
    """
    if explicit is not None:
        return explicit if explicit.exists() else None

    # Resolve relative to this script's repo root
    repo_root = Path(__file__).parents[1]
    candidate = repo_root / "tools" / "atlas_recover" / "target" / "release" / "atlas_recover"
    if candidate.exists():
        return candidate

    # PATH fallback
    which = subprocess.run(
        ["which", "atlas_recover"], capture_output=True, text=True
    )
    if which.returncode == 0:
        path = Path(which.stdout.strip())
        if path.exists():
            return path

    return None


def run_atlas_recover(
    bin_path: Path,
    json_path: Path,
    binary_path: Path,
    out_dir: Path,
    arch: str,
    min_confidence: str,
) -> int:
    """
    Run atlas_recover and return its exit code.

    Args:
        bin_path:       Path to atlas_recover binary.
        json_path:      texture_atlas.json from Stage A.
        binary_path:    Mach-O binary.
        out_dir:        Output directory for images + report.
        arch:           "arm64" or "x86_64".
        min_confidence: "HIGH", "MEDIUM", or "LOW".

    Returns:
        Exit code (0 = success).
    """
    cmd = [
        str(bin_path),
        "--json",           str(json_path),
        "--binary",         str(binary_path),
        "--out",            str(out_dir),
        "--arch",           arch,
        "--min-confidence", min_confidence,
    ]
    result = subprocess.run(cmd)
    return result.returncode


# ── Core parity check ─────────────────────────────────────────────────────────

def check_parity(
    manifest: list[dict],
    rust_report: dict,
    rust_out_dir: Path,
    min_confidence: str,
) -> tuple[int, int, list[dict]]:
    """
    Compare Rust reconstruction results against Python fixture hashes.

    Args:
        manifest:       Loaded fixtures/manifest.json (list of fixture entries).
        rust_report:    Loaded reconstruction_report.json from Rust run.
        rust_out_dir:   Directory where Rust wrote its image files.
        min_confidence: Minimum confidence level — skip lower-confidence entries.

    Returns:
        (match_count, mismatch_count, mismatch_details)
        mismatch_details is a list of dicts with keys: call_addr, expected, got.
    """
    CONF_RANK = {"HIGH": 3, "MEDIUM": 2, "LOW": 1, "DECOMPILE_FAILED": 0}
    min_rank  = CONF_RANK.get(min_confidence, 2)

    # Index Rust results by call_addr for O(1) lookup
    rust_by_addr = {r["call_addr"]: r for r in rust_report.get("results", [])}

    matches    = 0
    mismatches = []

    for entry in manifest:
        call_addr  = entry["call_addr"]
        exp_hash   = entry["pixel_sha256"]
        conf       = entry.get("confidence", "LOW")

        # Skip entries below our minimum confidence threshold
        if CONF_RANK.get(conf, 0) < min_rank:
            continue

        rust_result = rust_by_addr.get(call_addr)
        if rust_result is None:
            mismatches.append({
                "call_addr": call_addr,
                "reason":    "not_in_rust_report",
                "expected":  exp_hash,
                "got":       None,
            })
            continue

        if rust_result["status"] != "OK":
            mismatches.append({
                "call_addr": call_addr,
                "reason":    f"rust_status={rust_result['status']}",
                "expected":  exp_hash,
                "got":       None,
            })
            continue

        out_path_rel = rust_result.get("out_path", "")
        png_path = rust_out_dir / out_path_rel
        if not png_path.exists():
            mismatches.append({
                "call_addr": call_addr,
                "reason":    "png_not_written",
                "expected":  exp_hash,
                "got":       None,
            })
            continue

        actual_hash = sha256_file(png_path)
        if actual_hash == exp_hash:
            matches += 1
        else:
            mismatches.append({
                "call_addr": call_addr,
                "reason":    "hash_mismatch",
                "expected":  exp_hash,
                "got":       actual_hash,
            })

    return matches, len(mismatches), mismatches


# ── CLI ───────────────────────────────────────────────────────────────────────

def main() -> int:
    ap = argparse.ArgumentParser(
        description="Real-data parity gate: Rust atlas_recover vs Python fixtures"
    )
    ap.add_argument("--fixtures",        required=True, type=Path,
                    help="fixtures/manifest.json from reconstruct_textures.py --export-fixtures")
    ap.add_argument("--json",            required=True, type=Path,
                    help="texture_atlas.json (Stage A output)")
    ap.add_argument("--binary",          required=True, type=Path,
                    help="Mach-O binary (fat or single-arch)")
    ap.add_argument("--out",             type=Path, default=None,
                    help="Output dir for atlas_recover run (defaults to a temp dir)")
    ap.add_argument("--arch",            default="arm64", choices=["arm64", "x86_64"])
    ap.add_argument("--min-confidence",  default="HIGH",  choices=["HIGH", "MEDIUM", "LOW"],
                    help="Only verify entries at or above this confidence level (default: HIGH)")
    ap.add_argument("--rust-bin",        type=Path, default=None,
                    help="Explicit path to atlas_recover binary (auto-detected if omitted)")
    ap.add_argument("--report",          type=Path, default=None,
                    help="Write parity_report.json here (default: <out>/parity_report.json)")
    args = ap.parse_args()

    # Validate inputs
    for attr, label in [("fixtures", "--fixtures"), ("json", "--json"), ("binary", "--binary")]:
        p = getattr(args, attr)
        if not p.exists():
            print(f"[-] {label} not found: {p}", file=sys.stderr)
            return 2

    # Load fixtures manifest
    manifest: list[dict] = json.loads(args.fixtures.read_text())
    testable = [e for e in manifest if e.get("status") == "OK"]
    if not testable:
        print("[!] No OK entries in fixture manifest — nothing to verify.")
        return 0
    print(f"[+] Fixture manifest: {len(testable)} OK entries to verify "
          f"(total manifest entries: {len(manifest)})")

    # Find Rust binary
    rust_bin = find_rust_binary(args.rust_bin)
    if rust_bin is None:
        print(
            "[-] atlas_recover binary not found.\n"
            "    Build it with:  cd tools/atlas_recover && cargo build --release\n"
            "    Or specify:  --rust-bin /path/to/atlas_recover",
            file=sys.stderr,
        )
        return 3

    print(f"[+] Using Rust binary: {rust_bin}")

    # Run atlas_recover
    _tmp_ctx = None
    if args.out is None:
        _tmp_ctx = tempfile.TemporaryDirectory(prefix="atlas_parity_")
        out_dir = Path(_tmp_ctx.name)
    else:
        out_dir = args.out
        out_dir.mkdir(parents=True, exist_ok=True)

    print(f"[+] Running atlas_recover (--min-confidence {args.min_confidence}) → {out_dir}")
    rc = run_atlas_recover(
        rust_bin, args.json, args.binary, out_dir, args.arch, args.min_confidence
    )
    if rc != 0:
        print(f"[-] atlas_recover exited with code {rc}", file=sys.stderr)
        if _tmp_ctx:
            _tmp_ctx.cleanup()
        return 3

    # Load Rust report
    report_path = out_dir / "reconstruction_report.json"
    if not report_path.exists():
        print(f"[-] reconstruction_report.json not found in {out_dir}", file=sys.stderr)
        if _tmp_ctx:
            _tmp_ctx.cleanup()
        return 3
    rust_report = json.loads(report_path.read_text())

    # Run parity check
    matches, mismatch_count, mismatches = check_parity(
        testable, rust_report, out_dir, args.min_confidence
    )

    # Write parity report
    parity_report = {
        "fixtures_path":    str(args.fixtures),
        "binary":           str(args.binary),
        "arch":             args.arch,
        "min_confidence":   args.min_confidence,
        "total_testable":   len(testable),
        "matched":          matches,
        "mismatched":       mismatch_count,
        "pass":             mismatch_count == 0,
        "mismatches":       mismatches,
    }
    report_out = args.report or (out_dir / "parity_report.json")
    report_out.write_text(json.dumps(parity_report, indent=2))

    # Summary
    total = matches + mismatch_count
    print(f"\n[+] Parity results:")
    print(f"    checked:    {total}")
    print(f"    matched:    {matches}")
    print(f"    mismatched: {mismatch_count}")

    if mismatch_count > 0:
        print(f"\n[!] MISMATCHES ({mismatch_count}):")
        for m in mismatches[:20]:
            print(f"    {m['call_addr']:20s}  reason={m['reason']}"
                  f"  expected={m['expected'][:12]}…  got="
                  f"{(m['got'] or 'N/A')[:12]}…")
        if mismatch_count > 20:
            print(f"    … and {mismatch_count - 20} more")
        print(f"\n[-] PARITY FAIL — report: {report_out}")
    else:
        print(f"\n[+] PARITY PASS — all {matches} hashes match.")
        print(f"    Report: {report_out}")

    if _tmp_ctx:
        _tmp_ctx.cleanup()

    return 0 if mismatch_count == 0 else 1


if __name__ == "__main__":
    sys.exit(main())
