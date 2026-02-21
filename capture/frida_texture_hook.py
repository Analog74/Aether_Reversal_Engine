#!/usr/bin/env python3
# Created: 2026-02-20 • Part of Aether RE toolkit
"""
@brief Dynamic validation hook for v::TextureAtlas::AddRegion (Frida).

PURPOSE:
  Hooks TextureAtlas::AddRegion and TextureAtlas::TextureAtlas at runtime
  to log every call with fully-resolved arguments (no static analysis
  uncertainty).  Output JSON is schema-compatible with texture_atlas.json
  from ExtractTextureAtlas.java, enabling direct comparison.

ARCHITECTURE:
  - FridaHook (Python driver): finds process / symbol addresses, injects
    JavaScript agent, collects JSON messages.
  - JS agent (inline, via frida.core.Script): hooks both functions:
      TextureAtlas::AddRegion(this, const vec2i&, const uint8_t*) const
      TextureAtlas::TextureAtlas(this, const vec3i&, TextureFormat::Type)
  - Architecture-aware argument access:
      arm64 : x0=this  x1=&vec2  x2=pixels
      x86_64: rdi=this rsi=&vec2 rdx=pixels
  - Pixel dump is bounded by MAX_DUMP_BYTES to avoid excessive memory reads.

USER WORKFLOW:
  1. Launch TouchOSC (it must reach a UI state that triggers atlas building)
  2. In a second terminal:
       python3 capture/frida_texture_hook.py \\
         --target TouchOSC \\
         --symbols targets/TouchOSC/exec/TouchOSC/assets/symbols.txt \\
         --out targets/TouchOSC/textures/frida_dump.json \\
         [--dump-pixels] [--timeout 30]
  3. Interact with the app to trigger atlas population (open layouts etc.)
  4. Ctrl-C or wait for --timeout to collect the dump
  5. Compare against static results:
       python3 scripts/reconstruct_textures.py \\
         --json  targets/TouchOSC/exec/TouchOSC/texture_atlas.json \\
         --binary targets/TouchOSC/binary/TouchOSC \\
         --out   targets/TouchOSC/textures/ \\
         --compare targets/TouchOSC/textures/frida_dump.json

INTEGRATION POINTS:
  - Input:  symbols.txt (nm-style: addr type name — from assets/ in exec layout)
  - Output: frida_dump.json (same callsites schema as Stage A)
  - Used by: scripts/reconstruct_textures.py --compare

DEPENDENCIES:
  - frida       (pip install frida)
  - frida-tools (pip install frida-tools) for frida-ps
"""

import argparse
import json
import os
import re
import signal
import sys
import time
from pathlib import Path

try:
    import frida
    _FRIDA_AVAILABLE = True
except ImportError:
    _FRIDA_AVAILABLE = False

# ── Frida JS agent ────────────────────────────────────────────────────────────

