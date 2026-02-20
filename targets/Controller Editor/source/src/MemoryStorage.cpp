#include <ni/controller_editor/MemoryStorage.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP {

void MemoryStorage::growFor(unsigned long) {
unsigned long uVar1;
  size_t sVar2;
  unsigned long uVar3;
  void *pvVar4;
  unsigned int uVar5;
  void *pvVar6;
  unsigned long uVar7;
  unsigned long uVar8;
  
  sVar2 = *(size_t *)(this + 0x38);
  if ((this[0x14] == (MemoryStorage)0x0) || (this[0x15] != (MemoryStorage)0x0)) {
    param_1 = *(long *)(this + 0x20) - sVar2;
    uVar5 = 3;
  }
  else {
    uVar1 = sVar2 + param_1;
    uVar3 = *(unsigned long *)(this + 0x28);
    if (uVar3 == 0) {
      if (*(float *)(this + 0x30) <= 0.0) return;
      uVar8 = *(unsigned long *)(this + 0x20);
      if (uVar8 < uVar1) {
        do {
          uVar8 = uVar8 + ((long)((float)uVar8 * *(float *)(this + 0x30)) & 0xffffffffU);
        } while (uVar8 < uVar1);
        return;
      }
    }
    else {
      if ((uVar1 | uVar3) >> 0x20 == 0) {
        uVar7 = (uVar1 & 0xffffffff) % (uVar3 & 0xffffffff);
      }
      else {
        uVar7 = uVar1 % uVar3;
      }
      uVar8 = 0;
      if (uVar1 - uVar7 < uVar1) {
        uVar8 = uVar3;
      }
      uVar8 = uVar8 + (uVar1 - uVar7);
      *(unsigned long *)(this + 0x20) = uVar8;
    }
    pvVar6 = new__(uVar8);
    pvVar4 = *(void **)(this + 0x18);
    if (pvVar4 != (void *)0x0) {
      memcpy(pvVar6,pvVar4,sVar2);
      delete__(pvVar4);
    }
    *(void **)(this + 0x18) = pvVar6;
    uVar5 = 1;
  }
  *(unsigned int *)(this + 0xc) = uVar5;
  return param_1;
}

MemoryStorage::~MemoryStorage() {
*(void ***)this = &PTR__MemoryStorage_101b317e8;
  if ((this[0x14] != (MemoryStorage)0x0) && (*(void **)(this + 0x18) != (void *)0x0)) {
    delete__(*(void **)(this + 0x18));
  }
  delete(this);
  return;
}
}
