#include <ni/controller_editor/MemoryStorage.hpp>
namespace NI::GP {

void MemoryStorage::growFor(unsigned long) {
unsigned long uVar1;
  size_t sVar2;
  void *pvVar3;
  unsigned long uVar4;
  void *pvVar5;
  unsigned long uVar6;
  
  sVar2 = *(size_t *)(this + 0x38);
  if (((char)*(ushort *)(this + 0x14) == '\0') || (0xff < *(ushort *)(this + 0x14))) {
LAB_10019e492:
    param_1 = *(long *)(this + 0x20) - sVar2;
    *(unsigned int *)(this + 0xc) = 3;
  }
  else {
    uVar1 = sVar2 + param_1;
    uVar6 = *(unsigned long *)(this + 0x28);
    if (uVar6 == 0) {
      if (*(float *)(this + 0x30) <= 0.0) goto LAB_10019e492;
      uVar6 = *(unsigned long *)(this + 0x20);
      if (uVar6 < uVar1) {
        do {
          uVar6 = uVar6 + ((long)((float)uVar6 * *(float *)(this + 0x30)) & 0xffffffffU);
        } while (uVar6 < uVar1);
        goto LAB_10019e3f7;
      }
    }
    else {
      uVar4 = uVar1 - uVar1 % uVar6;
      uVar6 = uVar6 + uVar4;
      if (uVar1 <= uVar4) {
        uVar6 = uVar4;
      }
LAB_10019e3f7:
      *(unsigned long *)(this + 0x20) = uVar6;
    }
    pvVar5 = new__(uVar6);
    pvVar3 = *(void **)(this + 0x18);
    if (pvVar3 != (void *)0x0) {
      memcpy(pvVar5,pvVar3,sVar2);
      delete__(pvVar3);
    }
    *(void **)(this + 0x18) = pvVar5;
    *(unsigned int *)(this + 0xc) = 1;
  }
  return param_1;
}

MemoryStorage::~MemoryStorage() {
*(void ***)this = &PTR__MemoryStorage_100230ee8;
  if ((this[0x14] != (MemoryStorage)0x0) && (*(void **)(this + 0x18) != (void *)0x0)) {
    delete__(*(void **)(this + 0x18));
  }
  delete(this);
  return;
}
}
