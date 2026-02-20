#!/usr/bin/env python3
# Created: 2026-01-08 06:00 UTC • Last Modified: 2026-01-08 07:30 UTC
"""Create baseline hash database for binary diffing."""
import hashlib
import json
from pathlib import Path
import sys

def hash_file(file_path: Path) -> str:
    """Generate SHA256 hash of file content."""
    return hashlib.sha256(file_path.read_bytes()).hexdigest()

def create_baseline(exec_dir: Path) -> dict:
    """Create baseline hash database."""
    decompiled_dir = exec_dir / 'decompiled_real'
    if not decompiled_dir.exists():
        print(f"Error: {decompiled_dir} does not exist")
        return {}
    
    print(f"Creating baseline hashes for {exec_dir}...")
    cpp_files = list(decompiled_dir.glob('*.cpp'))
    print(f"Hashing {len(cpp_files)} functions...")
    
    baseline = {
        'version': '1.0',
        'exec_dir': str(exec_dir),
        'function_count': len(cpp_files),
        'functions': {}
    }
    
    for i, cpp_file in enumerate(cpp_files):
        if (i + 1) % 1000 == 0:
            print(f"  {i+1}/{len(cpp_files)}...")
        
        try:
            content = cpp_file.read_text(encoding='utf-8', errors='ignore')
            
            # Extract signature for reference
            import re
            sig_match = re.search(r'/\*\s*([^|]+?)\s*\|', content)
            signature = sig_match.group(1).strip() if sig_match else cpp_file.stem
            
            # Hash the file
            file_hash = hash_file(cpp_file)
            
            baseline['functions'][cpp_file.name] = {
                'signature': signature,
                'hash': file_hash,
                'size': len(content)
            }
        except Exception as e:
            print(f"Error hashing {cpp_file}: {e}", file=sys.stderr)
    
    return baseline

def main():
    if len(sys.argv) < 2:
        print("Usage: create_function_hashes.py <exec_dir>")
        print("Example: create_function_hashes.py targets/TouchOSC/exec/TouchOSC")
        sys.exit(1)
    
    exec_dir = Path(sys.argv[1])
    if not exec_dir.exists():
        print(f"Error: {exec_dir} does not exist")
        sys.exit(1)
    
    baseline = create_baseline(exec_dir)
    
    if baseline.get('functions'):
        output_dir = exec_dir / 'analysis' / 'baseline'
        output_dir.mkdir(parents=True, exist_ok=True)
        
        output_path = output_dir / 'function_hashes.json'
        with output_path.open('w') as f:
            json.dump(baseline, f, indent=2)
        
        print(f"\nBaseline created: {output_path}")
        print(f"Functions: {baseline['function_count']}")
        print("Use this baseline to diff against future versions!")
    else:
        print("No functions found!")
        sys.exit(1)

if __name__ == '__main__':
    main()
