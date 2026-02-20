#!/usr/bin/env python3
# Created: 2026-01-08 06:17 UTC • Last Modified: 2026-01-08 07:30 UTC
"""Extract JSON/XML configuration data from binary."""
import re
import json
from pathlib import Path
import sys

def extract_json_objects(binary_path: Path) -> list:
    """Extract JSON objects from binary."""
    print(f"Extracting JSON from {binary_path}...")
    
    try:
        with binary_path.open('rb') as f:
            data = f.read()
        
        # Convert to string with error handling
        text = data.decode('utf-8', errors='ignore')
        
        json_objects = []
        # Find JSON object patterns
        for match in re.finditer(r'\{[^{}]*"[^"]+"\s*:\s*[^{}]*\}', text):
            try:
                obj_str = match.group(0)
                # Try to parse as JSON
                obj = json.loads(obj_str)
                json_objects.append(obj)
            except:
                pass
        
        return json_objects
    except Exception as e:
        print(f"Error extracting JSON: {e}", file=sys.stderr)
        return []

def extract_xml_fragments(binary_path: Path) -> list:
    """Extract XML fragments from binary."""
    print(f"Extracting XML from {binary_path}...")
    
    try:
        with binary_path.open('rb') as f:
            data = f.read()
        
        text = data.decode('utf-8', errors='ignore')
        
        xml_fragments = []
        # Find XML patterns
        for match in re.finditer(r'<(\w+)[^>]*>.*?</\1>', text, re.DOTALL):
            fragment = match.group(0)
            if len(fragment) < 5000:  # Reasonable size
                xml_fragments.append(fragment)
        
        return xml_fragments
    except Exception as e:
        print(f"Error extracting XML: {e}", file=sys.stderr)
        return []

def extract_config_strings(binary_path: Path) -> dict:
    """Extract configuration-related strings."""
    print(f"Extracting configuration strings...")
    
    try:
        with binary_path.open('rb') as f:
            data = f.read()
        
        text = data.decode('utf-8', errors='ignore')
        
        config = {
            'preferences': [],
            'settings': [],
            'defaults': [],
            'ports': [],
            'addresses': []
        }
        
        # Preferences
        for match in re.finditer(r'(preference[s]?[\w/]*)', text, re.IGNORECASE):
            config['preferences'].append(match.group(1))
        
        # Settings
        for match in re.finditer(r'(setting[s]?[\w/]*)', text, re.IGNORECASE):
            config['settings'].append(match.group(1))
        
        # Defaults
        for match in re.finditer(r'(default[\w/]*)', text, re.IGNORECASE):
            config['defaults'].append(match.group(1))
        
        # Port numbers
        for match in re.finditer(r'port["\s:=]+(\d+)', text, re.IGNORECASE):
            config['ports'].append(match.group(1))
        
        # IP addresses
        for match in re.finditer(r'\b(\d{1,3}\.\d{1,3}\.\d{1,3}\.\d{1,3})\b', text):
            addr = match.group(1)
            if addr not in ['127.0.0.1', '0.0.0.0', '255.255.255.255']:
                config['addresses'].append(addr)
        
        # Deduplicate
        for key in config:
            config[key] = sorted(set(config[key]))[:100]  # Limit output
        
        return config
    except Exception as e:
        print(f"Error extracting config strings: {e}", file=sys.stderr)
        return {}

def main():
    if len(sys.argv) < 2:
        print("Usage: extract_config_data.py <exec_dir>")
        sys.exit(1)
    
    exec_dir = Path(sys.argv[1])
    binary_dir = exec_dir / 'binary'
    
    if not binary_dir.exists():
        print(f"Error: {binary_dir} does not exist")
        sys.exit(1)
    
    # Find binary
    binary_files = [f for f in binary_dir.iterdir() if f.is_file() and not f.name.startswith('.')]
    if not binary_files:
        print("No binary found")
        sys.exit(1)
    
    binary_path = binary_files[0]
    print(f"Processing binary: {binary_path}")
    
    # Extract data
    json_objects = extract_json_objects(binary_path)
    xml_fragments = extract_xml_fragments(binary_path)
    config_strings = extract_config_strings(binary_path)
    
    # Save results
    output_dir = exec_dir / 'analysis' / 'config_data'
    output_dir.mkdir(parents=True, exist_ok=True)
    
    # JSON objects
    if json_objects:
        json_path = output_dir / 'extracted_json.json'
        with json_path.open('w') as f:
            json.dump(json_objects[:100], f, indent=2)  # Limit to first 100
        print(f"Saved {len(json_objects)} JSON objects to {json_path}")
    
    # XML fragments
    if xml_fragments:
        xml_path = output_dir / 'extracted_xml.txt'
        with xml_path.open('w') as f:
            for i, fragment in enumerate(xml_fragments[:50]):  # First 50
                f.write(f"\n{'='*80}\n")
                f.write(f"Fragment {i+1}:\n")
                f.write(fragment[:500] + '\n')  # Truncate long fragments
        print(f"Saved {len(xml_fragments)} XML fragments to {xml_path}")
    
    # Config strings
    config_path = output_dir / 'config_strings.json'
    with config_path.open('w') as f:
        json.dump(config_strings, f, indent=2)
    print(f"Saved configuration strings to {config_path}")
    
    # Generate report
    report_path = output_dir / 'config_report.txt'
    with report_path.open('w') as f:
        f.write("Configuration Data Extraction Report\n")
        f.write("=" * 80 + "\n\n")
        
        f.write(f"JSON Objects Found: {len(json_objects)}\n")
        f.write(f"XML Fragments Found: {len(xml_fragments)}\n\n")
        
        f.write("Configuration Strings:\n")
        f.write("-" * 80 + "\n")
        for category, items in config_strings.items():
            f.write(f"\n{category.upper()} ({len(items)} found):\n")
            for item in items[:20]:
                f.write(f"  {item}\n")
    
    print(f"Generated report: {report_path}")

if __name__ == '__main__':
    main()
