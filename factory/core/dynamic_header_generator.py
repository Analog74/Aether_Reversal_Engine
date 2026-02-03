# Created: 2025-11-24 22:35 UTC • Last Modified: 2025-11-24 22:40 UTC
# 2025-11-24 17:35 UTC
# Generate dynamic headers from Frida-captured module information
import json
from pathlib import Path
from typing import Dict, List

class DynamicHeaderGenerator:
    def __init__(self, trace_results_file: str, output_dir: str):
        self.trace_file = Path(trace_results_file)
        self.output_dir = Path(output_dir)
        self.output_dir.mkdir(parents=True, exist_ok=True)

    def load_trace_data(self):
        """Load Frida trace results"""
        with open(self.trace_file) as f:
            return json.load(f)

    def generate_system_headers(self):
        """Generate header files for captured system modules"""
        data = self.load_trace_data()
        header_info = data.get('header_info', {})

        # Focus on key system frameworks
        key_frameworks = {
            'CoreFoundation': 'CoreFoundation.h',
            'Foundation': 'Foundation.h',
            'libobjc.A.dylib': 'objc.h',
            'libSystem.B.dylib': 'System.h',
            'CoreServices': 'CoreServices.h',
            'Cocoa': 'Cocoa.h',
            'AppKit': 'AppKit.h',
        }

        generated_headers = []

        for module_name, module_info in header_info.items():
            if module_name in key_frameworks:
                header_file = self._generate_framework_header(module_name, module_info)
                if header_file:
                    generated_headers.append(header_file)

        return generated_headers

    def _generate_framework_header(self, module_name: str, module_info: Dict) -> str:
        """Generate a header file for a specific framework"""
        header_name = f"{module_name}.h"
        header_path = self.output_dir / header_name

        # Basic framework header structure
        content = f"""// Auto-generated header for {module_name}
// Captured from Frida tracing on NI Hardware Agent
// Base: {module_info.get('base', 'unknown')}
// Path: {module_info.get('path', 'unknown')}

#ifndef {module_name.upper()}_H
#define {module_name.upper()}_H

// Forward declarations and basic types
"""

        # Add framework-specific content
        if module_name == 'CoreFoundation':
            content += self._add_corefoundation_types()
        elif module_name == 'Foundation':
            content += self._add_foundation_types()
        elif module_name == 'libobjc.A.dylib':
            content += self._add_objc_types()
        elif module_name == 'libSystem.B.dylib':
            content += self._add_system_types()
        else:
            content += "// TODO: Add specific types for this framework\n"

        content += "\n#endif // {}_H\n".format(module_name.upper())

        try:
            with open(header_path, 'w') as f:
                f.write(content)
            print(f"Generated {header_path}")
            return str(header_path)
        except Exception as e:
            print(f"Failed to write {header_path}: {e}")
            return None

    def _add_corefoundation_types(self) -> str:
        """Add CoreFoundation type definitions"""
        return """
// CoreFoundation types
typedef struct CFString *CFStringRef;
typedef struct CFArray *CFArrayRef;
typedef struct CFDictionary *CFDictionaryRef;
typedef struct CFData *CFDataRef;
typedef const struct CFAllocator *CFAllocatorRef;

typedef unsigned long CFIndex;
typedef unsigned int CFStringEncoding;

extern CFStringRef CFStringCreateWithCString(CFAllocatorRef alloc, const char *cStr, CFStringEncoding encoding);
extern CFIndex CFStringGetLength(CFStringRef theString);
extern const char *CFStringGetCStringPtr(CFStringRef theString, CFStringEncoding encoding);
"""

    def _add_foundation_types(self) -> str:
        """Add Foundation type definitions"""
        return """
// Foundation types
@protocol NSObject
@end

@interface NSObject <NSObject>
@end

@interface NSString : NSObject
@end

@interface NSArray : NSObject
@end

@interface NSDictionary : NSObject
@end

@interface NSData : NSObject
@end

// Common Foundation functions
extern NSString *NSStringFromClass(Class cls);
extern NSString *NSStringFromSelector(SEL selector);
"""

    def _add_objc_types(self) -> str:
        """Add Objective-C runtime types"""
        return """
// Objective-C runtime types
typedef struct objc_class *Class;
typedef struct objc_object *id;
typedef struct objc_selector *SEL;
typedef struct objc_method *Method;
typedef struct objc_ivar *Ivar;

extern id objc_msgSend(id self, SEL op, ...);
extern Class objc_getClass(const char *name);
extern SEL sel_registerName(const char *str);
extern const char *sel_getName(SEL sel);
"""

    def _add_system_types(self) -> str:
        """Add system-level types"""
        return """
// System types
typedef long ssize_t;
typedef unsigned long size_t;
typedef long off_t;

// Memory management
extern void *malloc(size_t size);
extern void free(void *ptr);
extern void *realloc(void *ptr, size_t size);

// Dynamic loading
typedef void *dl_handle;
extern dl_handle dlopen(const char *path, int mode);
extern void *dlsym(dl_handle handle, const char *symbol);
extern int dlclose(dl_handle handle);
extern const char *dlerror(void);
"""

def generate_dynamic_headers(trace_file: str, output_dir: str):
    """Main function to generate dynamic headers"""
    generator = DynamicHeaderGenerator(trace_file, output_dir)
    headers = generator.generate_system_headers()
    print(f"Generated {len(headers)} dynamic headers")
    return headers

if __name__ == "__main__":
    import sys
    trace_file = sys.argv[1] if len(sys.argv) > 1 else "frida_trace_results.json"
    output_dir = sys.argv[2] if len(sys.argv) > 2 else "dynamic_headers"
    generate_dynamic_headers(trace_file, output_dir)