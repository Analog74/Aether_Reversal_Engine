#include <ni/controller_editor/ifstream.hpp>
namespace virtual thunk to std {

ifstream::~ifstream() {
long lVar1;
  void *puVar2;
  
  puVar2 = PTR_vtable_1009cc270;
  lVar1 = *(long *)(*(long *)this + -0x18);
  *(void **)(this + lVar1) = PTR_vtable_1009cc270 + 0x18;
  *(void **)(this + lVar1 + 0x1a8) = puVar2 + 0x40;
  filebuf::~filebuf((filebuf *)(this + lVar1 + 0x10));
  // std code
  // std code
  delete((istream *)(this + lVar1));
  return;
}
}
