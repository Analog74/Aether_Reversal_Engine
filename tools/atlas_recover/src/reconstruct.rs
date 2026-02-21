//! Core reconstruction loop: JSON → PNGs + report.
//!
//! ARCHITECTURE:
//!   - `Callsite`        serde-deserialisable entry from `texture_atlas.json`.
//!                       Width/height are JSON integers *or* the string "UNKNOWN";
//!                       handled via a custom deserialiser.
//!   - `run_reconstruction`  parallel (rayon) reconstruction of all eligible
//!                       callsites returned in input order.
//!   - `compare_with_dynamic`  loads a Frida dump and computes agreement metrics.
//!   - `ReconstructionReport`  serialises to the same JSON schema as the Python
//!                       `reconstruct_textures.py` output.

use std::{collections::HashMap, path::Path};

use anyhow::Result;
use rayon::prelude::*;
use serde::{Deserialize, Serialize};
use serde_json::Value;

use crate::{formats, macho::Slice};

// ── Confidence ────────────────────────────────────────────────────────────────

#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord)]
pub enum Confidence {
    Low    = 1,
    Medium = 2,
    High   = 3,
}

impl Confidence {
    pub fn from_str(s: &str) -> Self {
        match s {
            "HIGH"   => Self::High,
            "MEDIUM" => Self::Medium,
            _        => Self::Low,
        }
    }
    pub fn rank_of(s: &str) -> Self {
        Self::from_str(s)
    }
}

// ── Callsite ──────────────────────────────────────────────────────────────────

/// One entry from `texture_atlas.json` (Stage A output).
#[derive(Debug, Deserialize)]
pub struct Callsite {
    pub call_addr:        String,
    pub caller_func:      Option<String>,
    pub this_ptr:         Option<String>,
    pub format:           Option<String>,
    pub dims_ptr:         Option<String>,
    /// Integer pixels, or absent / `"UNKNOWN"`.
    #[serde(default, deserialize_with = "de_dim")]
    pub width:            Option<u32>,
    #[serde(default, deserialize_with = "de_dim")]
    pub height:           Option<u32>,
    pub pixels_ptr:       Option<String>,
    #[serde(default = "default_confidence")]
    pub confidence:       String,
    pub confidence_detail: Option<String>,
}

fn default_confidence() -> String { "LOW".into() }

/// Custom deserialiser: accepts JSON integer or the string "UNKNOWN" (→ None).
fn de_dim<'de, D: serde::Deserializer<'de>>(de: D) -> Result<Option<u32>, D::Error> {
    let v = Value::deserialize(de)?;
    match v {
        Value::Number(n)        => Ok(n.as_u64().map(|x| x as u32)),
        Value::String(ref s) if s == "UNKNOWN" => Ok(None),
        Value::Null             => Ok(None),
        other => Err(serde::de::Error::custom(
            format!("expected integer or 'UNKNOWN', got {other}")
        )),
    }
}

// ── Top-level atlas JSON ──────────────────────────────────────────────────────

/// Root structure of `texture_atlas.json`.
#[derive(Debug, Deserialize)]
pub struct TextureAtlasJson {
    pub binary:           Option<String>,
    pub arch:             Option<String>,
    pub add_region_addr:  Option<String>,
    pub total_callsites:  Option<u64>,
    #[serde(default)]
    pub callsites:        Vec<Callsite>,
}

