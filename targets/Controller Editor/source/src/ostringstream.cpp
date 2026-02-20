#include <ni/controller_editor/ostringstream.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace virtual thunk to std {

ostringstream::~ostringstream() {
ostream *this_00;
  long lVar1;
  void *puVar2;
  
  puVar2 = PTR_vtable_101ab45c0;
  lVar1 = *(long *)(*(long *)this + -0x18);
  this_00 = (ostream *)(this + lVar1);
  *(void **)(this + lVar1) = (char*)PTR_vtable_101ab45c0 + 0x18;
  *(void **)(this + lVar1 + 0x70) = puVar2 + 0x40;
  *(void **)(this + lVar1 + 8) = (char*)PTR_vtable_101ab4590 + 0x10;
  if (((byte)this[lVar1 + 0x48] & 1) != 0) {
    delete(*(void **)(this_00 + 0x58));
  }
  // std code
  // std code
  // std code
  delete(this_00);
  return;
}
}
