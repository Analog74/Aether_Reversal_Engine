# Created: 2025-11-24 02:14 UTC • Last Modified: 2025-11-24 02:14 UTC
# factory/core/asset_extractor.py – Extract embedded assets from binaries
import subprocess
import shutil
from pathlib import Path
import mimetypes
import os

def extract_assets(binary_path, target_dir):
    binary_path = Path(binary_path)
    target_dir = Path(target_dir)
    assets_dir = target_dir / "assets"
    assets_dir.mkdir(exist_ok=True)

    print(f"[+] Extracting embedded assets from {binary_path.name}...")

    try:
        # Use binwalk to scan and extract embedded files
        result = subprocess.run(
            ["binwalk", "-e", "--directory", str(assets_dir), str(binary_path)],
            capture_output=True, text=True, check=True
        )
        print(f"[+] Binwalk extraction completed")
    except subprocess.CalledProcessError as e:
        print(f"[-] Binwalk failed: {e}")
        print("Ensure binwalk is installed: pip install binwalk")
    except FileNotFoundError:
        print("[-] Binwalk not found. Skipping asset extraction.")

    # Organize extracted assets
    organize_assets(assets_dir)

    # Extract strings
    strings_file = assets_dir / "strings.txt"
    try:
        with open(strings_file, 'w') as f:
            subprocess.run(["strings", "-a", str(binary_path)], stdout=f, check=True)
        print(f"[+] Strings extracted to {strings_file}")
    except (subprocess.CalledProcessError, FileNotFoundError):
        print("[-] Strings command failed or not available.")

    # Extract symbols if possible
    symbols_file = assets_dir / "symbols.txt"
    try:
        with open(symbols_file, 'w') as f:
            subprocess.run(["nm", str(binary_path)], stdout=f, stderr=subprocess.DEVNULL, check=True)
        print(f"[+] Symbols extracted to {symbols_file}")
    except (subprocess.CalledProcessError, FileNotFoundError):
        print("[-] nm command failed or not available.")

def organize_assets(assets_dir):
    # Find the extracted directory
    extracted_dirs = list(assets_dir.glob("*.extracted"))
    if not extracted_dirs:
        return
    extracted_dir = extracted_dirs[0]

    # Create category dirs
    categories = {
        "images": ["png", "jpg", "jpeg", "gif", "bmp", "tiff", "icns"],
        "audio": ["mp3", "wav", "ogg", "flac", "aac"],
        "video": ["mp4", "avi", "mkv", "mov"],
        "archives": ["zip", "tar", "gz", "bz2", "rar"],
        "documents": ["pdf", "doc", "docx", "txt", "rtf"],
        "executables": ["exe", "dll", "so", "dylib"],
        "data": []  # For unknown
    }

    for cat, exts in categories.items():
        cat_dir = assets_dir / cat
        cat_dir.mkdir(exist_ok=True)

    # Move files
    for root, dirs, files in os.walk(extracted_dir):
        for file in files:
            src = Path(root) / file
            ext = src.suffix.lower().lstrip('.')
            dest_cat = "data"
            for cat, exts in categories.items():
                if ext in exts:
                    dest_cat = cat
                    break
            dest = assets_dir / dest_cat / f"{src.parent.name}_{file}"
            shutil.move(str(src), str(dest))
            print(f"[+] Moved {file} to {dest_cat}/")

    # Remove empty dirs
    shutil.rmtree(extracted_dir, ignore_errors=True)