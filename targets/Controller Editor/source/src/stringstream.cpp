#include <ni/controller_editor/stringstream.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace virtual thunk to std {

stringstream::~stringstream() {
iostream *this_00;
  long lVar1;
  void *puVar2;
  
  puVar2 = PTR_vtable_101ab45a8;
  lVar1 = *(long *)(*(long *)this + -0x18);
  this_00 = (iostream *)(this + lVar1);
  *(void **)(this + lVar1) = (char*)PTR_vtable_101ab45a8 + 0x18;
  *(void **)(this + lVar1 + 0x80) = puVar2 + 0x68;
  *(void **)(this + lVar1 + 0x10) = puVar2 + 0x40;
  *(void **)(this + lVar1 + 0x18) = (char*)PTR_vtable_101ab4590 + 0x10;
  if (((byte)this[lVar1 + 0x58] & 1) != 0) {
    delete(*(void **)(this_00 + 0x68));
  }
  // std code
  // std code
  // std code
  delete(this_00);
  return;
}
}
