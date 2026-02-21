// ExtractTextureAtlas.java — Stage A: Static callsite extractor for v::TextureAtlas::AddRegion
//
// PURPOSE:
//   Walks all callsites of v::TextureAtlas::AddRegion in the target binary.
//   For each callsite, resolves: this-ptr, dims (width/height from the vec2i arg),
//   and the raw pixel buffer pointer. Infers TextureFormat from constructor callsites.
//   Outputs a JSON file consumed by scripts/reconstruct_textures.py (Stage B).
//
// ARCHITECTURE:
//   - Groups callsites by containing function to avoid re-decompiling (one decompile per caller)
//   - Uses HighFunction PcodeOpAST def-chain walk to resolve Varnode constants
//   - Reads vec2i dimensions from Ghidra's Memory view at the resolved pointer address
//   - Scores confidence: HIGH (pixels+dims+format), MEDIUM (pixels+dims), LOW (otherwise)
//
// USAGE:
//   analyzeHeadless <proj> <name> -process <binary> \
//     -postScript ExtractTextureAtlas.java /path/to/output.json \
//     -scriptPath /path/to/factory/ghidra_scripts
//
// ARCHITECTURE NOTES:
//   x86_64 SysV: this=rdi, vec2i*=rsi (by const-ref), pixels*=rdx
//   arm64 AAPCS64: this=x0, vec2i*=x1 (by const-ref), pixels*=x2
//   Ghidra's high P-code CALL: input[0]=target, input[1]=this, input[2]=dims_ref, input[3]=pixels_ptr

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.pcode.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.nio.file.*;
import java.util.*;

public class ExtractTextureAtlas extends GhidraScript {

    // Known TextureFormat::Type enum values (inferred from strings/usage; 0-indexed)
    private static final String[] FMT_NAMES = {
        "UNKNOWN", "A8", "R8", "RGB8", "RGBA8",
        "RGBA16F", "RGBA32F", "DEPTH24_STENCIL8", "DEPTH32F"
    };

    private Address addRegionAddr;

