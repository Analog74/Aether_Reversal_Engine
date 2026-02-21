#!/usr/bin/env python3
# Created: 2026-02-20 • Part of Aether RE toolkit
"""
@brief Stage B — raw texture reconstructor for v::TextureAtlas buffers.

PURPOSE:
  Consumes the JSON produced by ExtractTextureAtlas.java (Stage A).
  Maps each callsite's pixels_ptr virtual address to a file offset in the
  Mach-O binary, reads the raw pixel bytes, reconstructs PIL Images, runs
  sanity checks (entropy, dimensions), and writes per-image PNGs plus a
  contact sheet.

ARCHITECTURE:
  - MachOParser: minimal struct-based parser that builds vaddr→slice-fileoff maps
    for arm64 and x86_64 slices in FAT or single-arch Mach-O binaries.
  - TextureReconstructor: loads the JSON, resolves pixel pointers, reconstructs
    images, applies sanity filters, writes output.
  - ContactSheetBuilder: tiles valid PNGs into a single overview image.

USER WORKFLOW:
  1. Run ExtractTextureAtlas.java to get texture_atlas.json
  2. Run this script:
       python3 scripts/reconstruct_textures.py \\
         --json targets/TouchOSC/exec/TouchOSC/texture_atlas.json \\
         --binary targets/TouchOSC/binary/TouchOSC \\
         --out targets/TouchOSC/textures/ \\
         [--arch arm64|x86_64] [--min-confidence MEDIUM] [--contact-sheet]
  3. Optionally compare against Frida dynamic results:
       python3 scripts/reconstruct_textures.py --compare frida_dump.json ...

INTEGRATION POINTS:
  - Input:  texture_atlas.json (from ExtractTextureAtlas.java)
  - Input:  binary (Mach-O, fat or single-arch)
  - Output: <out>/images/<call_addr>.png  — per-image PNGs
  - Output: <out>/contact_sheet.png       — overview grid
  - Output: <out>/reconstruction_report.json — stats + sanity results

PERFORMANCE NOTES:
  - Mach-O parsing is O(load_commands), typically < 50ms
  - Image reconstruction is O(width * height) per callsite; 500 callsites
    at 64x64 RGBA8 = ~8MB total, negligible
"""

import argparse
import json
import math
import struct
import sys
from pathlib import Path

# PIL / Pillow is required.  `pip install Pillow`
try:
    from PIL import Image, ImageDraw, ImageFont
    _PIL_AVAILABLE = True
except ImportError:
    _PIL_AVAILABLE = False

# ── Constants ─────────────────────────────────────────────────────────────────

MACHO_MAGIC_FAT_BE  = 0xCAFEBABE
MACHO_MAGIC_FAT_LE  = 0xBEBAFECA
MACHO_MAGIC_64_LE   = 0xFEEDFACF  # single-arch 64-bit little-endian
MACHO_MAGIC_64_BE   = 0xCEFAEDFE
LC_SEGMENT_64       = 0x19

CPU_TYPE_ARM64      = 0x0100000C  # ARM64
CPU_TYPE_X86_64     = 0x01000007  # x86_64

BYTES_PER_PIXEL = {
    "A8": 1, "R8": 1,
    "RGB8": 3,
    "RGBA8": 4,
    "RGBA16F": 8,
    "RGBA32F": 16,
    "UNKNOWN": 4,          # assume RGBA8 as best-effort fallback
}

PIL_MODES = {
    "A8":      ("L",  1),
    "R8":      ("L",  1),
    "RGB8":    ("RGB", 3),
    "RGBA8":   ("RGBA", 4),
    "RGBA16F": ("RGBA", 4),  # truncate to 8-bit per channel
    "RGBA32F": ("RGBA", 4),  # truncate to 8-bit per channel
    "UNKNOWN": ("RGBA", 4),
}

CONFIDENCE_RANK = {"HIGH": 3, "MEDIUM": 2, "LOW": 1, "DECOMPILE_FAILED": 0}

# ── Mach-O parser ─────────────────────────────────────────────────────────────

class Segment:
    """A parsed LC_SEGMENT_64 entry."""

    __slots__ = ("name", "vmaddr", "vmsize", "fileoff", "filesize")

    def __init__(self, name: str, vmaddr: int, vmsize: int, fileoff: int, filesize: int):
        self.name     = name
        self.vmaddr   = vmaddr
        self.vmsize   = vmsize
        self.fileoff  = fileoff
        self.filesize = filesize


