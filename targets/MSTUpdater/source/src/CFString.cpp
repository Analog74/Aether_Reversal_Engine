#include <ni/controller_editor/CFString.hpp>
namespace NI::GP {

CFString::~CFString() {
_CFRelease(*(unsigned long long *)this);
  return;
}
}
