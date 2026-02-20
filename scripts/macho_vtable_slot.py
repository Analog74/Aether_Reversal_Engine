#!/usr/bin/env python3
# Created: 2025-12-14 15:33 UTC • Last Modified: 2025-12-14 15:44 UTC
"""Resolve a virtual call slot to a concrete function symbol (Mach-O).

This is a small reverse-engineering helper:
- Given a vtable symbol address (e.g. __ZTV...), and a slot offset used in decompiled code
  (e.g. *(vptr + 0x118)), read the 8-byte function pointer from the Mach-O binary.
- Optionally apply an address-point bias (clang typically stores the object vptr at vtable+0x10).
- Map the resulting function address to the closest symbol from an nm-style symbols.txt dump.

Example:
  python3 scripts/macho_vtable_slot.py \
    --macho "targets/Controller Editor/binary/Controller Editor" \
    --symbols "targets/Controller Editor/assets/symbols.txt" \
    --vtable 0x101a1db30 \
    --slot 0x118 \
    --try-address-point
"""

from __future__ import annotations

import argparse
import bisect
import struct
from dataclasses import dataclass
from pathlib import Path
from typing import Iterable


MH_MAGIC_64 = 0xFEEDFACF
LC_SEGMENT_64 = 0x19

FAT_MAGIC = 0xCAFEBABE
FAT_CIGAM = 0xBEBAFECA
FAT_MAGIC_64 = 0xCAFEBABF
FAT_CIGAM_64 = 0xBFBAFECA


@dataclass(frozen=True)
class Segment64:
    segname: str
    vmaddr: int
    vmsize: int
    fileoff: int
    filesize: int

    def contains_vmaddr(self, addr: int) -> bool:
        return self.vmaddr <= addr < (self.vmaddr + self.vmsize)

    def vmaddr_to_fileoff(self, addr: int) -> int | None:
        if not self.contains_vmaddr(addr):
            return None
        delta = addr - self.vmaddr
        if delta >= self.filesize:
            return None
        return self.fileoff + delta


def _read_cstr(b: bytes) -> str:
    return b.split(b"\x00", 1)[0].decode("ascii", errors="replace")


@dataclass(frozen=True)
class MachOSlice:
    offset: int
    size: int


def _parse_fat_slices(data: bytes) -> list[MachOSlice]:
    if len(data) < 8:
        raise ValueError("file too small")

    magic_be = struct.unpack_from(">I", data, 0)[0]
    magic_le = struct.unpack_from("<I", data, 0)[0]

    if magic_be in (FAT_MAGIC, FAT_MAGIC_64):
        endian = ">"
        magic = magic_be
    elif magic_le in (FAT_CIGAM, FAT_CIGAM_64):
        endian = "<"
        magic = magic_le
    else:
        raise ValueError("not a FAT header")

    is_64 = magic in (FAT_MAGIC_64, FAT_CIGAM_64)
    nfat_arch = struct.unpack_from(endian + "I", data, 4)[0]
    slices: list[MachOSlice] = []
    off = 8

    for _ in range(nfat_arch):
        if is_64:
            # fat_arch_64: cputype,u32 cpusubtype,u32 offset,u64 size,u64 align,u32 reserved,u32
            if off + 32 > len(data):
                break
            _cputype, _cpusubtype = struct.unpack_from(endian + "II", data, off)
            arch_offset = struct.unpack_from(endian + "Q", data, off + 8)[0]
            arch_size = struct.unpack_from(endian + "Q", data, off + 16)[0]
            slices.append(MachOSlice(offset=int(arch_offset), size=int(arch_size)))
            off += 32
        else:
            # fat_arch: cputype,u32 cpusubtype,u32 offset,u32 size,u32 align,u32
            if off + 20 > len(data):
                break
            _cputype, _cpusubtype, arch_offset, arch_size, _align = struct.unpack_from(
                endian + "IIIII", data, off
            )
            slices.append(MachOSlice(offset=int(arch_offset), size=int(arch_size)))
            off += 20

    return slices


def iter_slices(macho_path: Path) -> list[MachOSlice]:
    data = macho_path.read_bytes()
    if len(data) < 4:
        raise ValueError("file too small")

    magic = struct.unpack_from("<I", data, 0)[0]
    if magic == MH_MAGIC_64:
        return [MachOSlice(offset=0, size=len(data))]

    # FAT
    try:
        slices = _parse_fat_slices(data)
    except ValueError:
        raise ValueError(f"unsupported Mach-O magic 0x{magic:08x}")

    return slices


def parse_segments(macho_path: Path, slice_offset: int) -> list[Segment64]:
    data = macho_path.read_bytes()
    if slice_offset < 0 or slice_offset + 32 > len(data):
        raise ValueError("invalid slice offset")

    magic = struct.unpack_from("<I", data, slice_offset)[0]
    if magic != MH_MAGIC_64:
        raise ValueError(f"unsupported slice Mach-O magic 0x{magic:08x}")

    # mach_header_64: magic,u32 cputype,u32 cpusubtype,u32 filetype,u32 ncmds,u32 sizeofcmds,u32 flags,u32 reserved
    ncmds = struct.unpack_from("<I", data, slice_offset + 16)[0]

    offset = slice_offset + 32
    segments: list[Segment64] = []

    for _ in range(ncmds):
        if offset + 8 > len(data):
            raise ValueError("truncated load commands")
        cmd, cmdsize = struct.unpack_from("<II", data, offset)
        if cmdsize < 8:
            raise ValueError("invalid load command size")

        if cmd == LC_SEGMENT_64:
            # segment_command_64:
            # cmd,u32 cmdsize,u32 segname[16], u64 vmaddr,u64 vmsize,u64 fileoff,u64 filesize, u32 maxprot,u32 initprot,u32 nsects,u32 flags
            if offset + 72 > len(data):
                raise ValueError("truncated LC_SEGMENT_64")
            segname = _read_cstr(data[offset + 8 : offset + 24])
            vmaddr, vmsize, fileoff, filesize = struct.unpack_from("<QQQQ", data, offset + 24)
            segments.append(
                Segment64(
                    segname=segname,
                    vmaddr=vmaddr,
                    vmsize=vmsize,
                    fileoff=fileoff,
                    filesize=filesize,
                )
            )

        offset += cmdsize

    return segments