    @Override
    public void run() throws Exception {
        String outPath = getScriptArgs().length > 0 ? getScriptArgs()[0] : "texture_atlas.json";

        // ── 1. Locate AddRegion and constructor ──────────────────────────────
        Function addRegionFn = findFunctionByNameParts("TextureAtlas", "AddRegion");
        Function ctorFn      = findFunctionByNameParts("TextureAtlas", "TextureAtlasC2");
        if (ctorFn == null)
            ctorFn = findFunctionByNameParts("TextureAtlas", "TextureAtlasC1");

        if (addRegionFn == null) {
            println("[-] v::TextureAtlas::AddRegion not found in symbol table");
            return;
        }
        addRegionAddr = addRegionFn.getEntryPoint();
        println("[+] AddRegion @ " + addRegionAddr);
        if (ctorFn != null) println("[+] Constructor @ " + ctorFn.getEntryPoint());

        // ── 2. Setup decompiler ───────────────────────────────────────────────
        DecompileOptions opts = new DecompileOptions();
        DecompInterface decomp = new DecompInterface();
        decomp.setOptions(opts);
        if (!decomp.openProgram(currentProgram)) {
            println("[-] Failed to open program for decompilation");
            return;
        }

        // ── 3. Infer TextureFormat per atlas instance from constructor calls ──
        // Maps resolved this-pointer → format name string
        Map<Long, String> atlasFmtMap = new LinkedHashMap<>();
        if (ctorFn != null) {
            collectConstructorFormats(ctorFn, decomp, atlasFmtMap);
        }
        // Fallback: if exactly one format was observed, use it for all atlases
        String singleFormat = atlasFmtMap.size() == 1
            ? atlasFmtMap.values().iterator().next() : null;

        // ── 4. Collect callsites, grouped by caller function ─────────────────
        Map<Function, List<Address>> callerMap = new LinkedHashMap<>();
        ReferenceManager refMgr = currentProgram.getReferenceManager();
        for (Reference ref : refMgr.getReferencesTo(addRegionAddr)) {
            if (ref.getReferenceType().isCall()) {
                Address callAddr = ref.getFromAddress();
                Function caller  = currentProgram.getFunctionManager().getFunctionContaining(callAddr);
                if (caller != null)
                    callerMap.computeIfAbsent(caller, k -> new ArrayList<>()).add(callAddr);
            }
        }
        int totalCallsites = callerMap.values().stream().mapToInt(List::size).sum();
        println("[+] " + callerMap.size() + " calling functions, " + totalCallsites + " total callsites");

        // ── 5. Decompile each caller once, extract all its AddRegion callsites ─
        List<Map<String, Object>> callsites = new ArrayList<>();
        int funcIdx = 0;
        for (Map.Entry<Function, List<Address>> entry : callerMap.entrySet()) {
            if (monitor.isCancelled()) break;
            funcIdx++;
            if (funcIdx % 20 == 0)
                println("  [progress] " + funcIdx + "/" + callerMap.size() + " functions");

            Function caller      = entry.getKey();
            List<Address> addrs  = entry.getValue();

            DecompileResults res = decomp.decompileFunction(caller, 60, monitor);
            if (!res.decompileCompleted()) {
                for (Address a : addrs) {
                    Map<String, Object> row = new LinkedHashMap<>();
                    row.put("call_addr",   a.toString());
                    row.put("caller_func", caller.getName(true));
                    row.put("confidence",  "DECOMPILE_FAILED");
                    callsites.add(row);
                }
                continue;
            }

            HighFunction hf = res.getHighFunction();
            for (Address callAddr : addrs) {
                Map<String, Object> row = analyzeCallsite(callAddr, hf, atlasFmtMap, singleFormat);
                callsites.add(row);
            }
        }

        // ── 6. Write JSON ─────────────────────────────────────────────────────
        long nHigh   = callsites.stream().filter(m -> "HIGH".equals(m.get("confidence"))).count();
        long nMedium = callsites.stream().filter(m -> "MEDIUM".equals(m.get("confidence"))).count();
        long nLow    = callsites.stream().filter(m -> !"HIGH".equals(m.get("confidence")) &&
                                                      !"MEDIUM".equals(m.get("confidence"))).count();

        StringBuilder sb = new StringBuilder();
        sb.append("{\n");
        sb.append("  \"binary\": \"").append(jsonEsc(currentProgram.getName())).append("\",\n");
        sb.append("  \"arch\": \"").append(jsonEsc(currentProgram.getLanguage().getLanguageID().toString())).append("\",\n");
        sb.append("  \"add_region_addr\": \"").append(addRegionAddr).append("\",\n");
        sb.append("  \"total_callsites\": ").append(callsites.size()).append(",\n");
        sb.append("  \"confidence_summary\": {\"HIGH\": ").append(nHigh)
          .append(", \"MEDIUM\": ").append(nMedium)
          .append(", \"LOW_OR_FAILED\": ").append(nLow).append("},\n");
        sb.append("  \"callsites\": [\n");
        for (int i = 0; i < callsites.size(); i++) {
            sb.append("    ").append(rowToJson(callsites.get(i)));
            if (i < callsites.size() - 1) sb.append(",");
            sb.append("\n");
        }
        sb.append("  ]\n}\n");

        Files.write(Paths.get(outPath), sb.toString().getBytes());
        println("[+] Wrote " + callsites.size() + " callsites -> " + outPath);
        println("[+] Confidence: HIGH=" + nHigh + "  MEDIUM=" + nMedium + "  LOW/FAILED=" + nLow);
    }

    // ── Callsite analysis ──────────────────────────────────────────────────────

    private Map<String, Object> analyzeCallsite(Address callAddr, HighFunction hf,
                                                Map<Long, String> fmtMap, String singleFormat) {
        Map<String, Object> row = new LinkedHashMap<>();
        row.put("call_addr",   callAddr.toString());
        row.put("caller_func", hf.getFunction().getName(true));

        // Find the CALL PcodeOpAST at (or near) callAddr
        PcodeOpAST callOp = findCallOp(callAddr, hf);
        if (callOp == null || callOp.getNumInputs() < 4) {
            row.put("confidence",        "LOW");
            row.put("confidence_detail", "call_op_not_found_or_too_few_args");
            return row;
        }

        // input[0]=target, input[1]=this, input[2]=dims_ref, input[3]=pixels_ptr
        Varnode thisVn   = callOp.getInput(1);
        Varnode dimsVn   = callOp.getInput(2);
        Varnode pixelsVn = callOp.getInput(3);

        // Resolve this-pointer for format lookup
        long thisConst = resolveToConst(thisVn, 0);
        String format  = "UNKNOWN";
        if (thisConst >= 0) {
            format = fmtMap.getOrDefault(thisConst, "UNKNOWN");
        }
        if ("UNKNOWN".equals(format) && singleFormat != null) {
            format = singleFormat + "_INFERRED";
        }
        row.put("this_ptr", thisConst >= 0 ? hex(thisConst) : "UNKNOWN");
        row.put("format",   format);

        // Resolve dims pointer → read {int w, int h} from memory
        long dimsConst = resolveToConst(dimsVn, 0);
        int width = -1, height = -1;
        if (dimsConst > 0) {
            int[] dims = readVec2i(dimsConst);
            if (dims != null) { width = dims[0]; height = dims[1]; }
        }
        row.put("dims_ptr", dimsConst >= 0 ? hex(dimsConst) : "UNKNOWN");
        row.put("width",    width  > 0 ? width  : "UNKNOWN");
        row.put("height",   height > 0 ? height : "UNKNOWN");

        // Resolve pixel buffer pointer
        long pixelsConst = resolveToConst(pixelsVn, 0);
        row.put("pixels_ptr", pixelsConst > 0 ? hex(pixelsConst) : "UNKNOWN");

        // Confidence scoring
        boolean hasPixels = pixelsConst > 0;
        boolean hasDims   = width > 0 && height > 0;
        boolean hasFmt    = !format.startsWith("UNKNOWN");

        if (hasPixels && hasDims && hasFmt) {
            row.put("confidence", "HIGH");
        } else if (hasPixels && hasDims) {
            row.put("confidence",        "MEDIUM");
            row.put("confidence_detail", "format_unknown_or_inferred");
        } else if (hasPixels) {
            row.put("confidence",        "LOW");
            row.put("confidence_detail", "dims_unresolved");
        } else {
            row.put("confidence",        "LOW");
            row.put("confidence_detail", "pixels_ptr_unresolved");
        }

        return row;
    }

