"""
Binary discovery helpers.

Historically this module only discovered Mach-O binaries (macOS), which is why
many call sites still reference "macho". It now supports discovery of:
- Mach-O (macOS)
- Portable Executable / PE (Windows)
- ELF (Linux)

New code should use `discover_binaries()`. `discover_macho_binaries()` remains
as a backwards-compatible alias.
"""

# Created: 2025-12-14 04:57 UTC • Last Modified: 2026-02-07 18:00 UTC
from __future__ import annotations

import os
import struct
from collections import Counter
from pathlib import Path
from typing import BinaryIO, Iterable


MACHO_MAGICS = {
    b"\xfe\xed\xfa\xce",  # MH_MAGIC
    b"\xce\xfa\xed\xfe",  # MH_CIGAM
    b"\xfe\xed\xfa\xcf",  # MH_MAGIC_64
    b"\xcf\xfa\xed\xfe",  # MH_CIGAM_64
    b"\xca\xfe\xba\xbe",  # FAT_MAGIC
    b"\xbe\xba\xfe\xca",  # FAT_CIGAM
}

# Windows PE executables
PE_MAGICS = {
    b"MZ",  # DOS/PE executable header
}

# ELF binaries (Linux)
ELF_MAGICS = {
    b"\x7fELF",  # ELF magic
}


def is_probably_macho(path: Path) -> bool:
    try:
        if not path.is_file() or path.is_symlink():
            return False
        with path.open("rb") as f:
            magic = f.read(4)
        return magic in MACHO_MAGICS
    except Exception:
        return False


def is_probably_pe(path: Path) -> bool:
    """Check if file is a Windows PE executable (.exe, .dll)"""
    try:
        if not path.is_file() or path.is_symlink():
            return False
        st = path.stat()
        if st.st_size < 0x40:
            return False
        with path.open("rb") as f:
            mz = f.read(2)
            if mz not in PE_MAGICS:
                return False
            f.seek(0x3C)
            pe_off_bytes = f.read(4)
            if len(pe_off_bytes) != 4:
                return False
            pe_off = int.from_bytes(pe_off_bytes, "little")
            if pe_off <= 0 or pe_off + 4 > st.st_size:
                return False
            f.seek(pe_off)
            sig = f.read(4)
            return sig == b"PE\x00\x00"
    except Exception:
        return False


def is_probably_elf(path: Path) -> bool:
    """Check if file is an ELF binary (Linux)"""
    try:
        if not path.is_file() or path.is_symlink():
            return False
        with path.open("rb") as f:
            magic = f.read(4)
        return magic in ELF_MAGICS
    except Exception:
        return False


def is_probably_binary(path: Path) -> bool:
    """Check if file is any recognized binary format"""
    return is_probably_macho(path) or is_probably_pe(path) or is_probably_elf(path)


def _detect_elf_details(f: BinaryIO) -> dict[str, str] | None:
    """Extract ELF architecture and endianness details."""
    try:
        f.seek(0)
        header = f.read(64)
        if len(header) < 20 or header[:4] != b'\x7fELF':
            return None
        
        elf_class, data, version = header[4], header[5], header[6]
        if version != 1 or elf_class not in (1, 2) or data not in (1, 2):
            return None
        
        endian = 'LE' if data == 1 else 'BE'
        byte_order = 'little' if data == 1 else 'big'
        
        # e_machine at offset 18 (2 bytes)
        e_machine = int.from_bytes(header[18:20], byte_order)
        
        arch_map = {
            3: 'x86',
            62: 'x86-64',
            183: 'ARM64',
            40: 'ARM',
            243: 'RISC-V'
        }
        arch = arch_map.get(e_machine, 'unknown')
        
        # e_type at offset 16 (2 bytes) - 0x02=exec, 0x03=shared
        e_type = int.from_bytes(header[16:18], byte_order)
        btype = 'SO' if e_type == 3 else 'EXE' if e_type == 2 else 'OBJ'
        
        return {'format': 'ELF', 'arch': arch, 'endian': endian, 'type': btype}
    except Exception:
        return None


def _detect_pe_details(f: BinaryIO) -> dict[str, str] | None:
    """Extract PE architecture and type details."""
    try:
        st = f.seek(0, 2)  # Get file size
        if st < 0x40:
            return None
        
        f.seek(0)
        mz = f.read(2)
        if mz != b'MZ':
            return None
        
        f.seek(0x3C)
        pe_off_bytes = f.read(4)
        if len(pe_off_bytes) != 4:
            return None
        
        pe_off = int.from_bytes(pe_off_bytes, 'little')
        if pe_off <= 0 or pe_off + 24 > st:
            return None
        
        f.seek(pe_off)
        sig = f.read(4)
        if sig != b'PE\x00\x00':
            return None
        
        # Machine at NT header + 4
        machine = int.from_bytes(f.read(2), 'little')
        
        arch_map = {
            0x14C: 'x86',
            0x8664: 'x64',
            0xAA64: 'ARM64',
            0x1C0: 'ARM',
            0x1C4: 'ARM-Thumb'
        }
        arch = arch_map.get(machine, 'unknown')
        
        # Skip NumberOfSections(2) + TimeDateStamp(4) + PointerToSymbolTable(4) + NumberOfSymbols(4) + SizeOfOptionalHeader(2)
        f.seek(pe_off + 20)
        chars = int.from_bytes(f.read(2), 'little')
        
        btype = 'DLL' if chars & 0x2000 else 'EXE'
        
        return {'format': 'PE', 'arch': arch, 'endian': 'LE', 'type': btype}
    except Exception:
        return None


