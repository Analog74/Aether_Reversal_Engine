#!/usr/bin/env python3
# Created: 2026-02-20 UTC
"""
@system MIDIDesignerExtractor
@brief Full decompile + asset extraction pipeline for MIDIDesigner iOS app bundle
@phase Phase 1 - Asset/static extraction

PURPOSE:
    Decompile and extract all tangible assets from the MIDIDesigner iOS app bundle
    (IPA-style wrapped bundle at MIDIDesigner.app/Wrapper/ProX.app). Produces a
    fully organized target directory: assets, decompiled NIBs, plists, binaries,
    framework analysis, sub-bundle contents, and reports.

ARCHITECTURE:
    - Phase 1:  Loose asset copy (PNG/JPG/HEIC/TTF/WAV/HTML) with subcategorization
    - Phase 2:  HEIC → PNG conversion via sips
    - Phase 3:  NIB decompilation via ibtool --decompile
    - Phase 4:  Storyboard decompilation via ibtool
    - Phase 5:  Plist conversion via plutil (binary → XML1)
    - Phase 6:  Localizable.strings conversion (each locale)
    - Phase 7:  .mididesigner extraction (binary plist → XML1)
    - Phase 8:  Assets.car: xcrun assetutil --info JSON + binwalk image extraction
    - Phase 9:  Binary analysis: strings / nm / otool (ProX + all frameworks)
    - Phase 10: Sub-bundle exploration (LinkKit, Mixpanel, RevenueCat)
    - Phase 11: Misc text resources (credits.html, public key, app plists)
    - Phase 12: MANIFEST.json + AGENTS.md + extraction report

USER WORKFLOW:
    python scripts/extract_mididesigner.py --source /path/to/MIDIDesigner.app
    (or set MIDIDESIGNER_SOURCE env var)

INTEGRATION POINTS:
    - Source : --source arg or env MIDIDESIGNER_SOURCE
    - Targets: --targets-dir arg or env AETHER_TARGETS_DIR (default: "targets")
    - Output : targets/MIDIDesigner/
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

# ──────────────────────────────────────────────────────────────────────────────
# Helpers
# ──────────────────────────────────────────────────────────────────────────────

REPO_ROOT = Path(__file__).parents[1]
if str(REPO_ROOT) not in sys.path:
    sys.path.insert(0, str(REPO_ROOT))

from factory.core.nib_parser import parse_nibarchive, validate_nib_sidecar  # noqa: E402


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


# ──────────────────────────────────────────────────────────────────────────────
# Directory structure
# ──────────────────────────────────────────────────────────────────────────────

def setup_target_dirs(target_root: Path) -> dict[str, Path]:
    """Create and return all output subdirectories."""
    dirs: dict[str, Path] = {
        "assets":          target_root / "assets",
        "assets_images":   target_root / "assets" / "images",
        "assets_icons":    target_root / "assets" / "icons",
        "assets_textures": target_root / "assets" / "textures",
        "assets_ui":       target_root / "assets" / "ui",
        "assets_tutorial": target_root / "assets" / "tutorial",
        "assets_waveforms":target_root / "assets" / "waveforms",
        "assets_catalog":  target_root / "assets" / "asset_catalog",
        "assets_bundles":  target_root / "assets" / "bundles",
        "audio":           target_root / "audio",
        "fonts":           target_root / "fonts",
        "html":            target_root / "html",
        "nibs":            target_root / "nibs",
        "storyboards":     target_root / "storyboards",
        "plists":          target_root / "plists",
        "strings":         target_root / "strings",
        "mididesigner":    target_root / "mididesigner",
        "binary":          target_root / "binary",
        "binary_analysis": target_root / "binary" / "analysis",
        "frameworks":      target_root / "frameworks",
        "reports":         target_root / "reports",
        "misc":            target_root / "misc",
    }
    for d in dirs.values():
        d.mkdir(parents=True, exist_ok=True)
    return dirs


# ──────────────────────────────────────────────────────────────────────────────
# Phase 1: Loose asset copy
# ──────────────────────────────────────────────────────────────────────────────

def _asset_category(name: str) -> str:
    """Route a loose filename to an asset subcategory."""
    low = name.lower()
    if low.startswith("icon-") or low.startswith("icon_"):
        return "icons"
    if low.startswith("texture-"):
        return "textures"
    if re.match(r"(ipad|phone)-tutorial", low):
        return "tutorial"
    if low.startswith("waveform"):
        return "waveforms"
    # UI chrome
    if any(
        tok in low
        for tok in (
            "splash", "button", "slider", "knob", "pan", "zoom", "undo",
            "home", "help", "led-", "midi-", "lock", "sticky", "star",
            "next_", "previous_", "left-", "right-", "loading", "page-",
            "mdpx", "label", "mini_lcd", "imagePanel", "panel", "picker",
            "shape", "xypad", "crossfader", "dude", "dudex", "mididesignerdude",
        )
    ):
        return "ui"
    return "images"


def copy_loose_assets(app_dir: Path, dirs: dict[str, Path]) -> dict[str, int]:
    counts: dict[str, int] = {}

    # Image formats (PNG/JPG/HEIC)
    for ext in ("*.png", "*.jpg", "*.jpeg", "*.heic", "*.HEIC"):
        for src in sorted(app_dir.glob(ext)):
            cat = _asset_category(src.stem)
            dest = dirs[f"assets_{cat}"] / src.name
            shutil.copy2(src, dest)
            counts[cat] = counts.get(cat, 0) + 1

    # Font
    for src in sorted(app_dir.glob("*.ttf")):
        shutil.copy2(src, dirs["fonts"] / src.name)
        counts["fonts"] = counts.get("fonts", 0) + 1

    # Audio
    for src in sorted(app_dir.glob("*.wav")):
        shutil.copy2(src, dirs["audio"] / src.name)
        counts["audio"] = counts.get("audio", 0) + 1

    # HTML / txt
    for src in sorted(app_dir.glob("*.html")):
        shutil.copy2(src, dirs["html"] / src.name)
        counts["html"] = counts.get("html", 0) + 1

    total = sum(counts.values())
    _ok(f"Loose assets: {total} files copied → " +
        ", ".join(f"{v} {k}" for k, v in sorted(counts.items())))
    return counts


# ──────────────────────────────────────────────────────────────────────────────
# Phase 2: HEIC → PNG conversion
# ──────────────────────────────────────────────────────────────────────────────

def convert_heic(dirs: dict[str, Path]) -> int:
    """Convert all .heic files in assets/tutorial to .png using sips."""
    if not shutil.which("sips"):
        _skip("sips not found – HEIC files kept as-is")
        return 0

    converted = 0
    for heic in sorted((dirs["assets_tutorial"]).glob("*.heic")):
        png_out = heic.with_suffix(".png")
        r = _run(["sips", "-s", "format", "png", str(heic), "--out", str(png_out)])
        if r.returncode == 0 and png_out.exists():
            heic.unlink()
            converted += 1
        else:
            _fail(f"sips failed on {heic.name}: {r.stderr.strip()[:80]}")

    if converted:
        _ok(f"HEIC→PNG: converted {converted} tutorial images")
    return converted


# ──────────────────────────────────────────────────────────────────────────────
# Phase 3: NIB decompilation
# ──────────────────────────────────────────────────────────────────────────────

def decompile_nibs(app_dir: Path, nibs_dir: Path) -> int:
    """
    Copy iOS NIBArchive .nib files and produce a JSON info sidecar for each.
    ibtool's --decompile flag is not available on modern macOS, and iOS
    NIBArchive binaries cannot be processed by the macOS ibtool at all.
    We instead copy the raw binary + extract structural metadata.
    """
    nibs = sorted(app_dir.glob("*.nib"))
    if not nibs:
        _skip("No .nib files found")
        return 0

    count = 0
    for nib in nibs:
        # Copy raw binary
        dest = nibs_dir / nib.name
        shutil.copy2(nib, dest)

        # Parse sidecar via factory.core.nib_parser (schemas/nib_sidecar.v1.json)
        info = parse_nibarchive(nib)
        valid, errs = validate_nib_sidecar(info)
        if not valid:
            _skip(f"{nib.name}: sidecar schema violations: {errs}")

        _atomic_write_json(nibs_dir / f"{nib.stem}.info.json", info)

        # Human-readable summary
        summary_lines = [
            f"# NIBArchive: {nib.name}",
            f"# parser_version: {info.get('parser_version', '?')}",
            "",
        ]
        if "error" in info:
            summary_lines.append(f"Error: {info['error']}")
        else:
            summary_lines += [
                f"Format  : {info.get('format', '?')} v{info.get('version', '?')}",
                f"Objects : {info.get('n_objects', '?')}",
                f"Keys    : {info.get('n_keys', '?')}",
                f"Values  : {info.get('n_values', '?')}",
                "",
                "## UIKit / Framework Classes",
            ]
            for cls in info.get("class_names", []):
                summary_lines.append(f"  - {cls}")
            summary_lines += ["", "## UIKit Property Keys"]
            for k in info.get("key_names", [])[:80]:
                summary_lines.append(f"  - {k}")
            summary_lines += ["", "## Outlet / iVar Names"]
            for o in info.get("outlet_names", [])[:60]:
                summary_lines.append(f"  - {o}")

        _atomic_write_text(nibs_dir / f"{nib.stem}.txt", "\n".join(summary_lines))
        count += 1

    _ok(f"NIBs: {count} copied + schema-validated sidecars written (iOS NIBArchive — ibtool N/A)")
    return count


# ──────────────────────────────────────────────────────────────────────────────
# Phase 4: Storyboard decompilation
# ──────────────────────────────────────────────────────────────────────────────

def decompile_storyboards(app_dir: Path, storyboards_dir: Path) -> int:
    if not shutil.which("ibtool"):
        _skip("ibtool not found – skipping storyboard decompilation")
        return 0

    count = 0
    for sbc in sorted(app_dir.glob("*.storyboardc")):
        out_xml = storyboards_dir / f"{sbc.stem}.xml"
        r = _run(["ibtool", "--decompile", str(out_xml), str(sbc)])
        if r.returncode != 0:
            # fallback: copy raw storyboardc directory
            dest = storyboards_dir / sbc.name
            if dest.exists():
                shutil.rmtree(dest)
            shutil.copytree(sbc, dest)
        count += 1

    _ok(f"Storyboards: processed {count}")
    return count


# ──────────────────────────────────────────────────────────────────────────────
# Phase 5: Plist conversion
# ──────────────────────────────────────────────────────────────────────────────

def convert_plists(app_dir: Path, plists_dir: Path, wrapper_dir: Path) -> int:
    count = 0
    for plist in sorted(
        list(app_dir.glob("*.plist")) + list(app_dir.glob("*.plist.xml"))
        + list(wrapper_dir.glob("*.plist"))
    ):
        out = plists_dir / f"{plist.name.replace('.plist', '')}.xml"
        if out.exists():
            continue
        r = _run(["plutil", "-convert", "xml1", "-o", str(out), str(plist)])
        if r.returncode == 0:
            count += 1
        else:
            # Already xml or unrecognized – just copy
            shutil.copy2(plist, plists_dir / plist.name)
            count += 1

    _ok(f"Plists: converted {count}")
    return count


# ──────────────────────────────────────────────────────────────────────────────
# Phase 6: Localizable.strings
# ──────────────────────────────────────────────────────────────────────────────

def extract_strings_files(app_dir: Path, strings_dir: Path) -> int:
    count = 0
    for lproj in sorted(app_dir.glob("*.lproj")):
        locale = lproj.stem
        locale_out = strings_dir / locale
        locale_out.mkdir(exist_ok=True)
        for sf in sorted(lproj.glob("*.strings")):
            out = locale_out / f"{sf.stem}.xml"
            r = _run(["plutil", "-convert", "xml1", "-o", str(out), str(sf)])
            if r.returncode == 0:
                count += 1
            else:
                shutil.copy2(sf, locale_out / sf.name)
                count += 1

    _ok(f"Strings: extracted {count} locale files")
    return count


# ──────────────────────────────────────────────────────────────────────────────
# Phase 7: .mididesigner files
# ──────────────────────────────────────────────────────────────────────────────

def extract_mididesigner_files(app_dir: Path, md_dir: Path) -> int:
    """
    .mididesigner files are binary plists – convert them to XML1 so they're
    readable. Also attempt ZIP extraction (some older versions are ZIP archives).
    """
    count = 0
    for src in sorted(app_dir.glob("*.mididesigner")):
        base_name = src.stem.replace(" ", "_").replace("/", "_")
        xml_out = md_dir / f"{base_name}.xml"
        r = _run(["plutil", "-convert", "xml1", "-o", str(xml_out), str(src)])
        if r.returncode == 0 and xml_out.exists():
            _ok(f"  .mididesigner → XML: {src.name}")
            count += 1
        else:
            # Try treating as ZIP (some versions are ZIP archives)
            zip_out = md_dir / base_name
            zip_out.mkdir(exist_ok=True)
            r2 = _run(["unzip", "-q", "-o", str(src), "-d", str(zip_out)])
            if r2.returncode == 0:
                _ok(f"  .mididesigner → ZIP extracted: {src.name}")
                count += 1
            else:
                # Just copy raw
                shutil.copy2(src, md_dir / src.name)
                _skip(f"  .mididesigner raw copy (unknown format): {src.name}")
                count += 1

    _ok(f"MIDIDesigner files: processed {count}")
    return count


# ──────────────────────────────────────────────────────────────────────────────
# Phase 8: Assets.car
# ──────────────────────────────────────────────────────────────────────────────

def extract_asset_catalog(app_dir: Path, catalog_dir: Path) -> dict:
    car = app_dir / "Assets.car"
    if not car.exists():
        _skip("Assets.car not found")
        return {}

    results: dict = {}

    # 1) xcrun assetutil --info → JSON metadata
    r = _run(["xcrun", "assetutil", "--info", str(car)], timeout=30)
    if r.returncode == 0:
        info_out = catalog_dir / "assets_car_info.json"
        info_out.write_text(r.stdout, encoding="utf-8")
        try:
            info = json.loads(r.stdout)
            asset_types = [e.get("AssetType") for e in info if isinstance(e, dict) and "AssetType" in e]
            results["asset_count"] = len(asset_types)
            results["asset_types"] = sorted(set(asset_types))
            _ok(f"Assets.car: {len(asset_types)} assets catalogued ({', '.join(set(asset_types))})")
        except Exception:
            _ok("Assets.car: info JSON written")
    else:
        _fail(f"xcrun assetutil failed: {r.stderr.strip()[:80]}")

    # 2) binwalk extraction of image data embedded in .car
    if shutil.which("binwalk"):
        bw_out = catalog_dir / "binwalk"
        bw_out.mkdir(exist_ok=True)
        r2 = _run(
            ["binwalk", "-e", "-C", str(bw_out), str(car)],
            timeout=60,
        )
        extracted = [f for f in bw_out.rglob("*") if f.is_file()]
        if extracted:
            results["binwalk_extracted"] = len(extracted)
            _ok(f"Assets.car binwalk: {len(extracted)} embedded files extracted")
        else:
            _skip(
                "Assets.car binwalk: no extractable images found — "
                "pixel data is in Apple LZFSE/CoreUI rendition format; "
                "catalog metadata only (see reports/extraction_report.md)"
            )

    return results


# ──────────────────────────────────────────────────────────────────────────────
# Phase 9: Binary analysis
# ──────────────────────────────────────────────────────────────────────────────

def analyze_binary(binary_path: Path, analysis_dir: Path, label: str = "") -> dict:
    analysis_dir.mkdir(parents=True, exist_ok=True)
    label = label or binary_path.name
    results: dict = {"binary": str(binary_path), "name": label}

    # strings
    strings_out = analysis_dir / "strings.txt"
    r = _run(["strings", "-a", "-n", "5", str(binary_path)], timeout=60)
    if r.returncode == 0:
        strings_out.write_text(r.stdout, encoding="utf-8")
        results["string_count"] = len(r.stdout.splitlines())
        _ok(f"{label}: {results['string_count']} strings extracted")
    else:
        _fail(f"{label}: strings failed")

    # nm -a (symbol table)
    syms_out = analysis_dir / "symbols.txt"
    r = _run(["nm", "-a", str(binary_path)], timeout=60)
    if r.returncode == 0:
        syms_out.write_text(r.stdout, encoding="utf-8")
        results["symbol_count"] = len(r.stdout.splitlines())
        _ok(f"{label}: {results['symbol_count']} symbols")
    else:
        # nm -a may fail on stripped iOS binaries; try without -a
        r2 = _run(["nm", str(binary_path)], timeout=60)
        if r2.returncode == 0:
            syms_out.write_text(r2.stdout, encoding="utf-8")
            results["symbol_count"] = len(r2.stdout.splitlines())
            _ok(f"{label}: {results['symbol_count']} symbols (nm fallback)")

    # otool -L (linked libraries)
    libs_out = analysis_dir / "linked_libraries.txt"
    r = _run(["otool", "-L", str(binary_path)], timeout=30)
    if r.returncode == 0:
        libs_out.write_text(r.stdout, encoding="utf-8")
        libs = [l.strip().split(" ")[0] for l in r.stdout.splitlines()[1:] if l.strip()]
        results["linked_libraries"] = libs
        _ok(f"{label}: {len(libs)} linked libraries")
    else:
        _fail(f"{label}: otool -L failed")

    # otool -l (load commands / full headers)
    load_out = analysis_dir / "load_commands.txt"
    r = _run(["otool", "-l", str(binary_path)], timeout=60)
    if r.returncode == 0:
        load_out.write_text(r.stdout, encoding="utf-8")
        _ok(f"{label}: load commands dumped ({len(r.stdout.splitlines())} lines)")
    else:
        _fail(f"{label}: otool -l failed")

    # otool -ov (ObjC method lists / class dump)
    objc_out = analysis_dir / "objc_classes.txt"
    r = _run(["otool", "-ov", str(binary_path)], timeout=90)
    if r.returncode == 0:
        objc_out.write_text(r.stdout, encoding="utf-8")
        class_count = r.stdout.count("Meta Class")
        results["objc_class_count"] = class_count
        _ok(f"{label}: ObjC dump ({class_count} classes)")
    else:
        _skip(f"{label}: otool -ov failed (may need class-dump for full output)")

    # Categorized strings extraction (URLs, file paths, class names, etc.)
    _extract_categorized_strings(analysis_dir)

    return results


def _extract_categorized_strings(analysis_dir: Path) -> None:
    strings_file = analysis_dir / "strings.txt"
    if not strings_file.exists():
        return

    all_strings = strings_file.read_text(encoding="utf-8", errors="ignore").splitlines()

    categories = {
        "urls":         [s for s in all_strings if re.match(r"https?://", s)],
        "file_paths":   [s for s in all_strings if re.match(r"(/[A-Za-z_.]|\.\.?/)", s)],
        "class_names":  [s for s in all_strings if re.match(r"^[A-Z][A-Za-z0-9]{4,}$", s) and len(s) < 80],
        "objc_selectors": [s for s in all_strings if re.match(r"^[a-z][A-Za-z0-9:_]{3,}$", s) and ":" in s],
        "error_messages": [s for s in all_strings if any(w in s.lower() for w in ("error", "fail", "cannot", "unable", "invalid"))],
        "api_keys":     [s for s in all_strings if re.match(r"[A-Za-z0-9+/]{20,}={0,2}$", s) and len(s) > 28],
    }

    for cat, strings in categories.items():
        if strings:
            out = analysis_dir / f"strings_{cat}.txt"
            out.write_text("\n".join(sorted(set(strings))[:2000]), encoding="utf-8")


def analyze_all_binaries(app_dir: Path, dirs: dict[str, Path]) -> list[dict]:
    results = []

    # Main binary
    main_binary = app_dir / "ProX"
    if main_binary.exists():
        _log("\n[+] Analyzing main binary: ProX")
        shutil.copy2(main_binary, dirs["binary"] / "ProX")
        r = analyze_binary(main_binary, dirs["binary_analysis"], "ProX")
        r["dest_binary_path"] = "binary/ProX"
        r["exec_dir_rel"] = "binary/analysis"
        results.append(r)
    else:
        _fail("Main binary ProX not found")

    # Frameworks
    fw_dir = app_dir / "Frameworks"
    if fw_dir.exists():
        for fw in sorted(fw_dir.iterdir()):
            if not fw.is_dir():
                continue
            fw_name = fw.stem
            # Find the binary inside the framework
            fw_binary = fw / fw_name
            if not fw_binary.exists():
                # Try without extension
                candidates = [f for f in fw.iterdir() if f.is_file() and f.suffix == ""]
                if candidates:
                    fw_binary = candidates[0]
                else:
                    _skip(f"No binary found in {fw.name}")
                    continue

            _log(f"\n[+] Analyzing framework: {fw_name}")
            fw_out = dirs["frameworks"] / fw_name
            fw_out.mkdir(parents=True, exist_ok=True)
            # Copy the binary
            shutil.copy2(fw_binary, fw_out / fw_binary.name)
            # Copy Info.plist if present
            fw_plist = fw / "Info.plist"
            if fw_plist.exists():
                plist_xml = fw_out / "Info.xml"
                r_p = _run(["plutil", "-convert", "xml1", "-o", str(plist_xml), str(fw_plist)])
                if r_p.returncode != 0:
                    shutil.copy2(fw_plist, fw_out / "Info.plist")

            # Copy framework bundle assets (PNGs, NIBs, etc.)
            IMAGE_EXTS = {".png", ".jpg", ".jpeg", ".heic", ".gif"}
            img_count = 0
            for asset in sorted(fw.iterdir()):
                if not asset.is_file():
                    continue
                sfx = asset.suffix.lower()
                if sfx in IMAGE_EXTS:
                    shutil.copy2(asset, fw_out / asset.name)
                    img_count += 1
                elif sfx == ".nib":
                    shutil.copy2(asset, fw_out / asset.name)
                    nib_info = parse_nibarchive(asset)
                    valid, errs = validate_nib_sidecar(nib_info)
                    if not valid:
                        _skip(f"  {asset.name} sidecar: {errs}")
                    _atomic_write_json(fw_out / f"{asset.stem}.info.json", nib_info)
            if img_count:
                _ok(f"  {fw_name}: {img_count} asset image(s) copied")

            r = analyze_binary(fw_binary, fw_out / "analysis", fw_name)
            r["dest_binary_path"] = f"frameworks/{fw_name}/{fw_name}"
            r["exec_dir_rel"] = f"frameworks/{fw_name}/analysis"
            results.append(r)

    return results


# ──────────────────────────────────────────────────────────────────────────────
# Phase 10: Sub-bundle exploration
# ──────────────────────────────────────────────────────────────────────────────

def extract_sub_bundles(app_dir: Path, bundles_dir: Path) -> int:
    count = 0
    for bundle in sorted(app_dir.glob("*.bundle")):
        out = bundles_dir / bundle.name
        if out.exists():
            shutil.rmtree(out)
        shutil.copytree(bundle, out)
        _ok(f"Bundle copied: {bundle.name} ({_dir_file_count(bundle)} files)")

        # Convert any plists inside
        for plist in out.rglob("*.plist"):
            xml_out = plist.with_suffix(".xml")
            if not xml_out.exists():
                _run(["plutil", "-convert", "xml1", "-o", str(xml_out), str(plist)])

        count += 1

    return count


def _dir_file_count(d: Path) -> int:
    return sum(1 for _ in d.rglob("*") if _.is_file())


# ──────────────────────────────────────────────────────────────────────────────
# Phase 11: Misc text resources
# ──────────────────────────────────────────────────────────────────────────────

def copy_misc_resources(app_dir: Path, dirs: dict[str, Path]) -> None:
    copies = [
        ("rsa-public-key.txt",  dirs["misc"] / "rsa-public-key.txt"),
        ("DR-apps.plist.xml",   dirs["misc"] / "DR-apps.plist.xml"),
        ("omac_apps.plist",     dirs["misc"] / "omac_apps.xml"),
        ("PrivacyInfo.xcprivacy", dirs["misc"] / "PrivacyInfo.xcprivacy"),
        ("PkgInfo",             dirs["misc"] / "PkgInfo"),
    ]
    for src_name, dest in copies:
        src = app_dir / src_name
        if src.exists():
            if src_name == "omac_apps.plist":
                r = _run(["plutil", "-convert", "xml1", "-o", str(dest), str(src)])
                if r.returncode != 0:
                    shutil.copy2(src, dest)
            else:
                shutil.copy2(src, dest)

    # SC_Info directory
    sc_info = app_dir / "SC_Info"
    if sc_info.exists():
        shutil.copytree(sc_info, dirs["misc"] / "SC_Info", dirs_exist_ok=True)

    # iTunesMetadata and BundleMetadata from Wrapper
    wrapper = app_dir.parent
    for meta_plist in ("iTunesMetadata.plist", "BundleMetadata.plist"):
        src = wrapper / meta_plist
        if src.exists():
            xml_out = dirs["misc"] / f"{Path(meta_plist).stem}.xml"
            r = _run(["plutil", "-convert", "xml1", "-o", str(xml_out), str(src)])
            if r.returncode != 0:
                shutil.copy2(src, dirs["misc"] / meta_plist)


# ──────────────────────────────────────────────────────────────────────────────
# Phase 12: MANIFEST.json, AGENTS.md, report
# ──────────────────────────────────────────────────────────────────────────────

def write_manifest(target_root: Path, source_path: Path, binary_results: list[dict]) -> None:
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
        })

    manifest = {
        "schema_version": 1,
        "app_name": "MIDIDesigner Pro",
        "bundle_id": "com.jazzmutant.mididesigner",
        "platform": "iOS",
        "architecture": "arm64",
        "extracted_at": datetime.now(timezone.utc).isoformat(),
        "source": str(source_path.resolve()),
        "binaries": binaries,
    }
    _atomic_write_json(target_root / "MANIFEST.json", manifest)
    _ok("MANIFEST.json written")


def write_agents_md(target_root: Path) -> None:
    content = f"""\