    // ── Constructor format collector ──────────────────────────────────────────

    private void collectConstructorFormats(Function ctorFn, DecompInterface decomp,
                                           Map<Long, String> fmtMap) {
        Address ctorAddr = ctorFn.getEntryPoint();
        for (Reference ref : currentProgram.getReferenceManager().getReferencesTo(ctorAddr)) {
            if (!ref.getReferenceType().isCall()) continue;
            Address callAddr = ref.getFromAddress();
            Function caller  = currentProgram.getFunctionManager().getFunctionContaining(callAddr);
            if (caller == null) continue;
            try {
                DecompileResults res = decomp.decompileFunction(caller, 30, monitor);
                if (!res.decompileCompleted()) continue;
                HighFunction hf = res.getHighFunction();
                PcodeOpAST op   = findCallOp(callAddr, hf);
                // ctor: (this, const vec3i&, TextureFormat::Type)
                // input[0]=target, [1]=this, [2]=vec3_ref, [3]=format_enum
                if (op != null && op.getNumInputs() >= 4) {
                    long thisConst = resolveToConst(op.getInput(1), 0);
                    long fmtConst  = resolveToConst(op.getInput(3), 0);
                    if (thisConst >= 0 && fmtConst >= 0) {
                        int fi = (int) fmtConst;
                        String fmtName = (fi >= 0 && fi < FMT_NAMES.length) ? FMT_NAMES[fi] : "ENUM_" + fi;
                        fmtMap.put(thisConst, fmtName);
                    }
                }
            } catch (Exception ignored) {}
        }
        println("[+] Constructor format map: " + fmtMap.size() + " entries");
    }

    // ── PcodeOp finder ────────────────────────────────────────────────────────

    /**
     * Finds the CALL PcodeOpAST targeting addRegionAddr at (or closest to) callAddr.
     * First tries exact address lookup; falls back to full-function scan within ±16 bytes.
     */
    private PcodeOpAST findCallOp(Address callAddr, HighFunction hf) {
        // Try exact address
        Iterator<PcodeOpAST> it = hf.getPcodeOps(callAddr);
        while (it.hasNext()) {
            PcodeOpAST op = it.next();
            if (op.getOpcode() == PcodeOp.CALL && isCallToAddRegion(op))
                return op;
        }
        // Scan full function, match by proximity
        Iterator<PcodeOpAST> all = hf.getPcodeOps();
        PcodeOpAST best = null;
        long bestDist   = Long.MAX_VALUE;
        while (all.hasNext()) {
            PcodeOpAST op = all.next();
            if (op.getOpcode() != PcodeOp.CALL || !isCallToAddRegion(op)) continue;
            Address opAddr = op.getSeqnum().getTarget();
            if (opAddr == null) continue;
            long dist = Math.abs(opAddr.getOffset() - callAddr.getOffset());
            if (dist < bestDist) { bestDist = dist; best = op; }
        }
        return (bestDist <= 32) ? best : null;
    }

    private boolean isCallToAddRegion(PcodeOpAST op) {
        if (op.getNumInputs() < 1) return false;
        Varnode target = op.getInput(0);
        if (target == null) return false;
        long tgt = (target.isConstant() || target.isAddress()) ? target.getOffset() : -1;
        return tgt == addRegionAddr.getOffset();
    }

