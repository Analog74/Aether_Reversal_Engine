//! Integration / parity tests for `atlas_recover`.
//!
//! PARITY STRATEGY:
//!   1. Pure-Rust golden tests: construct a synthetic Mach-O + JSON fixture with
//!      known pixel values, run reconstruction, assert exact pixel values and
//!      report fields.  No Python dependency.
//!
//!   2. External parity suite (optional, separate script):
//!      `scripts/check_texture_parity.py` runs both Python and Rust on the same
//!      real TouchOSC inputs and compares pixel arrays + stats.  This requires
//!      the TouchOSC binary to be present and is not run in `cargo test`.
//!
//! Golden-test inputs are deterministic: given the same synthetic binary and
//! JSON, Rust always produces byte-identical PNG output.

use atlas_recover::{
    formats::{decode_to_rgba8, image_entropy, PixelFormat},
    macho::{self, MachO, CPU_TYPE_ARM64},
    reconstruct::{run_reconstruction, Confidence, TextureAtlasJson},
};
use tempfile::TempDir;

// ── fixture helpers ───────────────────────────────────────────────────────────

/// Build a non-uniform RGBA8 payload (16×16 = 256 pixels).
///
/// Uses 128 distinct luma values (0, 2, 4, … 254) each appearing twice so that
/// Shannon entropy ≈ 7.0 bits — safely within the [0.05, 7.8] sanity gate.
/// A perfect 0..255 ramp (each value once) has entropy = 8.0 which the noise
/// gate correctly rejects; real UI textures never hit that ceiling.
fn gradient_rgba8() -> Vec<u8> {
    let mut v = Vec::with_capacity(1024);
    for i in 0u8..128 {
        let luma = i * 2;
        v.extend_from_slice(&[luma, luma, luma, 255]);
        v.extend_from_slice(&[luma, luma, luma, 255]);
    }
    v
}

/// Build a checkerboard RGBA8 payload (w×h).  Alternating white/dark cells
/// of size `cell`.  High entropy, high variance — should pass sanity.
fn checkerboard_rgba8(w: u32, h: u32, cell: u32) -> Vec<u8> {
    let mut v = Vec::with_capacity((w * h * 4) as usize);
    for y in 0..h {
        for x in 0..w {
            let bright = ((x / cell) + (y / cell)) % 2 == 0;
            let val    = if bright { 220u8 } else { 30u8 };
            v.extend_from_slice(&[val, val, val, 255]);
        }
    }
    v
}

/// Build the JSON for N callsites mapped to consecutive non-overlapping regions
/// in a single __DATA segment.
///
/// Each region is `w × h × bpp_bytes` in size, placed sequentially from `base_vaddr`.
fn make_json_multi(
    regions: &[(&str, u64, u32, u32, &str, &str)],  // (call_addr, vaddr, w, h, confidence, format)
) -> String {
    let cs: String = regions
        .iter()
        .map(|(addr, vaddr, w, h, conf, fmt)| {
            format!(
                r#"{{
    "call_addr": "{addr}",
    "caller_func": "fixture",
    "this_ptr": "0x1",
    "format": "{fmt}",
    "dims_ptr": "0x2",
    "width": {w},
    "height": {h},
    "pixels_ptr": "{vaddr:#x}",
    "confidence": "{conf}"
  }}"#
            )
        })
        .collect::<Vec<_>>()
        .join(",\n");

    format!(
        r#"{{
  "binary": "fixture",
  "arch": "arm64",
  "add_region_addr": "0x0",
  "total_callsites": {n},
  "callsites": [
{cs}]
}}"#,
        n = regions.len()
    )
}

// ── tests ─────────────────────────────────────────────────────────────────────

