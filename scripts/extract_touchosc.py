#!/usr/bin/env python3
# Created: 2026-02-20 UTC
"""
@system TouchOSCExtractor
@brief Full extraction pipeline for TouchOSC macOS app bundle
@phase Phase 1 - Asset/static extraction + binary analysis

PURPOSE:
    Extract all tangible assets and run static binary analysis on TouchOSC.app
    (macOS universal binary, x86_64 + arm64). Produces an organized target
    directory: resources, NIBs, plists, strings, asset catalog, binary copies,
    framework and sub-app analysis outputs, and reports.

ARCHITECTURE:
    - Phase 1:  Setup target directory structure
    - Phase 2:  macOS resource copy (icns, pem, CSS, PkgInfo)
    - Phase 3:  NIB decompilation (ibtool → XML; fallback: NIBArchive parse)
                Covers: Base.lproj/MainMenu.nib + all Sparkle lproj NIBs
    - Phase 4:  Plist conversion (Info.plists, SUModelTranslation.plist)
    - Phase 5:  Strings extraction (all Sparkle + Autoupdate lproj locales)
    - Phase 6:  Assets.car metadata (xcrun assetutil --info + binwalk)
    - Phase 7:  Binary analysis: TouchOSC (strings/nm/otool)
    - Phase 8:  Framework analysis: Sparkle.framework
    - Phase 9:  Sub-app binaries: Autoupdate + fileop
    - Phase 10: MANIFEST.json + AGENTS.md + extraction report

USER WORKFLOW:
    python scripts/extract_touchosc.py --source /path/to/TouchOSC.app
    (or set TOUCHOSC_SOURCE env var)

INTEGRATION POINTS:
    - Source  : --source arg or env TOUCHOSC_SOURCE
    - Targets : --targets-dir arg or env AETHER_TARGETS_DIR (default: "targets")
    - Output  : targets/TouchOSC/
"""
from __future__ import annotations

import argparse
import json
import os
import re
import shutil
import subprocess
import sys
import tempfile
from datetime import datetime, timezone
from pathlib import Path
from typing import Any

REPO_ROOT = Path(__file__).parents[1]
if str(REPO_ROOT) not in sys.path:
    sys.path.insert(0, str(REPO_ROOT))

from factory.core.nib_parser import parse_nibarchive, validate_nib_sidecar  # noqa: E402

# ──────────────────────────────────────────────────────────────────────────────
# Helpers
# ──────────────────────────────────────────────────────────────────────────────


def _run(cmd: list[str], cwd: Path | None = None, timeout: int = 120) -> subprocess.CompletedProcess:
    return subprocess.run(
        cmd,
        capture_output=True,
        text=True,
        timeout=timeout,
        cwd=str(cwd) if cwd else None,
    )


def _atomic_write_text(path: Path, text: str) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    fd, tmp = tempfile.mkstemp(dir=str(path.parent), suffix=".tmp")
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
            except Exception:
                pass


def _atomic_write_json(path: Path, data: Any) -> None:
    _atomic_write_text(path, json.dumps(data, indent=2) + "\n")


def _log(msg: str) -> None:
    print(msg, flush=True)


def _ok(msg: str) -> None:
    print(f"  ✓ {msg}", flush=True)


def _skip(msg: str) -> None:
    print(f"  ⚠  {msg}", flush=True)


def _fail(msg: str) -> None:
    print(f"  ✗ {msg}", flush=True)


def _dir_file_count(d: Path) -> int:
    return sum(1 for _ in d.rglob("*") if _.is_file())


# ──────────────────────────────────────────────────────────────────────────────
# Phase 1: Directory structure
# ──────────────────────────────────────────────────────────────────────────────


def setup_target_dirs(target_root: Path) -> dict[str, Path]:
    """
    Create and return all output subdirectories for the TouchOSC target.

    Returns:
        Mapping from logical key to absolute Path (all created on disk).
    """
    dirs: dict[str, Path] = {
        # Main binary
        "binary":           target_root / "binary",
        "binary_analysis":  target_root / "binary" / "analysis",
        # Sparkle framework
        "sparkle":          target_root / "frameworks" / "Sparkle",
        "sparkle_nibs":     target_root / "frameworks" / "Sparkle" / "nibs",
        "sparkle_strings":  target_root / "frameworks" / "Sparkle" / "strings",
        "sparkle_analysis": target_root / "frameworks" / "Sparkle" / "analysis",
        # Autoupdate sub-app
        "autoupdate":             target_root / "apps" / "Autoupdate",
        "autoupdate_nibs":        target_root / "apps" / "Autoupdate" / "nibs",
        "autoupdate_strings":     target_root / "apps" / "Autoupdate" / "strings",
        "autoupdate_analysis":    target_root / "apps" / "Autoupdate" / "analysis_Autoupdate",
        "fileop_analysis":        target_root / "apps" / "Autoupdate" / "analysis_fileop",
        # App resources
        "res_nibs":         target_root / "resources" / "nibs",
        "res_catalog":      target_root / "resources" / "asset_catalog",
        "res_misc":         target_root / "resources" / "misc",
        # Plists + strings
        "plists":           target_root / "plists",
        "strings":          target_root / "strings",
        # Reports
        "reports":          target_root / "reports",
    }
    for d in dirs.values():
        d.mkdir(parents=True, exist_ok=True)
    return dirs


# ──────────────────────────────────────────────────────────────────────────────
# Phase 2: macOS resource copy
# ──────────────────────────────────────────────────────────────────────────────


