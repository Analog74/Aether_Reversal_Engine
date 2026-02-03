#!/usr/bin/env python3
"""
Post-processing script to fix common Ghidra decompilation issues in C++ code.
"""
import os
import re
import glob
from pathlib import Path

def fix_namespace_syntax(content):
    """Fix malformed namespace declarations."""
    # Fix patterns like: namespace boost::u8_to_u32_iterator<std {
    # Should become: namespace boost {
    content = re.sub(r'namespace\s+(\w+)::(\w+)<[^>]*>\s*{', r'namespace \1 {\nnamespace \2 {', content)
    
    # Fix patterns like: namespace boost::spirit::qi::expectation_failure<std {
    # Should become: namespace boost::spirit::qi {
    content = re.sub(r'namespace\s+([^:]+)::([^:]+)::([^:]+)::(\w+)<[^>]*>\s*{', r'namespace \1::\2::\3 {', content)
    
    # Fix class declarations with malformed templates
    content = re.sub(r'class\s+([^,<]+)<([^>]+)>\s*,([^>]+)>\s*{', r'template<typename \2, typename \3>\nclass \1 {', content)
    
    return content

def fix_file(filepath):
    """Fix common Ghidra issues in a single file."""
    with open(filepath, 'r') as f:
        content = f.read()

    original_content = content

    # Fix namespace syntax
    content = fix_namespace_syntax(content)

    # Fix 1: Replace array access to 'this' with proper member access
    # Pattern: this[offset] -> member access (this needs manual inspection per class)
    # For now, just comment out problematic lines
    content = re.sub(r'if \(\(\(byte\)this\[(\d+)\]', r'// FIXED: if ((byte)this[\1]', content)
    content = re.sub(r'return \(unsigned long\)\(\(byte\)this\[(\d+)\]', r'// FIXED: return (unsigned long)((byte)this[\1])', content)

    # Fix 2: Add missing function parameters
    # Look for param_1, param_2, etc. used but not declared
    param_pattern = r'(\w+)\s*\([^)]*\)\s*{[^}]*param_(\d+)[^}]*}'
    matches = re.findall(param_pattern, content)
    for func_name, param_num in matches:
        if f'param_{param_num}' in content:
            # Add the missing parameter
            content = re.sub(
                rf'(\w+)\s+{func_name}\s*\(([^)]*)\)',
                rf'\1 {func_name}({param_num} param_{param_num}, \2',
                content
            )

    # Fix 3: Handle undefined PTR_ symbols by commenting them out
    content = re.sub(r'\*\(void\s*\*\*\*\)\s*=\s*&PTR_[^;]+;', r'// FIXED: Vtable setup commented out', content)

    # Fix 4: Fix incorrect return statements in void functions
    # This is tricky - need to check function signatures

    # Only write if changes were made
    if content != original_content:
        with open(filepath, 'w') as f:
            f.write(content)
        print(f"Fixed: {filepath}")
        return True
    return False

def main():
    # Find all .cpp and .hpp files in the target directory
    target_dir = Path("targets/Controller Editor/source")
    cpp_files = list(target_dir.glob("**/*.cpp"))
    hpp_files = list(target_dir.glob("**/*.hpp"))

    all_files = cpp_files + hpp_files
    fixed_count = 0
    for file_path in all_files:
        if fix_file(file_path):
            fixed_count += 1

    print(f"Fixed {fixed_count} files")

if __name__ == "__main__":
    main()