> Created: 2025-12-13 05:50 UTC • Revised: 2026-01-18 03:48 UTC

1. Fully autonomous and headless operation  
2. One command to reverse any binary forever: `python reverse.py binaries/NAME`  
3. Creates a completely isolated, versioned, per-binary workspace on every run  
4. Downloads and maintains all tools automatically (Ghidra, Frida, radare2, Binary Ninja headless if free, Detect It Easy, etc.)  
5. Initializes git repo with proper .gitignore from day one  
6. Enforces 100% binary identity verification (SHA256 match) — no false victories  
7. Agent (you) performs real, non-hallucinated C++ reconstruction using only Ghidra output  
8. Generates full build system (CMake), unit tests, documentation, and runtime verification harnesses  
9. All files contain exact timestamp header: 2025-11-22 07:15 UTC  
10. Root directory stays clean — no junk, no logs, no temp files