def copy_resources(contents_dir: Path, dirs: dict[str, Path]) -> dict[str, int]:
    """
    Copy icns files, PEM keys, PkgInfo, and DarkAqua.css from the app bundle.

    Args:
        contents_dir: Path to TouchOSC.app/Contents/
        dirs:         Output directories from setup_target_dirs()

    Returns:
        Dict of category → count of copied files.
    """
    counts: dict[str, int] = {}
    resources_dir = contents_dir / "Resources"
    misc_dir = dirs["res_misc"]

    # App icon and document icons
    for f in sorted(resources_dir.glob("*.icns")):
        shutil.copy2(f, misc_dir / f.name)
        counts["icns"] = counts.get("icns", 0) + 1

    # DSA/RSA public key (Sparkle update verification)
    for ext in ("*.pem", "*.pub", "dsa_pub.pem"):
        for f in sorted(resources_dir.glob(ext)):
            shutil.copy2(f, misc_dir / f.name)
            counts["keys"] = counts.get("keys", 0) + 1

    # PkgInfo
    pkg_info = contents_dir / "PkgInfo"
    if pkg_info.exists():
        shutil.copy2(pkg_info, misc_dir / "PkgInfo")
        counts["misc"] = counts.get("misc", 0) + 1

    # DarkAqua.css from Sparkle resources
    sparkle_res = _sparkle_resources(contents_dir)
    if sparkle_res:
        css = sparkle_res / "DarkAqua.css"
        if css.exists():
            shutil.copy2(css, dirs["sparkle"] / "DarkAqua.css")
            counts["css"] = counts.get("css", 0) + 1
        model_plist = sparkle_res / "SUModelTranslation.plist"
        if model_plist.exists():
            xml_out = dirs["sparkle"] / "SUModelTranslation.xml"
            r = _run(["plutil", "-convert", "xml1", "-o", str(xml_out), str(model_plist)])
            if r.returncode == 0:
                counts["plists"] = counts.get("plists", 0) + 1

    total = sum(counts.values())
    _ok(f"Resources: {total} files copied → " +
        ", ".join(f"{v} {k}" for k, v in sorted(counts.items())))
    return counts


def _sparkle_resources(contents_dir: Path) -> Path | None:
    """
    Resolve the canonical Sparkle Resources path, following Versions/A symlink.

    Returns:
        Path to Sparkle Resources dir, or None if not found.

    Side effects:
        None — read-only.
    """
    fw = contents_dir / "Frameworks" / "Sparkle.framework"
    # Prefer Versions/A (canonical, avoids dangling symlink at Versions/Current)
    versioned = fw / "Versions" / "A" / "Resources"
    if versioned.exists():
        return versioned
    # Fallback: Resources symlink at framework root
    symlink = fw / "Resources"
    if symlink.exists():
        return symlink
    return None


def _autoupdate_app(contents_dir: Path) -> Path | None:
    """
    Locate the Autoupdate.app bundle inside Sparkle's Resources.

    Returns:
        Path to Autoupdate.app/Contents/, or None if not found.
    """
    sparkle_res = _sparkle_resources(contents_dir)
    if sparkle_res is None:
        return None
    app = sparkle_res / "Autoupdate.app" / "Contents"
    return app if app.exists() else None


# ──────────────────────────────────────────────────────────────────────────────
# Phase 3: NIB decompilation
# ──────────────────────────────────────────────────────────────────────────────


def _decompile_one_nib(nib: Path, out_dir: Path, label: str = "") -> dict:
    """
    Decompile a single macOS NIB file to XML, with fallbacks.

    Strategy:
      1. ibtool --decompile → XML (works for most compiled macOS NIBs)
      2. parse_nibarchive → JSON sidecar (works for NIBArchive format)
      3. Raw copy (last resort)

    Args:
        nib:     Source .nib path
        out_dir: Destination directory
        label:   Human-readable name for logging

    Returns:
        Dict with keys: name, method, size_bytes, class_count

    Side effects:
        Writes files under out_dir.
    """
    label = label or nib.name
    dest_nib = out_dir / nib.name
    shutil.copy2(nib, dest_nib)

    result: dict = {"name": nib.name, "method": "copy_only"}

    # 1. Try ibtool --decompile
    xml_out = out_dir / f"{nib.stem}.xml"
    if shutil.which("ibtool"):
        r = _run(["ibtool", "--decompile", str(xml_out), str(nib)], timeout=30)
        if r.returncode == 0 and xml_out.exists() and xml_out.stat().st_size > 100:
            result["method"] = "ibtool"
            result["size_bytes"] = xml_out.stat().st_size
            return result

    # 2. Try NIBArchive parser (iOS/macOS NIBArchive format)
    info = parse_nibarchive(nib)
    if "error" not in info:
        valid, errs = validate_nib_sidecar(info)
        if not valid:
            _skip(f"  {nib.name} sidecar schema: {errs}")
        _atomic_write_json(out_dir / f"{nib.stem}.info.json", info)
        result["method"] = "nibarchive"
        result["class_count"] = len(info.get("class_names", []))
        return result

    # 3. Raw copy already done — try plutil in case it's a binary plist
    plist_out = out_dir / f"{nib.stem}.xml"
    r2 = _run(["plutil", "-convert", "xml1", "-o", str(plist_out), str(nib)])
    if r2.returncode == 0 and plist_out.exists():
        result["method"] = "plutil_plist"
        result["size_bytes"] = plist_out.stat().st_size
        return result

    return result


