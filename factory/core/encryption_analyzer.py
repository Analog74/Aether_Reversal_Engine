# Created: 2025-11-30 00:04 UTC • Last Modified: 2025-11-30 00:24 UTC
# factory/core/encryption_analyzer.py – 2025-11-25 04:00 UTC – Encryption Analysis Engine
import frida
import time
import json
import logging
import subprocess
from pathlib import Path
import sys
import os

# Add the parent directory to the path for imports
sys.path.insert(0, os.path.dirname(os.path.dirname(__file__)))

from frida_engine import FridaEngine

logging.basicConfig(level=logging.INFO, format='%(asctime)s - %(levelname)s - %(message)s')

class EncryptionAnalyzer(FridaEngine):
    def __init__(self, binary_path=None, pid=None, device=None):
        super().__init__(binary_path, pid, device)
        self.crypto_calls = {}
        self.entropy_regions = []
        self.protocol_patterns = []

    def analyze_encryption(self, duration=120):
        """
        Comprehensive encryption analysis using Frida hooks and binwalk entropy
        :param duration: Analysis duration in seconds
        """
        print("[+] Starting encryption analysis...")

        # First, perform entropy analysis with binwalk
        self._analyze_entropy()

        # Then, hook crypto functions with Frida
        self._hook_crypto_functions(duration)

        # Analyze captured data for protocol patterns
        self._analyze_protocol_patterns()

        # Save results
        self._save_encryption_results()

    def _analyze_entropy(self):
        """Use binwalk to detect high-entropy regions indicating encrypted data"""
        if not self.binary_path:
            print("[-] No binary path for entropy analysis")
            return

        binary_path = Path(self.binary_path)
        print(f"[+] Analyzing entropy in {binary_path.name}...")

        try:
            # Run binwalk entropy analysis
            result = subprocess.run(
                ["binwalk", "-E", "--save", str(binary_path)],
                capture_output=True, text=True, check=True
            )

            # Parse entropy output for high-entropy regions
            lines = result.stdout.split('\n')
            for line in lines:
                if 'High entropy' in line or 'entropy' in line.lower():
                    # Extract offset and entropy value
                    parts = line.split()
                    if len(parts) >= 3:
                        try:
                            offset = int(parts[0], 16) if '0x' in parts[0] else int(parts[0])
                            entropy = float(parts[-1]) if parts[-1].replace('.', '').isdigit() else 0.0
                            if entropy > 7.5:  # High entropy threshold
                                self.entropy_regions.append({
                                    'offset': offset,
                                    'entropy': entropy,
                                    'description': 'High entropy region (potential encryption)'
                                })
                        except (ValueError, IndexError):
                            continue

            print(f"[+] Found {len(self.entropy_regions)} high-entropy regions")

        except (subprocess.CalledProcessError, FileNotFoundError) as e:
            print(f"[-] Entropy analysis failed: {e}")

    def _hook_crypto_functions(self, duration):
        """Hook crypto functions using Frida - try more generic approach"""
        # Try to find actual crypto functions by searching exports
        print("[+] Searching for crypto-related exports...")

        # First, let's try to find what crypto functions are actually available
        generic_functions = [
            # Memory operations that might be crypto-related
            "malloc", "free", "memcpy", "memset", "memcmp",
            # File operations (might read keys/config)
            "fopen", "fread", "fwrite", "fclose",
            # Network operations (might be protocol related)
            "connect", "send", "recv", "socket",
            # System calls that might access crypto
            "open", "read", "write", "close",
        ]

        # Try to hook some basic functions to see what's happening
        self.start_tracing(functions_to_trace=generic_functions, duration=duration)

    def _generate_trace_script(self, functions):
        """Override to add crypto-specific tracing logic"""
        base_script = super()._generate_trace_script(functions)

        # Add crypto-specific analysis
        crypto_analysis = '''
        // Additional crypto analysis
        console.log("Crypto analysis mode enabled");

        // Monitor for large memory allocations that might be crypto buffers
        var malloc = Module.findExportByName(null, "malloc");
        if (malloc) {
            Interceptor.attach(malloc, {
                onEnter: function(args) {
                    this.size = args[0].toInt32();
                    if (this.size > 1024) {  // Large allocations might be crypto buffers
                        send({
                            type: 'large_allocation',
                            size: this.size,
                            caller: this.returnAddress
                        });
                    }
                }
            });
        }

        // Monitor file operations that might access crypto keys/materials
        var fopen = Module.findExportByName(null, "fopen");
        if (fopen) {
            Interceptor.attach(fopen, {
                onEnter: function(args) {
                    var path = args[0].readUtf8String();
                    if (path && (path.includes('key') || path.includes('cert') || path.includes('crypto') || path.includes('.pem') || path.includes('.key'))) {
                        send({
                            type: 'crypto_file_access',
                            path: path,
                            operation: 'open'
                        });
                    }
                }
            });
        }
        '''

        return base_script.replace('});', '});' + crypto_analysis)

    def _on_message(self, message, data):
        """Override to handle crypto-specific messages"""
        super()._on_message(message, data)

        try:
            if message['type'] == 'send':
                payload = message['payload']

                if payload['type'] in ['large_allocation', 'high_entropy_copy']:
                    # Store crypto-related events
                    if 'crypto_events' not in self.crypto_calls:
                        self.crypto_calls['crypto_events'] = []
                    self.crypto_calls['crypto_events'].append(payload)

                elif payload['type'] == 'function_enter':
                    func_name = payload['name']
                    # Check if it's a crypto function
                    crypto_keywords = ['crypt', 'encrypt', 'decrypt', 'hash', 'hmac', 'aes', 'des', 'rsa', 'dsa', 'ec', 'chacha', 'sha', 'md5']
                    if any(keyword in func_name.lower() for keyword in crypto_keywords):
                        if func_name not in self.crypto_calls:
                            self.crypto_calls[func_name] = {
                                'calls': 0,
                                'args_samples': [],
                                'return_samples': []
                            }
                        self.crypto_calls[func_name]['calls'] += 1
                        if len(self.crypto_calls[func_name]['args_samples']) < 5:
                            self.crypto_calls[func_name]['args_samples'].append(payload['args'])

                elif payload['type'] == 'function_leave':
                    func_name = payload['name']
                    if func_name in self.crypto_calls:
                        if len(self.crypto_calls[func_name]['return_samples']) < 5:
                            self.crypto_calls[func_name]['return_samples'].append(payload['retval'])

        except Exception as e:
            logging.error(f"Crypto message handling error: {e}")

    def _analyze_protocol_patterns(self):
        """Analyze captured crypto calls for protocol patterns"""
        print("[+] Analyzing protocol patterns...")

        # Look for patterns that might indicate protocol encryption
        patterns = {
            'symmetric_encryption': ['AES_', 'DES_', 'BF_', 'CAST_', 'RC2_', 'RC4_'],
            'asymmetric_encryption': ['RSA_', 'DSA_', 'DH_', 'EC_'],
            'hash_functions': ['SHA', 'MD5', 'HMAC'],
            'stream_ciphers': ['ChaCha20', 'RC4'],
            'key_exchange': ['DH_', 'ECDH_'],
            'random_generation': ['RAND_', 'CCRandom']
        }

        for func_name in self.crypto_calls:
            for pattern_type, pattern_funcs in patterns.items():
                if any(pf in func_name for pf in pattern_funcs):
                    self.protocol_patterns.append({
                        'function': func_name,
                        'pattern_type': pattern_type,
                        'calls': self.crypto_calls[func_name]['calls']
                    })
                    break

        print(f"[+] Identified {len(self.protocol_patterns)} protocol patterns")

    def _save_encryption_results(self):
        """Save encryption analysis results"""
        results = {
            'entropy_regions': self.entropy_regions,
            'crypto_calls': self.crypto_calls,
            'protocol_patterns': self.protocol_patterns,
            'timestamp': time.time(),
            'target': self.binary_path or f"PID:{self.pid}"
        }

        output_file = Path("encryption_analysis_results.json")
        with open(output_file, 'w') as f:
            json.dump(results, f, indent=2, default=str)

        print(f"[+] Encryption analysis results saved to {output_file}")
        print(f"[+] Found {len(self.entropy_regions)} entropy regions")
        print(f"[+] Traced {len(self.crypto_calls)} crypto functions")
        print(f"[+] Identified {len(self.protocol_patterns)} protocol patterns")

# Standalone usage
if __name__ == "__main__":
    import sys
    if len(sys.argv) > 1:
        target = sys.argv[1]
        if target.isdigit():
            analyzer = EncryptionAnalyzer(pid=int(target))
        else:
            analyzer = EncryptionAnalyzer(binary_path=target)

        analyzer.analyze_encryption(duration=60)
    else:
        print("Usage: python encryption_analyzer.py <binary_path | pid>")