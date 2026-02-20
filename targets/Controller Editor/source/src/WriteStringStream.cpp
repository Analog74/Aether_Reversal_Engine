#include <ni/controller_editor/WriteStringStream.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace anyrpc {

void* WriteStringStream::GetBuffer(unsigned long param_1, unsigned long& param_2) {
unsigned long uVar1;
  
  if ((flags & 1) == 0) {
    uVar1 = (unsigned long)(flags >> 1);
  }
  else {
    uVar1 = size;
  }
  if (param_1 <= uVar1) {
    param_2 = uVar1 - param_1;
    if ((flags & 1) != 0) {
      return (char*)data + param_1;
    }
    // For small string optimization, data starts after flags
    return (char*)&flags + 1 + param_1;
  }
  param_2 = 0;
  return nullptr;
}

unsigned long WriteStringStream::Length() {
  if ((flags & 1) == 0) {
    return (unsigned long)(flags >> 1);
  }
  return size;
}

WriteStringStream::~WriteStringStream() {
  if ((flags & 1) != 0) {
    delete[] static_cast<char*>(data);
  }
  // Don't delete this in destructor
  return;
}
}
