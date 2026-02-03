# Created: 2025-12-14 04:57 UTC • Last Modified: 2025-12-14 05:46 UTC
from __future__ import annotations

import subprocess
from pathlib import Path


def _run_to_file(cmd: list[str], out_path: Path) -> None:
    out_path.parent.mkdir(parents=True, exist_ok=True)
    try:
        result = subprocess.run(cmd, capture_output=True, text=True)
        out_path.write_text((result.stdout or "") + ("\n" + result.stderr if result.stderr else ""))
    except FileNotFoundError:
        out_path.write_text(f"Command not found: {cmd[0]}\n")


def write_reports(binary_path: Path, exec_dir: Path) -> None:
    binary_path = Path(binary_path)
    exec_dir = Path(exec_dir)
    reports_dir = exec_dir / "reports"
    reports_dir.mkdir(parents=True, exist_ok=True)

    _run_to_file(["file", str(binary_path)], reports_dir / "file.txt")
    _run_to_file(["otool", "-hv", str(binary_path)], reports_dir / "macho_header.txt")
    _run_to_file(["otool", "-L", str(binary_path)], reports_dir / "deps.txt")
    _run_to_file(["nm", "-m", str(binary_path)], reports_dir / "symbols.txt")
    _run_to_file(["nm", "-C", str(binary_path)], reports_dir / "symbols_demangled.txt")
    _run_to_file(["codesign", "-dv", "--verbose=4", str(binary_path)], reports_dir / "codesign.txt")
    _run_to_file(["lipo", "-info", str(binary_path)], reports_dir / "lipo.txt")
