//! `atlas_recover` — Stage B: raw texture reconstructor.
//!
//! Consumes the JSON produced by `ExtractTextureAtlas.java` (Stage A), maps
//! each callsite's pixel-buffer virtual address into the Mach-O file, decodes
//! the raw pixels, runs sanity checks, and writes per-region PNGs plus a
//! `reconstruction_report.json` in the same schema as `reconstruct_textures.py`.
//!
//! Usage:
//!   atlas_recover \
//!     --json   targets/TouchOSC/exec/TouchOSC/texture_atlas.json \
//!     --binary targets/TouchOSC/binary/TouchOSC \
//!     --out    targets/TouchOSC/textures/ \
//!     [--arch arm64|x86_64] \
//!     [--min-confidence HIGH|MEDIUM|LOW] \
//!     [--contact-sheet] \
//!     [--compare frida_dump.json] \
//!     [--jobs N]

use anyhow::Result;
use clap::Parser;
use serde_json::Value;
use std::path::PathBuf;

use atlas_recover::contact;
use atlas_recover::macho::{self, CPU_TYPE_ARM64, CPU_TYPE_X86_64};
use atlas_recover::reconstruct::{
    compare_with_dynamic, run_reconstruction, Confidence, ReconstructionReport, TextureAtlasJson,
};

// ── CLI ───────────────────────────────────────────────────────────────────────

#[derive(Parser, Debug)]
#[command(
    name    = "atlas_recover",
    version = env!("CARGO_PKG_VERSION"),
    about   = "Stage B: reconstruct raw textures from ExtractTextureAtlas.java output"
)]
struct Cli {
    /// texture_atlas.json from ExtractTextureAtlas.java (Stage A)
    #[arg(long, required = true)]
    json: PathBuf,

    /// Mach-O binary (fat or single-arch)
    #[arg(long, required = true)]
    binary: PathBuf,

    /// Output directory for images and report
    #[arg(long, required = true)]
    out: PathBuf,

    /// Architecture slice to use
    #[arg(long, default_value = "arm64", value_parser = ["arm64", "x86_64"])]
    arch: String,

    /// Minimum confidence level to attempt reconstruction
    #[arg(long, default_value = "MEDIUM", value_parser = ["HIGH", "MEDIUM", "LOW"])]
    min_confidence: String,

    /// Build a contact sheet of all valid images
    #[arg(long)]
    contact_sheet: bool,

    /// Compare results against a Frida dynamic dump JSON
    #[arg(long)]
    compare: Option<PathBuf>,

    /// Parallel worker threads  (0 = rayon default = logical CPUs)
    #[arg(long, default_value = "0")]
    jobs: usize,
}

// ── main ──────────────────────────────────────────────────────────────────────

fn main() -> Result<()> {
    let cli = Cli::parse();

    // Optional thread-pool override
    if cli.jobs > 0 {
        rayon::ThreadPoolBuilder::new()
            .num_threads(cli.jobs)
            .build_global()?;
    }

    // ── Load Stage A JSON ────────────────────────────────────────────────────
    let json_text  = std::fs::read_to_string(&cli.json)?;
    let atlas:       TextureAtlasJson = serde_json::from_str(&json_text)?;
    println!("[+] Loaded {} callsites from {}", atlas.callsites.len(), cli.json.display());
    for (level, n) in atlas.confidence_summary() {
        if n > 0 { println!("    {level}: {n}"); }
    }

    // ── Parse Mach-O ─────────────────────────────────────────────────────────
    println!("[+] Parsing Mach-O: {}", cli.binary.display());
    let binary_data = std::fs::read(&cli.binary)?;
    let parsed      = macho::MachO::parse(&binary_data)?;
    let cpu_type    = if cli.arch == "arm64" { CPU_TYPE_ARM64 } else { CPU_TYPE_X86_64 };
    let slice       = parsed.slice(cpu_type);
    println!(
        "    cpu_type={:#010x}  segments=[{}]",
        slice.cpu_type as u32,
        slice.segments.iter().map(|s| s.name.as_str()).collect::<Vec<_>>().join(", ")
    );
    println!("    binary size: {} bytes", binary_data.len());

    // ── Reconstruct ──────────────────────────────────────────────────────────
    std::fs::create_dir_all(&cli.out)?;
    let min_conf = Confidence::from_str(&cli.min_confidence);
    println!("[+] Reconstructing (min_confidence={}) …", cli.min_confidence);

    let t_start           = std::time::Instant::now();
    let (stats, results)  = run_reconstruction(
        &atlas.callsites, &binary_data, slice, &cli.out, min_conf,
    );
    let elapsed_secs = t_start.elapsed().as_secs_f64();

    println!("\n[+] Results ({elapsed_secs:.1}s):");
    println!("    attempted:         {}", stats.attempted);
    println!("    succeeded:         {}", stats.succeeded);
    println!("    rejected (sanity): {}", stats.rejected_sanity);
    println!("    skipped (conf):    {}", stats.skipped_confidence);
    println!("    errors:            {}", stats.errors);
    if elapsed_secs > 0.0 && stats.attempted > 0 {
        println!("    throughput:        {:.0} regions/s", stats.attempted as f64 / elapsed_secs);
    }

    // ── Contact sheet ────────────────────────────────────────────────────────
    if cli.contact_sheet {
        let ok_paths: Vec<PathBuf> = results
            .iter()
            .filter(|r| r.status == "OK")
            .filter_map(|r| r.out_path.as_ref())
            .map(|rel| cli.out.join(rel))
            .collect();
        contact::build_contact_sheet(&ok_paths, &cli.out.join("contact_sheet.png"), 128, 16)?;
    }

    // ── Dynamic comparison ───────────────────────────────────────────────────
    let comparison: Value = match &cli.compare {
        Some(path) => {
            println!("\n[+] Comparing with dynamic results: {}", path.display());
            let cmp = compare_with_dynamic(&results, path)?;
            let matched = cmp.get("matched_callsites").and_then(|v| v.as_u64()).unwrap_or(0);
            let pct     = cmp.get("agreement_pct").and_then(|v| v.as_f64()).unwrap_or(0.0);
            println!("    matched callsites:   {matched}");
            println!("    dimension agreement: {pct:.1}%");
            cmp
        }
        None => Value::Object(serde_json::Map::new()),
    };

    // ── Write report ─────────────────────────────────────────────────────────
    let report = ReconstructionReport {
        binary:     cli.binary.to_string_lossy().into_owned(),
        arch:       cli.arch.clone(),
        json_input: cli.json.to_string_lossy().into_owned(),
        stats,
        comparison,
        results,
    };
    let rp = cli.out.join("reconstruction_report.json");
    std::fs::write(&rp, serde_json::to_string_pretty(&report)?)?;
    println!("\n[+] Report → {}", rp.display());

    Ok(())
}
