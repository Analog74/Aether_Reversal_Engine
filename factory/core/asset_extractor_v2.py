# Created: 2026-01-08 06:47 UTC • Last Modified: 2026-01-08 07:30 UTC
"""
Enhanced asset extraction with cross-referencing and comprehensive format support.

This module provides production-grade asset extraction for reverse engineering:
- Multi-tool extraction pipeline (binwalk, foremost, custom carvers)
- macOS-specific format support (.car catalogs, nibs, plists, Core Data)
- Asset cross-referencing (link extracted assets to code that uses them)
- Metadata generation with sidecar files
- Organized output with preserved context

Part of the Aether Reversal Engineering Suite.
"""

import json
import re
import shutil
import struct
import subprocess
from collections import defaultdict
from dataclasses import asdict, dataclass
from pathlib import Path
from typing import Dict, List, Optional, Set, Tuple
import hashlib
import mimetypes


@dataclass
class AssetReference:
    """Code reference to an asset."""
    function: str
    address: str
    context: str
    file: str
    line: int


@dataclass
class Asset:
    """Extracted asset with metadata."""
    id: str
    type: str
    size: int
    offset: str
    extracted_path: str
    original_name: Optional[str] = None
    references: List[AssetReference] = None
    metadata: Dict = None
    sha256: Optional[str] = None
    
    def __post_init__(self):
        if self.references is None:
            self.references = []
        if self.metadata is None:
            self.metadata = {}


