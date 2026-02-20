#!/usr/bin/env python3
# Created: 2026-01-08 06:00 UTC • Last Modified: 2026-01-08 07:30 UTC
"""Extract OSC/MIDI protocol strings from decompiled code and binary."""
import re
import json
from pathlib import Path
from collections import defaultdict
import sys

def extract_osc_patterns(content: str) -> list[str]:
    """Extract OSC address patterns like /fader/1, /led/grid/1/1, etc."""
    patterns = []
    # OSC patterns start with / and contain alphanumeric/underscore
    for match in re.finditer(r'["\'](/[a-zA-Z0-9_/]+)["\']', content):
        pattern = match.group(1)
        # Filter out false positives (paths, etc)
        if not any(x in pattern for x in ['.', 'Library', 'System', 'usr', 'etc']):
            patterns.append(pattern)
    return patterns

def extract_midi_strings(content: str) -> list[str]:
    """Extract MIDI-related strings and patterns."""
    midi_strings = []
    keywords = ['midi', 'MIDI', 'note', 'control', 'channel', 'velocity', 
                'program', 'pitch', 'aftertouch', 'sysex']
    for kw in keywords:
        for match in re.finditer(rf'["\']([^"\']*{kw}[^"\']*)["\']', content, re.IGNORECASE):
            midi_strings.append(match.group(1))
    return midi_strings

def extract_network_strings(content: str) -> list[str]:
    """Extract network-related strings (ports, protocols, etc)."""
    network = []
    # Port numbers
    for match in re.finditer(r'["\']([^"\']*(?:port|Port)[^"\']*)["\']', content):
        network.append(match.group(1))
    # Protocol names
    for match in re.finditer(r'["\']([^"\']*(?:UDP|TCP|OSC|WebSocket)[^"\']*)["\']', content):
        network.append(match.group(1))
    return network

def scan_decompiled_files(exec_dir: Path) -> dict:
    """Scan all decompiled .cpp files for protocol strings."""
    decompiled_dir = exec_dir / 'decompiled_real'
    if not decompiled_dir.exists():
        return {}
    
    results = defaultdict(lambda: defaultdict(list))
    cpp_files = list(decompiled_dir.glob('*.cpp'))
    print(f"Scanning {len(cpp_files)} decompiled files...")
    
    for i, cpp_file in enumerate(cpp_files):
        if (i + 1) % 1000 == 0:
            print(f"  {i+1}/{len(cpp_files)}...")
        
        try:
            content = cpp_file.read_text(encoding='utf-8', errors='ignore')
            
            osc = extract_osc_patterns(content)
            if osc:
                results['osc'][cpp_file.stem] = osc
            
            midi = extract_midi_strings(content)
            if midi:
                results['midi'][cpp_file.stem] = midi
            
            net = extract_network_strings(content)
            if net:
                results['network'][cpp_file.stem] = net
        except Exception as e:
            print(f"Error reading {cpp_file}: {e}", file=sys.stderr)
    
    return dict(results)

def scan_binary_strings(binary_path: Path) -> dict:
    """Extract printable strings from binary using strings command."""
    if not binary_path.exists():
        return {}
    
    print(f"Extracting strings from binary {binary_path}...")
    import subprocess
    try:
        # Use macOS strings command
        result = subprocess.run(['strings', '-', str(binary_path)], 
                              capture_output=True, text=True, timeout=60)
        all_strings = result.stdout.splitlines()
        print(f"  Found {len(all_strings)} total strings")
        
        # Filter for interesting patterns
        osc_patterns = [s for s in all_strings if s.startswith('/') and len(s) > 2 and '.' not in s[:10]]
        midi_strings = [s for s in all_strings if 'midi' in s.lower() or 'MIDI' in s]
        network_strings = [s for s in all_strings if any(x in s for x in ['port', 'Port', 'UDP', 'TCP', 'OSC'])]
        
        return {
            'osc_patterns': osc_patterns[:500],  # Limit output
            'midi_strings': midi_strings[:500],
            'network_strings': network_strings[:500]
        }
    except Exception as e:
        print(f"Error extracting strings: {e}", file=sys.stderr)
        return {}