def decompile_nibs(contents_dir: Path, dirs: dict[str, Path]) -> int:
    """
    Decompile all NIBs from the app bundle and Sparkle framework.

    Sources:
        - Contents/Resources/Base.lproj/MainMenu.nib   (main app UI)
        - Sparkle Resources/SUStatus.nib               (top-level Sparkle NIB)
        - Sparkle Resources/<locale>.lproj/*.nib       (localized Sparkle NIBs)
        - Autoupdate.app/Resources/SUStatus.nib
        - Autoupdate.app/Resources/<locale>.lproj/*.nib

    Args:
        contents_dir: Path to TouchOSC.app/Contents/
        dirs:         Output directories from setup_target_dims()

    Returns:
        Total number of NIBs processed.
    """
    total = 0

    # --- Main app NIBs (Base.lproj) ---
    base_lproj = contents_dir / "Resources" / "Base.lproj"
    if base_lproj.exists():
        for nib in sorted(base_lproj.glob("*.nib")):
            r = _decompile_one_nib(nib, dirs["res_nibs"])
            _ok(f"MainMenu NIB: {nib.name} [{r['method']}]")
            total += 1

    # --- Sparkle framework NIBs ---
    sparkle_res = _sparkle_resources(contents_dir)
    if sparkle_res:
        # Top-level NIBs (e.g. SUStatus.nib — locale-independent)
        for nib in sorted(sparkle_res.glob("*.nib")):
            r = _decompile_one_nib(nib, dirs["sparkle_nibs"])
            _ok(f"Sparkle NIB: {nib.name} [{r['method']}]")
            total += 1

        # Localized NIBs
        lproj_nibs = 0
        for lproj in sorted(sparkle_res.glob("*.lproj")):
            locale = lproj.stem
            locale_out = dirs["sparkle_nibs"] / locale
            locale_out.mkdir(exist_ok=True)
            for nib in sorted(lproj.glob("*.nib")):
                _decompile_one_nib(nib, locale_out)
                lproj_nibs += 1
        if lproj_nibs:
            _ok(f"Sparkle localized NIBs: {lproj_nibs} across all locales")
            total += lproj_nibs

    # --- Autoupdate.app NIBs ---
    au_app = _autoupdate_app(contents_dir)
    if au_app:
        au_res = au_app / "Resources"
        for nib in sorted(au_res.glob("*.nib")):
            r = _decompile_one_nib(nib, dirs["autoupdate_nibs"])
            _ok(f"Autoupdate NIB: {nib.name} [{r['method']}]")
            total += 1
        au_lproj_nibs = 0
        for lproj in sorted(au_res.glob("*.lproj")):
            locale_out = dirs["autoupdate_nibs"] / lproj.stem
            locale_out.mkdir(exist_ok=True)
            for nib in sorted(lproj.glob("*.nib")):
                _decompile_one_nib(nib, locale_out)
                au_lproj_nibs += 1
        if au_lproj_nibs:
            _ok(f"Autoupdate.app localized NIBs: {au_lproj_nibs}")
            total += au_lproj_nibs

    _ok(f"NIBs total: {total} processed")
    return total


# ──────────────────────────────────────────────────────────────────────────────
# Phase 4: Plist conversion
# ──────────────────────────────────────────────────────────────────────────────


def convert_plists(contents_dir: Path, dirs: dict[str, Path]) -> int:
    """
    Convert all relevant plists in the app bundle to XML1 format.

    Sources:
        - Contents/Info.plist
        - Sparkle Resources/Info.plist
        - Sparkle Resources/SUModelTranslation.plist
        - Autoupdate.app/Contents/Info.plist

    Args:
        contents_dir: Path to TouchOSC.app/Contents/
        dirs:         Output directories

    Returns:
        Number of plists converted.
    """
    sparkle_res = _sparkle_resources(contents_dir)
    targets = [
        (contents_dir / "Info.plist",                                 "TouchOSC_Info.xml"),
        (sparkle_res / "Info.plist" if sparkle_res else None,        "Sparkle_Info.xml"),
        (sparkle_res / "SUModelTranslation.plist" if sparkle_res else None, "SUModelTranslation.xml"),
    ]
    au_contents = _autoupdate_app(contents_dir)
    if au_contents:
        targets.append((au_contents / "Info.plist", "Autoupdate_Info.xml"))

    count = 0
    for src, out_name in targets:
        if src is None or not src.exists():
            continue
        out = dirs["plists"] / out_name
        r = _run(["plutil", "-convert", "xml1", "-o", str(out), str(src)])
        if r.returncode == 0:
            count += 1
        else:
            shutil.copy2(src, dirs["plists"] / src.name)
            count += 1

    _ok(f"Plists: converted {count}")
    return count


# ──────────────────────────────────────────────────────────────────────────────
# Phase 5: Strings extraction
# ──────────────────────────────────────────────────────────────────────────────


def extract_strings_files(contents_dir: Path, dirs: dict[str, Path]) -> int:
    """
    Extract all .strings files from Sparkle and Autoupdate.app lproj dirs.

    Each locale's Sparkle.strings is converted from binary to XML1 and placed
    under the appropriate strings output directory.

    Args:
        contents_dir: Path to TouchOSC.app/Contents/
        dirs:         Output directories

    Returns:
        Total number of .strings files extracted.
    """
    sparkle_res = _sparkle_resources(contents_dir)
    total = 0

    def _extract_from_dir(src_base: Path, out_base: Path) -> int:
        count = 0
        for lproj in sorted(src_base.glob("*.lproj")):
            locale = lproj.stem
            locale_out = out_base / locale
            locale_out.mkdir(parents=True, exist_ok=True)
            for sf in sorted(lproj.glob("*.strings")):
                out_xml = locale_out / f"{sf.stem}.xml"
                r = _run(["plutil", "-convert", "xml1", "-o", str(out_xml), str(sf)])
                if r.returncode == 0:
                    count += 1
                else:
                    shutil.copy2(sf, locale_out / sf.name)
                    count += 1
        return count

    if sparkle_res:
        n = _extract_from_dir(sparkle_res, dirs["sparkle_strings"])
        _ok(f"Sparkle strings: {n} locale files")
        total += n

    au_contents = _autoupdate_app(contents_dir)
    if au_contents:
        n = _extract_from_dir(au_contents / "Resources", dirs["autoupdate_strings"])
        _ok(f"Autoupdate strings: {n} locale files")
        total += n

    return total