class MachOSlice:
    """
    One arch slice from a FAT or single-arch Mach-O.

    Attributes:
        cpu_type (int):    CPU type constant (ARM64, X86_64, etc.)
        file_offset (int): Byte offset of this slice's start within the file.
        segments (list[Segment]): All LC_SEGMENT_64 entries.
    """

    def __init__(self, cpu_type: int, file_offset: int, segments: list):
        self.cpu_type    = cpu_type
        self.file_offset = file_offset
        self.segments    = segments

    def vaddr_to_file_offset(self, vaddr: int) -> int | None:
        """
        Map a virtual address to a byte offset within the file.

        Returns:
            File offset, or None if vaddr falls outside all known segments.
        """
        for seg in self.segments:
            if seg.vmaddr <= vaddr < seg.vmaddr + seg.vmsize:
                # Translate into file
                seg_rel   = vaddr - seg.vmaddr
                file_pos  = self.file_offset + seg.fileoff + seg_rel
                return file_pos
        return None


class MachOParser:
    """
    Minimal Mach-O parser: supports FAT (multi-arch) and single-arch 64-bit binaries.

    Args:
        path: Path to the Mach-O binary.

    Usage:
        parser = MachOParser(Path("TouchOSC"))
        slice  = parser.get_slice(CPU_TYPE_ARM64)
        offset = slice.vaddr_to_file_offset(0x100368f48)
    """

    def __init__(self, path: Path):
        self.path   = path
        self.slices: list[MachOSlice] = []
        self._data  = path.read_bytes()
        self._parse()

    def _parse(self):
        magic = struct.unpack_from(">I", self._data, 0)[0]
        if magic in (MACHO_MAGIC_FAT_BE, MACHO_MAGIC_FAT_LE):
            self._parse_fat()
        else:
            magic_le = struct.unpack_from("<I", self._data, 0)[0]
            if magic_le == MACHO_MAGIC_64_LE:
                self.slices.append(self._parse_slice(0))
            else:
                raise ValueError(f"Unrecognised Mach-O magic: {magic:#010x}")

    def _parse_fat(self):
        # fat_header: magic(4) + nfat_arch(4)
        nfat = struct.unpack_from(">I", self._data, 4)[0]
        off  = 8
        for _ in range(nfat):
            # fat_arch: cputype(4) + cpusubtype(4) + offset(4) + size(4) + align(4)
            cpu_type, _, slice_off, _slice_size, _ = struct.unpack_from(">IIIII", self._data, off)
            self.slices.append(self._parse_slice(slice_off, cpu_type))
            off += 20

    def _parse_slice(self, base: int, cpu_type: int = 0) -> MachOSlice:
        # mach_header_64: magic(4)+cputype(4)+cpusubtype(4)+filetype(4)+ncmds(4)+sizeofcmds(4)+flags(4)+reserved(4)
        magic_le, cputype_le, _, _, ncmds, sizeofcmds, _, _ = struct.unpack_from("<IIIIIIII", self._data, base)
        if cpu_type == 0:
            cpu_type = cputype_le
        segments: list[Segment] = []
        lc_off = base + 32
        for _ in range(ncmds):
            cmd, cmdsize = struct.unpack_from("<II", self._data, lc_off)
            if cmd == LC_SEGMENT_64:
                # segment_command_64: cmd(4)+cmdsize(4)+segname(16)+vmaddr(8)+vmsize(8)+fileoff(8)+filesize(8)+...
                segname = self._data[lc_off + 8: lc_off + 24].rstrip(b"\x00").decode("ascii", errors="replace")
                vmaddr, vmsize, fileoff, filesize = struct.unpack_from("<QQQQ", self._data, lc_off + 24)
                segments.append(Segment(segname, vmaddr, vmsize, fileoff, filesize))
            lc_off += cmdsize
        return MachOSlice(cpu_type, base, segments)

    def get_slice(self, cpu_type: int = CPU_TYPE_ARM64) -> MachOSlice:
        """
        Return the slice for the requested CPU type.

        Falls back to the first available slice if the requested type is absent.

        Args:
            cpu_type: CPU type constant (CPU_TYPE_ARM64, CPU_TYPE_X86_64, etc.)

        Returns:
            The matching MachOSlice.

        Side effects:
            Prints a warning if the requested arch is not found.
        """
        for s in self.slices:
            if s.cpu_type == cpu_type:
                return s
        if self.slices:
            print(f"  [warn] Requested cpu_type={cpu_type:#x} not found; using first slice (cpu_type={self.slices[0].cpu_type:#x})")
            return self.slices[0]
        raise ValueError("No Mach-O slices parsed")