class AssetExtractor:
    """Comprehensive asset extraction and cross-referencing engine."""
    
    # Magic bytes for file type detection
    MAGIC_BYTES = {
        b'\x89PNG\r\n\x1a\n': ('png', 'image/png'),
        b'\xff\xd8\xff': ('jpg', 'image/jpeg'),
        b'GIF87a': ('gif', 'image/gif'),
        b'GIF89a': ('gif', 'image/gif'),
        b'RIFF': ('wav', 'audio/wav'),  # Need to check WAVE after
        b'ID3': ('mp3', 'audio/mpeg'),
        b'\xff\xfb': ('mp3', 'audio/mpeg'),
        b'OggS': ('ogg', 'audio/ogg'),
        b'fLaC': ('flac', 'audio/flac'),
        b'PK\x03\x04': ('zip', 'application/zip'),
        b'%PDF': ('pdf', 'application/pdf'),
        b'<?xml': ('xml', 'application/xml'),
        b'{': ('json', 'application/json'),  # Heuristic
        b'\x1b\x4c\x75\x61': ('luac', 'application/x-lua-bytecode'),
        b'SQLite': ('sqlite', 'application/x-sqlite3'),
        b'bplist': ('plist', 'application/x-plist'),
    }
    
    # Asset loading functions to search for in code
    ASSET_LOAD_PATTERNS = [
        # File I/O
        r'fopen\s*\(\s*"([^"]+)"',
        r'open\s*\(\s*"([^"]+)"',
        r'std::ifstream\s*\(\s*"([^"]+)"',
        
        # Image loading
        r'loadImage\s*\(\s*"([^"]+)"',
        r'loadTexture\s*\(\s*"([^"]+)"',
        r'loadBitmap\s*\(\s*"([^"]+)"',
        r'ImageIO::create\s*\(\s*"([^"]+)"',
        r'stbi_load\s*\(\s*"([^"]+)"',
        
        # Audio loading
        r'loadSound\s*\(\s*"([^"]+)"',
        r'loadAudio\s*\(\s*"([^"]+)"',
        r'AudioFile::load\s*\(\s*"([^"]+)"',
        
        # Resource systems
        r'getResource\s*\(\s*"([^"]+)"',
        r'loadResource\s*\(\s*"([^"]+)"',
        r'ResourceManager::load\s*\(\s*"([^"]+)"',
        
        # macOS specific
        r'NSBundle.*pathForResource:\s*@"([^"]+)"',
        r'CFBundleCopyResourceURL.*@"([^"]+)"',
        
        # Generic string literals that look like paths
        r'"([^"]*\.(png|jpg|jpeg|gif|bmp|wav|mp3|ogg|json|xml|txt|pdf))"',
    ]
    
    def __init__(self, binary_path: Path, exec_dir: Path):
        self.binary_path = Path(binary_path)
        self.exec_dir = Path(exec_dir)
        self.assets_dir = exec_dir / "assets"
        self.extracted_dir = self.assets_dir / "extracted"
        self.organized_dir = self.assets_dir / "organized"
        
        # Create directory structure
        self.extracted_dir.mkdir(parents=True, exist_ok=True)
        self.organized_dir.mkdir(parents=True, exist_ok=True)
        
        self.assets: List[Asset] = []
        self.code_references: Dict[str, List[str]] = defaultdict(list)
    
    def extract_all(self, verbose: bool = True) -> Dict:
        """Run full extraction pipeline."""
        print(f"[+] Starting comprehensive asset extraction for {self.binary_path.name}")
        
        # Phase 1: Basic extraction
        self._extract_strings()
        self._extract_symbols()
        
        # Phase 2: Embedded file extraction
        self._run_binwalk()
        self._run_foremost()
        self._scan_magic_bytes()
        
        # Phase 3: macOS-specific extraction
        self._extract_macos_assets()
        
        # Phase 4: Organize and identify
        self._organize_extracted_files()
        self._generate_metadata()
        
        # Phase 5: Cross-reference (if decompiled code exists)
        if (self.exec_dir / "decompiled_real").exists():
            self._build_cross_references()
        
        # Phase 6: Generate index
        asset_index = self._build_asset_index()
        
        print(f"[+] Asset extraction complete: {len(self.assets)} assets extracted")
        return asset_index
    
    def _extract_strings(self):
        """Extract printable strings from binary."""
        strings_file = self.assets_dir / "strings.txt"
        try:
            with open(strings_file, 'w', encoding='utf-8', errors='ignore') as f:
                subprocess.run(
                    ["strings", "-a", "-n", "4", str(self.binary_path)],
                    stdout=f,
                    check=True
                )
            print(f"  ✓ Strings extracted ({strings_file.stat().st_size} bytes)")
        except (subprocess.CalledProcessError, FileNotFoundError) as e:
            print(f"  ✗ String extraction failed: {e}")
    
    def _extract_symbols(self):
        """Extract symbol table."""
        symbols_file = self.assets_dir / "symbols.txt"
        try:
            with open(symbols_file, 'w') as f:
                subprocess.run(
                    ["nm", "-a", str(self.binary_path)],
                    stdout=f,
                    stderr=subprocess.DEVNULL,
                    check=True
                )
            print(f"  ✓ Symbols extracted ({symbols_file.stat().st_size} bytes)")
        except (subprocess.CalledProcessError, FileNotFoundError):
            pass
    
    def _run_binwalk(self):
        """Extract embedded files using binwalk."""
        try:
            result = subprocess.run(
                ["binwalk", "-e", "-C", str(self.extracted_dir), str(self.binary_path)],
                capture_output=True,
                text=True,
                timeout=300
            )
            
            # Count extracted files
            extracted = list(self.extracted_dir.rglob("*"))
            extracted_files = [f for f in extracted if f.is_file()]
            if extracted_files:
                print(f"  ✓ Binwalk extracted {len(extracted_files)} files")
        except (subprocess.CalledProcessError, FileNotFoundError, subprocess.TimeoutExpired) as e:
            print(f"  ⚠ Binwalk unavailable or failed: {type(e).__name__}")
    
    def _run_foremost(self):
        """Extract files using foremost (better JPEG recovery)."""
        try:
            foremost_out = self.extracted_dir / "foremost"
            foremost_out.mkdir(exist_ok=True)
            
            subprocess.run(
                ["foremost", "-t", "all", "-i", str(self.binary_path), "-o", str(foremost_out)],
                capture_output=True,
                timeout=300
            )
            
            extracted = list(foremost_out.rglob("*.*"))
            if extracted:
                print(f"  ✓ Foremost extracted {len(extracted)} files")
        except (subprocess.CalledProcessError, FileNotFoundError, subprocess.TimeoutExpired):
            pass  # Optional tool
    
    def _scan_magic_bytes(self):
        """Scan binary for magic bytes and extract matching regions."""
        print(f"  ⚙ Scanning for embedded files via magic bytes...")
        
        try:
            with open(self.binary_path, 'rb') as f:
                data = f.read()
        except Exception as e:
            print(f"  ✗ Failed to read binary: {e}")
            return
        
        findings = defaultdict(list)
        
        for magic, (ext, mime) in self.MAGIC_BYTES.items():
            offset = 0
            while True:
                pos = data.find(magic, offset)
                if pos == -1:
                    break
                findings[ext].append((pos, mime))
                offset = pos + 1
        
        # Save scan results
        scan_file = self.extracted_dir / "magic_scan.json"
        scan_data = {
            ext: {
                'count': len(offsets),
                'mime': offsets[0][1] if offsets else None,
                'offsets': [hex(o[0]) for o in offsets[:100]]  # Limit output
            }
            for ext, offsets in findings.items()
        }
        
        with open(scan_file, 'w') as f:
            json.dump(scan_data, f, indent=2)
        
        total = sum(len(v) for v in findings.values())
        print(f"  ✓ Magic byte scan: {total} potential files found")
        for ext, offsets in sorted(findings.items()):
            if offsets:
                print(f"    • {ext.upper()}: {len(offsets)} instances")
    
    def _extract_macos_assets(self):
        """Extract macOS-specific asset formats."""
        bundle_dir = self.exec_dir.parent.parent / "bundle" / "Contents"
        if not bundle_dir.exists():
            return
        
        print(f"  ⚙ Extracting macOS-specific assets...")
        
        # Extract Assets.car (compiled asset catalog)
        car_file = bundle_dir / "Resources" / "Assets.car"
        if car_file.exists():
            self._extract_asset_catalog(car_file)
        
        # Extract plists
        for plist in bundle_dir.rglob("*.plist"):
            self._extract_plist(plist)
        
        # Extract Core Data models
        for momd in bundle_dir.rglob("*.momd"):
            self._extract_core_data_model(momd)
    
    def _extract_asset_catalog(self, car_path: Path):
        """Extract Assets.car using acextract or cartool."""
        output_dir = self.assets_dir / "asset_catalog"
        output_dir.mkdir(exist_ok=True)
        
        # Try acextract first (https://github.com/bartoszj/acextract)
        try:
            subprocess.run(
                ["acextract", "-i", str(car_path), "-o", str(output_dir)],
                capture_output=True,
                timeout=60
            )
            extracted = list(output_dir.rglob("*.*"))
            if extracted:
                print(f"    ✓ Asset catalog: {len(extracted)} assets extracted")
                return
        except (FileNotFoundError, subprocess.TimeoutExpired, subprocess.CalledProcessError):
            pass
        
        # Try cartool as fallback
        try:
            subprocess.run(
                ["cartool", str(car_path), str(output_dir)],
                capture_output=True,
                timeout=60
            )
            extracted = list(output_dir.rglob("*.*"))
            if extracted:
                print(f"    ✓ Asset catalog: {len(extracted)} assets extracted")
        except (FileNotFoundError, subprocess.TimeoutExpired, subprocess.CalledProcessError):
            print(f"    ⚠ Asset catalog extraction unavailable (install acextract or cartool)")
    
    def _extract_plist(self, plist_path: Path):
        """Convert binary plist to XML."""
        if not plist_path.exists():
            return
        
        output_path = self.assets_dir / "plists" / f"{plist_path.stem}.xml"
        output_path.parent.mkdir(exist_ok=True)
        
        try:
            subprocess.run(
                ["plutil", "-convert", "xml1", "-o", str(output_path), str(plist_path)],
                capture_output=True,
                timeout=10
            )
        except (FileNotFoundError, subprocess.TimeoutExpired, subprocess.CalledProcessError):
            pass
    
    def _extract_core_data_model(self, momd_path: Path):
        """Extract Core Data model metadata."""
        output_path = self.assets_dir / "core_data" / momd_path.stem
        output_path.mkdir(parents=True, exist_ok=True)
        
        # Copy model files
        for mom_file in momd_path.glob("*.mom"):
            shutil.copy2(mom_file, output_path / mom_file.name)
    
    def _organize_extracted_files(self):
        """Organize extracted files by type."""
        categories = {
            "images": {".png", ".jpg", ".jpeg", ".gif", ".bmp", ".tiff", ".icns", ".ico"},
            "audio": {".mp3", ".wav", ".ogg", ".flac", ".aac", ".m4a", ".aiff"},
            "video": {".mp4", ".avi", ".mkv", ".mov", ".webm"},
            "archives": {".zip", ".tar", ".gz", ".bz2", ".rar", ".7z"},
            "documents": {".pdf", ".doc", ".docx", ".txt", ".rtf", ".md"},
            "executables": {".exe", ".dll", ".so", ".dylib"},
            "configs": {".json", ".xml", ".yaml", ".yml", ".toml", ".ini", ".conf"},
            "data": set()  # Default
        }
        
        # Create category directories
        for cat in categories:
            (self.organized_dir / cat).mkdir(exist_ok=True)
        
        # Organize files
        for file in self.extracted_dir.rglob("*"):
            if not file.is_file():
                continue
            
            ext = file.suffix.lower()
            dest_cat = "data"
            
            for cat, exts in categories.items():
                if ext in exts:
                    dest_cat = cat
                    break
            
            # Generate unique name with offset if available
            offset_match = re.search(r'[\da-fA-F]+', file.parent.name)
            if offset_match:
                dest_name = f"{offset_match.group()}_{file.name}"
            else:
                dest_name = f"{file.parent.name}_{file.name}"
            
            dest = self.organized_dir / dest_cat / dest_name
            
            # Avoid collisions
            counter = 1
            while dest.exists():
                dest = self.organized_dir / dest_cat / f"{dest.stem}_{counter}{dest.suffix}"
                counter += 1
            
            try:
                shutil.copy2(file, dest)
            except Exception:
                pass
    
    def _generate_metadata(self):
        """Generate metadata sidecars for extracted assets."""
        for cat_dir in self.organized_dir.iterdir():
            if not cat_dir.is_dir():
                continue
            
            for asset_file in cat_dir.glob("*"):
                if asset_file.suffix == ".json":
                    continue  # Skip metadata files
                
                # Generate metadata
                meta = self._analyze_file(asset_file)
                
                # Create Asset object
                offset_match = re.match(r'([\da-fA-F]+)_', asset_file.name)
                offset = f"0x{offset_match.group(1)}" if offset_match else "unknown"
                
                asset = Asset(
                    id=f"{cat_dir.name}_{asset_file.stem}",
                    type=meta['mime_type'],
                    size=asset_file.stat().st_size,
                    offset=offset,
                    extracted_path=str(asset_file.relative_to(self.exec_dir)),
                    metadata=meta,
                    sha256=meta.get('sha256')
                )
                
                self.assets.append(asset)
                
                # Write sidecar
                meta_file = asset_file.with_suffix(asset_file.suffix + '.meta.json')
                with open(meta_file, 'w') as f:
                    json.dump(meta, f, indent=2)
    
    def _analyze_file(self, file_path: Path) -> Dict:
        """Analyze file and extract metadata."""
        stat = file_path.stat()
        mime_type, _ = mimetypes.guess_type(str(file_path))
        
        meta = {
            'size': stat.st_size,
            'mime_type': mime_type or 'application/octet-stream',
            'extension': file_path.suffix,
        }
        
        # Compute hash
        try:
            with open(file_path, 'rb') as f:
                meta['sha256'] = hashlib.sha256(f.read()).hexdigest()
        except Exception:
            pass
        
        # Type-specific analysis
        if file_path.suffix.lower() in {'.png', '.jpg', '.jpeg', '.gif', '.bmp'}:
            meta.update(self._analyze_image(file_path))
        elif file_path.suffix.lower() in {'.wav', '.mp3', '.ogg', '.flac'}:
            meta.update(self._analyze_audio(file_path))
        
        return meta
    
    def _analyze_image(self, image_path: Path) -> Dict:
        """Extract image dimensions."""
        info = {}
        try:
            with open(image_path, 'rb') as f:
                header = f.read(32)
                
                # PNG
                if header[:8] == b'\x89PNG\r\n\x1a\n':
                    width, height = struct.unpack('>II', header[16:24])
                    info['width'] = width
                    info['height'] = height
                    info['format'] = 'PNG'
                
                # JPEG
                elif header[:3] == b'\xff\xd8\xff':
                    f.seek(0)
                    data = f.read()
                    # Simple JPEG dimension parsing (look for SOF markers)
                    for i in range(len(data) - 9):
                        if data[i:i+2] == b'\xff\xc0' or data[i:i+2] == b'\xff\xc2':
                            height, width = struct.unpack('>HH', data[i+5:i+9])
                            info['width'] = width
                            info['height'] = height
                            info['format'] = 'JPEG'
                            break
        except Exception:
            pass
        
        return info
    
    def _analyze_audio(self, audio_path: Path) -> Dict:
        """Extract audio metadata (basic)."""
        info = {}
        try:
            # Could use mutagen or similar for detailed metadata
            # For now, just basic file info
            info['format'] = audio_path.suffix.upper().lstrip('.')
        except Exception:
            pass
        
        return info
    
    def _build_cross_references(self):
        """Scan decompiled code for asset references."""
        print(f"  ⚙ Building asset cross-references...")
        
        decompiled_dir = self.exec_dir / "decompiled_real"
        if not decompiled_dir.exists():
            return
        
        asset_references = defaultdict(list)
        
        # Scan all .cpp files
        cpp_files = list(decompiled_dir.glob("*.cpp"))
        scanned = 0
        found = 0
        
        for cpp_file in cpp_files:
            scanned += 1
            if scanned % 1000 == 0:
                print(f"    • Scanned {scanned}/{len(cpp_files)} files...")
            
            try:
                content = cpp_file.read_text(encoding='utf-8', errors='ignore')
                
                # Search for asset loading patterns
                for pattern in self.ASSET_LOAD_PATTERNS:
                    for match in re.finditer(pattern, content, re.IGNORECASE):
                        asset_name = match.group(1)
                        
                        # Get line number
                        line_no = content[:match.start()].count('\n') + 1
                        
                        # Get context (surrounding text)
                        start = max(0, match.start() - 50)
                        end = min(len(content), match.end() + 50)
                        context = content[start:end].replace('\n', ' ')
                        
                        ref = AssetReference(
                            function=cpp_file.stem,
                            address="unknown",
                            context=context,
                            file=cpp_file.name,
                            line=line_no
                        )
                        
                        asset_references[asset_name].append(ref)
                        found += 1
            except Exception as e:
                pass
        
        print(f"    ✓ Found {found} asset references in {scanned} files")
        
        # Match references to extracted assets
        for asset in self.assets:
            # Try to match by filename
            if asset.original_name:
                if asset.original_name in asset_references:
                    asset.references = asset_references[asset.original_name]
            
            # Try to match by common patterns
            asset_filename = Path(asset.extracted_path).name
            for ref_name, refs in asset_references.items():
                if ref_name in asset_filename or asset_filename in ref_name:
                    asset.references.extend(refs)
        
        # Build reverse index (function -> assets)
        for asset in self.assets:
            for ref in asset.references:
                self.code_references[ref.function].append(asset.id)
    
    def _build_asset_index(self) -> Dict:
        """Build master asset index."""
        index = {
            'summary': {
                'total_assets': len(self.assets),
                'categories': defaultdict(int),
                'total_size': sum(a.size for a in self.assets),
                'with_references': sum(1 for a in self.assets if a.references),
            },
            'assets': [],
            'code_references': dict(self.code_references)
        }
        
        # Populate summary
        for asset in self.assets:
            cat = Path(asset.extracted_path).parts[1] if len(Path(asset.extracted_path).parts) > 1 else 'unknown'
            index['summary']['categories'][cat] += 1
        
        # Serialize assets
        for asset in self.assets:
            asset_dict = asdict(asset)
            # Convert AssetReference objects to dicts
            if asset.references:
                asset_dict['references'] = [
                    {
                        'function': ref.function,
                        'address': ref.address,
                        'context': ref.context[:100],  # Limit length
                        'file': ref.file,
                        'line': ref.line
                    }
                    for ref in asset.references[:10]  # Limit to first 10
                ]
            index['assets'].append(asset_dict)
        
        # Write index
        index_file = self.assets_dir / "ASSET_INDEX.json"
        with open(index_file, 'w') as f:
            json.dump(index, f, indent=2, default=str)
        
        print(f"  ✓ Asset index written: {index_file}")
        
        # Write human-readable report
        self._write_asset_report(index)
        
        return index
    
    def _write_asset_report(self, index: Dict):
        """Generate human-readable asset extraction report."""
        report_file = self.assets_dir / "ASSET_REPORT.txt"
        
        with open(report_file, 'w') as f:
            f.write("="* 80 + "\n")
            f.write("ASSET EXTRACTION REPORT\n")
            f.write("=" * 80 + "\n\n")
            
            f.write(f"Binary: {self.binary_path.name}\n")
            f.write(f"Total Assets: {index['summary']['total_assets']}\n")
            f.write(f"Total Size: {index['summary']['total_size']:,} bytes\n")
            f.write(f"Assets with Code References: {index['summary']['with_references']}\n\n")
            
            f.write("Assets by Category:\n")
            f.write("-" * 80 + "\n")
            for cat, count in sorted(index['summary']['categories'].items()):
                f.write(f"  {cat:<20} {count:>5} files\n")
            
            f.write("\n" + "=" * 80 + "\n")
            f.write("REFERENCED ASSETS (Top 20)\n")
            f.write("=" * 80 + "\n\n")
            
            # Show assets with most references
            referenced = [a for a in self.assets if a.references]
            referenced.sort(key=lambda a: len(a.references), reverse=True)
            
            for asset in referenced[:20]:
                f.write(f"\n{asset.id}\n")
                f.write(f"  Path: {asset.extracted_path}\n")
                f.write(f"  Type: {asset.type}\n")
                f.write(f"  Size: {asset.size:,} bytes\n")
                f.write(f"  References: {len(asset.references)}\n")
                for ref in asset.references[:3]:
                    f.write(f"    • {ref.function} ({ref.file}:{ref.line})\n")
                    f.write(f"      {ref.context[:80]}...\n")
        
        print(f"  ✓ Asset report written: {report_file}")


def extract_assets(binary_path: Path, exec_dir: Path, verbose: bool = True) -> Dict:
    """
    Extract assets from binary with comprehensive analysis.
    
    This is the main entry point called by reverse.py.
    
    Args:
        binary_path: Path to the binary to extract from
        exec_dir: Execution directory for this binary
        verbose: Enable verbose output
    
    Returns:
        Asset index dictionary
    """
    extractor = AssetExtractor(binary_path, exec_dir)
    return extractor.extract_all(verbose=verbose)
