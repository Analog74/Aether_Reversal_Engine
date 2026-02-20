// Auto-generated header for CoreFoundation
// Captured from Frida tracing on NI Hardware Agent
// Base: 0x198e5c000
// Path: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation

#ifndef COREFOUNDATION_H
#define COREFOUNDATION_H

// Forward declarations and basic types

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

#endif // COREFOUNDATION_H
