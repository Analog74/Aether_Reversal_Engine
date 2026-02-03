#!/usr/bin/env python3
"""
Enhanced script to detect and fix missing function parameters in decompiled C++ code.
Handles complex Ghidra decompilation patterns.
"""

import re
import os
from pathlib import Path
from typing import Dict, List, Tuple, Set, Optional

def find_function_signatures(content: str) -> List[Tuple[str, int]]:
    """
    Find function signatures and their positions.
    Returns list of (signature_line, position) tuples.
    """
    signatures = []

    # Look for function signatures followed by {
    lines = content.split('\n')
    for i, line in enumerate(lines):
        line = line.strip()
        if line and not line.startswith('//') and '{' in line:
            # Check if this looks like a function signature
            if re.search(r'\w+\s*\([^)]*\)\s*\{', line) or re.search(r'::\w+\s*\([^)]*\)\s*\{', line):
                signatures.append((line, i))

    return signatures

def analyze_function_signature(signature: str) -> Tuple[str, Set[str], bool]:
    """
    Analyze a function signature to find declared parameters and if it needs param names.
    Returns (signature, declared_params, has_unnamed_params)
    """
    declared_params = set()

    # Extract parameter list
    paren_match = re.search(r'\(([^)]*)\)', signature)
    if paren_match:
        params_str = paren_match.group(1)

        # Split by comma and analyze each parameter
        if params_str.strip():
            params = [p.strip() for p in params_str.split(',')]
            for param in params:
                # Check if parameter has a name (not just type)
                if param and not re.match(r'^\s*\w+(?:\s*\*)?\s*$', param):
                    # Has a name, extract it
                    name_match = re.search(r'\b(\w+)\s*$', param)
                    if name_match:
                        declared_params.add(name_match.group(1))
                # If it matches just type, it's unnamed

    has_unnamed_params = '(' in signature and any(re.search(r'\(\s*\w+(?:\s*\*)?\s*\)', signature) or
                                                 re.search(r',\s*\w+(?:\s*\*)?\s*\)', signature))

    return signature, declared_params, has_unnamed_params

def find_function_body(content: str, sig_line_num: int) -> Optional[str]:
    """
    Find the function body starting from the signature line.
    """
    lines = content.split('\n')
    if sig_line_num >= len(lines):
        return None

    # Start from the signature line
    start_line = lines[sig_line_num]

    # Find the opening brace
    brace_pos = start_line.find('{')
    if brace_pos == -1:
        return None

    # Count braces to find the end
    brace_count = 0
    body_lines = []

    # Start collecting from the line with the opening brace
    current_line = sig_line_num
    in_body = False

    while current_line < len(lines):
        line = lines[current_line]

        for char in line:
            if char == '{':
                brace_count += 1
                in_body = True
            elif char == '}':
                brace_count -= 1

        if in_body:
            body_lines.append(line)

        if brace_count == 0 and in_body:
            break

        current_line += 1

    return '\n'.join(body_lines) if body_lines else None

def fix_missing_parameters(content: str) -> str:
    """
    Fix missing parameters in function signatures throughout the content.
    """
    signatures = find_function_signatures(content)

    for signature, line_num in signatures:
        declared_params, has_unnamed = analyze_function_signature(signature)

        if has_unnamed:
            # Find the function body
            body = find_function_body(content, line_num)
            if body:
                # Find param_X usage in body
                used_params = find_param_usage_in_body(body)

                if used_params:
                    # Find which parameters are missing names
                    # For unnamed parameters, we need to add names based on usage
                    param_types = []
                    param_names = []

                    # Parse the parameter list to find unnamed ones
                    paren_match = re.search(r'\(([^)]*)\)', signature)
                    if paren_match:
                        params_str = paren_match.group(1)
                        params = [p.strip() for p in params_str.split(',') if p.strip()]

                        for i, param in enumerate(params):
                            if re.match(r'^\s*\w+(?:\s*\*)?\s*$', param):
                                # Unnamed parameter - add a name
                                param_types.append(param)
                                # Use param_X naming from usage
                                possible_names = [f'param_{j+1}' for j in range(len(used_params))]
                                for name in possible_names:
                                    if name in used_params and name not in param_names:
                                        param_names.append(name)
                                        break
                                else:
                                    param_names.append(f'param_{i+1}')

                    # Rebuild the parameter list
                    if param_types:
                        new_params = []
                        for param_type, param_name in zip(param_types, param_names):
                            new_params.append(f'{param_type} {param_name}')

                        # Replace unnamed params with named ones
                        old_params_str = paren_match.group(1)
                        new_params_str = ', '.join(new_params)

                        # Replace in signature
                        new_signature = signature.replace(f'({old_params_str})', f'({new_params_str})')

                        # Replace in content
                        content = content.replace(signature, new_signature)

    return content

def process_file(file_path: str) -> int:
    """
    Process a single file to fix missing parameters.
    Returns number of fixes applied.
    """
    try:
        with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
            content = f.read()

        original_content = content

        # Apply the fix
        content = fix_missing_parameters(content)

        if content != original_content:
            with open(file_path, 'w', encoding='utf-8') as f:
                f.write(content)
            return 1  # Fixed

        return 0  # No changes

    except Exception as e:
        print(f"Error processing {file_path}: {e}")
        return 0

def main():
    """Main function to process all target files."""
    targets_dir = Path('targets')

    if not targets_dir.exists():
        print("targets directory not found")
        return

    total_fixes = 0
    files_processed = 0

    # Process all .cpp files in targets
    for cpp_file in targets_dir.rglob('*.cpp'):
        try:
            fixes = process_file(str(cpp_file))
            if fixes > 0:
                print(f"Fixed {fixes} functions in {cpp_file}")
                total_fixes += fixes
            files_processed += 1

            # Progress indicator
            if files_processed % 100 == 0:
                print(f"Processed {files_processed} files...")

        except Exception as e:
            print(f"Error processing {cpp_file}: {e}")

    print(f"\nCompleted: Processed {files_processed} files, applied {total_fixes} parameter fixes")

if __name__ == '__main__':
    main()