#include <ni/controller_editor/ResourceStream.hpp>
namespace NI::GP {

ResourceStream::ResourceStream() {
*(ResourceStream **)(this + 8) = this + 0x18;
  *(unsigned int *)(this + 0x10) = 1;
  *(void ***)this = &PTR__ResourceStream_100230fb8;
  *(unsigned int *)(this + 0x20) = 0;
  *(unsigned int *)(this + 0x24) = 0;
  *(unsigned int *)(this + 0x28) = 0;
  *(void ***)(this + 0x18) = &PTR__ResourceStorage_100230f60;
  *(unsigned long long *)(this + 0x38) = 0;
  *(unsigned long long *)(this + 0x30) = 0;
  
}

ResourceStream::~ResourceStream() {
long *plVar1;
  
  *(void ***)this = &PTR__ResourceStream_100230fb8;
  *(void ***)(this + 0x18) = &PTR__ResourceStorage_100230f60;
  if (*(long **)(this + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x30) + 8))();
  }
  *(unsigned long long *)(this + 0x30) = 0;
  *(unsigned long long *)(this + 0x20) = 0;
  plVar1 = *(long **)(this + 0x38);
  if ((plVar1 != (long *)0x0) && (*plVar1 != 0)) {
    _HUnlock(plVar1);
    _DisposeHandle(plVar1);
  }
  delete(this);
  return;
}
}
