# Created: 2025-11-24 22:19 UTC • Last Modified: 2025-11-24 22:22 UTC
import argparse
import sys
from pathlib import Path
sys.path.insert(0, str(Path(__file__).parent.parent))
from factory.core.verifier import cross_binary_analysis

def main():
    parser = argparse.ArgumentParser(description="Cross-binary analysis for NI binaries")
    parser.add_argument("binaries", nargs="+", help="Paths to binaries to analyze")
    parser.add_argument("--output", default="docs/Cross_Binary_Report.md", help="Output report file")
    args = parser.parse_args()

    binary_paths = [str(Path(b).resolve()) for b in args.binaries]
    cross_binary_analysis(binary_paths, args.output)

if __name__ == "__main__":
    main()