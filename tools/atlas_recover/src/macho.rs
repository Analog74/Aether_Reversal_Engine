//! Minimal Mach-O parser: virtual address → file offset.
//!
//! Supports FAT (multi-arch, magic `0xCAFEBABE`) and single-arch 64-bit
//! little-endian Mach-O (magic `0xFEEDFACF`).  Only `LC_SEGMENT_64` load
//! commands are parsed; everything else is skipped.
//!
//! Address translation:
//!   absolute_file_pos = slice.fat_offset + segment.fileoff + (vaddr − segment.vmaddr)
//!
//! where `fat_offset` is the byte offset of the arch slice within the FAT
//! container (0 for single-arch binaries), and `segment.fileoff` is the
//! segment's file offset *relative to the slice start*.

use anyhow::{bail, Result};

const FAT_MAGIC_BE:    u32 = 0xCAFE_BABE;
const MACHO_MAGIC_64:  u32 = 0xFEED_FACF;  // 64-bit LE
const LC_SEGMENT_64:   u32 = 0x19;

pub const CPU_TYPE_ARM64:  i32 = 0x0100_000C_u32 as i32;
pub const CPU_TYPE_X86_64: i32 = 0x0100_0007_u32 as i32;

// ── Segment ───────────────────────────────────────────────────────────────────

/// One parsed `LC_SEGMENT_64` entry.
#[derive(Debug, Clone)]
pub struct Segment {
    pub name:    String,
    pub vmaddr:  u64,
    pub vmsize:  u64,
    /// File offset *relative to the slice start* (not absolute in the FAT file).
    pub fileoff: u64,
}

// ── Slice ─────────────────────────────────────────────────────────────────────

/// One arch slice from a FAT or single-arch Mach-O.
#[derive(Debug, Clone)]
pub struct Slice {
    pub cpu_type:   i32,
    /// Byte offset of this slice's first byte within the outer file.
    /// Zero for single-arch binaries; `fat_arch.offset` for FAT slices.
    pub fat_offset: usize,
    pub segments:   Vec<Segment>,
}

impl Slice {
    /// Map a runtime virtual address to an absolute byte offset in the file.
    ///
    /// Returns `None` when `vaddr` falls outside every known segment.
    pub fn vaddr_to_file_offset(&self, vaddr: u64) -> Option<usize> {
        for seg in &self.segments {
            if (seg.vmaddr..seg.vmaddr + seg.vmsize).contains(&vaddr) {
                let seg_rel = (vaddr - seg.vmaddr) as usize;
                return Some(self.fat_offset + seg.fileoff as usize + seg_rel);
            }
        }
        None
    }
}

// ── MachO ─────────────────────────────────────────────────────────────────────

/// Parsed universal (or single-arch) Mach-O binary.
pub struct MachO {
    pub slices: Vec<Slice>,
}

impl MachO {
    /// Parse a Mach-O binary from raw bytes.
    ///
    /// Args:
    ///   data: entire file contents.
    ///
    /// Returns:
    ///   `MachO` with all arch slices populated.
    pub fn parse(data: &[u8]) -> Result<Self> {
        if data.len() < 8 {
            bail!("file too small to be Mach-O");
        }
        let magic_be = u32::from_be_bytes(data[..4].try_into().unwrap());
        let magic_le = u32::from_le_bytes(data[..4].try_into().unwrap());

        let mut slices = Vec::new();
        if magic_be == FAT_MAGIC_BE {
            parse_fat(data, &mut slices)?;
        } else if magic_le == MACHO_MAGIC_64 {
            slices.push(parse_slice(data, 0)?);
        } else {
            bail!("unrecognised Mach-O magic {magic_le:#010x}");
        }
        Ok(Self { slices })
    }

    /// Return the slice for the given CPU type.
    ///
    /// Falls back to the first available slice with a warning if the
    /// requested type is absent.
    pub fn slice(&self, cpu_type: i32) -> &Slice {
        self.slices
            .iter()
            .find(|s| s.cpu_type == cpu_type)
            .unwrap_or_else(|| {
                eprintln!(
                    "  [warn] cpu_type {:#010x} not found; using first slice ({:#010x})",
                    cpu_type as u32,
                    self.slices[0].cpu_type as u32
                );
                &self.slices[0]
            })
    }
}

// ── internal helpers ──────────────────────────────────────────────────────────

fn read_u32_be(data: &[u8], off: usize) -> u32 {
    u32::from_be_bytes(data[off..off + 4].try_into().unwrap())
}
fn read_u32_le(data: &[u8], off: usize) -> u32 {
    u32::from_le_bytes(data[off..off + 4].try_into().unwrap())
}
fn read_u64_le(data: &[u8], off: usize) -> u64 {
    u64::from_le_bytes(data[off..off + 8].try_into().unwrap())
}

fn parse_fat(data: &[u8], out: &mut Vec<Slice>) -> Result<()> {
    // fat_header: magic(4) + nfat_arch(4)  — big-endian
    let nfat = read_u32_be(data, 4) as usize;
    let mut off = 8usize;
    for _ in 0..nfat {
        if off + 20 > data.len() {
            bail!("truncated FAT header at offset {off}");
        }
        // fat_arch: cputype(4)+cpusubtype(4)+offset(4)+size(4)+align(4)  — big-endian
        let slice_off = read_u32_be(data, off + 8) as usize;
        if slice_off < data.len() {
            out.push(parse_slice(data, slice_off)?);
        }
        off += 20;
    }
    Ok(())
}

