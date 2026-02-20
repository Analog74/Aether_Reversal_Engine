#include <ni/controller_editor/WriteSegmentedStream.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace anyrpc {

void WriteSegmentedStream::AddBuffer() {
unsigned long long *puVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  unsigned long uVar5;
  size_t sVar6;
  long lVar7;
  long lVar8;
  unsigned long uVar9;
  unsigned int local_37;
  void3 uStack_33;
  
  sVar6 = *(size_t *)(this + 0x28);
  pvVar3 = _malloc(sVar6);
  lVar7 = sVar6 - 1;
  puVar1 = *(unsigned long long **)(this + 0x10);
  if (puVar1 < *(unsigned long long **)(this + 0x18)) {
    *puVar1 = pvVar3;
    puVar1[1] = lVar7;
    puVar1[2] = 0;
    *(unsigned char *)(puVar1 + 3) = 1;
    *(unsigned int *)((long)puVar1 + 0x19) = local_37;
    *(uint *)((long)puVar1 + 0x1c) = CONCAT31(uStack_33,local_37._3_1_);
    *(unsigned long long **)(this + 0x10) = puVar1 + 4;
  }
  else {
    pvVar2 = *(void **)(this + 8);
    sVar6 = (long)puVar1 - (long)pvVar2;
    uVar5 = ((long)sVar6 >> 5) + 1;
    if (uVar5 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      // std code
    }
    lVar8 = (long)*(unsigned long long **)(this + 0x18) - (long)pvVar2;
    uVar9 = lVar8 >> 4;
    if (uVar9 < uVar5) {
      uVar9 = uVar5;
    }
    if (0x3fffffffffffffe < (unsigned long)(lVar8 >> 5)) {
      uVar9 = 0x7ffffffffffffff;
    }
    if (uVar9 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      if (0x7ffffffffffffff < uVar9) {
                    /* WARNING: Subroutine does not return */
        // std code
      }
      pvVar4 = new char[uVar9 << 5];
    }
    lVar8 = ((long)sVar6 >> 5) * 0x20;
    *(void **)((long)pvVar4 + lVar8) = pvVar3;
    *(long *)((long)pvVar4 + lVar8 + 8) = lVar7;
    *(unsigned long long *)((long)pvVar4 + lVar8 + 0x10) = 0;
    *(unsigned char *)((long)pvVar4 + lVar8 + 0x18) = 1;
    *(unsigned int *)((long)pvVar4 + lVar8 + 0x19) = local_37;
    *(uint *)((long)pvVar4 + lVar8 + 0x1c) = CONCAT31(uStack_33,local_37._3_1_);
    if (0 < (long)sVar6) {
      memcpy(pvVar4,pvVar2,sVar6);
    }
    *(void **)(this + 8) = pvVar4;
    *(long *)(this + 0x10) = (long)pvVar4 + lVar8 + 0x20;
    *(void **)(this + 0x18) = (void *)(uVar9 * 0x20 + (long)pvVar4);
    if (pvVar2 != (void *)0x0) {
      delete(pvVar2);
    }
  }
  uVar5 = *(long *)(this + 0x28) * 2;
  if (*(unsigned long *)(this + 0x30) < (unsigned long)(*(long *)(this + 0x28) * 2)) {
    uVar5 = *(unsigned long *)(this + 0x30);
  }
  *(unsigned long *)(this + 0x28) = uVar5;
  return;
}

WriteSegmentedStream::~WriteSegmentedStream() {
unsigned long long *puVar1;
  unsigned long long *puVar2;
  
  *(void ***)this = &PTR__WriteSegmentedStream_101b82d70;
  puVar2 = *(unsigned long long **)(this + 8);
  puVar1 = *(unsigned long long **)(this + 0x10);
  if (puVar2 != puVar1) {
    do {
      if (*(char *)(puVar2 + 3) != '\0') {
        _free((void *)*puVar2);
        puVar1 = *(unsigned long long **)(this + 0x10);
      }
      puVar2 = puVar2 + 4;
    } while (puVar2 != puVar1);
    puVar2 = *(unsigned long long **)(this + 8);
  }
  if (puVar2 != (unsigned long long *)0x0) {
    *(unsigned long long **)(this + 0x10) = puVar2;
    delete(puVar2);
  }
  delete(this);
  return;
}
}
