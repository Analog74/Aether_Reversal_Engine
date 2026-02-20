#include <ni/controller_editor/wiostream.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace virtual thunk to std {

wiostream::~wiostream() {
long lVar1;
  
  lVar1 = *(long *)(*(long *)this + -0x18);
  // std code
  // std code
  // std code
  delete((wistream *)(this + lVar1));
  return;
}
}