# ──────────────────────────────────────────────────────────────────────────────
# Phase 6: Assets.car
# ──────────────────────────────────────────────────────────────────────────────


def extract_asset_catalog(contents_dir: Path, catalog_dir: Path) -> dict:
    """
    Analyse Assets.car from Contents/Resources using xcrun assetutil + binwalk.

    Side effects:
        - Writes assets_car_info.json to catalog_dir
        - May write binwalk/ subdirectory of catalog_dir

    Returns:
        Dict with keys asset_count, asset_types, binwalk_extracted (if any).
    """
    car = contents_dir / "Resources" / "Assets.car"
    if not car.exists():
        _skip("Assets.car not found")
        return {}

    results: dict = {}

    r = _run(["xcrun", "assetutil", "--info", str(car)], timeout=30)
    if r.returncode == 0:
        info_out = catalog_dir / "assets_car_info.json"
        info_out.write_text(r.stdout, encoding="utf-8")
        try:
            info = json.loads(r.stdout)
            asset_types = [e.get("AssetType") for e in info if isinstance(e, dict) and "AssetType" in e]
            results["asset_count"] = len(asset_types)
            results["asset_types"] = sorted(set(asset_types))
            _ok(f"Assets.car: {len(asset_types)} assets ({', '.join(set(asset_types))})")
        except Exception:
            _ok("Assets.car: info JSON written")
    else:
        _fail(f"xcrun assetutil failed: {r.stderr.strip()[:80]}")

    if shutil.which("binwalk"):
        bw_out = catalog_dir / "binwalk"
        bw_out.mkdir(exist_ok=True)
        r2 = _run(["binwalk", "-e", "-C", str(bw_out), str(car)], timeout=60)
        extracted = [f for f in bw_out.rglob("*") if f.is_file()]
        if extracted:
            results["binwalk_extracted"] = len(extracted)
            _ok(f"Assets.car binwalk: {len(extracted)} files extracted")
        else:
            _skip(
                "Assets.car binwalk: no extractable images — "
                "pixel data in Apple LZFSE/CoreUI rendition format; "
                "catalog metadata only (use Asset Catalog Tinkerer for rendered images)"
            )

    return results


# ──────────────────────────────────────────────────────────────────────────────
# Phase 7: Embedded asset extraction (JUCE BinaryData)
# ──────────────────────────────────────────────────────────────────────────────

# Byte signatures used to count embedded asset types before extraction.
_ASSET_SIGS: list[tuple[str, bytes]] = [
    ("png",  b"\x89PNG"),
    ("jpeg", b"\xff\xd8\xff"),
    ("xml",  b"<?xml"),
    ("json", b'{"'),
    ("zip",  b"PK\x03\x04"),
    ("lua",  b"\x1bLua"),
]


def scan_embedded_assets(binary_path: Path) -> dict[str, int]:
    """
    Count byte-signature occurrences in a Mach-O binary to detect JUCE BinaryData.

    TouchOSC is built with JUCE, which compiles all UI resources — images, fonts,
    Lua scripts, XML configs — directly into the Mach-O via BinaryData::. There
    are no loose asset files in the bundle; everything lives inside the executable.

    Args:
        binary_path: Path to the Mach-O binary to scan.

    Returns:
        Dict mapping asset type name → occurrence count.
    """
    data = binary_path.read_bytes()
    return {name: data.count(sig) for name, sig in _ASSET_SIGS}


def extract_embedded_assets(binary_path: Path, output_dir: Path) -> dict:
    """
    Extract embedded JUCE BinaryData assets from the TouchOSC Mach-O binary.

    Uses binwalk's entropy-based file carving to recover embedded image/data files.
    Also writes a signature scan summary regardless of binwalk availability.

    Args:
        binary_path: Path to the Mach-O binary (TouchOSC universal binary).
        output_dir:  Destination directory (created if absent).

    Returns:
        Dict with keys: scan (per-type counts), extracted (int, files carved).

    Side effects:
        - Writes embedded_scan.json to output_dir
        - Writes binwalk/ subdirectory with carved files (if binwalk available)
    """
    output_dir.mkdir(parents=True, exist_ok=True)
    result: dict = {}

    # 1. Signature scan (always run — cheap, no external tool)
    counts = scan_embedded_assets(binary_path)
    result["scan"] = counts
    _atomic_write_json(output_dir / "embedded_scan.json", counts)
    total = sum(counts.values())
    _ok(
        f"Embedded asset scan: {total} signatures — "
        + ", ".join(f"{v} {k}" for k, v in counts.items() if v)
    )

    # 2. binwalk extraction (carves actual files)
    if not shutil.which("binwalk"):
        _skip("binwalk not available — signature scan only (install binwalk to carve files)")
        return result

    bw_out = output_dir / "binwalk"
    bw_out.mkdir(exist_ok=True)
    _log(f"  Running binwalk on {binary_path.name} ({binary_path.stat().st_size // 1024 // 1024} MB)…")
    r = _run(["binwalk", "-e", "-C", str(bw_out), str(binary_path)], timeout=600)
    carved = [f for f in bw_out.rglob("*") if f.is_file()]
    result["extracted"] = len(carved)

    if carved:
        # Summarise carved files by extension
        ext_counts: dict[str, int] = {}
        for f in carved:
            ext = f.suffix.lower() or "no-ext"
            ext_counts[ext] = ext_counts.get(ext, 0) + 1
        _ok(
            f"Embedded assets carved: {len(carved)} files — "
            + ", ".join(f"{v} {k}" for k, v in sorted(ext_counts.items(), key=lambda x: -x[1]))
        )
    else:
        _skip("binwalk ran but carved no files (compressed/encrypted data sections)")

    return result


