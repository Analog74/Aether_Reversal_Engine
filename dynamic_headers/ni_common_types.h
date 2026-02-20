// Common type definitions for decompiled NI binaries
// This header provides missing type definitions that Ghidra often fails to properly identify

#ifndef NI_COMMON_TYPES_H
#define NI_COMMON_TYPES_H

#include <cstdint>
#include <cstddef>
#include <stdexcept>

// Basic types that Ghidra often misses
typedef unsigned char byte;
typedef unsigned char uint8_t;  // Redefine if needed
typedef signed char int8_t;     // Redefine if needed

// Common integer types
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned long long ullong;

// Standard library types that Ghidra misses
class logic_error : public std::logic_error {
public:
    logic_error(const char* msg) : std::logic_error(msg) {}
};

class runtime_error : public std::runtime_error {
public:
    runtime_error(const char* msg) : std::runtime_error(msg) {}
};

class out_of_range : public std::out_of_range {
public:
    out_of_range(const char* msg) : std::out_of_range(msg) {}
};

// Exception throwing functions
template<typename T>
void throw_exception(const T& e) {
    throw e;
}

// Common function pointer types
typedef void* code;  // Function pointer type
typedef void (*function_ptr)();  // Generic function pointer

// Stack protection and system types
extern "C" {
    extern long ___stack_chk_guard;
    extern void ___stack_chk_fail();
    extern void* _objc_msgSend;
    extern void* PTR____stack_chk_guard_1002272e0;
    extern void* PTR__objc_msgSend_100227360;
    extern void* PTR__USBDeviceFactory_1002286f0;
    extern void* PTR__WindowBase_100229660;
    extern void* PTR_vtable_101ab45e0;  // Added for iterator
}

// Common Objective-C types (simplified)
typedef void* objc_object;
typedef void* objc_selector;
typedef void* objc_class;
class NSNotification;
class CGContext;

// Common math functions that might be missing
extern "C" {
    double sqrt(double);
    double sin(double);
    double cos(double);
    double atan2(double, double);
}

// Common string functions
extern "C" {
    char* strcpy(char*, const char*);
    size_t strlen(const char*);
    int strcmp(const char*, const char*);
    void* memcpy(void*, const void*, size_t);
    void* memset(void*, int, size_t);
}

// Threading types
typedef unsigned long pthread_t;
extern "C" {
    pthread_t pthread_self();
    int pthread_create(pthread_t*, const void*, void* (*)(void*), void*);
    int pthread_join(pthread_t, void**);
}

// Semaphore types
typedef void* semaphore_t;
extern "C" {
    int _semaphore_wait(void* semaphore);
    int _semaphore_signal(void* semaphore);
}

// File operations
extern "C" {
    int _snprintf(char*, size_t, const char*, ...);
    int sprintf(char*, const char*, ...);
}

// Atomic operations
extern "C" {
    long OSAtomicAdd32(long, volatile long*);
    long OSAtomicIncrement32(volatile long*);
    long OSAtomicDecrement32(volatile long*);
}

// Common NI-specific types
namespace NI {
    namespace GP {
        class Point;
        class Rect;
    }
    namespace UIA {
        class EventTarget;
        class Window;
        class Application;
    }
    namespace NWL {
        class Widget;
        class Button;
        class Pane;
    }
}

// Boost types that might be missing
namespace boost {
    template<typename T> class shared_ptr;
    template<typename T> class weak_ptr;
    template<typename T, typename U> class unordered_map;
    template<typename T> class optional;
}

// Standard library extensions
namespace std {
    template<typename T> class atomic;
    template<typename T> using unique_ptr = T*;  // Simplified
}

// Common macros
#define LOCK() do { } while(0)
#define UNLOCK() do { } while(0)
#define CONCAT44(high, low) (((unsigned long long)(high) << 32) | (unsigned long long)(low))

#endif // NI_COMMON_TYPES_H