# ── Sanity checks ─────────────────────────────────────────────────────────────

def image_entropy(img: "Image.Image") -> float:
    """
    Compute Shannon entropy over the image's pixel histogram.

    Returns:
        Entropy in bits per pixel (0–8 range for 8-bit channels).
    """
    hist = img.convert("L").histogram()
    total = sum(hist)
    if total == 0:
        return 0.0
    entropy = 0.0
    for count in hist:
        if count > 0:
            p = count / total
            entropy -= p * math.log2(p)
    return entropy


def passes_sanity(img: "Image.Image", width: int, height: int) -> tuple[bool, str]:
    """
    Check if a reconstructed image looks like real UI data.

    Args:
        img:    Reconstructed PIL Image.
        width:  Expected width.
        height: Expected height.

    Returns:
        (passes: bool, reason: str)

    Side effects:
        None.
    """
    # Dimension sanity
    if img.width != width or img.height != height:
        return False, f"size_mismatch: got {img.size} expected ({width},{height})"

    entropy = image_entropy(img)

    # Pure noise: entropy ~7.9–8.0 bits.  Solid colour: ~0.  UI assets: 2–7.
    if entropy < 0.05:
        return False, f"solid_colour: entropy={entropy:.2f}"
    if entropy > 7.8:
        return False, f"random_noise: entropy={entropy:.2f}"

    # Extreme pixel variance can indicate garbage reads
    arr_grey = list(img.convert("L").getdata())
    mean = sum(arr_grey) / len(arr_grey)
    variance = sum((x - mean) ** 2 for x in arr_grey) / len(arr_grey)
    if variance < 1.0:
        return False, f"zero_variance: stddev={variance**0.5:.2f}"

    return True, f"ok: entropy={entropy:.2f}"


# ── Reconstructor ─────────────────────────────────────────────────────────────

