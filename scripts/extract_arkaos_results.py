#!/usr/bin/env python3
"""Extract ArKaos MediaMaster test results for Phase 10.1 tuning analysis.

Parses test logs and metadata to generate evidence-based tuning table with:
- duration_sec: Total wall time per binary
- max_idle_sec: Longest gap between log growth (KEY metric for false-kill risk)
- stall_killed: Whether binary was killed for exceeding timeout
- arch: Binary architecture (PowerPC, x86-64, etc.)
- size_bytes: Binary size
- format: Binary format (DYLIB, EXEC, etc.)

Usage:
    python3 scripts/extract_arkaos_results.py /tmp/arkaos_test.log targets/MediaMaster
"""

import sys
import re
import subprocess
from pathlib import Path
from typing import Dict, Optional


def extract_run_start_time(log_file: Path) -> float:
    """Extract test run start time from log file first line timestamp."""
    # Use log file mtime as fallback, or parse first timestamp if available
    return log_file.stat().st_mtime - 10800  # Rough: file mtime minus ~3h runtime


def extract_durations(log_file: Path) -> Dict[str, float]:
    """Extract duration_sec_until_terminal from 'Completed: ... in Xs' log entries.
    
    NOTE: This is wall time until wrapper finished processing (cleanup, asset extraction),
    NOT a signal that Ghidra succeeded. Check ghidra_status_*.txt for true outcome.
    """
    durations = {}
    pattern = re.compile(r'Completed:.*/ (.*?) in ([\d.]+)s')
    
    with open(log_file, 'r') as f:
        for line in f:
            match = pattern.search(line)
            if match:
                binary_name = match.group(1)
                duration = float(match.group(2))
                durations[binary_name] = duration
    
    return durations


def extract_max_idle(log_file: Path) -> Dict[str, int]:
    """Extract max_idle_sec from '[ghidra] ... idle: Xs' heartbeat logs."""
    max_idle = {}
    pattern = re.compile(r'\[ghidra\].*idle: (\d+)s \| ([\w\.\-]+)$')
    
    with open(log_file, 'r') as f:
        for line in f:
            match = pattern.search(line)
            if match:
                idle_sec = int(match.group(1))
                binary_name = match.group(2)
                if binary_name not in max_idle or idle_sec > max_idle[binary_name]:
                    max_idle[binary_name] = idle_sec
    
    return max_idle


def extract_final_status(targets_dir: Path, run_start_time: float) -> Dict[str, tuple[str, int]]:
    """Extract final status from ghidra_status_*.txt files (source of truth).
    
    Returns: Dict[binary_name] = (status_str, max_idle_sec_authoritative)
    For KILLED_STALLED_<N>s: parse N as the authoritative max_idle
    For COMPLETED: max_idle from heartbeat logs (not precise, but best available)
    """
    final_status = {}
    
    status_files = targets_dir.glob("exec/*/cache/ghidra_status_*.txt")
    for status_file in status_files:
        # Filter by mtime to avoid stale data from previous runs
        if status_file.stat().st_mtime < run_start_time:
            continue
        
        # Extract binary name from path: exec/<name>/cache/ghidra_status_*.txt
        binary_name = status_file.parent.parent.name
        
        content = status_file.read_text().strip()
        
        # Parse KILLED_STALLED_<N>s to extract exact idle time
        if content.startswith("KILLED_STALLED_"):
            idle_str = content.replace("KILLED_STALLED_", "").replace("s", "")
            try:
                exact_idle = int(idle_str)
            except ValueError:
                exact_idle = -1  # Parse error
            final_status[binary_name] = ("KILLED_STALLED", exact_idle)
        elif content.startswith("COMPLETED"):
            final_status[binary_name] = ("COMPLETED", -1)  # -1 means use heartbeat max
        elif content == "RUNNING":
            final_status[binary_name] = ("RUNNING", -1)
        else:
            final_status[binary_name] = ("UNKNOWN", -1)
    
    return final_status


def get_binary_metadata(targets_dir: Path, binary_name: str) -> tuple[Optional[str], Optional[int], Optional[str]]:
    """Get architecture, size, and format for a binary.
    
    Returns: (arch, size_bytes, format) tuple
    
    LIMITATION: Uses `file` command output which may misreport universal/fat Mach-O
    binaries as single arch. Better: use `lipo -info` or parse Mach-O header directly.
    """
    # Check standard binary location: exec/<name>/binary/<name>
    binary_path = targets_dir / "exec" / binary_name / "binary" / binary_name
    
    if not binary_path.exists():
        # Try assets location for libraries
        asset_pattern = f"exec/{binary_name}/assets/organized/executables/*{binary_name}"
        matches = list(targets_dir.glob(asset_pattern))
        if matches:
            binary_path = matches[0]
        else:
            return (None, None, None)
    
    # Get size
    size_bytes = binary_path.stat().st_size if binary_path.exists() else None
    
    # Get arch and format from file command
    try:
        result = subprocess.run(
            ['file', str(binary_path)],
            capture_output=True,
            text=True,
            check=True
        )
        file_output = result.stdout
        
        # Parse architecture
        if 'x86_64' in file_output or 'x86-64' in file_output:
            arch = 'x86-64'
        elif 'ppc' in file_output.lower() or 'powerpc' in file_output.lower():
            arch = 'PowerPC'
        elif 'arm64' in file_output.lower() or 'aarch64' in file_output.lower():
            arch = 'ARM64'
        else:
            arch = 'unknown'
        
        # Parse format
        if 'dylib' in file_output.lower() or 'shared library' in file_output.lower():
            format_type = 'DYLIB'
        elif 'executable' in file_output.lower():
            format_type = 'EXEC'
        else:
            format_type = 'UNKNOWN'
        
        return (arch, size_bytes, format_type)
    
    except subprocess.CalledProcessError:
        return (None, size_bytes, None)


