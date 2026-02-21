//! Pixel format decoding and image sanity checks.
//!
//! Supported formats (from `v::TextureFormat::Type`):
//!   A8, R8 — 1 byte/px → expanded to greyscale RGBA8
//!   RGB8   — 3 bytes/px
//!   RGBA8  — 4 bytes/px (native; no conversion)
//!   RGBA16F — 4×f16 per pixel → clamped to uint8
//!   RGBA32F — 4×f32 per pixel → clamped to uint8
//!   UNKNOWN — falls back to RGBA8

use anyhow::{bail, Result};
use half::f16;

// ── PixelFormat ───────────────────────────────────────────────────────────────

/// Known texture formats from `v::TextureFormat::Type`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PixelFormat {
    A8,
    R8,
    Rgb8,
    Rgba8,
    Rgba16F,
    Rgba32F,
    Unknown,
}

impl PixelFormat {
    /// Parse a format string (possibly with `_INFERRED` suffix stripped already).
    pub fn from_str(s: &str) -> Self {
        match s.trim_end_matches("_INFERRED") {
            "A8"      => Self::A8,
            "R8"      => Self::R8,
            "RGB8"    => Self::Rgb8,
            "RGBA8"   => Self::Rgba8,
            "RGBA16F" => Self::Rgba16F,
            "RGBA32F" => Self::Rgba32F,
            _         => Self::Unknown,
        }
    }
}

/// Bytes consumed per pixel in the raw buffer.
pub fn bytes_per_pixel(fmt: PixelFormat) -> usize {
    match fmt {
        PixelFormat::A8 | PixelFormat::R8 => 1,
        PixelFormat::Rgb8                  => 3,
        PixelFormat::Rgba8 | PixelFormat::Unknown => 4,
        PixelFormat::Rgba16F               => 8,   // 4 × f16
        PixelFormat::Rgba32F               => 16,  // 4 × f32
    }
}

// ── Decoder ───────────────────────────────────────────────────────────────────

/// Decode raw pixel bytes into a packed RGBA8 buffer (`Vec<u8>` of length w×h×4).
///
/// Args:
///   raw:    slice of exactly `w * h * bytes_per_pixel(fmt)` bytes.
///   fmt:    pixel format of the source data.
///   w, h:   image dimensions in pixels.
///
/// Returns:
///   RGBA8 buffer, or an error if `raw` is the wrong length.
pub fn decode_to_rgba8(raw: &[u8], fmt: PixelFormat, w: u32, h: u32) -> Result<Vec<u8>> {
    let bpp      = bytes_per_pixel(fmt);
    let expected = w as usize * h as usize * bpp;
    if raw.len() < expected {
        bail!("expected {expected} bytes for {w}×{h} {:?}, got {}", fmt, raw.len());
    }
    let raw = &raw[..expected];

    Ok(match fmt {
        PixelFormat::Rgba8 | PixelFormat::Unknown => raw.to_vec(),

        PixelFormat::A8 => {
            // Expand AAAA → RGBA as (luma, luma, luma, 255) — display as greyscale
            let mut out = Vec::with_capacity(w as usize * h as usize * 4);
            for &a in raw {
                out.extend_from_slice(&[a, a, a, 255]);
            }
            out
        }

        PixelFormat::R8 => {
            let mut out = Vec::with_capacity(w as usize * h as usize * 4);
            for &r in raw {
                out.extend_from_slice(&[r, 0, 0, 255]);
            }
            out
        }

        PixelFormat::Rgb8 => {
            let mut out = Vec::with_capacity(w as usize * h as usize * 4);
            for chunk in raw.chunks_exact(3) {
                out.extend_from_slice(&[chunk[0], chunk[1], chunk[2], 255]);
            }
            out
        }

        PixelFormat::Rgba16F => {
            // 4 × binary16 per pixel, little-endian → clamp to [0,255]
            let mut out = Vec::with_capacity(w as usize * h as usize * 4);
            for chunk in raw.chunks_exact(8) {
                for i in 0..4 {
                    let bits = u16::from_le_bytes([chunk[i * 2], chunk[i * 2 + 1]]);
                    let val  = f16::from_bits(bits).to_f32().clamp(0.0, 1.0);
                    out.push((val * 255.0 + 0.5) as u8);
                }
            }
            out
        }

        PixelFormat::Rgba32F => {
            // 4 × float32 per pixel, little-endian → clamp to [0,255]
            let mut out = Vec::with_capacity(w as usize * h as usize * 4);
            for chunk in raw.chunks_exact(16) {
                for i in 0..4 {
                    let val = f32::from_le_bytes(
                        chunk[i * 4..i * 4 + 4].try_into().unwrap()
                    ).clamp(0.0, 1.0);
                    out.push((val * 255.0 + 0.5) as u8);
                }
            }
            out
        }
    })
}

// ── Sanity checks ─────────────────────────────────────────────────────────────