# ──────────────────────────────────────────────────────────────────────────────
# Phase 8–10: Binary analysis
# ──────────────────────────────────────────────────────────────────────────────


def analyze_binary(binary_path: Path, analysis_dir: Path, label: str = "") -> dict:
    """
    Run strings/nm/otool static analysis on a single Mach-O binary.

    Produces in analysis_dir:
        strings.txt, symbols.txt, linked_libraries.txt,
        load_commands.txt, objc_classes.txt,
        strings_urls.txt, strings_file_paths.txt, strings_class_names.txt,
        strings_objc_selectors.txt, strings_error_messages.txt, strings_api_keys.txt

    Args:
        binary_path:  Absolute path to the Mach-O binary.
        analysis_dir: Output directory (created if absent).
        label:        Human-readable name used in log output.

    Returns:
        Dict with keys: binary, name, string_count, symbol_count,
        linked_libraries, objc_class_count.
    """
    analysis_dir.mkdir(parents=True, exist_ok=True)
    label = label or binary_path.name
    results: dict = {"binary": str(binary_path), "name": label}

    # strings
    strings_out = analysis_dir / "strings.txt"
    r = _run(["strings", "-a", "-n", "5", str(binary_path)], timeout=120)
    if r.returncode == 0:
        strings_out.write_text(r.stdout, encoding="utf-8")
        results["string_count"] = len(r.stdout.splitlines())
        _ok(f"{label}: {results['string_count']} strings")
    else:
        _fail(f"{label}: strings failed")

    # nm -a (symbol table)
    syms_out = analysis_dir / "symbols.txt"
    r = _run(["nm", "-a", str(binary_path)], timeout=120)
    if r.returncode == 0:
        syms_out.write_text(r.stdout, encoding="utf-8")
        results["symbol_count"] = len(r.stdout.splitlines())
        _ok(f"{label}: {results['symbol_count']} symbols")
    else:
        r2 = _run(["nm", str(binary_path)], timeout=120)
        if r2.returncode == 0:
            syms_out.write_text(r2.stdout, encoding="utf-8")
            results["symbol_count"] = len(r2.stdout.splitlines())
            _ok(f"{label}: {results['symbol_count']} symbols (nm fallback)")

    # otool -L (linked libraries)
    libs_out = analysis_dir / "linked_libraries.txt"
    r = _run(["otool", "-L", str(binary_path)], timeout=30)
    if r.returncode == 0:
        libs_out.write_text(r.stdout, encoding="utf-8")
        libs = [ln.strip().split(" ")[0] for ln in r.stdout.splitlines()[1:] if ln.strip()]
        results["linked_libraries"] = libs
        _ok(f"{label}: {len(libs)} linked libraries")
    else:
        _fail(f"{label}: otool -L failed")

    # otool -l (load commands)
    load_out = analysis_dir / "load_commands.txt"
    r = _run(["otool", "-l", str(binary_path)], timeout=120)
    if r.returncode == 0:
        load_out.write_text(r.stdout, encoding="utf-8")
        _ok(f"{label}: load commands ({len(r.stdout.splitlines())} lines)")
    else:
        _fail(f"{label}: otool -l failed")

    # otool -ov (ObjC class / method dump)
    objc_out = analysis_dir / "objc_classes.txt"
    r = _run(["otool", "-ov", str(binary_path)], timeout=180)
    if r.returncode == 0:
        objc_out.write_text(r.stdout, encoding="utf-8")
        class_count = r.stdout.count("Meta Class")
        results["objc_class_count"] = class_count
        _ok(f"{label}: ObjC dump ({class_count} classes)")
    else:
        _skip(f"{label}: otool -ov failed")

    # Categorised string extraction
    _extract_categorized_strings(analysis_dir)

    return results


def _extract_categorized_strings(analysis_dir: Path) -> None:
    """
    Split strings.txt into themed category files for quick inspection.

    Categories written (only when non-empty):
        strings_urls.txt, strings_file_paths.txt, strings_class_names.txt,
        strings_objc_selectors.txt, strings_error_messages.txt, strings_api_keys.txt

    Side effects:
        Writes files under analysis_dir.
    """
    sf = analysis_dir / "strings.txt"
    if not sf.exists():
        return
    all_strings = sf.read_text(encoding="utf-8", errors="ignore").splitlines()
    categories = {
        "urls":             [s for s in all_strings if re.match(r"https?://", s)],
        "file_paths":       [s for s in all_strings if re.match(r"(/[A-Za-z_.]|\.\.?/)", s)],
        "class_names":      [s for s in all_strings if re.match(r"^[A-Z][A-Za-z0-9]{4,}$", s) and len(s) < 80],
        "objc_selectors":   [s for s in all_strings if re.match(r"^[a-z][A-Za-z0-9:_]{3,}$", s) and ":" in s],
        "error_messages":   [s for s in all_strings if any(w in s.lower() for w in ("error", "fail", "cannot", "unable", "invalid"))],
        "api_keys":         [s for s in all_strings if re.match(r"[A-Za-z0-9+/]{20,}={0,2}$", s) and len(s) > 28],
    }
    for cat, strings in categories.items():
        if strings:
            out = analysis_dir / f"strings_{cat}.txt"
            out.write_text("\n".join(sorted(set(strings))[:2000]), encoding="utf-8")