fn parse_slice(data: &[u8], base: usize) -> Result<Slice> {
    if base + 32 > data.len() {
        bail!("slice at {base:#x} too small for mach_header_64");
    }
    // mach_header_64 (little-endian): magic(4)+cputype(4)+cpusubtype(4)+
    //   filetype(4)+ncmds(4)+sizeofcmds(4)+flags(4)+reserved(4) = 32 bytes
    let cpu_type = read_u32_le(data, base + 4) as i32;
    let ncmds    = read_u32_le(data, base + 16) as usize;

    let mut segments = Vec::new();
    let mut lc_off   = base + 32;

    for _ in 0..ncmds {
        if lc_off + 8 > data.len() {
            break;
        }
        let cmd     = read_u32_le(data, lc_off);
        let cmdsize = read_u32_le(data, lc_off + 4) as usize;
        if cmdsize < 8 {
            break;
        }

        if cmd == LC_SEGMENT_64 && lc_off + 64 <= data.len() {
            // segment_command_64: cmd(4)+cmdsize(4)+segname(16)+
            //   vmaddr(8)+vmsize(8)+fileoff(8)+filesize(8)+... = 64 bytes
            let raw_name = &data[lc_off + 8..lc_off + 24];
            let name_len = raw_name.iter().position(|&b| b == 0).unwrap_or(16);
            let name     = String::from_utf8_lossy(&raw_name[..name_len]).into_owned();

            let vmaddr  = read_u64_le(data, lc_off + 24);
            let vmsize  = read_u64_le(data, lc_off + 32);
            let fileoff = read_u64_le(data, lc_off + 40);

            segments.push(Segment { name, vmaddr, vmsize, fileoff });
        }
        lc_off += cmdsize;
    }

    Ok(Slice { cpu_type, fat_offset: base, segments })
}

// ── test utilities ────────────────────────────────────────────────────────────

/// Helpers for building synthetic Mach-O binaries in tests and benchmarks.
///
/// Kept outside `#[cfg(test)]` so integration tests (`tests/`) and
/// benchmarks (`benches/`) can access them without a `test-utils` feature flag.
pub mod testutils {
    use super::*;

    /// Build a minimal valid single-arch 64-bit Mach-O binary that holds
    /// `payload` in a single `__DATA` segment starting at `vmaddr`.
    ///
    /// Layout:
    ///   `[0..32]`   `mach_header_64`
    ///   `[32..96]`  `LC_SEGMENT_64` (`cmdsize = 64`)
    ///   `[96…]`     `payload`
    ///
    /// The pixel buffer at `vaddr = vmaddr` maps to file offset 96.
    pub fn make_single_arch(payload: &[u8], vmaddr: u64) -> Vec<u8> {
        let fileoff: u64 = 104; // 32 (header) + 72 (segment_command_64)
        let vmsize: u64  = payload.len().max(1) as u64;
        let mut buf = Vec::with_capacity(104 + payload.len());

        // mach_header_64 (little-endian, 32 bytes)
        buf.extend_from_slice(&MACHO_MAGIC_64.to_le_bytes());
        buf.extend_from_slice(&(CPU_TYPE_ARM64 as u32).to_le_bytes());
        buf.extend_from_slice(&0u32.to_le_bytes()); // cpusubtype
        buf.extend_from_slice(&0u32.to_le_bytes()); // filetype
        buf.extend_from_slice(&1u32.to_le_bytes()); // ncmds = 1
        buf.extend_from_slice(&72u32.to_le_bytes()); // sizeofcmds = sizeof(segment_command_64)
        buf.extend_from_slice(&0u32.to_le_bytes()); // flags
        buf.extend_from_slice(&0u32.to_le_bytes()); // reserved

        // LC_SEGMENT_64 — struct is 72 bytes (not 64; the "64" means 64-bit, not byte count)
        buf.extend_from_slice(&LC_SEGMENT_64.to_le_bytes()); // cmd
        buf.extend_from_slice(&72u32.to_le_bytes());          // cmdsize = 72
        let mut segname = [0u8; 16];
        segname[..6].copy_from_slice(b"__DATA");
        buf.extend_from_slice(&segname);
        buf.extend_from_slice(&vmaddr.to_le_bytes());
        buf.extend_from_slice(&vmsize.to_le_bytes());
        buf.extend_from_slice(&fileoff.to_le_bytes());
        buf.extend_from_slice(&vmsize.to_le_bytes()); // filesize
        buf.extend_from_slice(&0u32.to_le_bytes());   // maxprot
        buf.extend_from_slice(&0u32.to_le_bytes());   // initprot
        buf.extend_from_slice(&0u32.to_le_bytes());   // nsects
        buf.extend_from_slice(&0u32.to_le_bytes());   // flags

        buf.extend_from_slice(payload);
        buf
    }
}

// ── tests ─────────────────────────────────────────────────────────────────────

#[cfg(test)]
mod tests {
    use super::*;
    use super::testutils::make_single_arch;

    #[test]
    fn single_arch_round_trip() {
        let pixels: Vec<u8> = (0..16).collect(); // 4x1 RGBA8
        let vmaddr = 0x1_0000_0000u64;
        let data   = make_single_arch(&pixels, vmaddr);

        let macho = MachO::parse(&data).unwrap();
        assert_eq!(macho.slices.len(), 1);

        let slice = macho.slice(CPU_TYPE_ARM64);
        assert_eq!(slice.segments.len(), 1);
        assert_eq!(slice.segments[0].name, "__DATA");

        let off = slice.vaddr_to_file_offset(vmaddr).unwrap();
        assert_eq!(off, 104); // 32 (header) + 72 (segment_command_64)
        assert_eq!(&data[off..off + 16], pixels.as_slice());
    }

    #[test]
    fn out_of_range_returns_none() {
        let data  = make_single_arch(&[0u8; 16], 0x1_0000_0000);
        let macho = MachO::parse(&data).unwrap();
        assert!(macho.slice(CPU_TYPE_ARM64).vaddr_to_file_offset(0).is_none());
    }
}