/// Shannon entropy over the greyscale histogram of an RGBA8 pixel buffer.
///
/// Returns:
///   Entropy in bits (0.0 – 8.0 for 8-bit data).
pub fn image_entropy(rgba8: &[u8]) -> f32 {
    let mut hist = [0u32; 256];
    let luma_count = rgba8.len() / 4;
    for chunk in rgba8.chunks_exact(4) {
        // BT.601 luma
        let luma = ((chunk[0] as u32 * 299 + chunk[1] as u32 * 587 + chunk[2] as u32 * 114)
            / 1000) as usize;
        hist[luma.min(255)] += 1;
    }
    let total = luma_count as f32;
    if total == 0.0 {
        return 0.0;
    }
    let mut entropy = 0.0f32;
    for &count in &hist {
        if count > 0 {
            let p = count as f32 / total;
            entropy -= p * p.log2();
        }
    }
    entropy
}

/// Mean pixel variance (greyscale) of an RGBA8 buffer.
fn pixel_variance(rgba8: &[u8]) -> f32 {
    let vals: Vec<f32> = rgba8
        .chunks_exact(4)
        .map(|c| {
            (c[0] as u32 * 299 + c[1] as u32 * 587 + c[2] as u32 * 114) as f32 / 1000.0
        })
        .collect();
    if vals.is_empty() {
        return 0.0;
    }
    let mean = vals.iter().sum::<f32>() / vals.len() as f32;
    vals.iter().map(|v| (v - mean).powi(2)).sum::<f32>() / vals.len() as f32
}

/// Sanity-check a reconstructed image buffer.
///
/// Criteria (mirrors Python `passes_sanity`):
///   - Entropy in [0.05, 7.8]  (solid colour or pure noise both rejected)
///   - Variance ≥ 1.0          (zero-variance = all same luma)
///
/// Args:
///   rgba8:     Raw RGBA8 pixel buffer (w×h×4 bytes).
///   w, h:      Image dimensions (for potential future dimension checks).
///
/// Returns:
///   `(passes, reason_string)`
pub fn passes_sanity(rgba8: &[u8], w: u32, h: u32) -> (bool, String) {
    let _ = (w, h); // reserved for future size-range checks
    let entropy  = image_entropy(rgba8);
    let variance = pixel_variance(rgba8);

    if entropy < 0.05 {
        return (false, format!("solid_colour: entropy={entropy:.2}"));
    }
    if entropy > 7.8 {
        return (false, format!("random_noise: entropy={entropy:.2}"));
    }
    if variance < 1.0 {
        return (false, format!("zero_variance: stddev={:.2}", variance.sqrt()));
    }
    (true, format!("ok: entropy={entropy:.2} variance={variance:.1}"))
}

// ── tests ─────────────────────────────────────────────────────────────────────

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn rgba8_passthrough() {
        let raw: Vec<u8> = (0..16).collect(); // 2×2 RGBA8
        let out = decode_to_rgba8(&raw, PixelFormat::Rgba8, 2, 2).unwrap();
        assert_eq!(out, raw);
    }

    #[test]
    fn rgb8_expands_alpha() {
        let raw = vec![0xAAu8, 0xBB, 0xCC]; // 1×1 RGB8
        let out = decode_to_rgba8(&raw, PixelFormat::Rgb8, 1, 1).unwrap();
        assert_eq!(out, vec![0xAA, 0xBB, 0xCC, 0xFF]);
    }

    #[test]
    fn a8_expands_to_greyscale() {
        let raw = vec![0x80u8]; // 1×1 A8
        let out = decode_to_rgba8(&raw, PixelFormat::A8, 1, 1).unwrap();
        assert_eq!(out, vec![0x80, 0x80, 0x80, 0xFF]);
    }

    #[test]
    fn rgba16f_converts_identity() {
        // 1.0 as f16 = 0x3C00
        let raw: Vec<u8> = (0..4).flat_map(|_| 0x3C00u16.to_le_bytes()).collect();
        let out = decode_to_rgba8(&raw, PixelFormat::Rgba16F, 1, 1).unwrap();
        // 1.0 → 255 (clamped)
        assert!(out.iter().all(|&v| v == 255));
    }

    #[test]
    fn solid_colour_fails_sanity() {
        let rgba8 = vec![128u8, 0, 0, 255].repeat(64); // 8×8 solid red
        let (ok, reason) = passes_sanity(&rgba8, 8, 8);
        assert!(!ok, "solid colour should fail: {reason}");
    }

    #[test]
    fn gradient_passes_sanity() {
        // 16×16 image: luma values 0, 2, 4, ..., 254 each appearing TWICE.
        // Entropy = log2(128) ≈ 7.0 (safely below the 7.8 noise ceiling).
        // A perfect 0..255 ramp (each value once) hits entropy = 8.0 which
        // our noise gate correctly rejects; real UI textures never do that.
        let mut rgba8 = Vec::new();
        for i in 0u8..128 {
            let luma = i * 2;
            rgba8.extend_from_slice(&[luma, luma, luma, 255]);
            rgba8.extend_from_slice(&[luma, luma, luma, 255]); // repeat
        }
        let (ok, reason) = passes_sanity(&rgba8, 16, 16);
        assert!(ok, "gradient should pass: {reason}");
    }
}