def generate_report(decompiled_results: dict, binary_results: dict, output_dir: Path):
    """Generate protocol analysis reports."""
    output_dir.mkdir(parents=True, exist_ok=True)
    
    # Save raw JSON
    json_path = output_dir / 'protocol_strings.json'
    with json_path.open('w') as f:
        json.dump({
            'decompiled': decompiled_results,
            'binary': binary_results
        }, f, indent=2)
    print(f"Wrote full results to {json_path}")
    
    # OSC patterns report
    if 'osc' in decompiled_results or 'osc_patterns' in binary_results:
        osc_path = output_dir / 'osc_patterns.txt'
        with osc_path.open('w') as f:
            f.write("OSC Address Patterns\n")
            f.write("=" * 80 + "\n\n")
            
            # From decompiled code
            if 'osc' in decompiled_results:
                f.write("From Decompiled Code:\n")
                f.write("-" * 80 + "\n")
                all_patterns = set()
                for func, patterns in decompiled_results['osc'].items():
                    all_patterns.update(patterns)
                for pattern in sorted(all_patterns):
                    f.write(f"  {pattern}\n")
                f.write(f"\nTotal unique patterns: {len(all_patterns)}\n\n")
            
            # From binary strings
            if 'osc_patterns' in binary_results:
                f.write("From Binary Strings:\n")
                f.write("-" * 80 + "\n")
                for pattern in sorted(set(binary_results['osc_patterns']))[:200]:
                    f.write(f"  {pattern}\n")
                f.write(f"\nTotal: {len(set(binary_results['osc_patterns']))}\n")
        
        print(f"Wrote OSC patterns to {osc_path}")
    
    # MIDI strings report
    if 'midi' in decompiled_results or 'midi_strings' in binary_results:
        midi_path = output_dir / 'midi_strings.txt'
        with midi_path.open('w') as f:
            f.write("MIDI-Related Strings\n")
            f.write("=" * 80 + "\n\n")
            
            all_midi = set()
            if 'midi' in decompiled_results:
                for func, strings in decompiled_results['midi'].items():
                    all_midi.update(strings)
            if 'midi_strings' in binary_results:
                all_midi.update(binary_results['midi_strings'])
            
            for s in sorted(all_midi)[:500]:
                f.write(f"  {s}\n")
            f.write(f"\nTotal unique strings: {len(all_midi)}\n")
        
        print(f"Wrote MIDI strings to {midi_path}")
    
    # Network strings report
    if 'network' in decompiled_results or 'network_strings' in binary_results:
        net_path = output_dir / 'network_strings.txt'
        with net_path.open('w') as f:
            f.write("Network-Related Strings\n")
            f.write("=" * 80 + "\n\n")
            
            all_net = set()
            if 'network' in decompiled_results:
                for func, strings in decompiled_results['network'].items():
                    all_net.update(strings)
            if 'network_strings' in binary_results:
                all_net.update(binary_results['network_strings'])
            
            for s in sorted(all_net)[:300]:
                f.write(f"  {s}\n")
            f.write(f"\nTotal unique strings: {len(all_net)}\n")
        
        print(f"Wrote network strings to {net_path}")

def main():
    if len(sys.argv) < 2:
        print("Usage: extract_protocol_strings.py <exec_dir>")
        print("Example: extract_protocol_strings.py targets/TouchOSC/exec/TouchOSC")
        sys.exit(1)
    
    exec_dir = Path(sys.argv[1])
    if not exec_dir.exists():
        print(f"Error: {exec_dir} does not exist")
        sys.exit(1)
    
    print(f"Extracting protocol strings from {exec_dir}...")
    
    # Scan decompiled code
    decompiled_results = scan_decompiled_files(exec_dir)
    
    # Scan binary
    binary_path = exec_dir / 'binary' / exec_dir.name.split('__')[0]
    if not binary_path.exists():
        # Try finding the binary
        binary_candidates = list((exec_dir / 'binary').glob('*'))
        binary_path = binary_candidates[0] if binary_candidates else None
    
    binary_results = scan_binary_strings(binary_path) if binary_path else {}
    
    output_dir = exec_dir / 'analysis' / 'protocol_strings'
    generate_report(decompiled_results, binary_results, output_dir)
    print(f"\nProtocol string extraction complete! Results in {output_dir}")

if __name__ == '__main__':
    main()