#[test]
fn single_rgba8_gradient_succeeds() {
    let pixels = gradient_rgba8();
    let vmaddr: u64 = 0x1_0000_0000;
    let binary      = macho::testutils::make_single_arch(&pixels, vmaddr);
    let macho       = MachO::parse(&binary).unwrap();

    let json = make_json_multi(&[("0x100001234", vmaddr, 16, 16, "HIGH", "RGBA8")]);
    let atlas: TextureAtlasJson = serde_json::from_str(&json).unwrap();

    let tmp          = TempDir::new().unwrap();
    let (stats, results) = run_reconstruction(
        &atlas.callsites, &binary, macho.slice(CPU_TYPE_ARM64), tmp.path(), Confidence::Medium,
    );

    assert_eq!(stats.succeeded,       1, "{results:?}");
    assert_eq!(stats.errors,          0);
    assert_eq!(stats.rejected_sanity, 0);
    assert_eq!(results[0].status,     "OK");

    // PNG pixel content must match fixture
    let png_path = tmp.path().join(results[0].out_path.as_ref().unwrap());
    let decoded  = image::open(&png_path).unwrap().into_rgba8();
    assert_eq!(decoded.width(),  16);
    assert_eq!(decoded.height(), 16);
    // pixel (0,0) = index 0 → luma 0
    let [r, g, b, a] = decoded.get_pixel(0, 0).0;
    assert_eq!([r, g, b, a], [0, 0, 0, 255], "top-left pixel mismatch");
    // pixel (15,15) = index 255 → gradient entry 127 → luma = 127*2 = 254
    let [r, g, b, a] = decoded.get_pixel(15, 15).0;
    assert_eq!([r, g, b, a], [254, 254, 254, 255], "bottom-right pixel mismatch");
}

#[test]
fn rgb8_expands_and_passes_sanity() {
    let checker_rgb: Vec<u8> = checkerboard_rgba8(8, 8, 2)
        .chunks_exact(4)
        .flat_map(|c| [c[0], c[1], c[2]])
        .collect();
    let vmaddr: u64 = 0x1_0001_0000;
    let binary      = macho::testutils::make_single_arch(&checker_rgb, vmaddr);
    let macho       = MachO::parse(&binary).unwrap();

    let json = make_json_multi(&[("0x200000000", vmaddr, 8, 8, "HIGH", "RGB8")]);
    let atlas: TextureAtlasJson = serde_json::from_str(&json).unwrap();

    let tmp          = TempDir::new().unwrap();
    let (stats, results) = run_reconstruction(
        &atlas.callsites, &binary, macho.slice(CPU_TYPE_ARM64), tmp.path(), Confidence::High,
    );

    assert_eq!(stats.succeeded, 1, "{results:?}");
    // Saved PNG must be RGBA (4 channels) even though source was RGB
    let png  = image::open(tmp.path().join(results[0].out_path.as_ref().unwrap())).unwrap();
    assert_eq!(png.color(), image::ColorType::Rgba8);
}

#[test]
fn solid_colour_rejected_with_reason() {
    let pixels = vec![0u8, 128, 200, 255].repeat(64); // 8×8 solid
    let vmaddr: u64 = 0x1_0002_0000;
    let binary      = macho::testutils::make_single_arch(&pixels, vmaddr);
    let macho       = MachO::parse(&binary).unwrap();

    let json = make_json_multi(&[("0x300000000", vmaddr, 8, 8, "HIGH", "RGBA8")]);
    let atlas: TextureAtlasJson = serde_json::from_str(&json).unwrap();

    let tmp  = TempDir::new().unwrap();
    let (stats, results) = run_reconstruction(
        &atlas.callsites, &binary, macho.slice(CPU_TYPE_ARM64), tmp.path(), Confidence::High,
    );

    assert_eq!(stats.rejected_sanity, 1, "{results:?}");
    assert!(results[0].reason.contains("entropy") || results[0].reason.contains("variance"));
}

#[test]
fn multiple_callsites_parallel() {
    // 4 gradient regions placed back-to-back in one __DATA segment
    let grad    = gradient_rgba8(); // 256×4 = 1024 bytes
    let payload = grad.repeat(4);
    let vmaddr: u64 = 0x1_0000_0000;
    let binary      = macho::testutils::make_single_arch(&payload, vmaddr);
    let macho       = MachO::parse(&binary).unwrap();

    let step = 1024u64;
    let regions: Vec<_> = (0..4u64)
        .map(|i| {
            let addr     = format!("{:#x}", 0x1000_0001 + i * 100);
            let vaddr    = vmaddr + i * step;
            (addr, vaddr, 16u32, 16u32, "HIGH", "RGBA8")
        })
        .collect();
    let refs: Vec<_> = regions
        .iter()
        .map(|(a, v, w, h, c, f)| (a.as_str(), *v, *w, *h, *c, *f))
        .collect();
    let json = make_json_multi(&refs);
    let atlas: TextureAtlasJson = serde_json::from_str(&json).unwrap();

    let tmp  = TempDir::new().unwrap();
    let (stats, _) = run_reconstruction(
        &atlas.callsites, &binary, macho.slice(CPU_TYPE_ARM64), tmp.path(), Confidence::High,
    );

    assert_eq!(stats.succeeded, 4, "all 4 gradients should succeed");
    assert_eq!(stats.errors,    0);
}

