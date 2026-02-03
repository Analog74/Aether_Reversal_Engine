# Created: 2025-11-24 02:14 UTC • Last Modified: 2025-11-24 02:14 UTC
# factory/core/bootstrap.py – 2025-11-22 10:05 UTC – FINAL & CORRECT
import os
import subprocess
import urllib.request
import zipfile
from pathlib import Path

def ensure_java():
    java_home = "/opt/homebrew/opt/openjdk@21/libexec/openjdk.jdk/Contents/Home"
    if not Path(java_home).exists():
        print("[-] OpenJDK 21 not found. Run: brew install openjdk@21")
        exit(1)
    os.environ["JAVA_HOME"] = java_home
    os.environ["PATH"] = f"{java_home}/bin:{os.environ.get('PATH', '')}"
    print(f"[+] Using Java 21: {java_home}")

def ensure_tools():
    ensure_java()  # ← THIS IS THE FIX
    tools_dir = Path("factory/tools")
    ghidra_dir = tools_dir / "ghidra"

    if ghidra_dir.exists():
        print("[+] Ghidra 11.2 already present")
        return

    print("[+] Downloading Ghidra 11.4.2 (latest, fully supported)")
    url = "https://github.com/NationalSecurityAgency/ghidra/releases/download/Ghidra_11.4.2_build/ghidra_11.4.2_PUBLIC_20250826.zip"
    zip_path = "/tmp/ghidra_11.4.2.zip"
    urllib.request.urlretrieve(url, zip_path)

    tools_dir.mkdir(parents=True, exist_ok=True)
    with zipfile.ZipFile(zip_path, 'r') as z:
        z.extractall(tools_dir)

    extracted = list(tools_dir.glob("ghidra_*"))[0]
    extracted.rename(ghidra_dir)
    os.remove(zip_path)

    subprocess.run(["chmod", "-R", "+x", str(ghidra_dir)], check=True)
    print("[+] Ghidra 11.2 + Java 21 ready")

    # Ensure binwalk for asset extraction
    try:
        subprocess.run(["binwalk", "--version"], capture_output=True, check=True)
        print("[+] Binwalk ready")
    except subprocess.CalledProcessError:
        print("[-] Binwalk not found. Install with: pip install binwalk")
        # Don't exit, as it's optional

    # Add Frida, rizin, etc. as needed