# Created: 2025-11-24 22:24 UTC • Last Modified: 2025-11-24 22:40 UTC
import argparse
import sys
from pathlib import Path
sys.path.insert(0, str(Path(__file__).parent.parent))
from factory.core.frida_engine import FridaEngine

def main():
    parser = argparse.ArgumentParser(description="Frida tracing for binary processes")
    parser.add_argument("--pid", type=int, help="Attach to running process by PID")
    parser.add_argument("--binary", help="Spawn and trace binary")
    parser.add_argument("--duration", type=int, default=30, help="Tracing duration in seconds")
    args = parser.parse_args()

    if args.pid:
        print(f"[+] Attaching to PID {args.pid}")
        engine = FridaEngine(pid=args.pid)
    elif args.binary:
        print(f"[+] Spawning {args.binary}")
        engine = FridaEngine(binary_path=args.binary)
    else:
        print("[-] Must specify --pid or --binary")
        return

    engine.start_tracing(duration=args.duration)
    engine.capture_dynamic_headers()

if __name__ == "__main__":
    main()