#[test]
fn report_json_matches_schema() {
    use atlas_recover::reconstruct::ReconstructionReport;
    let pixels = gradient_rgba8();
    let vmaddr: u64 = 0x1_0000_0000;
    let binary      = macho::testutils::make_single_arch(&pixels, vmaddr);
    let macho       = MachO::parse(&binary).unwrap();

    let json = make_json_multi(&[("0xaaaa", vmaddr, 16, 16, "HIGH", "RGBA8")]);
    let atlas: TextureAtlasJson = serde_json::from_str(&json).unwrap();

    let tmp          = TempDir::new().unwrap();
    let (stats, results) = run_reconstruction(
        &atlas.callsites, &binary, macho.slice(CPU_TYPE_ARM64), tmp.path(), Confidence::Low,
    );

    let report = ReconstructionReport {
        binary:     "fixture".into(),
        arch:       "arm64".into(),
        json_input: "fixture.json".into(),
        stats,
        comparison: serde_json::Value::Object(serde_json::Map::new()),
        results,
    };

    let serialised = serde_json::to_string_pretty(&report).unwrap();
    let parsed: serde_json::Value = serde_json::from_str(&serialised).unwrap();

    // Required top-level keys
    for key in ["binary", "arch", "json_input", "stats", "comparison", "results"] {
        assert!(parsed.get(key).is_some(), "missing key: {key}");
    }
    // Required stats keys
    for key in ["attempted", "succeeded", "rejected_sanity", "skipped_confidence", "errors"] {
        assert!(parsed["stats"].get(key).is_some(), "missing stats.{key}");
    }
    // Result entry keys
    let r0 = &parsed["results"][0];
    for key in ["call_addr", "status", "reason", "width", "height", "format", "confidence"] {
        assert!(r0.get(key).is_some(), "missing result.{key}");
    }
}

// ── format-level parity tests ─────────────────────────────────────────────────

#[test]
fn rgba16f_round_trip_known_values() {
    // Construct two pixels: (0.0, 0.5, 1.0, 1.0) and (0.25, 0.75, 0.0, 0.5)
    let to_f16_bytes = |f: f32| half::f16::from_f32(f).to_bits().to_le_bytes();
    let mut raw = Vec::new();
    for &ch in &[0.0f32, 0.5, 1.0, 1.0] { raw.extend_from_slice(&to_f16_bytes(ch)); }
    for &ch in &[0.25f32, 0.75, 0.0, 0.5] { raw.extend_from_slice(&to_f16_bytes(ch)); }

    let out = decode_to_rgba8(&raw, PixelFormat::Rgba16F, 2, 1).unwrap();
    // channel 0 of pixel 0: 0.0 → 0
    assert_eq!(out[0], 0,   "0.0 should map to 0");
    // channel 2 of pixel 0: 1.0 → 255
    assert_eq!(out[2], 255, "1.0 should map to 255");
    // channel 3 of pixel 0: 1.0 → 255
    assert_eq!(out[3], 255);
    // channel 3 of pixel 1: 0.5 → ~128
    assert!((out[7] as i32 - 128).abs() <= 2, "0.5 f16 should be ~128/255: got {}", out[7]);
}

#[test]
fn entropy_of_uniform_random_is_high() {
    use std::collections::hash_map::DefaultHasher;
    use std::hash::{Hash, Hasher};
    // Deterministic "random" pixels via poor-man's PRNG
    let mut v = Vec::with_capacity(1024);
    for i in 0u32..256 {
        let mut h = DefaultHasher::new();
        i.hash(&mut h);
        let x = h.finish() as u8;
        v.extend_from_slice(&[x, x.wrapping_add(50), x.wrapping_add(100), 255]);
    }
    let e = image_entropy(&v);
    assert!(e > 5.0, "expected high entropy for pseudo-random data, got {e:.2}");
}

#[test]
fn unknown_format_falls_back_to_rgba8() {
    let pixels: Vec<u8> = (0..8).collect();
    let out = decode_to_rgba8(&pixels, PixelFormat::Unknown, 2, 1).unwrap();
    assert_eq!(out, pixels, "UNKNOWN should pass through as RGBA8");
}