_AGENT_JS = r"""
'use strict';

// Sent by Python driver after injection
recv('config', function(cfg) {
    const addRegionPtr  = ptr(cfg.add_region_addr);
    const ctorPtr       = cfg.ctor_addr ? ptr(cfg.ctor_addr) : null;
    const arch          = cfg.arch;  // 'arm64' or 'x86_64'
    const maxDumpBytes  = cfg.max_dump_bytes || 0;
    const dumpPixels    = cfg.dump_pixels || false;

    // Per-atlas format map: this_ptr_str -> format_name
    const atlasFmtMap = {};

    // ── Constructor hook (format inference) ────────────────────────────────
    if (ctorPtr) {
        Interceptor.attach(ctorPtr, {
            onEnter: function(args) {
                // arm64: x0=this, x1=&vec3i, x2=format_enum
                // x86_64: rdi=this, rsi=&vec3i, rdx=format_enum
                const thisPtr  = arch === 'arm64' ? args[0] : args[0];  // same for both
                const fmtArg   = arch === 'arm64' ? args[2] : args[2];
                const fmtNames = ['UNKNOWN','A8','R8','RGB8','RGBA8',
                                  'RGBA16F','RGBA32F','DEPTH24_STENCIL8','DEPTH32F'];
                const fmtIdx   = fmtArg.toInt32();
                const fmtName  = (fmtIdx >= 0 && fmtIdx < fmtNames.length)
                                     ? fmtNames[fmtIdx] : ('ENUM_' + fmtIdx);
                atlasFmtMap[thisPtr.toString()] = fmtName;
                send({ type: 'atlas_ctor', this_ptr: thisPtr.toString(),
                       format: fmtName });
            }
        });
    }

    // ── AddRegion hook ───────────────────────────────────────────────────────
    Interceptor.attach(addRegionPtr, {
        onEnter: function(args) {
            // TextureAtlas::AddRegion(this, const vec2i&, const uint8_t*)
            const thisPtr   = args[0];
            const dimsRef   = args[1];  // pointer to { int w, int h }
            const pixelsPtr = args[2];

            // Read dimensions (two 32-bit ints at dimsRef)
            let width = -1, height = -1;
            try {
                width  = dimsRef.readS32();
                height = dimsRef.add(4).readS32();
            } catch(e) { /* guard against bad pointer */ }

            const format = atlasFmtMap[thisPtr.toString()] || 'UNKNOWN';

            // Optional: dump the pixel buffer
            let pixelHex = null;
            if (dumpPixels && width > 0 && height > 0) {
                const bppMap = {A8:1, R8:1, RGB8:3, RGBA8:4,
                                RGBA16F:8, RGBA32F:16, UNKNOWN:4};
                const bpp = bppMap[format] || 4;
                const nbytes = Math.min(width * height * bpp, maxDumpBytes);
                try {
                    pixelHex = pixelsPtr.readByteArray(nbytes)
                        ? Array.from(new Uint8Array(pixelsPtr.readByteArray(nbytes)))
                               .map(b => b.toString(16).padStart(2,'0')).join('')
                        : null;
                } catch(e) { pixelHex = null; }
            }

            // Determine return address for call-addr identification
            const retAddr = this.returnAddress ? this.returnAddress.toString() : 'unknown';

            send({
                type:        'add_region',
                call_addr:   retAddr,          // caller return address (proxy for call site)
                this_ptr:    thisPtr.toString(),
                dims_ptr:    dimsRef.toString(),
                pixels_ptr:  pixelsPtr.toString(),
                width:       width,
                height:      height,
                format:      format,
                confidence:  (width > 0 && height > 0) ? 'HIGH' : 'LOW',
                pixel_hex:   pixelHex
            });
        }
    });

    send({ type: 'ready', add_region_addr: cfg.add_region_addr });
});
"""

# ── Symbol resolver ───────────────────────────────────────────────────────────

def find_symbol_addr(symbols_path: Path, name_fragment: str,
                     exclude: str = "") -> str | None:
    """
    Find the virtual address of a symbol containing name_fragment in symbols.txt.

    Args:
        symbols_path:   Path to nm-format symbols file.
        name_fragment:  Substring to search for in symbol names.
        exclude:        If set, skip symbols also containing this substring.

    Returns:
        Address as hex string "0x..." or None if not found.
    """
    for line in symbols_path.read_text(errors="replace").splitlines():
        parts = line.split()
        if len(parts) < 3:
            continue
        addr, sym_type, name = parts[0], parts[1], " ".join(parts[2:])
        if name_fragment in name and (not exclude or exclude not in name):
            return "0x" + addr.lstrip("0") or "0x0"
    return None


# ── Driver ────────────────────────────────────────────────────────────────────