# MIDIDesigner — Target Notes

**Extracted**: {datetime.now(timezone.utc).strftime('%Y-%m-%d %H:%M UTC')}
**Source**: iOS IPA-style wrapped bundle (`MIDIDesigner.app/Wrapper/ProX.app/`)
**App**: MIDIDesigner Pro (MIDI controller designer for iPad/iPhone)
**Binary**: `ProX` — ARM64 iOS Mach-O (cannot run on macOS; static analysis only)

---

## Directory Layout

| Path | Contents |
|------|----------|
| `assets/images/` | Loose PNG/JPG assets |
| `assets/icons/` | icon-*.png UI icons |
| `assets/textures/` | texture-*.jpg background textures |
| `assets/ui/` | UI chrome: splashes, buttons, knobs, sliders, etc. |
| `assets/tutorial/` | ipad-tutorial*.png + phone-tutorial*.png (HEIC→PNG converted) |
| `assets/waveforms/` | waveform:*.png LFO waveform graphics |
| `assets/asset_catalog/` | Assets.car metadata + binwalk extraction |
| `assets/bundles/` | LinkKitResources.bundle, Mixpanel.bundle, RevenueCat.bundle contents |
| `audio/` | blank.wav and any other audio |
| `fonts/` | DigitalLCD.ttf |
| `html/` | credits.html |
| `nibs/` | Decompiled .nib → XML (via ibtool) |
| `storyboards/` | Decompiled .storyboardc |
| `plists/` | Info.plist, DR-apps.plist.xml, etc. (binary→XML1) |
| `strings/` | Localizable.strings per locale (en/es/fr/it/ja) |
| `mididesigner/` | .mididesigner preset files converted from binary plist→XML |
| `binary/` | ProX binary copy + analysis (strings, symbols, linked libs, ObjC classes) |
| `frameworks/` | ConfusionUtilFramework / ObjectiveDropboxOfficial / SimpleAlertLib |
| `misc/` | rsa-public-key.txt, SC_Info/, wrapper metadata plists |
| `reports/` | extraction_report.md |

