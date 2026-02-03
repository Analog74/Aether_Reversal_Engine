#!/usr/bin/env python3
"""
Simple script to fix missing parameter names in function signatures.
Specifically targets the common Ghidra pattern: func(type) { ... param_1 ... }
"""

import re
from pathlib import Path

def fix_unnamed_parameters(content: str) -> str:
    """
    Fix function signatures with unnamed parameters that use param_X variables.
    """
    # Pattern: function_name(type) { ... body with param_X ... }
    # We need to find these and add parameter names

    lines = content.split('\n')
    fixed_lines = []
    i = 0

    while i < len(lines):
        line = lines[i]

        # Check if this line looks like a function signature with unnamed params
        if re.search(r'\(\s*\w+(?:\s*\*)?\s*\)\s*\{', line):
            # Extract the function signature - look for (type) pattern
            paren_match = re.search(r'\(\s*(\w+(?:\s*\*)?)\s*\)\s*\{', line)
            if paren_match:
                param_type = paren_match.group(1)

                # Look ahead to see if the function body uses param_1
                body_lines = []
                brace_count = 0
                j = i

                # Collect the function body
                while j < len(lines):
                    body_lines.append(lines[j])
                    brace_count += lines[j].count('{')
                    brace_count -= lines[j].count('}')
                    if brace_count == 0 and j > i:
                        break
                    j += 1

                body = '\n'.join(body_lines)

                # Check if body uses param_1
                if 'param_1' in body and param_type.strip():
                    # Add parameter name
                    new_line = line.replace(f'({param_type})', f'({param_type} param_1)')
                    fixed_lines.append(new_line)
                    i = j  # Skip the body we already processed
                    continue

        fixed_lines.append(line)
        i += 1

    return '\n'.join(fixed_lines)

def process_file(file_path: str) -> bool:
    """
    Process a single file.
    Returns True if file was modified.
    """
    try:
        with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
            content = f.read()

        original_content = content
        content = fix_unnamed_parameters(content)

        if content != original_content:
            with open(file_path, 'w', encoding='utf-8') as f:
                f.write(content)
            return True

    except Exception as e:
        print(f"Error processing {file_path}: {e}")

    return False

def main():
    """Process all C++ files in targets directory."""
    targets_dir = Path('targets')

    if not targets_dir.exists():
        print("targets directory not found")
        return

    fixed_count = 0
    processed_count = 0

    for cpp_file in targets_dir.rglob('*.cpp'):
        if process_file(str(cpp_file)):
            fixed_count += 1
            print(f"Fixed: {cpp_file}")
        processed_count += 1

        if processed_count % 100 == 0:
            print(f"Processed {processed_count} files...")

    print(f"\nCompleted: Fixed {fixed_count} files out of {processed_count} processed")

if __name__ == '__main__':
    main()