impl TextureAtlasJson {
    /// Returns (level, count) pairs sorted HIGH→MEDIUM→LOW for printing.
    pub fn confidence_summary(&self) -> [(&'static str, usize); 3] {
        let mut h = 0usize;
        let mut m = 0usize;
        let mut l = 0usize;
        for cs in &self.callsites {
            match cs.confidence.as_str() {
                "HIGH"   => h += 1,
                "MEDIUM" => m += 1,
                _        => l += 1,
            }
        }
        [("HIGH", h), ("MEDIUM", m), ("LOW/FAILED", l)]
    }
}

// ── Stats ─────────────────────────────────────────────────────────────────────

#[derive(Debug, Default, Clone, Serialize)]
pub struct Stats {
    pub attempted:          usize,
    pub succeeded:          usize,
    pub rejected_sanity:    usize,
    pub skipped_confidence: usize,
    pub errors:             usize,
}

// ── CallsiteResult ────────────────────────────────────────────────────────────

/// Per-callsite reconstruction outcome (matches Python schema).
#[derive(Debug, Clone, Serialize)]
pub struct CallsiteResult {
    pub call_addr:  String,
    pub status:     String,
    pub reason:     String,
    pub width:      Option<u32>,
    pub height:     Option<u32>,
    pub format:     Option<String>,
    pub confidence: String,
    pub out_path:   Option<String>,
}

impl CallsiteResult {
    fn skipped(cs: &Callsite, reason: &str) -> Self {
        Self {
            call_addr:  cs.call_addr.clone(),
            status:     "SKIPPED".into(),
            reason:     reason.into(),
            width:      cs.width,
            height:     cs.height,
            format:     cs.format.clone(),
            confidence: cs.confidence.clone(),
            out_path:   None,
        }
    }
    fn error(cs: &Callsite, reason: &str) -> Self {
        Self {
            call_addr:  cs.call_addr.clone(),
            status:     "ERROR".into(),
            reason:     reason.into(),
            width:      cs.width,
            height:     cs.height,
            format:     cs.format.clone(),
            confidence: cs.confidence.clone(),
            out_path:   None,
        }
    }
}

// ── Reconstruction report ─────────────────────────────────────────────────────

#[derive(Debug, Serialize)]
pub struct ReconstructionReport {
    pub binary:     String,
    pub arch:       String,
    pub json_input: String,
    pub stats:      Stats,
    /// Populated by `compare_with_dynamic`; empty object `{}` when unused.
    pub comparison: Value,
    pub results:    Vec<CallsiteResult>,
}

// ── run_reconstruction ────────────────────────────────────────────────────────

/// Reconstruct all eligible callsites in parallel.
///
/// Args:
///   callsites:   Parsed Stage A callsites.
///   binary:      Full Mach-O file bytes.
///   slice:       Pre-selected arch slice (from `MachO::slice`).
///   out_dir:     Root directory; images are written to `<out_dir>/images/`.
///   min_conf:    Callsites below this threshold are marked SKIPPED.
///
/// Returns:
///   `(Stats, Vec<CallsiteResult>)` in input order.
pub fn run_reconstruction(
    callsites: &[Callsite],
    binary:    &[u8],
    slice:     &Slice,
    out_dir:   &Path,
    min_conf:  Confidence,
) -> (Stats, Vec<CallsiteResult>) {
    let img_dir = out_dir.join("images");
    // best-effort; errors surface per-callsite
    let _ = std::fs::create_dir_all(&img_dir);

    // rayon preserves input order
    let results: Vec<CallsiteResult> = callsites
        .par_iter()
        .map(|cs| reconstruct_one(cs, binary, slice, &img_dir, min_conf))
        .collect();

    let mut stats = Stats::default();
    for r in &results {
        match r.status.as_str() {
            "OK"              => { stats.attempted += 1; stats.succeeded       += 1; }
            "REJECTED_SANITY" => { stats.attempted += 1; stats.rejected_sanity += 1; }
            "ERROR"           => { stats.attempted += 1; stats.errors          += 1; }
            "SKIPPED"         =>   stats.skipped_confidence += 1,
            _                 => {}
        }
    }

    (stats, results)
}

// ── per-callsite worker ───────────────────────────────────────────────────────

fn reconstruct_one(
    cs:       &Callsite,
    binary:   &[u8],
    slice:    &Slice,
    img_dir:  &Path,
    min_conf: Confidence,
) -> CallsiteResult {
    // Confidence gate
    if Confidence::rank_of(&cs.confidence) < min_conf {
        return CallsiteResult::skipped(cs, &format!("confidence={}", cs.confidence));
    }

    // Required fields
    let pixels_str = match cs.pixels_ptr.as_deref() {
        Some(p) if p != "UNKNOWN" => p,
        _ => return CallsiteResult::skipped(cs, "missing pixels_ptr"),
    };
    let width  = match cs.width  { Some(w) if w > 0 => w, _ => return CallsiteResult::skipped(cs, "missing width")  };
    let height = match cs.height { Some(h) if h > 0 => h, _ => return CallsiteResult::skipped(cs, "missing height") };

    // Parse hex virtual address
    let vaddr = match parse_hex(pixels_str) {
        Some(v) => v,
        None    => return CallsiteResult::error(cs, &format!("invalid pixels_ptr: {pixels_str}")),
    };

    // VA → file offset
    let file_off = match slice.vaddr_to_file_offset(vaddr) {
        Some(o) => o,
        None    => return CallsiteResult::error(cs, &format!("vaddr {pixels_str} outside all segments")),
    };

    // Pixel format + expected byte count
    let fmt_raw = cs.format.as_deref().unwrap_or("UNKNOWN").trim_end_matches("_INFERRED");
    let fmt     = formats::PixelFormat::from_str(fmt_raw);
    let bpp     = formats::bytes_per_pixel(fmt);
    let nbytes  = width as usize * height as usize * bpp;

    if file_off + nbytes > binary.len() {
        return CallsiteResult::error(
            cs,
            &format!("read exceeds file ({file_off:#x} + {nbytes} > {})", binary.len()),
        );
    }
    let raw = &binary[file_off..file_off + nbytes];

    // Decode to RGBA8
    let rgba = match formats::decode_to_rgba8(raw, fmt, width, height) {
        Ok(p)  => p,
        Err(e) => return CallsiteResult::error(cs, &e.to_string()),
    };

    // Build image
    let img = match image::RgbaImage::from_raw(width, height, rgba.clone()) {
        Some(i) => i,
        None    => return CallsiteResult::error(cs, "RgbaImage::from_raw failed"),
    };

    // Sanity check (before saving, so we always have an out_path for inspection)
    let (ok, sanity_reason) = formats::passes_sanity(&rgba, width, height);

    // Save PNG
    let fname    = format!("{}.png", cs.call_addr.replace(':', "_"));
    let png_path = img_dir.join(&fname);
    if let Err(e) = img.save(&png_path) {
        return CallsiteResult::error(cs, &format!("PNG save: {e}"));
    }

    let out_path = Some(format!("images/{fname}"));
    let status   = if ok { "OK" } else { "REJECTED_SANITY" };
    CallsiteResult {
        call_addr:  cs.call_addr.clone(),
        status:     status.into(),
        reason:     sanity_reason,
        width:      cs.width,
        height:     cs.height,
        format:     cs.format.clone(),
        confidence: cs.confidence.clone(),
        out_path,
    }
}

// ── Dynamic comparison ────────────────────────────────────────────────────────

/// Compare static results against a Frida dynamic dump.
///
/// Args:
///   results:      Output of `run_reconstruction`.
///   dynamic_path: Path to `frida_dump.json` from `capture/frida_texture_hook.py`.
///
/// Returns:
///   JSON object with `matched_callsites`, `agreement_pct`, `dim_mismatches`, etc.
pub fn compare_with_dynamic(
    results:      &[CallsiteResult],
    dynamic_path: &Path,
) -> Result<Value> {
    let text     = std::fs::read_to_string(dynamic_path)?;
    let dyn_json: Value = serde_json::from_str(&text)?;

    // Build (call_addr → (width, height)) from dynamic callsites
    let dyn_by_addr: HashMap<&str, (Option<i64>, Option<i64>)> = dyn_json
        .get("callsites")
        .and_then(|v| v.as_array())
        .map(|arr| {
            arr.iter()
                .filter_map(|cs| {
                    let addr = cs.get("call_addr")?.as_str()?;
                    let w    = cs.get("width").and_then(|v| v.as_i64());
                    let h    = cs.get("height").and_then(|v| v.as_i64());
                    Some((addr, (w, h)))
                })
                .collect()
        })
        .unwrap_or_default();

    let mut only_in_dynamic: std::collections::HashSet<&str> =
        dyn_by_addr.keys().copied().collect();
    let mut matched    = 0usize;
    let mut agree      = 0usize;
    let mut mismatches = Vec::<Value>::new();

    for r in results {
        if r.status != "OK" && r.status != "REJECTED_SANITY" {
            continue;
        }
        only_in_dynamic.remove(r.call_addr.as_str());
        if let Some(&(dw, dh)) = dyn_by_addr.get(r.call_addr.as_str()) {
            matched += 1;
            let sw = r.width.map(|x| x as i64);
            let sh = r.height.map(|x| x as i64);
            if sw == dw && sh == dh {
                agree += 1;
            } else if mismatches.len() < 20 {
                mismatches.push(serde_json::json!({
                    "addr":    r.call_addr,
                    "static":  [sw, sh],
                    "dynamic": [dw, dh],
                }));
            }
        }
    }

    let pct = if matched > 0 { agree as f64 / matched as f64 * 100.0 } else { 0.0 };
    let pct_rounded = (pct * 10.0).round() / 10.0;

    let mut only_sorted: Vec<_> = only_in_dynamic.iter().copied().collect();
    only_sorted.sort();
    let only_sorted: Vec<_> = only_sorted.into_iter().take(20).collect();

    Ok(serde_json::json!({
        "matched_callsites":   matched,
        "dimension_agreement": agree,
        "agreement_pct":       pct_rounded,
        "only_in_dynamic":     only_sorted,
        "dim_mismatches":      mismatches,
    }))
}

// ── helpers ───────────────────────────────────────────────────────────────────

/// Parse a hex string like `"0x1003a2000"` into a `u64`.
fn parse_hex(s: &str) -> Option<u64> {
    s.strip_prefix("0x")
        .and_then(|h| u64::from_str_radix(h, 16).ok())
}

// ── tests ─────────────────────────────────────────────────────────────────────

#[cfg(test)]
pub mod tests {
    use super::*;
    use crate::macho::{self, CPU_TYPE_ARM64};