class TextureReconstructor:
    """
    Reconstructs per-region PNGs from a Stage A JSON + Mach-O binary.

    Args:
        callsites (list[dict]): Entries from texture_atlas.json.
        binary_data (bytes):    Full file contents of the Mach-O binary.
        macho_slice (MachOSlice): Parsed Mach-O slice for address mapping.
        out_dir (Path):         Output directory for images.
        min_confidence (str):   Minimum confidence level to attempt reconstruction.
    """

    def __init__(self, callsites: list, binary_data: bytes,
                 macho_slice: MachOSlice, out_dir: Path, min_confidence: str = "MEDIUM"):
        self.callsites      = callsites
        self.binary_data    = binary_data
        self.slice          = macho_slice
        self.out_dir        = out_dir
        self.min_rank       = CONFIDENCE_RANK.get(min_confidence, 2)
        self.results: list  = []

    def run(self) -> dict:
        """
        Attempt reconstruction for all eligible callsites.

        Returns:
            stats dict: {attempted, succeeded, rejected_sanity, skipped_confidence, errors}
        """
        img_dir = self.out_dir / "images"
        img_dir.mkdir(parents=True, exist_ok=True)

        stats = {"attempted": 0, "succeeded": 0, "rejected_sanity": 0,
                 "skipped_confidence": 0, "errors": 0}

        for cs in self.callsites:
            confidence = cs.get("confidence", "LOW")
            if CONFIDENCE_RANK.get(confidence, 0) < self.min_rank:
                stats["skipped_confidence"] += 1
                self.results.append(_make_result(cs, "SKIPPED", f"confidence={confidence}"))
                continue

            pixels_ptr = cs.get("pixels_ptr", "UNKNOWN")
            width      = cs.get("width",  "UNKNOWN")
            height     = cs.get("height", "UNKNOWN")
            fmt        = cs.get("format", "UNKNOWN")

            if any(v == "UNKNOWN" for v in (pixels_ptr, width, height)):
                stats["skipped_confidence"] += 1
                self.results.append(_make_result(cs, "SKIPPED", "missing pixels_ptr/dims"))
                continue

            # Normalize format name (strip _INFERRED suffix)
            fmt_key = fmt.replace("_INFERRED", "")
            bpp = BYTES_PER_PIXEL.get(fmt_key, 4)
            mode, channels = PIL_MODES.get(fmt_key, ("RGBA", 4))

            stats["attempted"] += 1
            try:
                img, reason = self._reconstruct(pixels_ptr, width, height, bpp, mode, channels)
                if img is None:
                    stats["errors"] += 1
                    self.results.append(_make_result(cs, "ERROR", reason))
                    continue

                ok, sanity_reason = passes_sanity(img, width, height)
                call_addr = cs.get("call_addr", "unknown").replace(":", "_")
                out_path  = self.out_dir / "images" / f"{call_addr}.png"
                img.save(str(out_path))

                if ok:
                    stats["succeeded"] += 1
                    self.results.append(_make_result(cs, "OK", sanity_reason,
                                                     str(out_path.relative_to(self.out_dir.parent))))
                else:
                    stats["rejected_sanity"] += 1
                    self.results.append(_make_result(cs, "REJECTED_SANITY", sanity_reason,
                                                     str(out_path.relative_to(self.out_dir.parent))))

            except Exception as e:
                stats["errors"] += 1
                self.results.append(_make_result(cs, "ERROR", str(e)))

        return stats

    def _reconstruct(self, pixels_ptr_hex: str, width: int, height: int,
                     bpp: int, mode: str, channels: int) -> tuple:
        """
        Read raw pixel bytes from binary and create a PIL Image.

        Args:
            pixels_ptr_hex: Hex virtual address string e.g. "0x1003a2000".
            width, height:  Image dimensions.
            bpp:            Bytes per pixel for the actual stored format.
            mode:           PIL mode string.
            channels:       Number of channels in the PIL mode.

        Returns:
            (PIL.Image | None, reason_string)
        """
        try:
            vaddr = int(pixels_ptr_hex, 16)
        except (ValueError, TypeError):
            return None, f"invalid pixels_ptr: {pixels_ptr_hex}"

        file_off = self.slice.vaddr_to_file_offset(vaddr)
        if file_off is None:
            return None, f"vaddr {pixels_ptr_hex} outside all segments"

        nbytes = width * height * bpp
        if file_off + nbytes > len(self.binary_data):
            return None, f"read would exceed file size (off={file_off:#x} + {nbytes} > {len(self.binary_data)})"

        raw = self.binary_data[file_off: file_off + nbytes]

        # For float formats, convert to uint8 by clamping to [0,255]
        if bpp in (8, 16):  # 16F or 32F: 4 channels but float
            import array as _arr
            fmt_char = "e" if bpp == 8 else "f"  # half or float
            per_ch   = bpp // channels
            unpacked = _arr.array(fmt_char, raw)
            clamped  = bytes(min(255, max(0, int(v * 255))) for v in unpacked)
            raw = clamped
            bpp = channels  # now 1 byte per channel

        try:
            img = Image.frombytes(mode, (width, height), raw)
        except Exception as e:
            return None, f"Image.frombytes failed: {e}"

        return img, "ok"


# ── Contact sheet ─────────────────────────────────────────────────────────────

def build_contact_sheet(image_paths: list[Path], out_path: Path,
                        thumb_size: tuple = (128, 128), columns: int = 16):
    """
    Tile all images into a single contact-sheet PNG.

    Args:
        image_paths: Paths to input PNG files.
        out_path:    Output path for the contact sheet.
        thumb_size:  (width, height) for each thumbnail cell.
        columns:     Number of columns in the grid.
    """
    if not image_paths:
        print("  [skip] no images for contact sheet")
        return
    if not _PIL_AVAILABLE:
        print("  [skip] Pillow not available")
        return

    imgs = []
    for p in image_paths:
        try:
            im = Image.open(str(p)).convert("RGBA")
            im.thumbnail(thumb_size, Image.LANCZOS)
            imgs.append(im)
        except Exception:
            pass

    if not imgs:
        return

    rows  = math.ceil(len(imgs) / columns)
    tw, th = thumb_size
    sheet = Image.new("RGBA", (tw * columns, th * rows), (30, 30, 30, 255))

    for i, im in enumerate(imgs):
        col = i % columns
        row = i // columns
        x   = col * tw + (tw - im.width)  // 2
        y   = row * th + (th - im.height) // 2
        sheet.paste(im, (x, y), mask=im.split()[-1] if im.mode == "RGBA" else None)

    sheet.save(str(out_path))
    print(f"  [contact sheet] {len(imgs)} images → {out_path}")


