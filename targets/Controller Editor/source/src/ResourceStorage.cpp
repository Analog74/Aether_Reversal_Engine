#include <ni/controller_editor/ResourceStorage.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP {

void ResourceStorage::getPos64() const {
char cVar1;
  unsigned long long uVar2;
  
  cVar1 = (**(code **)(*(long *)this + 0x10))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010072d9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(long **)(this + 0x18) + 0x30))();
    return uVar2;
  }
  return 0xffffffffffffffff;
}

void ResourceStorage::write(void const*, unsigned long) {
unsigned long long uVar1;
  
  if (*(int *)((long)param_1 + 0xc) - 1U < 2) {
    uVar1 = (**(code **)(**(long **)((long)param_1 + 0x18) + 0x20))();
    *(unsigned int *)((long)param_1 + 0xc) = *(unsigned int *)(*(long *)((long)param_1 + 0x18) + 0xc);
    return uVar1;
  }
  return 0;
}

ResourceStorage::~ResourceStorage() {
*(void ***)this = &PTR__ResourceStorage_101b31860;
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
  delete(this);
  return;
}
}
