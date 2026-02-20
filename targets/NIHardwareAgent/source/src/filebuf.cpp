#include <ni/controller_editor/filebuf.hpp>
namespace std {

filebuf::filebuf() {
char cVar1;
  filebuf fVar2;
  unsigned long long uVar3;
  locale local_28 [8];
  
  // std code
  *(void **)this = PTR_vtable_1009cc260 + 0x10;
  *(unsigned long long *)(this + 0x40) = 0;
  *(unsigned long long *)(this + 0x48) = 0;
  *(unsigned long long *)(this + 0x50) = 0;
  ___bzero(this + 0x60,0x133);
  // std code
  cVar1 = // std code
  // std code
  if (cVar1 != '\0') {
    // std code
    uVar3 = // std code
    *(unsigned long long *)(this + 0x80) = uVar3;
    // std code
    fVar2 = (filebuf)(**(code **)(**(long **)(this + 0x80) + 0x38))();
    this[0x192] = fVar2;
  }
  (**(code **)(*(long *)this + 0x18))(this,0,0x1000);
  
}

filebuf::~filebuf() {
~filebuf(this);
  delete(this);
  return;
}
}
