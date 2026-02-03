# Created: 2025-11-24 02:14 UTC • Last Modified: 2025-11-24 22:22 UTC
import hashlib, os, subprocess
from pathlib import Path

def verify_rebuild(original, rebuilt, log_file="docs/Verification_Log.md"):
    log_path = Path(log_file)
    log_path.parent.mkdir(exist_ok=True)
    if not os.path.exists(original) or not os.path.exists(rebuilt):
        with open(log_path, 'a') as f:
            f.write(f"[-] Missing: {original} or {rebuilt}\n")
        return False
    orig_hash = hashlib.sha256(Path(original).read_bytes()).hexdigest()
    rebuilt_hash = hashlib.sha256(Path(rebuilt).read_bytes()).hexdigest()
    orig_size = os.path.getsize(original)
    rebuilt_size = os.path.getsize(rebuilt)
    match = orig_hash == rebuilt_hash and orig_size == rebuilt_size
    status = "[+] 100% MATCH" if match else f"[-] MISMATCH (Hash: {orig_hash[:16]}... vs {rebuilt_hash[:16]}..., Size: {orig_size} vs {rebuilt_size})"
    with open(log_path, 'a') as f:
        f.write(f"{status} - {original} vs {rebuilt}\n")
    return match

def diff_decompiled_vs_rebuilt(decompiled_dir, rebuilt_dir, output_file="docs/Diff_Report.md"):
    """
    Generate diff report between decompiled and rebuilt source.
    """
    output_path = Path(output_file)
    output_path.parent.mkdir(exist_ok=True)

    with open(output_path, 'w') as f:
        f.write("# Diff Report: Decompiled vs Rebuilt\n\n")

        decompiled_files = list(Path(decompiled_dir).glob("*.cpp"))
        rebuilt_files = list(Path(rebuilt_dir).glob("*.cpp"))

        for decomp in decompiled_files:
            rebuilt = Path(rebuilt_dir) / decomp.name
            if rebuilt.exists():
                try:
                    result = subprocess.run(['diff', '-u', str(decomp), str(rebuilt)], capture_output=True, text=True)
                    if result.returncode != 0:
                        f.write(f"## Diff for {decomp.name}\n```\n{result.stdout}\n```\n\n")
                    else:
                        f.write(f"## {decomp.name}: No differences\n\n")
                except FileNotFoundError:
                    f.write(f"## {decomp.name}: diff command not found\n\n")
            else:
                f.write(f"## {decomp.name}: Rebuilt file missing\n\n")

def cross_binary_analysis(binaries, output_file="docs/Cross_Binary_Report.md"):
    """
    Compare functions across multiple binaries.
    :param binaries: List of binary paths.
    """
    from collections import defaultdict
    output_path = Path(output_file)
    output_path.parent.mkdir(exist_ok=True)

    function_map = defaultdict(list)

    for binary in binaries:
        # Extract symbols using nm
        try:
            result = subprocess.run(['nm', '-C', binary], capture_output=True, text=True)
            if result.returncode == 0:
                for line in result.stdout.split('\n'):
                    parts = line.split()
                    if len(parts) >= 3:
                        name = ' '.join(parts[2:])
                        function_map[name].append(binary)
        except Exception as e:
            print(f"Error processing {binary}: {e}")

    with open(output_path, 'w') as f:
        f.write("# Cross-Binary Function Analysis\n\n")
        f.write(f"Analyzed {len(binaries)} binaries\n\n")
        
        # Common functions
        common = {func: bins for func, bins in function_map.items() if len(bins) > 1}
        f.write(f"## Common Functions ({len(common)})\n")
        for func in sorted(common.keys())[:200]:  # Limit
            f.write(f"- {func}: {len(common[func])} binaries\n")
        f.write("\n")
        
        # Unique per binary
        for binary in binaries:
            unique = [func for func, bins in function_map.items() if len(bins) == 1 and binary in bins]
            f.write(f"## Unique to {Path(binary).name} ({len(unique)})\n")
            for func in sorted(unique)[:100]:  # Limit
                f.write(f"- {func}\n")
            f.write("\n")

    print(f"Cross-binary report saved to {output_file}")