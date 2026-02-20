#pragma once
#include <cstdint>
#include <cstddef>
#include <string>
#include <vector>
#include <map>
#include <memory>
#include <iostream>
#include <sstream>
#include <fstream>
#include <ctime>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <functional>
#include <type_traits>
#include <atomic>
#include <mutex>
#include <thread>
#include <condition_variable>
#include <chrono>
#include <exception>
#include <stdexcept>
#include <new>

typedef unsigned int uint;
typedef unsigned char byte;
typedef unsigned char uchar;
typedef void* code;
typedef unsigned long ulong;
typedef unsigned short ushort;
typedef long long longlong;
typedef unsigned long long ulonglong;
typedef int int7;
typedef void void7;

// Common NI-specific types that might be missing
// Note: int8_t, uint8_t, etc. are already defined in <cstdint>
// typedef unsigned long long uint64_t;
// typedef long long int64_t;
// typedef unsigned int uint32_t;
// typedef int int32_t;
// typedef unsigned short uint16_t;
// typedef short int16_t;
// typedef unsigned char uint8_t;
// typedef char int8_t;

// Add more as needed
