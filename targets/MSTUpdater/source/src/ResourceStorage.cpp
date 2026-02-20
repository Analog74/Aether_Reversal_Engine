#include <ni/controller_editor/ResourceStorage.hpp>
namespace NI::GP {

ResourceStorage::~ResourceStorage() {
long *plVar1;
  
  *(void ***)this = &PTR__ResourceStorage_100230f60;
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
  *(unsigned long long *)(this + 0x18) = 0;
  *(unsigned long long *)(this + 8) = 0;
  plVar1 = *(long **)(this + 0x20);
  if ((plVar1 != (long *)0x0) && (*plVar1 != 0)) {
    _HUnlock(plVar1);
    _DisposeHandle(plVar1);
  }
  delete(this);
  return;
}
}