def _detect_macho_details(f: BinaryIO) -> dict[str, str] | None:
    """Extract Mach-O architecture and endianness details."""
    try:
        f.seek(0)
        magic = f.read(4)
        if magic not in MACHO_MAGICS:
            return None
        
        # Determine endianness from magic
        if magic in {b"\xfe\xed\xfa\xce", b"\xfe\xed\xfa\xcf"}:
            endian = 'BE'
            byte_order = 'big'
        else:
            endian = 'LE'
            byte_order = 'little'
        
        # cpu_type at offset 4 (4 bytes)
        f.seek(4)
        cpu_type = int.from_bytes(f.read(4), byte_order)
        
        # Mask off capability bits
        cpu_type_base = cpu_type & 0x00ffffff
        
        arch_map = {
            7: 'x86',
            0x01000007: 'x86-64',
            12: 'ARM',
            0x0100000c: 'ARM64',
            18: 'PowerPC',
            0x01000012: 'PowerPC64'
        }
        arch = arch_map.get(cpu_type, arch_map.get(cpu_type_base, 'unknown'))
        
        # filetype at offset 12 (4 bytes) - 0x2=execute, 0x6=dylib, 0x8=bundle
        f.seek(12)
        filetype = int.from_bytes(f.read(4), byte_order)
        
        type_map = {2: 'EXE', 6: 'DYLIB', 8: 'BUNDLE', 1: 'OBJ'}
        btype = type_map.get(filetype, 'UNKNOWN')
        
        return {'format': 'Mach-O', 'arch': arch, 'endian': endian, 'type': btype}
    except Exception:
        return None


def detect_binary_format(path: Path) -> dict[str, str] | None:
    """
    Detect binary format and return detailed metadata.
    
    Returns dict with keys: 'format', 'arch', 'endian', 'type'
    Example: {'format': 'PE', 'arch': 'x64', 'endian': 'LE', 'type': 'EXE'}
    
    Returns None if not a recognized binary format.
    """
    try:
        if not path.is_file() or path.is_symlink():
            return None
        
        with path.open('rb') as f:
            # Try each format detector
            magic = f.read(4)
            f.seek(0)
            
            if magic[:2] == b'MZ':
                return _detect_pe_details(f)
            elif magic == b'\x7fELF':
                return _detect_elf_details(f)
            elif magic in MACHO_MAGICS:
                return _detect_macho_details(f)
        
        return None
    except Exception:
        return None


def detect_binary_format_simple(path: Path) -> str | None:
    """
    Return a short binary format label ("Mach-O", "PE", "ELF") if recognized.
    Backwards-compatible simple version.
    """
    details = detect_binary_format(path)
    return details['format'] if details else None


def format_counts(paths: Iterable[Path]) -> dict[str, int]:
    """Count binaries by format."""
    counts: dict[str, int] = {}
    for p in paths:
        details = detect_binary_format(p)
        fmt = details['format'] if details else 'Unknown'
        counts[fmt] = counts.get(fmt, 0) + 1
    return counts


def format_summary(paths: list[Path]) -> str:
    """
    Create a compact format summary with counts and total.
    Example: "PE:1, Mach-O:3 (total: 4)"
    """
    details_list = [detect_binary_format(p) for p in paths]
    formats = [d['format'] for d in details_list if d]
    
    if not formats:
        return ''
    
    counts = Counter(formats)
    total = sum(counts.values())
    
    # Sort by count descending, then alphabetically
    sorted_formats = sorted(counts.items(), key=lambda x: (-x[1], x[0]))
    summary = ', '.join(f'{fmt}:{cnt}' for fmt, cnt in sorted_formats)
    
    return f"{summary} (total: {total})"


def _iter_candidate_paths(root: Path) -> Iterable[Path]:
    # Heuristic traversal: prefer typical bundle locations first.
    bundle_contents = root / "Contents"
    if bundle_contents.exists():
        preferred = [
            bundle_contents / "MacOS",
            bundle_contents / "Frameworks",
            bundle_contents / "PlugIns",
            bundle_contents / "XPCServices",
            bundle_contents / "Helpers",
        ]
        for p in preferred:
            if p.exists():
                yield from p.rglob("*")
        # Fall back to the rest of Contents
        yield from bundle_contents.rglob("*")
        return

    # Nonstandard bundles (like wrapped apps): just scan the directory.
    yield from root.rglob("*")


def discover_binaries(input_path: Path) -> list[Path]:
    """Discover supported binaries (Mach-O, PE, ELF) in the given path."""
    input_path = Path(input_path)

    if input_path.is_file():
        return [input_path] if is_probably_binary(input_path) else []

    if not input_path.is_dir():
        return []

    found: list[Path] = []
    seen: set[str] = set()

    for candidate in _iter_candidate_paths(input_path):
        if not candidate.is_file():
            continue
        # Skip obvious non-executables by extension unless they still look like binaries.
        if candidate.suffix.lower() in {".png", ".jpg", ".jpeg", ".gif", ".tiff", ".icns", ".json", ".plist", ".nib", ".storyboardc", ".car"}:
            continue
        if is_probably_binary(candidate):
            real = os.path.realpath(candidate)
            if real in seen:
                continue
            seen.add(real)
            found.append(candidate)

    # Stable ordering for manifests.
    return sorted(found, key=lambda p: str(p))


def discover_macho_binaries(input_path: Path) -> list[Path]:
    """Backward-compatible alias for `discover_binaries()`."""
    return discover_binaries(input_path)
