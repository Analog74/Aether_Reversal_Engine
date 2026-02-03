# Created: 2025-11-24 02:14 UTC • Last Modified: 2025-11-24 23:12 UTC
# 2025-11-22 07:15 UTC
# Generate CMake and build
import subprocess
import shutil
from pathlib import Path

def build_target(target_dir):
    target_dir = Path(target_dir).resolve()
    source_dir = target_dir / "source"
    build_dir = target_dir / "build"
    build_dir.mkdir(exist_ok=True)
    orig = next((target_dir / "binary").glob("*"))
    # Manual compilation
    import glob
    cpp_files = glob.glob(str(source_dir / "src" / "*.cpp"))
    obj_files = []
    include_dir = str((source_dir / "include").resolve())
    dynamic_headers_dir = str((Path(__file__).parent.parent.parent / "dynamic_headers").resolve())
    for f in cpp_files:
        obj = f.replace(".cpp", ".o")
        try:
            subprocess.run(["clang++", "-std=c++17", "-I", include_dir, "-I", dynamic_headers_dir, "-I", "/usr/include", "-I", "/usr/local/include", "-include", "ni/controller_editor/dummy.hpp", "-c", f, "-o", obj], check=True)
            obj_files.append(obj)
        except subprocess.CalledProcessError:
            print(f"Skipping {f} due to compilation error")
            continue
    # Link
    link_flags = [
        "-framework", "CoreFoundation",
        "-framework", "Foundation", 
        "-framework", "AppKit",
        "-framework", "Cocoa",
        "-framework", "CoreServices",
        "-lobjc",
        "-lc++",
        "-lz",
        "-lpthread"
    ]
    # For now, build as a dynamic library since we don't have main()
    lib_name = str(build_dir / (orig.name + ".dylib"))
    subprocess.run(["clang++", "-dynamiclib", "-o", lib_name] + obj_files + link_flags, check=True)
    print(f"Built library: {lib_name}")