# ── JSON comparison ────────────────────────────────────────────────────────────

def compare_with_dynamic(static_results: list, dynamic_json_path: Path) -> dict:
    """
    Compare static extractor results against Frida dynamic hook output.

    Args:
        static_results: List of result dicts from TextureReconstructor.
        dynamic_json_path: Path to frida_dump.json from capture/frida_texture_hook.py.

    Returns:
        Agreement metrics dict.
    """
    try:
        dyn = json.loads(dynamic_json_path.read_text())
    except Exception as e:
        return {"error": str(e)}

    dyn_by_addr = {cs["call_addr"]: cs for cs in dyn.get("callsites", [])}
    only_in_dynamic  = set(dyn_by_addr.keys())
    matched = agree = 0
    dim_mismatches = []

    for r in static_results:
        if r.get("status") not in ("OK", "REJECTED_SANITY"):
            continue
        addr = r.get("call_addr")
        only_in_dynamic.discard(addr)
        if addr not in dyn_by_addr:
            continue
        matched += 1
        d = dyn_by_addr[addr]
        sw, sh = r.get("width"), r.get("height")
        dw, dh = d.get("width"), d.get("height")
        if sw == dw and sh == dh:
            agree += 1
        else:
            dim_mismatches.append({"addr": addr, "static": [sw, sh], "dynamic": [dw, dh]})

    pct = (agree / matched * 100) if matched else 0
    return {
        "matched_callsites":  matched,
        "dimension_agreement": agree,
        "agreement_pct":       round(pct, 1),
        "only_in_dynamic":    sorted(only_in_dynamic)[:20],
        "dim_mismatches":     dim_mismatches[:20],
    }


# ── Helpers ───────────────────────────────────────────────────────────────────

def _make_result(cs: dict, status: str, reason: str, out_path: str = "") -> dict:
    return {
        "call_addr":  cs.get("call_addr", ""),
        "status":     status,
        "reason":     reason,
        "width":      cs.get("width"),
        "height":     cs.get("height"),
        "format":     cs.get("format"),
        "confidence": cs.get("confidence"),
        "out_path":   out_path,
    }


# ── CLI ───────────────────────────────────────────────────────────────────────