def analyze_all_binaries(contents_dir: Path, dirs: dict[str, Path]) -> list[dict]:
    """
    Analyze all Mach-O binaries in the TouchOSC bundle.

    Binaries analyzed:
        1. Contents/MacOS/TouchOSC        → binary/
        2. Sparkle.framework/Sparkle      → frameworks/Sparkle/
        3. Autoupdate.app/MacOS/Autoupdate → apps/Autoupdate/
        4. Autoupdate.app/MacOS/fileop    → apps/Autoupdate/

    Each result dict is stamped with dest_binary_path and exec_dir_rel for
    MANIFEST.json construction.

    Args:
        contents_dir: Path to TouchOSC.app/Contents/
        dirs:         Output directories

    Returns:
        List of result dicts (one per binary analyzed).
    """
    results = []

    # 1. Main binary: TouchOSC
    main_bin = contents_dir / "MacOS" / "TouchOSC"
    if main_bin.exists():
        _log("\n[+] Analyzing main binary: TouchOSC")
        dest_bin = dirs["binary"] / "TouchOSC"
        shutil.copy2(main_bin, dest_bin)
        _log("  → Extracting embedded JUCE BinaryData assets…")
        extract_embedded_assets(dest_bin, dirs["binary"] / "embedded_assets")
        r = analyze_binary(main_bin, dirs["binary_analysis"], "TouchOSC")
        r["dest_binary_path"] = "binary/TouchOSC"
        r["exec_dir_rel"] = "binary/analysis"
        results.append(r)
    else:
        _fail("Main binary TouchOSC not found")

    # 2. Sparkle framework
    sparkle_res = _sparkle_resources(contents_dir)
    sparkle_bin = contents_dir / "Frameworks" / "Sparkle.framework" / "Versions" / "A" / "Sparkle"
    if not sparkle_bin.exists():
        # Try the symlink at framework root
        sparkle_bin = contents_dir / "Frameworks" / "Sparkle.framework" / "Sparkle"
    if sparkle_bin.exists():
        _log("\n[+] Analyzing framework: Sparkle")
        shutil.copy2(sparkle_bin, dirs["sparkle"] / "Sparkle")
        # Copy Sparkle's Info.plist
        if sparkle_res:
            fw_plist = sparkle_res / "Info.plist"
            if fw_plist.exists():
                xml_out = dirs["sparkle"] / "Info.xml"
                rp = _run(["plutil", "-convert", "xml1", "-o", str(xml_out), str(fw_plist)])
                if rp.returncode != 0:
                    shutil.copy2(fw_plist, dirs["sparkle"] / "Info.plist")
        r = analyze_binary(sparkle_bin, dirs["sparkle_analysis"], "Sparkle")
        r["dest_binary_path"] = "frameworks/Sparkle/Sparkle"
        r["exec_dir_rel"] = "frameworks/Sparkle/analysis"
        results.append(r)
    else:
        _skip("Sparkle binary not found")

    # 3. Autoupdate sub-app
    au_contents = _autoupdate_app(contents_dir)
    if au_contents:
        au_bin = au_contents / "MacOS" / "Autoupdate"
        if au_bin.exists():
            _log("\n[+] Analyzing sub-app binary: Autoupdate")
            shutil.copy2(au_bin, dirs["autoupdate"] / "Autoupdate")
            r = analyze_binary(au_bin, dirs["autoupdate_analysis"], "Autoupdate")
            r["dest_binary_path"] = "apps/Autoupdate/Autoupdate"
            r["exec_dir_rel"] = "apps/Autoupdate/analysis_Autoupdate"
            results.append(r)

        # 4. fileop helper
        fileop_bin = au_contents / "MacOS" / "fileop"
        if fileop_bin.exists():
            _log("\n[+] Analyzing sub-app binary: fileop")
            shutil.copy2(fileop_bin, dirs["autoupdate"] / "fileop")
            r = analyze_binary(fileop_bin, dirs["fileop_analysis"], "fileop")
            r["dest_binary_path"] = "apps/Autoupdate/fileop"
            r["exec_dir_rel"] = "apps/Autoupdate/analysis_fileop"
            results.append(r)

    return results


# ──────────────────────────────────────────────────────────────────────────────
# Phase 10: MANIFEST.json + AGENTS.md + report
# ──────────────────────────────────────────────────────────────────────────────


def write_manifest(
    target_root: Path,
    source_path: Path,
    binary_results: list[dict],
    plist_info: dict,
) -> None:
    """
    Write MANIFEST.json with relative binary paths (no hardcoded absolute paths).

    Args:
        target_root:    Root of the target output directory.
        source_path:    Original source .app path (stored as metadata only).
        binary_results: List of analysis result dicts from analyze_all_binaries().
        plist_info:     Dict with app_name, bundle_id, version from Info.plist.

    Side effects:
        Writes targets/TouchOSC/MANIFEST.json
    """
    binaries = []
    for b in binary_results:
        name = b.get("name", "unknown")
        binaries.append({
            "binary_name": name,
            "binary_path": b.get("dest_binary_path", f"binary/{name}"),
            "exec_dir": b.get("exec_dir_rel", "binary/analysis"),
            "string_count": b.get("string_count"),
            "symbol_count": b.get("symbol_count"),
            "objc_class_count": b.get("objc_class_count"),
            "linked_libraries": b.get("linked_libraries", []),
        })

    manifest = {
        "schema_version": 1,
        "app_name": plist_info.get("app_name", "TouchOSC"),
        "bundle_id": plist_info.get("bundle_id", "net.hexler.lex"),
        "version": plist_info.get("version", "unknown"),
        "platform": "macOS",
        "architecture": "universal (x86_64 + arm64)",
        "extracted_at": datetime.now(timezone.utc).isoformat(),
        "source": str(source_path.resolve()),
        "binaries": binaries,
    }
    _atomic_write_json(target_root / "MANIFEST.json", manifest)
    _ok("MANIFEST.json written")