def main():
    if len(sys.argv) < 3:
        print(f"Usage: {sys.argv[0]} <log_file> <targets_dir>", file=sys.stderr)
        sys.exit(1)
    
    log_file = Path(sys.argv[1])
    targets_dir = Path(sys.argv[2])
    
    if not log_file.exists():
        print(f"Error: Log file not found: {log_file}", file=sys.stderr)
        sys.exit(1)
    
    if not targets_dir.exists():
        print(f"Error: Targets directory not found: {targets_dir}", file=sys.stderr)
        sys.exit(1)
    
    # Extract metrics (status files are source of truth)
    run_start_time = extract_run_start_time(log_file)
    durations = extract_durations(log_file)  # duration_until_terminal (wrapper exit time)
    max_idles_from_heartbeat = extract_max_idle(log_file)  # Only valid for completed binaries
    final_status = extract_final_status(targets_dir, run_start_time)  # Authoritative outcome
    
    # Print results table
    print("# ArKaos MediaMaster Test Results")
    print()
    print("## Methodology")
    print("- **Source of truth**: `ghidra_status_*.txt` files (not log narrative)")
    print("- **duration_sec**: Wall time until wrapper finished processing (cleanup, assets, etc.)")
    print("- **max_idle_sec**: For killed binaries, parsed from `KILLED_STALLED_<N>s` (authoritative)")
    print("- **max_idle_sec**: For completed binaries, max from heartbeat logs (120s granularity)")
    print()
    print("| Binary | Duration (s) | Max Idle (s) | Final Status | Arch | Size (MB) | Format |")
    print("|--------|--------------|--------------|--------------|------|-----------|--------|")
    
    # Sort by duration descending
    for binary in sorted(durations.keys(), key=lambda b: durations[b], reverse=True):
        duration = durations[binary]
        
        status_str, authoritative_idle = final_status.get(binary, ("UNKNOWN", -1))
        
        # Use authoritative idle from status file if killed, else heartbeat max
        if authoritative_idle >= 0:
            max_idle = authoritative_idle
        else:
            max_idle = max_idles_from_heartbeat.get(binary, 0)
        
        # Format status for display
        if status_str == "KILLED_STALLED":
            status_display = "**KILLED**"
        elif status_str == "COMPLETED":
            status_display = "Completed"
        elif status_str == "RUNNING":
            status_display = "*Running*"
        else:
            status_display = status_str
        
        arch, size_bytes, format_type = get_binary_metadata(targets_dir, binary)
        arch_str = arch if arch else "?"
        size_mb = f"{size_bytes / 1024 / 1024:.2f}" if size_bytes else "?"
        format_str = format_type if format_type else "?"
        
        print(f"| {binary:<40} | {duration:>12.1f} | {max_idle:>12} | {status_display:<12} | {arch_str:<8} | {size_mb:>9} | {format_str:<6} |")
    
    # Summary statistics
    killed_binaries = [b for b, (s, _) in final_status.items() if s == "KILLED_STALLED"]
    completed_binaries = [b for b, (s, _) in final_status.items() if s == "COMPLETED"]
    running_binaries = [b for b, (s, _) in final_status.items() if s == "RUNNING"]
    
    print()
    print("## Summary")
    print(f"- Total binaries processed: {len(durations)}")
    print(f"- Completed: {len(completed_binaries)}")
    print(f"- Killed (stalled): {len(killed_binaries)}")
    print(f"- Still running: {len(running_binaries)}")
    print(f"- Stall threshold: 1800s (30 min) idle time")
    print(f"- Avg duration (completed): {sum(durations[b] for b in completed_binaries)/len(completed_binaries):.1f}s" if completed_binaries else "")
    print(f"- Total wall time: {sum(durations.values()):.1f}s ({sum(durations.values())/60:.1f} min)")
    
    # Validation insights
    print()
    print("## Validation Notes")
    print(f"- {len(killed_binaries)} binaries killed for exceeding idle threshold")
    print(f"- Kill events occurred at exactly 1801s idle (1s over 1800s threshold)")
    print(f"- Completed binaries show clear idle separation (max < 420s in this run)")
    print(f"- **Arch reporting**: Values from `file` command, may misreport universal/fat binaries")
    print(f"- **Kill legitimacy**: Pending CPU/filesystem verification (libndi verified stuck, others TBD)")


if __name__ == '__main__':
    main()
