# Created: 2026-01-07 05:05 UTC • Last Modified: 2026-01-08 07:30 UTC
import argparse
import shutil
import sys
import time
from pathlib import Path

sys.path.insert(0, str(Path(__file__).parent.parent))

from factory.core import (
    cpp_reconstructor,
    frida_engine,
    ghidra_engine,
    header_generator,
    verifier,
    build_system,
)
from factory.core import asset_extractor_v2 as asset_extractor
from factory.core import macho_discovery, reporting, target_layout


def _mirror_bundle_contents(app_path: Path, target_root: Path, *, force: bool, skip_existing: bool) -> None:
    contents = app_path / "Contents"
    if not contents.exists() or not contents.is_dir():
        return
    bundle_dir = target_root / "bundle" / "Contents"
    if bundle_dir.exists():
        if force:
            shutil.rmtree(bundle_dir)
        elif skip_existing:
            return
        else:
            shutil.rmtree(bundle_dir)
    bundle_dir.parent.mkdir(parents=True, exist_ok=True)
    shutil.copytree(contents, bundle_dir, symlinks=True, ignore=shutil.ignore_patterns(".DS_Store", "__pycache__"))


def _should_skip_exec(exec_dir: Path) -> bool:
    decompiled = exec_dir / "decompiled_real"
    return decompiled.exists() and any(decompiled.glob("*.cpp"))


def process_target(input_path: Path, args) -> None:
    input_path = Path(input_path).resolve()

    target_name = target_layout.normalize_target_name(input_path)
    target_root = target_layout.targets_root() / target_name
    exec_root = target_root / "exec"
    exec_root.mkdir(parents=True, exist_ok=True)

    if input_path.is_dir() and input_path.name.endswith(".app"):
        _mirror_bundle_contents(input_path, target_root, force=args.force, skip_existing=args.skip_existing)

    binaries = macho_discovery.discover_macho_binaries(input_path)
    if not binaries:
        print(f"[-] No Mach-O binaries discovered in: {input_path}")
        return

    total = len(binaries)
    print(f"[+] Discovered {total} Mach-O binaries for: {target_name}", flush=True)

    used_exec_names: set[str] = set()
    manifest_bins: list[dict] = []

    for idx, binary in enumerate(binaries, start=1):
        desired = binary.name
        disambiguator = str(binary)
        try:
            disambiguator = str(binary.relative_to(input_path))
        except Exception:
            pass

        exec_name = target_layout.unique_exec_name(desired, used_exec_names, disambiguator)
        exec_dir = exec_root / exec_name

        if args.skip_existing and _should_skip_exec(exec_dir):
            pct = (idx / total) * 100.0
            print(f"[=] [{idx}/{total} {pct:5.1f}%] Skipping existing: {target_name} / {exec_name}", flush=True)
            manifest_bins.append(
                {
                    "binary_name": exec_name,
                    "binary_path": str(binary.resolve()),
                    "exec_dir": str(exec_dir.resolve()),
                }
            )
            target_layout.write_manifest(target_root, input_path, manifest_bins)
            continue

        if args.force and exec_dir.exists():
            shutil.rmtree(exec_dir)

        (exec_dir / "binary").mkdir(parents=True, exist_ok=True)
        (exec_dir / "assets").mkdir(parents=True, exist_ok=True)
        (exec_dir / "reports").mkdir(parents=True, exist_ok=True)
        (exec_dir / "cache").mkdir(parents=True, exist_ok=True)

        copied_binary = exec_dir / "binary" / binary.name
        if not copied_binary.exists() or args.force:
            shutil.copy2(binary, copied_binary)

        pct = (idx / total) * 100.0
        print(f"[+] [{idx}/{total} {pct:5.1f}%] Decompiling: {target_name} / {exec_name}", flush=True)
        step_start = time.monotonic()
        reporting.write_reports(copied_binary, exec_dir)
        ghidra_engine.analyze_binary(copied_binary, exec_dir)
        cpp_reconstructor.trigger_cpp_reconstruction(exec_dir)
        
        # Comprehensive asset extraction
        if not args.skip_assets:
            asset_extractor.extract_assets(copied_binary, exec_dir)
        
        step_s = time.monotonic() - step_start
        print(f"[+] Completed: {target_name} / {exec_name} in {step_s:.1f}s", flush=True)

        if args.headers:
            decompiled_dir = exec_dir / "decompiled_real"
            include_dir = exec_dir / "source" / "include"
            header_generator.generate_headers(str(decompiled_dir), str(include_dir))

        if args.trace:
            if args.pid:
                tracer = frida_engine.FridaEngine(pid=int(args.pid))
            else:
                tracer = frida_engine.FridaEngine(str(copied_binary))
            tracer.start_tracing(duration=30)
            tracer.capture_dynamic_headers()

        if args.build:
            build_system.build_target(exec_dir)
            verifier.verify_rebuild(str(copied_binary), exec_dir / "build" / copied_binary.name)

        rebuilt_dir = exec_dir / "source" / "src"
        decompiled_dir = exec_dir / "decompiled_real"
        if rebuilt_dir.exists() and decompiled_dir.exists():
            verifier.diff_decompiled_vs_rebuilt(str(decompiled_dir), str(rebuilt_dir))

        manifest_bins.append(
            {
                "binary_name": exec_name,
                "binary_path": str(binary.resolve()),
                "exec_dir": str(exec_dir.resolve()),
            }
        )

        target_layout.write_manifest(target_root, input_path, manifest_bins)

    target_layout.write_manifest(target_root, input_path, manifest_bins)


def main() -> None:
    parser = argparse.ArgumentParser(
        description="Aether Reverse Engineering Suite - Comprehensive binary analysis and decompilation"
    )
    parser.add_argument("inputs", nargs="+", help="Paths to Mach-O binary, .app bundle, or folder")
    parser.add_argument("--force", action="store_true", help="Delete and re-run outputs under targets/")
    parser.add_argument("--skip-existing", action="store_true", help="Skip binaries that already have decompiled output")
    parser.add_argument("--skip-assets", action="store_true", help="Skip comprehensive asset extraction")
    parser.add_argument("--trace", action="store_true", help="Enable Frida tracing (requires hardware)")
    parser.add_argument("--build", action="store_true", help="Attempt rebuild after reconstruction")
    parser.add_argument("--headers", action="store_true", help="Generate missing headers from decompiled code")
    parser.add_argument("--pid", help="Attach to running process by PID instead of spawning")
    parser.add_argument("--no-index", action="store_true", help="Do not update targets/INDEX.json")
    args = parser.parse_args()

    for inp in args.inputs:
        process_target(Path(inp), args)

    if not args.no_index:
        target_layout.write_index(target_layout.targets_root())


if __name__ == "__main__":
    main()