def _read_plist_info(contents_dir: Path) -> dict:
    """
    Read basic metadata from TouchOSC Contents/Info.plist.

    Returns:
        Dict with app_name, bundle_id, version — all strings.
        Falls back to empty strings on any read failure.
    """
    info_plist = contents_dir / "Info.plist"
    if not info_plist.exists():
        return {}
    r = _run(["plutil", "-convert", "json", "-o", "-", str(info_plist)])
    if r.returncode != 0:
        return {}
    try:
        data = json.loads(r.stdout)
        return {
            "app_name": data.get("CFBundleName", "TouchOSC"),
            "bundle_id": data.get("CFBundleIdentifier", "net.hexler.lex"),
            "version": data.get("CFBundleShortVersionString", "unknown"),
        }
    except Exception:
        return {}


def write_agents_md(target_root: Path, plist_info: dict, binary_results: list[dict]) -> None:
    """
    Write AGENTS.md with target notes, directory layout, and analysis TODOs.

    Args:
        target_root:    Root of the target output directory.
        plist_info:     App metadata from Info.plist.
        binary_results: Binary analysis results from analyze_all_binaries().

    Side effects:
        Writes targets/TouchOSC/AGENTS.md
    """
    version = plist_info.get("version", "unknown")
    bundle_id = plist_info.get("bundle_id", "net.hexler.lex")

    bin_rows = "\n".join(
        f"| `{b['name']}` | "
        f"{b.get('string_count', 0)} strings, "
        f"{b.get('symbol_count', 0)} symbols, "
        f"{b.get('objc_class_count', 0)} ObjC classes |"
        for b in binary_results
    )

    content = f"""\
# TouchOSC — Target Notes

**Extracted**: {datetime.now(timezone.utc).strftime('%Y-%m-%d %H:%M UTC')}
**Source**: macOS universal binary app bundle
**App**: TouchOSC {version} (`{bundle_id}`)
**Binaries**: Universal Mach-O (x86_64 + arm64)

---

## Directory Layout

| Path | Contents |
|------|----------|
| `binary/` | TouchOSC main binary + `analysis/` (strings/symbols/otool outputs) |
| `frameworks/Sparkle/` | Sparkle.framework binary + NIBs + strings + Info.xml + `analysis/` |
| `apps/Autoupdate/` | Autoupdate + fileop binaries + NIBs + strings + analysis dirs |
| `resources/nibs/` | Base.lproj/MainMenu.nib (main app UI — ibtool decompiled) |
| `resources/asset_catalog/` | Assets.car metadata (xcrun assetutil JSON) |
| `resources/misc/` | AppIcon.icns, document icons, dsa_pub.pem, PkgInfo |
| `plists/` | Info.plists converted to XML1 (app + Sparkle + Autoupdate) |
| `strings/` | Placeholder (app has no separate localized strings dir) |
| `reports/` | extraction_report.md |

---

## Binary Summary

| Binary | Stats |
|--------|-------|
{bin_rows}

---

## Key Architecture Observations

- **JUCE Framework** — primary UI/audio framework (C++ templates in symbol table)
- **POCO Libraries** — networking, threading, utilities
- **OpenGL/GLM** — graphics rendering with math library
- **Lua scripting** — embedded scripting engine (BindLX / BindGLM symbols)
- **OSC Protocol** — /ping, /pong, /connections/osc, /connections/midi, etc.
- **Full MIDI I/O** — SysEx, bridge, gamepad support
- **Sparkle** — macOS software update framework (dsa_pub.pem for signature verification)
- **HTTP server** — embedded web UI for configuration (preferences menus found in strings)

---

## Document Formats

| Extension | Format | Contents |
|-----------|--------|----------|
| `.tosc` | ZIP archive containing XML | TouchOSC layout (new format) |
| `.touchosc` | Binary plist | TouchOSC Classic layout |

---

## Analysis TODOs

- [ ] Run Ghidra on `binary/TouchOSC` (universal; target `arm64` slice)
- [ ] Extract ObjC class hierarchy (`otool -ov` → `analysis/objc_classes.txt`)
- [ ] Cross-reference OSC/MIDI strings with call graph
- [ ] Decompile Lua bytecode modules embedded in binary
- [ ] Extract 420+ JPEG images via deeper binary carving
- [ ] Map HTTP server UI config to settings schema
- [ ] Document `.tosc` XML schema from strings evidence
"""
    _atomic_write_text(target_root / "AGENTS.md", content)
    _ok("AGENTS.md written")


