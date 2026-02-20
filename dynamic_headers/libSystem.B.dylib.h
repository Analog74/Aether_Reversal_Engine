// Auto-generated header for libSystem.B.dylib
// Captured from Frida tracing on NI Hardware Agent
// Base: 0x1a8725000
// Path: /usr/lib/libSystem.B.dylib

#ifndef LIBSYSTEM.B.DYLIB_H
#define LIBSYSTEM.B.DYLIB_H

// Forward declarations and basic types

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

#endif // LIBSYSTEM.B.DYLIB_H
