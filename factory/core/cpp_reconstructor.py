# Created: 2025-12-14 04:31 UTC • Last Modified: 2025-12-14 05:46 UTC
# factory/core/cpp_reconstructor.py – 2025-11-25 03:27 UTC – FULLY PARALLEL + METADATA DRIVEN (Fixed Paths + Cache)
import json, re, hashlib, logging
from pathlib import Path
from collections import defaultdict
from concurrent.futures import ProcessPoolExecutor, as_completed
import os

logging.basicConfig(level=logging.INFO, format='%(asctime)s - %(levelname)s - %(message)s')
CACHE_FILE = Path("targets/.reconstruct_cache.json")

def load_cache():
    if CACHE_FILE.exists():
        try:
            return json.loads(CACHE_FILE.read_text())
        except Exception as e:
            logging.warning(f"Cache load failed: {e}")
            return {}
    return {}

def save_cache(cache):
    try:
        CACHE_FILE.write_text(json.dumps(cache, indent=2))
    except Exception as e:
        logging.error(f"Cache save failed: {e}")

def parse_single_file(cpp_path: str):
    try:
        content = Path(cpp_path).read_text(encoding='utf-8', errors='ignore')
        meta_match = re.search(r'/\* (.*?) \| Entry:', content)
        if not meta_match:
            return None
        signature = meta_match.group(1).strip()
        body = content.split("\n\n", 1)[1] if "\n\n" in content else content
        file_hash = hashlib.sha256(content.encode('utf-8')).hexdigest()
        return {"file": cpp_path, "signature": signature, "body": body.strip(), "hash": file_hash}
    except Exception as e:
        logging.error(f"Parse failed {cpp_path}: {e}")
        return None

def extract_class_key(signature):
    if '::' not in signature:
        return None
    parts = re.split(r'::', signature)
    if len(parts) < 2:
        return None
    class_part = parts[-2]
    class_name = re.split(r'[<\(\s]', class_part)[0].strip()
    namespace = '::'.join(parts[:-2]) if len(parts) > 2 else "NI"
    return (namespace, class_name)

def write_class_files(job):
    target_dir_str, key, funcs = job
    (ns, cls) = key
    target_dir = Path(target_dir_str)
    safe = re.sub(r'\W+', '_', cls)
    hpp = target_dir / "source" / "include" / "ni" / f"{safe}.hpp"
    cpp = target_dir / "source" / "src" / f"{safe}.cpp"
    hpp.parent.mkdir(parents=True, exist_ok=True)
    cpp.parent.mkdir(parents=True, exist_ok=True)

    methods = []
    for f in funcs[:100]:
        sig = f["signature"]
        # Simple, robust method extraction — no fragile regex
        if '::' not in sig: continue
        method_part = sig.split('::')[-1].strip()
        if '(' not in method_part: continue
        parts = method_part.split('(', 1)
        name_and_params = parts[0] + '(' + parts[1]
        methods.append(f"    virtual auto {name_and_params};")

    method_list = "\n".join(methods)

    hpp.write_text(f"""#pragma once
namespace {ns} {{
class {cls} {{
public:
{method_list}
    // +{len(funcs)-100} more methods reconstructed
}};
}}
""")

    cpp.write_text(f"""#include <ni/{safe}.hpp>
namespace {ns} {{
// {len(funcs)} methods belong to {cls}
// Phase 2: Fill bodies via Frida tracing
}}
""")

def trigger_cpp_reconstruction(target_dir):
    target_dir = Path(target_dir)
    decompiled = target_dir / "decompiled_real"
    source = target_dir / "source"
    inc = source / "include" / "ni"
    src = source / "src"
    inc.mkdir(parents=True, exist_ok=True)
    src.mkdir(exist_ok=True)

    cpp_files = list(decompiled.glob("*.cpp"))
    if not cpp_files:
        logging.warning("No decompiled files")
        return

    # FIXED: Content-aware, stable cache key
    dir_hash = hashlib.sha256(b"".join(sorted(f.read_bytes()[:256] for f in cpp_files))).hexdigest()
    cache = load_cache()
    cache_key = str(target_dir)
    if cache.get(cache_key) == dir_hash:
        logging.info("Cache hit – skipping parsing")
        cache_dir = target_dir / "cache"
        parsed = [json.loads((cache_dir / f"parsed_{i}.json").read_text()) for i in range(len(cpp_files)) if (cache_dir / f"parsed_{i}.json").exists()]
    else:
        parsed = []
        chunk_size = 1000
        for chunk in [cpp_files[i:i + chunk_size] for i in range(0, len(cpp_files), chunk_size)]:
            with ProcessPoolExecutor(max_workers=os.cpu_count()) as executor:
                futures = [executor.submit(parse_single_file, str(f)) for f in chunk]
                for future in as_completed(futures):
                    result = future.result()
                    if result:
                        parsed.append(result)
        cache[cache_key] = dir_hash
        save_cache(cache)
        cache_dir = target_dir / "cache"
        cache_dir.mkdir(exist_ok=True)
        for i, item in enumerate(parsed):
            (cache_dir / f"parsed_{i}.json").write_text(json.dumps(item))

    class_map = defaultdict(list)
    for item in parsed:
        key = extract_class_key(item["signature"])
        if key:
            class_map[key].append(item)

    logging.info(f"Writing {len(class_map)} classes in parallel")
    if not class_map:
        logging.warning("No classes found in decompiled output")
        return

    max_workers = min(os.cpu_count() or 1, len(class_map))
    jobs = [(str(target_dir), key, funcs) for key, funcs in class_map.items()]
    with ProcessPoolExecutor(max_workers=max_workers) as executor:
        list(executor.map(write_class_files, jobs))

    logging.info(f"PARALLEL RECONSTRUCTION COMPLETE – {len(class_map)} classes")

# Note: Ensure target_dir is passed correctly in trigger_cpp_reconstruction calls