    /// Build a minimal JSON string for a single callsite; pixels_ptr points to
    /// a __DATA section at base_vaddr, format RGBA8, dims w×h.
    pub fn make_atlas_json(
        call_addr: &str,
        pixels_vaddr: u64,
        w: u32,
        h: u32,
        confidence: &str,
        format: &str,
    ) -> String {
        format!(r#"{{
  "binary": "test",
  "arch": "arm64",
  "add_region_addr": "0x0",
  "total_callsites": 1,
  "callsites": [{{
    "call_addr": "{call_addr}",
    "caller_func": "test_caller",
    "this_ptr": "0x1",
    "format": "{format}",
    "dims_ptr": "0x2",
    "width": {w},
    "height": {h},
    "pixels_ptr": "{pixels_vaddr:#x}",
    "confidence": "{confidence}"
  }}]
}}"#)
    }

    #[test]
    fn reconstruct_rgba8_gradient() {
        use tempfile::TempDir;

        let w = 16u32;
        let h = 16u32;
        // Build a non-uniform RGBA8 gradient that passes the entropy sanity gate.
        // Perfect 0..255 ramps hit entropy = 8.0 and are rejected as noise.
        // 128 distinct luma values each appearing twice → entropy ≈ 7.0.
        let mut pixels: Vec<u8> = Vec::new();
        for i in 0u8..128 {
            let luma = i * 2;
            pixels.extend_from_slice(&[luma, luma, luma, 255]);
            pixels.extend_from_slice(&[luma, luma, luma, 255]);
        }

        let vmaddr: u64 = 0x1_0000_0000;
        let binary       = macho::testutils::make_single_arch(&pixels, vmaddr);
        let macho        = macho::MachO::parse(&binary).unwrap();
        let slice        = macho.slice(CPU_TYPE_ARM64);

        let json_str = make_atlas_json("0x100001000", vmaddr, w, h, "HIGH", "RGBA8");
        let atlas: TextureAtlasJson = serde_json::from_str(&json_str).unwrap();

        let tmp = TempDir::new().unwrap();
        let (stats, results) = run_reconstruction(
            &atlas.callsites, &binary, slice, tmp.path(), Confidence::Medium,
        );

        assert_eq!(stats.succeeded,       1, "expected 1 success, results={results:?}");
        assert_eq!(stats.errors,          0);
        assert_eq!(stats.rejected_sanity, 0);

        let r = &results[0];
        assert_eq!(r.status,  "OK");
        assert_eq!(r.width,   Some(16));
        assert_eq!(r.height,  Some(16));

        // PNG should exist on disk
        let png = tmp.path().join(r.out_path.as_ref().unwrap());
        assert!(png.exists(), "PNG not written: {}", png.display());
    }

