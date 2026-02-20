#include <ni/controller_editor/CFString.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP {

void CFString::retain() const {
_CFRetain(*(unsigned long long *)this);
  return this;
}

CFString::~CFString() {
_CFRelease(*(unsigned long long *)this);
  return;
}
}