class FridaHook:
    """
    Injects the JS agent into the target process and collects AddRegion call data.

    Args:
        target (str):         Process name or PID.
        add_region_addr (str): Hex virtual address of TextureAtlas::AddRegion.
        ctor_addr (str|None):  Hex virtual address of TextureAtlas::TextureAtlas constructor.
        arch (str):            "arm64" or "x86_64".
        dump_pixels (bool):   Whether to dump raw pixel bytes (expensive for large images).
        max_dump_bytes (int): Upper bound on pixel dump per call.
        timeout (float):      Seconds to collect before auto-stopping (0 = manual Ctrl-C).
        out_path (Path):      Where to write frida_dump.json.
    """

    def __init__(self, target: str, add_region_addr: str, ctor_addr: str | None,
                 arch: str, dump_pixels: bool, max_dump_bytes: int,
                 timeout: float, out_path: Path):
        self.target          = target
        self.add_region_addr = add_region_addr
        self.ctor_addr       = ctor_addr
        self.arch            = arch
        self.dump_pixels     = dump_pixels
        self.max_dump_bytes  = max_dump_bytes
        self.timeout         = timeout
        self.out_path        = out_path

        self.callsites: list  = []
        self.atlas_ctors: list = []
        self._session         = None
        self._script          = None
        self._running         = False

    def start(self):
        """Attach to process, inject agent, send config, start collecting."""
        # Attach
        try:
            pid = int(self.target)
            self._session = frida.attach(pid)
        except ValueError:
            self._session = frida.attach(self.target)
        print(f"[+] Attached to: {self.target}")

        self._script = self._session.create_script(_AGENT_JS)
        self._script.on("message", self._on_message)
        self._script.load()

        # Send config to agent
        self._script.post({
            "type": "config",
            "add_region_addr": self.add_region_addr,
            "ctor_addr":       self.ctor_addr,
            "arch":            self.arch,
            "dump_pixels":     self.dump_pixels,
            "max_dump_bytes":  self.max_dump_bytes,
        })
        self._running = True

    def _on_message(self, message, data):
        if message.get("type") != "send":
            return
        payload = message.get("payload", {})
        mtype   = payload.get("type")

        if mtype == "ready":
            print(f"[+] Agent ready. Hooking AddRegion @ {payload.get('add_region_addr')}")
            print("    Waiting for atlas construction … (interact with the app)")

        elif mtype == "atlas_ctor":
            self.atlas_ctors.append(payload)
            fmt = payload.get("format", "?")
            print(f"  [ctor] atlas this={payload.get('this_ptr')}  format={fmt}")

        elif mtype == "add_region":
            self.callsites.append(payload)
            w, h  = payload.get("width", "?"), payload.get("height", "?")
            fmt   = payload.get("format", "?")
            paddr = payload.get("pixels_ptr", "?")
            print(f"  [region #{len(self.callsites):4d}] {w}x{h} {fmt}  pixels@{paddr}")

    def wait(self):
        """Block until timeout or Ctrl-C, then write output."""
        def _stop(sig, frame):
            self._running = False

        signal.signal(signal.SIGINT,  _stop)
        signal.signal(signal.SIGTERM, _stop)

        if self.timeout > 0:
            print(f"[+] Collecting for {self.timeout:.0f}s (Ctrl-C to stop early) …")
            deadline = time.time() + self.timeout
            while self._running and time.time() < deadline:
                time.sleep(0.25)
        else:
            print("[+] Collecting … press Ctrl-C to stop")
            while self._running:
                time.sleep(0.25)

        self._flush()

    def _flush(self):
        """Detach and write the collected dump to disk."""
        try:
            if self._script:  self._script.unload()
            if self._session: self._session.detach()
        except Exception:
            pass

        output = {
            "binary":         self.target,
            "arch":           self.arch,
            "add_region_addr": self.add_region_addr,
            "total_callsites": len(self.callsites),
            "atlas_ctors":    self.atlas_ctors,
            "callsites":      self.callsites,
        }
        self.out_path.parent.mkdir(parents=True, exist_ok=True)
        self.out_path.write_text(json.dumps(output, indent=2))
        print(f"\n[+] {len(self.callsites)} regions captured → {self.out_path}")

        # Print summary
        by_fmt = {}
        for cs in self.callsites:
            fmt = cs.get("format", "UNKNOWN")
            by_fmt[fmt] = by_fmt.get(fmt, 0) + 1
        for fmt, count in sorted(by_fmt.items()):
            print(f"    {fmt}: {count} regions")


