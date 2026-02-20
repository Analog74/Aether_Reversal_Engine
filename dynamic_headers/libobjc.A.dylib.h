// Auto-generated header for libobjc.A.dylib
// Captured from Frida tracing on NI Hardware Agent
// Base: 0x1989d0000
// Path: /usr/lib/libobjc.A.dylib

#ifndef LIBOBJC.A.DYLIB_H
#define LIBOBJC.A.DYLIB_H

// Forward declarations and basic types

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

#endif // LIBOBJC.A.DYLIB_H
