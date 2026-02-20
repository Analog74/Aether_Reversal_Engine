#include <ni/controller_editor/ofstream.hpp>
namespace virtual thunk to std {

ofstream::~ofstream() {
long lVar1;
  void *puVar2;
  
  puVar2 = PTR_vtable_1009cc278;
  lVar1 = *(long *)(*(long *)this + -0x18);
  *(void **)(this + lVar1) = PTR_vtable_1009cc278 + 0x18;
  *(void **)(this + lVar1 + 0x1a0) = puVar2 + 0x40;
  filebuf::~filebuf((filebuf *)(this + lVar1 + 8));
  // std code
  // std code
  delete((ostream *)(this + lVar1));
  return;
}
}
