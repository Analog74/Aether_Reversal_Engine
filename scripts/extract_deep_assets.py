#!/usr/bin/env python3
# Created: 2026-01-08 06:00 UTC • Last Modified: 2026-01-08 07:30 UTC
"""Deep asset extraction from binary using multiple techniques."""
import subprocess
import json
from pathlib import Path
import sys
import shutil

def extract_with_binwalk(binary_path: Path, output_dir: Path) -> dict:
    """Use binwalk to extract embedded files."""
    if not shutil.which('binwalk'):
        print("binwalk not installed, skipping")
        return {'status': 'skipped', 'reason': 'binwalk not available'}
    
    print(f"Running binwalk on {binary_path}...")
    extract_dir = output_dir / 'binwalk_extract'
    extract_dir.mkdir(parents=True, exist_ok=True)
    
    try:
        # Run binwalk with extraction
        result = subprocess.run(
            ['binwalk', '-e', '-C', str(extract_dir), str(binary_path)],
            capture_output=True, text=True, timeout=300
        )
        
        # Count extracted files
        extracted = list(extract_dir.rglob('*'))
        files = [f for f in extracted if f.is_file()]
        
        return {
            'status': 'success',
            'extracted_files': len(files),
            'output_dir': str(extract_dir)
        }
    except Exception as e:
        return {'status': 'error', 'error': str(e)}

def extract_strings_by_category(binary_path: Path, output_dir: Path) -> dict:
    """Extract and categorize strings from binary."""
    print(f"Extracting categorized strings from {binary_path}...")
    
    try:
        result = subprocess.run(['strings', '-', str(binary_path)],
                              capture_output=True, text=True, timeout=60)
        all_strings = result.stdout.splitlines()
        
        # Categorize strings
        categories = {
            'lua_scripts': [s for s in all_strings if '.lua' in s or 'function' in s and 'end' in all_strings],
            'ui_labels': [s for s in all_strings if len(s) > 3 and len(s) < 50 and ' ' in s and s[0].isupper()],
            'file_paths': [s for s in all_strings if '/' in s and s.count('/') > 1],
            'urls': [s for s in all_strings if s.startswith('http://') or s.startswith('https://')],
            'xml_tags': [s for s in all_strings if s.startswith('<') and s.endswith('>')],
            'json_keys': [s for s in all_strings if s.startswith('{') or s.startswith('[')],
        }
        
        # Write categorized strings
        for category, strings in categories.items():
            if strings:
                cat_file = output_dir / f'strings_{category}.txt'
                cat_file.write_text('\n'.join(sorted(set(strings))[:1000]))
                print(f"  Wrote {len(set(strings))} {category} strings")
        
        return {
            'status': 'success',
            'categories': {k: len(set(v)) for k, v in categories.items()}
        }
    except Exception as e:
        return {'status': 'error', 'error': str(e)}

def scan_for_embedded_data(binary_path: Path, output_dir: Path) -> dict:
    """Scan binary for embedded data structures."""
    print(f"Scanning for embedded data structures...")
    
    try:
        with binary_path.open('rb') as f:
            data = f.read()
        
        findings = {
            'png_images': data.count(b'\x89PNG'),
            'jpeg_images': data.count(b'\xff\xd8\xff'),
            'xml_docs': data.count(b'<?xml'),
            'json_objects': data.count(b'{"'),
            'zip_archives': data.count(b'PK\x03\x04'),
            'lua_bytecode': data.count(b'\x1bLua'),
        }
        
        summary_file = output_dir / 'embedded_data_scan.txt'
        with summary_file.open('w') as f:
            f.write("Embedded Data Structure Scan\n")
            f.write("=" * 80 + "\n\n")
            for data_type, count in findings.items():
                f.write(f"{data_type}: {count} occurrences\n")
        
        print(f"  Found embedded data: {findings}")
        return {'status': 'success', 'findings': findings}
    except Exception as e:
        return {'status': 'error', 'error': str(e)}

def main():
    if len(sys.argv) < 2:
        print("Usage: extract_deep_assets.py <exec_dir>")
        print("Example: extract_deep_assets.py targets/TouchOSC/exec/TouchOSC")
        sys.exit(1)
    
    exec_dir = Path(sys.argv[1])
    if not exec_dir.exists():
        print(f"Error: {exec_dir} does not exist")
        sys.exit(1)
    
    # Find binary
    binary_path = None
    binary_dir = exec_dir / 'binary'
    if binary_dir.exists():
        candidates = [f for f in binary_dir.iterdir() if f.is_file()]
        binary_path = candidates[0] if candidates else None
    
    if not binary_path:
        print(f"Error: No binary found in {binary_dir}")
        sys.exit(1)
    
    print(f"Deep asset extraction from {binary_path}...")
    output_dir = exec_dir / 'analysis' / 'deep_assets'
    output_dir.mkdir(parents=True, exist_ok=True)
    
    results = {}
    
    # Multiple extraction techniques
    results['binwalk'] = extract_with_binwalk(binary_path, output_dir)
    results['categorized_strings'] = extract_strings_by_category(binary_path, output_dir)
    results['embedded_scan'] = scan_for_embedded_data(binary_path, output_dir)
    
    # Save results summary
    summary_path = output_dir / 'extraction_summary.json'
    with summary_path.open('w') as f:
        json.dump(results, f, indent=2)
    
    print(f"\nDeep asset extraction complete! Results in {output_dir}")

if __name__ == '__main__':
    main()
