#include <ni/controller_editor/stringstream.hpp>
namespace virtual thunk to std {

stringstream::~stringstream() {
long lVar1;
  void *puVar2;
  
  puVar2 = PTR_vtable_1002272a0;
  lVar1 = *(long *)(*(long *)this + -0x18);
  *(void **)(this + lVar1) = PTR_vtable_1002272a0 + 0x18;
  *(void **)(this + lVar1 + 0x80) = puVar2 + 0x68;
  *(void **)(this + lVar1 + 0x10) = puVar2 + 0x40;
  *(void **)(this + lVar1 + 0x18) = PTR_vtable_100227290 + 0x10;
  // std code
  // std code
  // std code
  // std code
  delete((iostream *)(this + lVar1));
  return;
}
}