    // ── Varnode constant resolver ─────────────────────────────────────────────

    /**
     * Walks the Varnode def-chain to find a concrete constant address.
     *
     * Returns:
     *   >= 0 : resolved constant value (direct address or folded constant)
     *   -2   : indirect (LOAD from unknown source) — pixels_ptr might still be usable
     *   -1   : unresolvable within depth budget
     */
    private long resolveToConst(Varnode vn, int depth) {
        if (depth > 12 || vn == null) return -1L;
        if (vn.isConstant()) return vn.getOffset() & 0xFFFFFFFFFFFFFFFFL;
        if (vn.isAddress())  return vn.getOffset();
        PcodeOp def = vn.getDef();
        if (def == null) return -1L;

        switch (def.getOpcode()) {
            case PcodeOp.COPY:
            case PcodeOp.CAST:
            case PcodeOp.INT_ZEXT:
            case PcodeOp.INT_SEXT:
                return resolveToConst(def.getInput(0), depth + 1);

            case PcodeOp.PTRSUB: {
                long base = resolveToConst(def.getInput(0), depth + 1);
                Varnode off = def.getInput(1);
                if (base >= 0 && off.isConstant())
                    return base + off.getOffset();
                return -1L;
            }
            case PcodeOp.PTRADD: {
                long base = resolveToConst(def.getInput(0), depth + 1);
                Varnode idx = def.getInput(1);
                Varnode sz  = def.getInput(2);
                if (base >= 0 && idx.isConstant() && sz.isConstant())
                    return base + idx.getOffset() * sz.getOffset();
                return -1L;
            }
            case PcodeOp.INT_ADD: {
                long a = resolveToConst(def.getInput(0), depth + 1);
                long b = resolveToConst(def.getInput(1), depth + 1);
                if (a >= 0 && b >= 0) return a + b;
                if (a >= 0 && def.getInput(1).isConstant()) return a + def.getInput(1).getOffset();
                if (b >= 0 && def.getInput(0).isConstant()) return b + def.getInput(0).getOffset();
                return -1L;
            }
            case PcodeOp.MULTIEQUAL:
                // PHI node — try first non-null input (lower confidence, but often still useful)
                for (int i = 0; i < def.getNumInputs(); i++) {
                    long v = resolveToConst(def.getInput(i), depth + 1);
                    if (v >= 0) return v;
                }
                return -1L;
            case PcodeOp.LOAD:
                return -2L;  // indirect; caller can decide how to handle
            default:
                return -1L;
        }
    }

    // ── Memory reader ─────────────────────────────────────────────────────────

    /** Reads a glm::vec<2,int> (two consecutive 32-bit ints) from program memory. */
    private int[] readVec2i(long addr) {
        try {
            Address a  = toAddr(addr);
            Memory  mem = currentProgram.getMemory();
            int w = mem.getInt(a);
            int h = mem.getInt(a.add(4));
            if (w <= 0 || w > 8192 || h <= 0 || h > 8192) return null;
            return new int[]{w, h};
        } catch (Exception e) {
            return null;
        }
    }

    // ── Symbol search ─────────────────────────────────────────────────────────

    private Function findFunctionByNameParts(String part1, String part2) {
        for (Symbol sym : currentProgram.getSymbolTable().getAllSymbols(true)) {
            if (sym.getSymbolType() != SymbolType.FUNCTION) continue;
            String name = sym.getName();
            if (name.contains(part1) && name.contains(part2)) {
                Function f = currentProgram.getFunctionManager().getFunctionAt(sym.getAddress());
                if (f != null) return f;
            }
        }
        return null;
    }

    // ── JSON helpers ──────────────────────────────────────────────────────────

    private String rowToJson(Map<String, Object> m) {
        StringBuilder sb = new StringBuilder("{");
        boolean first = true;
        for (Map.Entry<String, Object> e : m.entrySet()) {
            if (!first) sb.append(", ");
            first = false;
            sb.append("\"").append(jsonEsc(e.getKey())).append("\": ");
            Object v = e.getValue();
            if (v instanceof String) {
                sb.append("\"").append(jsonEsc((String) v)).append("\"");
            } else if (v instanceof Integer || v instanceof Long) {
                sb.append(v);
            } else {
                sb.append("\"").append(jsonEsc(String.valueOf(v))).append("\"");
            }
        }
        return sb.append("}").toString();
    }

    private String jsonEsc(String s) {
        return s.replace("\\", "\\\\").replace("\"", "\\\"").replace("\n", "\\n").replace("\r", "");
    }

    private String hex(long v) {
        return "0x" + Long.toHexString(v);
    }
}