@dataclass(frozen=True)
class Symbol:
    addr: int
    kind: str
    name: str


def load_symbols(symbols_path: Path) -> list[Symbol]:
    symbols: list[Symbol] = []
    for raw in symbols_path.read_text(errors="replace").splitlines():
        raw = raw.strip()
        if not raw:
            continue
        # expected: ADDRESS <space> KIND <space> NAME
        parts = raw.split(None, 2)
        if len(parts) != 3:
            continue
        addr_s, kind, name = parts
        try:
            addr = int(addr_s, 16)
        except ValueError:
            continue
        symbols.append(Symbol(addr=addr, kind=kind, name=name))

    symbols.sort(key=lambda s: s.addr)
    return symbols


def nearest_symbol(symbols: list[Symbol], addr: int) -> Symbol | None:
    if not symbols:
        return None
    addrs = [s.addr for s in symbols]
    i = bisect.bisect_right(addrs, addr) - 1
    if i < 0:
        return None
    return symbols[i]


def is_mapped_by_any_segment(segments: list[Segment64], addr: int) -> bool:
    for seg in segments:
        if seg.contains_vmaddr(addr):
            return True
    return False


def read_u64_at_vmaddr(macho: Path, slice_offset: int, segments: list[Segment64], addr: int) -> int:
    fileoff = None
    for seg in segments:
        fileoff = seg.vmaddr_to_fileoff(addr)
        if fileoff is not None:
            break
    if fileoff is None:
        raise ValueError(f"address 0x{addr:x} not mapped by any segment")

    with macho.open("rb") as f:
        f.seek(slice_offset + fileoff)
        b = f.read(8)
    if len(b) != 8:
        raise ValueError("failed to read 8 bytes")
    return struct.unpack("<Q", b)[0]


def format_resolution(label: str, func_addr: int, sym: Symbol | None) -> str:
    if sym is None:
        return f"{label}: 0x{func_addr:016x} (no symbols loaded)"
    delta = func_addr - sym.addr
    if delta == 0:
        return f"{label}: 0x{func_addr:016x} -> {sym.name}"
    return f"{label}: 0x{func_addr:016x} -> {sym.name} + 0x{delta:x}"


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--macho", required=True, help="Path to Mach-O binary")
    ap.add_argument("--symbols", required=True, help="Path to symbols.txt (nm-like)")
    ap.add_argument("--vtable", required=True, help="Vtable symbol vmaddr (hex like 0x...) or int")
    ap.add_argument("--slot", required=True, help="Slot offset used from vptr (hex like 0x118)")
    ap.add_argument(
        "--try-address-point",
        action="store_true",
        help="Also try clang vptr address-point bias (+0x10 from vtable symbol)",
    )

    args = ap.parse_args()
    macho = Path(args.macho)
    symbols_path = Path(args.symbols)

    vtable = int(args.vtable, 0)
    slot = int(args.slot, 0)

    slices = iter_slices(macho)
    symbols = load_symbols(symbols_path)

    candidates: list[tuple[str, int]] = [("vtable", vtable)]
    if args.try_address_point:
        candidates.append(("vtable+0x10", vtable + 0x10))

    # Choose a slice where the vtable slot resolves to a plausible in-slice pointer.
    chosen_slice: MachOSlice | None = None
    chosen_segments: list[Segment64] | None = None

    for sl in slices:
        try:
            segs = parse_segments(macho, sl.offset)
            # Ensure the vtable symbol address itself is mapped.
            if not is_mapped_by_any_segment(segs, vtable):
                continue

            # Read one candidate slot pointer and require it to look like an in-slice address.
            # We try the common clang address-point bias first.
            probe_ptr_addr = (vtable + 0x10) + slot
            probe_func = read_u64_at_vmaddr(macho, sl.offset, segs, probe_ptr_addr)
            if not is_mapped_by_any_segment(segs, probe_func):
                # Fall back to assuming the vptr points at the vtable symbol itself.
                probe_ptr_addr = vtable + slot
                probe_func = read_u64_at_vmaddr(macho, sl.offset, segs, probe_ptr_addr)
                if not is_mapped_by_any_segment(segs, probe_func):
                    continue
        except Exception:
            continue
        chosen_slice = sl
        chosen_segments = segs
        break

    if chosen_slice is None or chosen_segments is None:
        raise SystemExit("Could not find a Mach-O slice that maps the provided vtable address")

    for name, base in candidates:
        ptr_addr = base + slot
        func_addr = read_u64_at_vmaddr(macho, chosen_slice.offset, chosen_segments, ptr_addr)
        sym = nearest_symbol(symbols, func_addr)
        print(format_resolution(f"{name} slot {slot:#x}", func_addr, sym))

    return 0


if __name__ == "__main__":
    raise SystemExit(main())
