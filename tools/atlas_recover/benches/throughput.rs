//! Throughput benchmark: measures regions/second for bulk reconstruction.
//!
//! Run:    cargo bench --bench throughput
//! Report: target/criterion/throughput/report/index.html
//!
//! Synthetic workload:
//!   - 200 RGBA8 callsites, each a 64×64 checkerboard (16 KB raw pixels each)
//!   - All HIGH confidence, all pointing into a single contiguous __DATA region
//!   - Measures end-to-end: JSON parse → VA-map → decode → sanity → PNG write

use criterion::{criterion_group, criterion_main, BenchmarkId, Criterion, Throughput};
use std::path::Path;

use atlas_recover::{
    macho::{self, MachO, CPU_TYPE_ARM64},
    reconstruct::{run_reconstruction, Confidence, TextureAtlasJson},
};

// ── synthetic data builders ───────────────────────────────────────────────────

const IMG_W: u32 = 64;
const IMG_H: u32 = 64;
const BPP:   u32 = 4; // RGBA8

fn make_checkerboard(w: u32, h: u32) -> Vec<u8> {
    let cell = 8u32;
    let mut v = Vec::with_capacity((w * h * 4) as usize);
    for y in 0..h {
        for x in 0..w {
            let val = if ((x / cell) + (y / cell)) % 2 == 0 { 220u8 } else { 30u8 };
            v.extend_from_slice(&[val, val, val, 255]);
        }
    }
    v
}

/// Create a binary with `n` consecutive 64×64 RGBA8 tiles in one __DATA segment.
fn make_fixture_binary(n: usize) -> Vec<u8> {
    let tile    = make_checkerboard(IMG_W, IMG_H);
    let payload: Vec<u8> = tile.repeat(n);
    let vmaddr: u64 = 0x1_0000_0000;
    macho::testutils::make_single_arch(&payload, vmaddr)
}

/// Build JSON for `n` callsites, each pointing to the i-th tile.
fn make_fixture_json(n: usize) -> String {
    let tile_bytes = (IMG_W * IMG_H * BPP) as u64;
    let base_vaddr: u64 = 0x1_0000_0000;

    let cs: String = (0..n)
        .map(|i| {
            let vaddr = base_vaddr + i as u64 * tile_bytes;
            format!(
                r#"  {{
    "call_addr": "{:#x}",
    "caller_func": "bench_caller",
    "this_ptr": "0x1",
    "format": "RGBA8",
    "dims_ptr": "0x2",
    "width": {IMG_W},
    "height": {IMG_H},
    "pixels_ptr": "{vaddr:#x}",
    "confidence": "HIGH"
  }}"#,
                0x1000_0000u64 + i as u64
            )
        })
        .collect::<Vec<_>>()
        .join(",\n");

    format!(
        r#"{{
  "binary": "bench",
  "arch": "arm64",
  "add_region_addr": "0x0",
  "total_callsites": {n},
  "callsites": [
{cs}
  ]
}}"#
    )
}

// ── benchmarks ────────────────────────────────────────────────────────────────

fn bench_reconstruction(c: &mut Criterion) {
    let tmp = tempfile::TempDir::new().unwrap();

    for &n in &[10usize, 50, 200] {
        let binary   = make_fixture_binary(n);
        let json_str = make_fixture_json(n);
        let atlas: TextureAtlasJson = serde_json::from_str(&json_str).unwrap();
        let macho    = MachO::parse(&binary).unwrap();
        let slice    = macho.slice(CPU_TYPE_ARM64);

        let out_dir  = tmp.path().join(format!("out_{n}"));

        let total_bytes = n as u64 * IMG_W as u64 * IMG_H as u64 * BPP as u64;
        c.benchmark_group("throughput")
            .throughput(Throughput::Bytes(total_bytes))
            .bench_with_input(
                BenchmarkId::new("regions", n),
                &n,
                |b, _| {
                    b.iter(|| {
                        let _ = run_reconstruction(
                            &atlas.callsites,
                            &binary,
                            slice,
                            &out_dir,
                            Confidence::High,
                        );
                    });
                },
            );
    }
}

fn bench_macho_parse(c: &mut Criterion) {
    let binary = make_fixture_binary(1);
    c.benchmark_group("macho")
        .bench_function("parse", |b| {
            b.iter(|| {
                let _ = MachO::parse(&binary).unwrap();
            });
        });
}

criterion_group!(benches, bench_reconstruction, bench_macho_parse);
criterion_main!(benches);