    #[test]
    fn solid_colour_rejected_sanity() {
        use tempfile::TempDir;

        let w = 8u32;
        let h = 8u32;
        let pixels = vec![0xFFu8, 0x00, 0x00, 0xFF].repeat((w * h) as usize);

        let vmaddr: u64 = 0x1_0000_0000;
        let binary       = macho::testutils::make_single_arch(&pixels, vmaddr);
        let macho        = macho::MachO::parse(&binary).unwrap();
        let slice        = macho.slice(CPU_TYPE_ARM64);

        let json_str = make_atlas_json("0x100001000", vmaddr, w, h, "HIGH", "RGBA8");
        let atlas: TextureAtlasJson = serde_json::from_str(&json_str).unwrap();

        let tmp = TempDir::new().unwrap();
        let (stats, results) = run_reconstruction(
            &atlas.callsites, &binary, slice, tmp.path(), Confidence::High,
        );

        assert_eq!(stats.rejected_sanity, 1, "solid red should be rejected: {results:?}");
        assert_eq!(results[0].status, "REJECTED_SANITY");
    }

    #[test]
    fn below_min_confidence_skipped() {
        use tempfile::TempDir;

        let pixels = vec![0u8; 64];
        let vmaddr  = 0x1_0000_0000u64;
        let binary  = macho::testutils::make_single_arch(&pixels, vmaddr);
        let macho   = macho::MachO::parse(&binary).unwrap();
        let slice   = macho.slice(CPU_TYPE_ARM64);

        let json_str = make_atlas_json("0x1", vmaddr, 4, 4, "LOW", "RGBA8");
        let atlas: TextureAtlasJson = serde_json::from_str(&json_str).unwrap();

        let tmp = TempDir::new().unwrap();
        let (stats, _) = run_reconstruction(
            &atlas.callsites, &binary, slice, tmp.path(), Confidence::Medium,
        );

        assert_eq!(stats.skipped_confidence, 1);
        assert_eq!(stats.attempted,          0);
    }
}