---

## Key Observations

- **Asset catalog** (`Assets.car`): Contains app icons and a small number of programmatic
  assets (colors, gradients). Main UI assets are delivered as loose PNG/JPG files.
- **Fonts**: `DigitalLCD.ttf` — custom LCD-style font used for numeric displays
- **MIDI preset files**: `*.mididesigner` are binary plists converted to readable XML.
  Contains MIDI controller layout definitions.
- **Frameworks**:
  - `ConfusionUtilFramework` — internal utility framework (obfuscated name)
  - `ObjectiveDropboxOfficial` — Dropbox SDK for cloud sync
  - `SimpleAlertLib` — alert presentation utility
  - `Sentry` — crash reporting (binary not fully extracted here)
- **Security**: `rsa-public-key.txt` present — likely for license verification

---

## Analysis TODOs

- [ ] Run Ghidra on `ProX` ARM64 binary (requires Ghidra iOS support / `ghidra_engine.py`)
- [ ] Cross-reference ObjC class dump with MIDI protocol strings
- [ ] Analyze `.mididesigner` XML schema for MIDI mapping format documentation
- [ ] Inspect `ConfusionUtilFramework` for obfuscation patterns
- [ ] Map `Localizable.strings` keys to UI elements
"""
    _atomic_write_text(target_root / "AGENTS.md", content)
    _ok("AGENTS.md written")


def write_report(
    target_root: Path,
    app_dir: Path,
    loose_counts: dict[str, int],
    heic_converted: int,
    nib_count: int,
    sb_count: int,
    plist_count: int,
    strings_count: int,
    md_count: int,
    car_results: dict,
    binary_results: list[dict],
) -> None:
    lines = [
        "# MIDIDesigner Extraction Report",
        "",
        f"**Generated**: {datetime.now(timezone.utc).strftime('%Y-%m-%d %H:%M UTC')}",
        f"**Source**: `{app_dir}`",
        "",
        "## Asset Summary",
        "",
        "| Category | Count |",
        "|----------|-------|",
    ]

    total_loose = sum(loose_counts.values())
    for cat, n in sorted(loose_counts.items()):
        lines.append(f"| Loose {cat} | {n} |")
    lines += [
        f"| HEIC→PNG converted | {heic_converted} |",
        f"| NIBs decompiled | {nib_count} |",
        f"| Storyboards | {sb_count} |",
        f"| Plists converted | {plist_count} |",
        f"| .strings locale files | {strings_count} |",
        f"| .mididesigner files | {md_count} |",
        f"| Assets.car assets | {car_results.get('asset_count', 0)} |",
        f"| Assets.car binwalk | {car_results.get('binwalk_extracted', 0)} |",
        "",
        "## Binary Analysis",
        "",
        "| Binary | Strings | Symbols | ObjC Classes |",
        "|--------|---------|---------|--------------|",
    ]

    for b in binary_results:
        lines.append(
            f"| {b.get('name')} | {b.get('string_count', '—')} | "
            f"{b.get('symbol_count', '—')} | {b.get('objc_class_count', '—')} |"
        )

    lines += [
        "",
        "## Asset Catalog (`Assets.car`)",
        "",
        "> **Toolchain limitation**: `Assets.car` uses Apple's BOM-stream/CoreUI",
        "> format. Image render is not supported by `assetutil` on macOS (no",
        "> `--render` flag). Binwalk finds no extractable PNG/JPEG payloads because",
        "> pixel data is stored in Apple's internal LZFSE-compressed rendition format.",
        "> This file is catalogued metadata-only; to extract rendered images use a",
        "> jailbroken device or a CoreUI-aware tool (e.g. `Asset Catalog Tinkerer`).",
        "",
    ]
    if car_results.get("asset_types"):
        lines.append("**Types**: " + ", ".join(car_results["asset_types"]))
    else:
        lines.append("_Asset catalog info not available._")

    lines += [
        "",
        "## Linked Libraries (ProX)",
        "",
    ]
    prox = next((b for b in binary_results if b.get("name") == "ProX"), {})
    for lib in prox.get("linked_libraries", []):
        lines.append(f"- `{lib}`")

    report_text = "\n".join(lines) + "\n"
    _atomic_write_text(target_root / "reports" / "extraction_report.md", report_text)
    _ok("reports/extraction_report.md written")


# ──────────────────────────────────────────────────────────────────────────────
# Entry point
# ──────────────────────────────────────────────────────────────────────────────

def main() -> int:
    ap = argparse.ArgumentParser(
        description="Full decompile + asset extraction for MIDIDesigner iOS bundle"
    )
    ap.add_argument(
        "--source",
        default=os.getenv("MIDIDESIGNER_SOURCE"),
        help="Path to MIDIDesigner.app (the wrapped bundle root). "
             "Env: MIDIDESIGNER_SOURCE",
    )
    ap.add_argument(
        "--targets-dir",
        default=os.getenv("AETHER_TARGETS_DIR", str(REPO_ROOT / "targets")),
        help="Targets root directory. Env: AETHER_TARGETS_DIR",
    )
    args = ap.parse_args()

    if not args.source:
        ap.error(
            "--source is required (or set MIDIDESIGNER_SOURCE env var)\n"
            "  Example: --source /path/to/MIDIDesigner.app"
        )

    source_path = Path(args.source)
    if not source_path.exists():
        print(f"ERROR: source path does not exist: {source_path}", file=sys.stderr)
        return 1

    # Discover ProX.app inside the wrapped bundle
    prox_app = source_path / "Wrapper" / "ProX.app"
    if not prox_app.exists():
        # Maybe caller passed ProX.app directly
        if (source_path / "ProX").exists():
            prox_app = source_path
        else:
            print(f"ERROR: cannot find ProX.app inside {source_path}", file=sys.stderr)
            return 1

    targets_dir = Path(args.targets_dir)
    target_root = targets_dir / "MIDIDesigner"

    _log("=" * 70)
    _log("MIDIDesigner iOS App — Full Extraction Pipeline")
    _log("=" * 70)
    _log(f"Source  : {prox_app}")
    _log(f"Target  : {target_root}")
    _log("")

    # Delete existing target and create fresh structure
    if target_root.exists():
        shutil.rmtree(target_root)
    dirs = setup_target_dirs(target_root)
    _ok("Target directory structure created")

    # ── Phase 1: Loose assets ────────────────────────────────────────────────
    _log("\n[Phase 1] Loose asset copy")
    loose_counts = copy_loose_assets(prox_app, dirs)

    # ── Phase 2: HEIC conversion ─────────────────────────────────────────────
    _log("\n[Phase 2] HEIC → PNG conversion")
    heic_converted = convert_heic(dirs)

    # ── Phase 3: NIB decompilation ───────────────────────────────────────────
    _log("\n[Phase 3] NIB decompilation")
    nib_count = decompile_nibs(prox_app, dirs["nibs"])

    # ── Phase 4: Storyboard decompilation ────────────────────────────────────
    _log("\n[Phase 4] Storyboard decompilation")
    sb_count = decompile_storyboards(prox_app, dirs["storyboards"])

    # ── Phase 5: Plist conversion ────────────────────────────────────────────
    _log("\n[Phase 5] Plist conversion")
    plist_count = convert_plists(prox_app, dirs["plists"], prox_app.parent)

    # ── Phase 6: .strings files ──────────────────────────────────────────────
    _log("\n[Phase 6] Localizable.strings extraction")
    strings_count = extract_strings_files(prox_app, dirs["strings"])

    # ── Phase 7: .mididesigner files ─────────────────────────────────────────
    _log("\n[Phase 7] .mididesigner file extraction")
    md_count = extract_mididesigner_files(prox_app, dirs["mididesigner"])

    # ── Phase 8: Assets.car ──────────────────────────────────────────────────
    _log("\n[Phase 8] Assets.car extraction")
    car_results = extract_asset_catalog(prox_app, dirs["assets_catalog"])

    # ── Phase 9: Binary analysis ─────────────────────────────────────────────
    _log("\n[Phase 9] Binary analysis")
    binary_results = analyze_all_binaries(prox_app, dirs)

    # ── Phase 10: Sub-bundles ────────────────────────────────────────────────
    _log("\n[Phase 10] Sub-bundle extraction")
    bundle_count = extract_sub_bundles(prox_app, dirs["assets_bundles"])
    _ok(f"Sub-bundles: {bundle_count} processed")

    # ── Phase 11: Misc resources ─────────────────────────────────────────────
    _log("\n[Phase 11] Misc resources")
    copy_misc_resources(prox_app, dirs)
    _ok("Misc resources copied")

    # ── Phase 12: MANIFEST + AGENTS + Report ─────────────────────────────────
    _log("\n[Phase 12] Metadata + Report")
    write_manifest(target_root, source_path, binary_results)
    write_agents_md(target_root)
    write_report(
        target_root, prox_app,
        loose_counts, heic_converted, nib_count, sb_count,
        plist_count, strings_count, md_count, car_results, binary_results,
    )

    _log("\n" + "=" * 70)
    _log(f"Extraction complete → {target_root}")
    _log("=" * 70)
    return 0


if __name__ == "__main__":
    sys.exit(main())