def write_report(
    target_root: Path,
    contents_dir: Path,
    plist_info: dict,
    nib_count: int,
    plist_count: int,
    strings_count: int,
    car_results: dict,
    binary_results: list[dict],
) -> None:
    """
    Write a human-readable extraction report to reports/extraction_report.md.

    Args:
        target_root:    Root of the target output directory.
        contents_dir:   Source Contents/ directory (for context).
        plist_info:     App metadata.
        nib_count:      Total NIBs processed.
        plist_count:    Total plists converted.
        strings_count:  Total .strings locale files extracted.
        car_results:    Asset catalog analysis results dict.
        binary_results: Binary analysis results.

    Side effects:
        Writes targets/TouchOSC/reports/extraction_report.md
    """
    bin_section = ""
    for b in binary_results:
        bin_section += (
            f"### `{b['name']}`\n"
            f"- Strings: {b.get('string_count', 0)}\n"
            f"- Symbols: {b.get('symbol_count', 0)}\n"
            f"- ObjC classes: {b.get('objc_class_count', 0)}\n"
            f"- Linked libraries: {len(b.get('linked_libraries', []))}\n\n"
        )

    car_section = ""
    if car_results:
        car_section = (
            f"- **Asset count**: {car_results.get('asset_count', 0)}\n"
            f"- **Asset types**: {', '.join(car_results.get('asset_types', []))}\n"
        )
        if car_results.get("binwalk_extracted"):
            car_section += f"- **Binwalk extracted**: {car_results['binwalk_extracted']} files\n"
        else:
            car_section += (
                "> **Toolchain limitation**: `Assets.car` uses Apple's BOM-stream/CoreUI format.\n"
                "> `xcrun assetutil` extracts only catalog metadata (JSON); pixel data is stored\n"
                "> as LZFSE-compressed renditions that `binwalk` cannot decompose.\n"
                "> To extract rendered PNG/PDF assets, use **Asset Catalog Tinkerer** (macOS GUI tool).\n"
            )

    lines = [
        "# TouchOSC Extraction Report",
        "",
        f"**Generated**: {datetime.now(timezone.utc).strftime('%Y-%m-%d %H:%M UTC')}",
        f"**Source**: `{contents_dir.parent}`",
        f"**App**: TouchOSC {plist_info.get('version', '?')} ({plist_info.get('bundle_id', '?')})",
        f"**Platform**: macOS universal (x86_64 + arm64)",
        "",
        "## Extraction Summary",
        "",
        f"| Phase | Result |",
        f"|-------|--------|",
        f"| NIBs decompiled | {nib_count} |",
        f"| Plists converted | {plist_count} |",
        f"| Strings locale files | {strings_count} |",
        f"| Asset catalog | {'✓' if car_results else '⚠ not found'} |",
        f"| Binaries analyzed | {len(binary_results)} |",
        "",
        "## Binary Analysis",
        "",
        bin_section,
        "## Asset Catalog",
        "",
        car_section or "Assets.car not found.\n",
    ]
    _atomic_write_text(target_root / "reports" / "extraction_report.md", "\n".join(lines))
    _ok("extraction_report.md written")


# ──────────────────────────────────────────────────────────────────────────────
# Main pipeline
# ──────────────────────────────────────────────────────────────────────────────


def main() -> None:
    parser = argparse.ArgumentParser(
        description="Extract + statically analyze TouchOSC.app bundle"
    )
    parser.add_argument(
        "--source",
        default=os.getenv("TOUCHOSC_SOURCE"),
        help="Path to TouchOSC.app (or set TOUCHOSC_SOURCE env var)",
    )
    parser.add_argument(
        "--targets-dir",
        default=os.getenv("AETHER_TARGETS_DIR", str(REPO_ROOT / "targets")),
        help="Root targets directory (or set AETHER_TARGETS_DIR env var)",
    )
    args = parser.parse_args()

    if not args.source:
        parser.error("--source is required (or set TOUCHOSC_SOURCE env var)")

    source_path = Path(args.source).resolve()
    if not source_path.exists():
        parser.error(f"Source path does not exist: {source_path}")

    # Accept either TouchOSC.app or TouchOSC.app/Contents
    if source_path.name == "Contents":
        contents_dir = source_path
        source_path = source_path.parent
    else:
        contents_dir = source_path / "Contents"

    if not contents_dir.exists():
        parser.error(f"Contents/ not found under {source_path}")

    target_root = Path(args.targets_dir) / "TouchOSC"
    target_root.mkdir(parents=True, exist_ok=True)

    _log("=" * 60)
    _log("TouchOSC Extraction Pipeline")
    _log(f"  Source  : {source_path}")
    _log(f"  Target  : {target_root}")
    _log("=" * 60)

    # Phase 1
    _log("\n[Phase 1] Setting up target directories...")
    dirs = setup_target_dirs(target_root)
    _ok(f"Directories: {len(dirs)} created")

    # Phase 2
    _log("\n[Phase 2] Copying macOS resources...")
    copy_resources(contents_dir, dirs)

    # Phase 3
    _log("\n[Phase 3] Decompiling NIBs...")
    nib_count = decompile_nibs(contents_dir, dirs)

    # Phase 4
    _log("\n[Phase 4] Converting plists...")
    plist_count = convert_plists(contents_dir, dirs)

    # Phase 5
    _log("\n[Phase 5] Extracting strings files...")
    strings_count = extract_strings_files(contents_dir, dirs)

    # Phase 6
    _log("\n[Phase 6] Analysing Assets.car...")
    car_results = extract_asset_catalog(contents_dir, dirs["res_catalog"])

    # Phases 7–10 (binary analysis + embedded assets)
    _log("\n[Phases 7–10] Running binary analysis + embedded asset extraction...")
    binary_results = analyze_all_binaries(contents_dir, dirs)

    # Phase 11
    _log("\n[Phase 11] Writing MANIFEST, AGENTS.md, report...")
    plist_info = _read_plist_info(contents_dir)
    write_manifest(target_root, source_path, binary_results, plist_info)
    write_agents_md(target_root, plist_info, binary_results)
    write_report(
        target_root, contents_dir, plist_info,
        nib_count, plist_count, strings_count,
        car_results, binary_results,
    )

    _log("\n" + "=" * 60)
    _log("✓ TouchOSC extraction complete")
    _log(f"  Output: {target_root}")
    _log("=" * 60)


if __name__ == "__main__":
    main()
