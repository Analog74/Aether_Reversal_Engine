# Created: 2025-11-24 02:14 UTC • Last Modified: 2025-11-30 00:24 UTC
# factory/core/frida_engine.py – 2025-11-25 04:00 UTC – Dynamic Tracing Engine
import frida
import time
import json
import logging
from pathlib import Path

logging.basicConfig(level=logging.INFO, format='%(asctime)s - %(levelname)s - %(message)s')

class FridaEngine:
    def __init__(self, binary_path=None, pid=None, device=None):
        """
        Initialize Frida engine for dynamic tracing
        :param binary_path: Path to binary to spawn (for spawn mode)
        :param pid: Process ID to attach to (for attach mode)
        :param device: Frida device (default: local)
        """
        self.binary_path = binary_path
        self.pid = pid
        self.device = device or frida.get_local_device()
        self.session = None
        self.script = None
        self.traced_functions = {}
        self.header_info = {}

    def attach_to_process(self, pid):
        """Attach to a running process by PID"""
        try:
            self.session = self.device.attach(pid)
            logging.info(f"Attached to process {pid}")
            return True
        except Exception as e:
            logging.error(f"Failed to attach to process {pid}: {e}")
            return False

    def spawn_process(self):
        """Spawn a new process from binary_path"""
        if not self.binary_path:
            logging.error("No binary path specified for spawning")
            return None

        try:
            pid = self.device.spawn([self.binary_path])
            self.session = self.device.attach(pid)
            logging.info(f"Spawned and attached to {self.binary_path} (PID: {pid})")
            return pid
        except Exception as e:
            logging.error(f"Failed to spawn {self.binary_path}: {e}")
            return None

    def start_tracing(self, functions_to_trace=None, duration=60):
        """
        Start dynamic tracing session
        :param functions_to_trace: List of function patterns to hook
        :param duration: Tracing duration in seconds
        """
        if not self.session:
            if self.pid:
                if not self.attach_to_process(self.pid):
                    return
            elif self.binary_path:
                pid = self.spawn_process()
                if not pid:
                    return
            else:
                logging.error("No target specified (binary_path or pid)")
                return

        # Default NI-specific functions to trace
        if functions_to_trace is None:
            functions_to_trace = [
                "malloc", "free",  # Basic functions
                "dlopen", "dlsym",  # Dynamic loading
                "objc_msgSend",  # Objective-C
                "CFStringCreateWithCString",  # CoreFoundation
            ]

        script_code = self._generate_trace_script(functions_to_trace)

        try:
            self.script = self.session.create_script(script_code)
            self.script.on('message', self._on_message)
            self.script.load()

            # Resume if we spawned
            if self.binary_path and not self.pid:
                self.device.resume(self.session._impl.pid)

            logging.info(f"Tracing started for {duration} seconds...")
            time.sleep(duration)

            self.stop_tracing()

        except Exception as e:
            logging.error(f"Tracing failed: {e}")

    def _generate_trace_script(self, functions):
        """Generate Frida JavaScript for comprehensive tracing"""
        trace_code = ""

        for func_name in functions:
            trace_code += f'''
            try {{
                var funcAddr = Module.findExportByName(null, "{func_name}");
                if (funcAddr) {{
                    console.log("Found export: {func_name} at " + funcAddr);
                    Interceptor.attach(funcAddr, {{
                        onEnter: function(args) {{
                            send({{
                                type: 'function_enter',
                                name: '{func_name}',
                                address: funcAddr.toString(),
                                args: Array.from(args, x => x.toString()).slice(0, 4)
                            }});
                        }},
                        onLeave: function(retval) {{
                            send({{
                                type: 'function_leave',
                                name: '{func_name}',
                                retval: retval.toString()
                            }});
                        }}
                    }});
                }} else {{
                    console.log("Export not found: {func_name}");
                }}
            }} catch (e) {{
                console.log("Failed to hook {func_name}: " + e);
            }}
            '''

        return f'''
        (function() {{
            console.log("NI Dynamic Tracing Script Loaded");

            if (typeof Java !== 'undefined' && Java.available) {{
                Java.perform(function() {{
                    console.log("Android/Java tracing mode");
                    {trace_code}
                }});
            }} else {{
                console.log("Native/macOS tracing mode");
                {trace_code}
            }}

            // Additional runtime information for all platforms
            Process.enumerateModules().forEach(function(mod) {{
                send({{
                    type: 'module_load',
                    name: mod.name,
                    base: mod.base.toString(),
                    size: mod.size,
                    path: mod.path
                }});
            }});
        }})();
        '''

    def _on_message(self, message, data):
        """Handle messages from Frida script"""
        try:
            if message['type'] == 'send':
                payload = message['payload']

                if payload['type'] == 'function_enter':
                    func_name = payload['name']
                    if func_name not in self.traced_functions:
                        self.traced_functions[func_name] = {
                            'calls': 0,
                            'args_samples': [],
                            'return_samples': []
                        }

                    self.traced_functions[func_name]['calls'] += 1
                    if len(self.traced_functions[func_name]['args_samples']) < 3:
                        self.traced_functions[func_name]['args_samples'].append(payload['args'])

                elif payload['type'] == 'function_leave':
                    func_name = payload['name']
                    if func_name in self.traced_functions:
                        if len(self.traced_functions[func_name]['return_samples']) < 3:
                            self.traced_functions[func_name]['return_samples'].append(payload['retval'])

                elif payload['type'] == 'module_load':
                    mod_name = payload['name']
                    if mod_name not in self.header_info:
                        self.header_info[mod_name] = {
                            'base': payload['base'],
                            'size': payload['size'],
                            'path': payload['path'],
                            'functions': []
                        }

            elif message['type'] == 'error':
                logging.error(f"Frida script error: {message}")

        except Exception as e:
            logging.error(f"Message handling error: {e}")

    def capture_dynamic_headers(self):
        """Capture header information from runtime library loads"""
        if not self.session:
            return

        header_script = '''
        (function() {
            console.log("Dynamic header capture started");

            // Hook dlopen/dlsym for dynamic library tracking
            var dlopen = Module.findExportByName(null, "dlopen");
            if (dlopen) {
                Interceptor.attach(dlopen, {
                    onEnter: function(args) {
                        this.libname = args[0].readUtf8String();
                    },
                    onLeave: function(retval) {
                        if (retval.toInt32() != 0) {
                            send({
                                type: 'library_loaded',
                                name: this.libname,
                                handle: retval.toString()
                            });
                        }
                    }
                });
            }

            // Hook dlsym to track symbol resolution
            var dlsym = Module.findExportByName(null, "dlsym");
            if (dlsym) {
                Interceptor.attach(dlsym, {
                    onEnter: function(args) {
                        this.symname = args[1].readUtf8String();
                    },
                    onLeave: function(retval) {
                        if (retval.toInt32() != 0) {
                            send({
                                type: 'symbol_resolved',
                                name: this.symname,
                                address: retval.toString()
                            });
                        }
                    }
                });
            }
        })();
        '''

        try:
            script = self.session.create_script(header_script)
            script.on('message', self._on_header_message)
            script.load()
            time.sleep(5)  # Capture for a few seconds
            script.unload()
            logging.info("Dynamic header capture completed")
        except Exception as e:
            logging.error(f"Header capture failed: {e}")

    def _on_header_message(self, message, data):
        """Handle header capture messages"""
        try:
            if message['type'] == 'send':
                payload = message['payload']

                if payload['type'] == 'library_loaded':
                    lib = payload['name']
                    if lib and lib not in self.header_info:
                        self.header_info[lib] = {
                            'type': 'dynamic',
                            'handle': payload['handle'],
                            'symbols': []
                        }

                elif payload['type'] == 'symbol_resolved':
                    sym = payload['name']
                    addr = payload['address']
                    # Add to most recent library
                    for lib_info in reversed(list(self.header_info.values())):
                        if lib_info.get('type') == 'dynamic':
                            if 'symbols' not in lib_info:
                                lib_info['symbols'] = []
                            lib_info['symbols'].append({'name': sym, 'address': addr})
                            break

        except Exception as e:
            logging.error(f"Header message error: {e}")

    def stop_tracing(self):
        """Stop tracing and save results"""
        if self.script:
            self.script.unload()
            self.script = None

        if self.session:
            self.session.detach()
            self.session = None

        self._save_results()

    def _save_results(self):
        """Save all captured data"""
        results = {
            'traced_functions': self.traced_functions,
            'header_info': self.header_info,
            'timestamp': time.time(),
            'target': self.binary_path or f"PID:{self.pid}"
        }

        output_file = Path("frida_trace_results.json")
        with open(output_file, 'w') as f:
            json.dump(results, f, indent=2, default=str)

        # Generate summary
        total_functions = len(self.traced_functions)
        total_calls = sum(f['calls'] for f in self.traced_functions.values()) if self.traced_functions else 0

        logging.info(f"Results saved to {output_file}")
        logging.info(f"Traced {total_functions} functions with {total_calls} total calls")
        logging.info(f"Captured {len(self.header_info)} modules/libraries")

    def __del__(self):
        try:
            if hasattr(self, 'session') and self.session:
                self.stop_tracing()
        except:
            pass  # Ignore errors during cleanup

# Enhanced usage for NI hardware tracing
if __name__ == "__main__":
    import sys
    if len(sys.argv) > 1:
        target = sys.argv[1]
        if target.isdigit():
            # Attach to PID
            engine = FridaEngine(pid=int(target))
        else:
            # Spawn binary
            engine = FridaEngine(binary_path=target)

        engine.start_tracing(duration=30)
        engine.capture_dynamic_headers()
    else:
        print("Usage: python frida_engine.py <binary_path | pid>")