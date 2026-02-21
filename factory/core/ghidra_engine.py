# Created: 2026-01-07 05:05 UTC • Last Modified: 2026-02-20 00:00 UTC
import hashlib
import os
import re
import subprocess
import time
from collections import Counter
from pathlib import Path

from factory.core.progress import Heartbeat


def _safe_project_name(binary_path: Path) -> str:
    base = binary_path.name
    base = re.sub(r"[^A-Za-z0-9_.-]+", "_", base)
    h = hashlib.sha256(str(binary_path).encode("utf-8", errors="ignore")).hexdigest()[:8]
    return f"proj_{base}_{h}"


def _resolve_ghidra_path() -> Path:
    """
    Resolve installation path of Ghidra, preferring env var over local tools symlink.

    Resolution order:
      1. GHIDRA_HOME env var (preferred — set this in your shell profile)
      2. factory/tools/ghidra symlink/dir relative to repo root (local override)

    Returns:
        Path to the Ghidra installation root (contains support/analyzeHeadless).

    Side effects:
        Raises ValueError with actionable message if Ghidra cannot be located.
    """
    ghidra_home_env = os.getenv("GHIDRA_HOME")
    if ghidra_home_env:
        p = Path(ghidra_home_env)
        if p.exists():
            return p
        raise ValueError(f"GHIDRA_HOME is set but path does not exist: {p}")

    _repo_root = Path(__file__).parents[2]
    local_path = _repo_root / "factory" / "tools" / "ghidra"
    if local_path.exists():
        return local_path

    raise ValueError(
        "Ghidra not found. Set GHIDRA_HOME to your Ghidra installation directory, "
        "e.g.:\n  export GHIDRA_HOME=/opt/homebrew/Cellar/ghidra/11.4.2/libexec\n"
        "or run ensure_tools() to download it."
    )


def analyze_binary(binary_path, target_dir):
    binary_path = Path(binary_path)
    target_dir = Path(target_dir)

    ghidra_path = _resolve_ghidra_path()

    decompiled_dir = target_dir / "decompiled_real"
    decompiled_dir.mkdir(parents=True, exist_ok=True)

    project_dir = target_dir / "ghidra_projects"
    project_dir.mkdir(parents=True, exist_ok=True)
    project_name = _safe_project_name(binary_path)

    _scripts_path = Path(__file__).parents[2] / "factory" / "ghidra_scripts"
    cmd = [
        str(ghidra_path / "support/analyzeHeadless"),
        str(project_dir),
        project_name,
        "-import",
        str(binary_path),
        "-postScript",
        "ExportEverything.java",
        str(decompiled_dir),
        "-scriptPath",
        str(_scripts_path),
        "-deleteProject",
    ]

    start = time.monotonic()
    heartbeat = Heartbeat("ghidra", target=binary_path.name, interval_sec=60.0, env_prefix="GHIDRA")

    # Create log files for debugging
    log_dir = target_dir / "cache"
    stdout_log = log_dir / f"ghidra_stdout_{binary_path.name}.log"
    stderr_log = log_dir / f"ghidra_stderr_{binary_path.name}.log"
    
    # Run with stderr/stdout capture for loop detection
    proc = subprocess.Popen(
        cmd,
        cwd=".",
        stdout=open(stdout_log, "w"),
        stderr=subprocess.PIPE,
        text=True,
        bufsize=1
    )
    
    warning_counter = Counter()
    last_warnings = []
    loop_threshold = 100  # Kill if same warning repeats this many times
    check_interval = 10  # Check every 10 iterations
    iteration = 0
    
    stderr_fd = proc.stderr.fileno()
    os.set_blocking(stderr_fd, False)
    
    stderr_file = open(stderr_log, "w")

    try:
        while True:
            rc = proc.poll()
            if rc is not None:
                if rc != 0:
                    print(f"[!] Ghidra exited with code {rc}. Check logs: {stderr_log}", flush=True)
                    # Don't raise - allow continuing with partial results
                return

            now = time.monotonic()
            
            # Read stderr output for loop detection
            try:
                line = proc.stderr.readline()
                if line:
                    stderr_file.write(line)
                    stderr_file.flush()
                    
                    # Track warnings for loop detection
                    if "WARN" in line:
                        # Normalize the warning to detect duplicates
                        normalized = re.sub(r'0x[0-9a-f]+', '0xXXXX', line.lower())
                        normalized = re.sub(r'ram:[0-9a-f]+', 'ram:XXXX', normalized)
                        
                        warning_counter[normalized] += 1
                        last_warnings.append(normalized)
                        
                        # Keep only recent warnings
                        if len(last_warnings) > 200:
                            old_warn = last_warnings.pop(0)
                            warning_counter[old_warn] -= 1
                            if warning_counter[old_warn] <= 0:
                                del warning_counter[old_warn]
                        
                        # Check for infinite loop every N iterations
                        iteration += 1
                        if iteration % check_interval == 0 and warning_counter:
                            most_common = warning_counter.most_common(1)[0]
                            if most_common[1] >= loop_threshold:
                                print(f"[!] Detected infinite loop in Ghidra (warning repeated {most_common[1]} times)", flush=True)
                                print(f"[!] Killing stuck process and continuing with partial results", flush=True)
                                proc.kill()
                                proc.wait()
                                return
            except (IOError, ValueError):
                pass  # Non-blocking read, no data available

            heartbeat.emit()

            time.sleep(0.1)
    finally:
        stderr_file.close()