# ── List processes helper ─────────────────────────────────────────────────────

def list_processes():
    """Print running processes visible to Frida."""
    for proc in frida.enumerate_processes():
        print(f"  {proc.pid:6d}  {proc.name}")


# ── CLI ───────────────────────────────────────────────────────────────────────

def main():
    ap = argparse.ArgumentParser(
        description="Frida dynamic hook for v::TextureAtlas::AddRegion")
    ap.add_argument("--target",        required=False, default=None,
                    help="Process name or PID to attach to")
    ap.add_argument("--symbols",       type=Path, default=None,
                    help="nm-format symbols.txt to resolve AddRegion address")
    ap.add_argument("--add-region-addr", default=None,
                    help="Explicit hex address of AddRegion (skips symbol lookup)")
    ap.add_argument("--ctor-addr",     default=None,
                    help="Explicit hex address of TextureAtlas constructor")
    ap.add_argument("--arch",          default="arm64", choices=["arm64", "x86_64"])
    ap.add_argument("--dump-pixels",   action="store_true",
                    help="Dump raw pixel bytes alongside metadata")
    ap.add_argument("--max-dump-bytes", type=int, default=65536,
                    help="Max bytes to read per pixel buffer when --dump-pixels is set")
    ap.add_argument("--timeout",       type=float, default=0,
                    help="Auto-stop after N seconds (default: 0 = manual Ctrl-C)")
    ap.add_argument("--out",           type=Path,
                    default=Path("targets/TouchOSC/textures/frida_dump.json"),
                    help="Output JSON path")
    ap.add_argument("--list-processes", action="store_true",
                    help="List Frida-visible processes and exit")
    args = ap.parse_args()

    if not _FRIDA_AVAILABLE:
        print("[-] frida not installed. Run: pip install frida")
        sys.exit(1)

    if args.list_processes:
        list_processes()
        return

    if not args.target:
        ap.error("--target is required (pass process name or PID)")

    # Resolve AddRegion address
    add_region_addr = args.add_region_addr
    ctor_addr       = args.ctor_addr

    if not add_region_addr:
        if not args.symbols:
            ap.error("Either --add-region-addr or --symbols must be provided")
        if not args.symbols.exists():
            print(f"[-] Symbols file not found: {args.symbols}")
            sys.exit(1)
        print(f"[+] Resolving addresses from {args.symbols.name} …")
        add_region_addr = find_symbol_addr(args.symbols, "TextureAtlas9AddRegion")
        if not add_region_addr:
            add_region_addr = find_symbol_addr(args.symbols, "TextureAtlas", "AddRegion" )
        ctor_addr = find_symbol_addr(args.symbols, "TextureAtlasC2") \
                 or find_symbol_addr(args.symbols, "TextureAtlasC1")

    if not add_region_addr:
        print("[-] Could not resolve TextureAtlas::AddRegion address")
        sys.exit(1)

    print(f"[+] AddRegion addr: {add_region_addr}")
    print(f"[+] Ctor addr:      {ctor_addr or 'n/a'}")

    hook = FridaHook(
        target           = args.target,
        add_region_addr  = add_region_addr,
        ctor_addr        = ctor_addr,
        arch             = args.arch,
        dump_pixels      = args.dump_pixels,
        max_dump_bytes   = args.max_dump_bytes,
        timeout          = args.timeout,
        out_path         = args.out,
    )

    hook.start()
    hook.wait()


if __name__ == "__main__":
    main()
