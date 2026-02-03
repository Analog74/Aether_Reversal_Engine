# Created: 2025-11-24 22:19 UTC • Last Modified: 2025-11-24 22:22 UTC
# 2025-11-24 17:30 UTC
# Generate missing headers from decompiled source
import re
from pathlib import Path
from typing import Dict, Set

class HeaderGenerator:
    def __init__(self, decompiled_dir: str, include_dir: str):
        self.decompiled_dir = Path(decompiled_dir)
        self.include_dir = Path(include_dir)
        self.classes: Dict[str, str] = {}
        self.dependencies: Dict[str, Set[str]] = {}

    def parse_decompiled_files(self):
        """Parse all decompiled .cpp files to extract class definitions"""
        for cpp_file in self.decompiled_dir.rglob("*.cpp"):
            self._parse_file(cpp_file)

    def _parse_file(self, file_path: Path):
        """Parse a single decompiled file"""
        try:
            with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
                content = f.read()
        except Exception as e:
            print(f"Error reading {file_path}: {e}")
            return

        # Extract class definitions
        class_pattern = r'class\s+(\w+)(?:\s*:\s*(.*?))?\s*\{([^}]*)\};'
        for match in re.finditer(class_pattern, content, re.DOTALL):
            class_name = match.group(1)
            inheritance = match.group(2) or ""
            body = match.group(3)

            # Generate header content
            header_content = f"class {class_name}"
            if inheritance:
                header_content += f" : {inheritance}"
            header_content += " {\npublic:\n"

            # Extract public members (simplified)
            public_members = []
            in_public = False
            for line in body.split('\n'):
                line = line.strip()
                if line == "public:":
                    in_public = True
                elif line in ["private:", "protected:"]:
                    in_public = False
                elif in_public and line:
                    # Clean up decompiled syntax
                    line = re.sub(r'//.*', '', line)  # Remove comments
                    line = re.sub(r'\s+', ' ', line)  # Normalize spaces
                    if line and not line.startswith('//'):
                        public_members.append(line + ";")

            header_content += '\n'.join(public_members)
            header_content += "\n};\n"

            self.classes[class_name] = header_content

            # Extract dependencies
            deps = set()
            for dep in re.findall(r'\b([A-Z]\w+)\b', inheritance + body):
                if dep != class_name and dep not in ['public', 'private', 'protected', 'virtual', 'const', 'static']:
                    deps.add(dep)
            self.dependencies[class_name] = deps

    def generate_headers(self):
        """Generate .hpp files for all classes"""
        for class_name, content in self.classes.items():
            header_file = self.include_dir / f"{class_name}.hpp"
            header_file.parent.mkdir(parents=True, exist_ok=True)

            # Add includes for dependencies
            includes = []
            for dep in self.dependencies.get(class_name, []):
                if dep in self.classes:
                    includes.append(f'#include "{dep}.hpp"')

            full_content = "\n".join(sorted(set(includes))) + "\n\n" + content

            try:
                with open(header_file, 'w') as f:
                    f.write(full_content)
                print(f"Generated {header_file}")
            except Exception as e:
                print(f"Error writing {header_file}: {e}")

def generate_headers(decompiled_dir: str, include_dir: str):
    """Main function to generate headers"""
    generator = HeaderGenerator(decompiled_dir, include_dir)
    generator.parse_decompiled_files()
    generator.generate_headers()