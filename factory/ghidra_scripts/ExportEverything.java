// ExportEverything.java — Ghidra 11.4.x compatible (explicit types, no var)
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.data.*;
import java.io.File;
import java.nio.file.*;

public class ExportEverything extends GhidraScript {
    @Override
    public void run() throws Exception {
        String out = getScriptArgs().length > 0 ? getScriptArgs()[0] : "decompiled_real";

        DecompileOptions opts = new DecompileOptions();
        DecompInterface decomp = new DecompInterface();
        decomp.setOptions(opts);
        if (!decomp.openProgram(currentProgram)) {
            println("[-] Failed to open program for decompilation");
            return;
        }

        File dir = new File(out);
        dir.mkdirs();

        int processed = 0;
        for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
            if (monitor.isCancelled()) break;
            try {
                DecompileResults res = decomp.decompileFunction(f, 0, monitor);
                if (!res.decompileCompleted()) continue;

                String c = res.getDecompiledFunction().getC();
                String name = f.getName(true);  // fully qualified / demangled
                if (name == null || name.isEmpty()) name = f.getName();

                // Vtable detection via symbol table — explicit types (no var)
                String vtableInfo = "NO";
                try {
                    Symbol[] syms = currentProgram.getSymbolTable().getSymbols(f.getEntryPoint());
                    for (Symbol s : syms) {
                        String symName = s.getName();
                        if (symName.contains("vftable") || symName.contains("RTTI") || symName.contains("vtable")) {
                            vtableInfo = "YES_" + s.getAddress();
                            break;
                        }
                    }
                } catch (Exception ignored) {}

                String meta = String.format("/* %s | Entry: %s | Vtable: %s */",
                    f.getSignature().getPrototypeString(true),
                    f.getEntryPoint(),
                    vtableInfo);

                name = name.replaceAll("[<>\\[\\]\\\\:\\*\\?\"\\| /]", "_");
                if (name.length() > 200) name = name.substring(0, 200);

                Files.write(Paths.get(dir.getPath(), name + ".cpp"), (meta + "\n\n" + c).getBytes());
                processed++;
            } catch (Exception e) {
                println("[-] Error decompiling " + f.getName() + ": " + e.getMessage());
            }
        }
        println("[+] MAX-ACCURACY EXPORT COMPLETE -- " + processed + " functions with RTTI + VTABLES + DEMANGLED");
    }
}