#!/usr/bin/env python3
"""
Script to detect and fix missing function parameters in decompiled C++ code.
Analyzes functions that use param_X variables without declaring them in the signature.
"""

import re
import os
from pathlib import Path
from typing import Dict, List, Tuple, Set

def analyze_function_parameters(content: str) -> List[Tuple[str, List[str], Set[str]]]:
    """
    Analyze a C++ file and return functions with their declared parameters and used param_X variables.

    Returns: List of (function_signature, declared_params, used_params)
    """
    functions = []

    # Find function definitions (simplified pattern)
    func_pattern = r'(\w+(?:\s*\*)?\s+\w+(?:\s*\*)?\s*\([^)]*\)\s*\{[^}]*\})'
    matches = re.finditer(func_pattern, content, re.DOTALL)

    for match in matches:
        func_text = match.group(1)

        # Extract function signature
        sig_match = re.match(r'([^{]+)\{', func_text)
        if not sig_match:
            continue
        signature = sig_match.group(1).strip()

        # Find declared parameters in signature
        param_match = re.search(r'\(([^)]*)\)', signature)
        declared_params = set()
        if param_match:
            params = param_match.group(1)
            # Extract parameter names (simplified)
            param_names = re.findall(r'\b(\w+)\s*(?:,|$)', params)
            declared_params = set(param_names)

        # Find used param_X variables in function body
        body_match = re.search(r'\{(.*)\}', func_text, re.DOTALL)
        if body_match:
            body = body_match.group(1)
            used_params = set(re.findall(r'\b(param_\d+)\b', body))
            used_params.discard('param_1')  # Remove if it's a declared param

            if used_params:
                functions.append((signature, declared_params, used_params))

    return functions

def infer_parameter_types(content: str, used_params: Set[str]) -> Dict[str, str]:
    """
    Infer parameter types based on usage patterns in the code.
    """
    param_types = {}

    for param in used_params:
        # Look for usage patterns to infer type
        patterns = [
            (r'\*' + re.escape(param), 'void*'),  # Pointer dereference
            (r'\(unsigned long\)' + re.escape(param), 'unsigned long'),
            (r'\(long\)' + re.escape(param), 'long'),
            (r'\(int\)' + re.escape(param), 'int'),
            (r'\(unsigned int\)' + re.escape(param), 'unsigned int'),
            (r'\(char\)\s*' + re.escape(param), 'char'),
            (r'\(unsigned char\)' + re.escape(param), 'unsigned char'),
            (r'&' + re.escape(param), 'void*'),  # Address-of
        ]

        for pattern, type_name in patterns:
            if re.search(pattern, content):
                param_types[param] = type_name
                break
        else:
            # Default to unsigned long if can't infer
            param_types[param] = 'unsigned long'

    return param_types

def fix_missing_parameters(file_path: str) -> int:
    """
    Fix missing parameters in a single file.
    Returns number of fixes applied.
    """
    with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()

    original_content = content
    fixes_applied = 0

    functions = analyze_function_parameters(content)

    for signature, declared_params, used_params in functions:
        # Find parameters that are used but not declared
        missing_params = used_params - declared_params

        if missing_params:
            param_types = infer_parameter_types(content, missing_params)

            # Build parameter list to add
            new_params = []
            for param in sorted(missing_params):
                new_params.append(f'{param_types[param]} {param}')

            # Find the function signature and modify it
            # Look for the pattern: return_type func_name(params)
            sig_pattern = r'(\w+(?:\s*\*)?\s+\w+(?:\s*\*)?\s*\()([^)]*)(\))'
            match = re.search(re.escape(signature.split('(')[0]) + r'\([^)]*\)', content)

            if match:
                before_params = match.group(1)
                existing_params = match.group(2)
                after_params = match.group(3)

                # Add new parameters
                if existing_params.strip():
                    updated_params = existing_params + ', ' + ', '.join(new_params)
                else:
                    updated_params = ', '.join(new_params)

                new_signature = before_params + updated_params + after_params

                # Replace in content
                content = content.replace(signature, new_signature)
                fixes_applied += len(missing_params)

    if content != original_content:
        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(content)

    return fixes_applied

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
            fixes = fix_missing_parameters(str(cpp_file))
            if fixes > 0:
                print(f"Fixed {fixes} parameters in {cpp_file}")
                total_fixes += fixes
            files_processed += 1
        except Exception as e:
            print(f"Error processing {cpp_file}: {e}")

    print(f"\nProcessed {files_processed} files, applied {total_fixes} parameter fixes")

if __name__ == '__main__':
    main()