def main():
    ap = argparse.ArgumentParser(
        description="Stage B: reconstruct raw textures from ExtractTextureAtlas.java output")
    ap.add_argument("--json",            required=True,  type=Path, help="texture_atlas.json from Stage A")
    ap.add_argument("--binary",          required=True,  type=Path, help="Mach-O binary (fat or single-arch)")
    ap.add_argument("--out",             required=True,  type=Path, help="output directory")
    ap.add_argument("--arch",            default="arm64", choices=["arm64", "x86_64"],
                    help="Architecture slice to use (default: arm64)")
    ap.add_argument("--min-confidence",  default="MEDIUM", choices=["HIGH", "MEDIUM", "LOW"],
                    help="Minimum confidence level to attempt reconstruction")
    ap.add_argument("--contact-sheet",   action="store_true", help="Build contact sheet of valid images")
    ap.add_argument("--compare",         type=Path, default=None,
                    help="Compare against Frida dynamic dump JSON")
    ap.add_argument("--export-fixtures", action="store_true",
                    help="Export reference PNGs + manifest.json to <out>/fixtures/ for Rust parity tests")
    ap.add_argument("--rust",            action="store_true",
                    help="Dispatch to the Rust atlas_recover binary if available; fall back to Python")
    args = ap.parse_args()

    # ── Optional Rust dispatch ────────────────────────────────────────────────
    if args.rust:
        import subprocess
        _rust_bin = (Path(__file__).parents[1]
                     / "tools" / "atlas_recover" / "target" / "release" / "atlas_recover")
        if _rust_bin.exists():
            cmd = [
                str(_rust_bin),
                "--json",           str(args.json),
                "--binary",         str(args.binary),
                "--out",            str(args.out),
                "--arch",           args.arch,
                "--min-confidence", args.min_confidence,
            ]
            if args.contact_sheet:
                cmd.append("--contact-sheet")
            if args.compare:
                cmd.extend(["--compare", str(args.compare)])
            print(f"[+] Dispatching to Rust binary: {_rust_bin}")
            sys.exit(subprocess.run(cmd).returncode)
        else:
            print(f"  [warn] Rust binary not found: {_rust_bin}")
            print(f"  [warn] Build with: cd tools/atlas_recover && cargo build --release")
            print(f"  [info] Falling back to Python implementation")

    if not _PIL_AVAILABLE:
        print("[-] Pillow not installed. Run: pip install Pillow")
        sys.exit(1)

    if not args.json.exists():
        print(f"[-] JSON not found: {args.json}")
        sys.exit(1)
    if not args.binary.exists():
        print(f"[-] Binary not found: {args.binary}")
        sys.exit(1)

    # Load Stage A JSON
    data      = json.loads(args.json.read_text())
    callsites = data.get("callsites", [])
    print(f"[+] Loaded {len(callsites)} callsites from {args.json.name}")
    for lvl in ("HIGH", "MEDIUM", "LOW", "DECOMPILE_FAILED"):
        n = sum(1 for c in callsites if c.get("confidence") == lvl)
        if n: print(f"    {lvl}: {n}")

    # Parse Mach-O
    print(f"[+] Parsing Mach-O: {args.binary}")
    cpu = CPU_TYPE_ARM64 if args.arch == "arm64" else CPU_TYPE_X86_64
    parser = MachOParser(args.binary)
    mslice = parser.get_slice(cpu)
    print(f"    cpu_type={mslice.cpu_type:#010x}  segments={[s.name for s in mslice.segments]}")

    binary_data = args.binary.read_bytes()
    print(f"    binary size: {len(binary_data):,} bytes")

    # Reconstruct
    args.out.mkdir(parents=True, exist_ok=True)
    recon = TextureReconstructor(callsites, binary_data, mslice, args.out, args.min_confidence)
    print(f"[+] Reconstructing (min_confidence={args.min_confidence}) ...")
    stats = recon.run()

    print(f"\n[+] Results:")
    print(f"    attempted:         {stats['attempted']}")
    print(f"    succeeded:         {stats['succeeded']}")
    print(f"    rejected (sanity): {stats['rejected_sanity']}")
    print(f"    skipped (conf):    {stats['skipped_confidence']}")
    print(f"    errors:            {stats['errors']}")

    # Contact sheet
    if args.contact_sheet:
        ok_paths = [args.out / r["out_path"].split("/textures/", 1)[-1]
                    for r in recon.results if r["status"] == "OK" and r.get("out_path")]
        build_contact_sheet(ok_paths, args.out / "contact_sheet.png")

    # Dynamic comparison
    comparison = {}
    if args.compare:
        print(f"\n[+] Comparing with dynamic results: {args.compare}")
        comparison = compare_with_dynamic(recon.results, args.compare)
        print(f"    matched callsites:  {comparison.get('matched_callsites', 0)}")
        print(f"    dimension agreement: {comparison.get('agreement_pct', 0):.1f}%")
        if comparison.get("dim_mismatches"):
            print(f"    first mismatch: {comparison['dim_mismatches'][0]}")

    # Write report
    report = {
        "binary":     str(args.binary),
        "arch":       args.arch,
        "json_input": str(args.json),
        "stats":      stats,
        "comparison": comparison,
        "results":    recon.results,
    }
    rp = args.out / "reconstruction_report.json"
    rp.write_text(json.dumps(report, indent=2, default=str))
    print(f"\n[+] Report → {rp}")

    # ── Export fixtures for Rust parity tests ─────────────────────────────────
    if args.export_fixtures:
        import hashlib
        fixtures_dir = args.out / "fixtures"
        expected_dir = fixtures_dir / "expected"
        expected_dir.mkdir(parents=True, exist_ok=True)

        manifest = []
        for r in recon.results:
            if r.get("status") == "OK" and r.get("out_path"):
                src = args.out / r["out_path"]
                if src.exists():
                    dst = expected_dir / src.name
                    raw = src.read_bytes()
                    dst.write_bytes(raw)
                    manifest.append({
                        "call_addr":    r["call_addr"],
                        "status":       r["status"],
                        "width":        r.get("width"),
                        "height":       r.get("height"),
                        "format":       r.get("format"),
                        "confidence":   r.get("confidence"),
                        "pixel_sha256": hashlib.sha256(raw).hexdigest(),
                        "filename":     src.name,
                    })

        manifest_path = fixtures_dir / "manifest.json"
        manifest_path.write_text(json.dumps(manifest, indent=2))
        print(f"\n[+] Fixture images ({len(manifest)}) → {expected_dir}")
        print(f"[+] Fixture manifest → {manifest_path}")


if __name__ == "__main__":
    main()
