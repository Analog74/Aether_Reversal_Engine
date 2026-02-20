#include <ni/controller_editor/addExtension_std.hpp>
namespace NI::GP::FileTypeDescr {

void addExtension(std::string) {
byte *pbVar1;
  void *pvVar2;
  byte *pbVar3;
  unsigned long long *puVar4;
  void *pvVar5;
  unsigned long long uVar6;
  unsigned long uVar7;
  long lVar8;
  void *pvVar9;
  void *pvVar10;
  long lVar11;
  unsigned long uVar12;
  
  if ((*param_2 & 1) == 0) {
    pbVar3 = param_2 + 1;
    uVar7 = (unsigned long)(*param_2 >> 1);
  }
  else {
    pbVar3 = *(byte **)(param_2 + 0x10);
    uVar7 = *(unsigned long *)(param_2 + 8);
  }
  if (uVar7 != 0) {
    lVar8 = 0;
    do {
      pbVar1 = pbVar3 + lVar8;
      if (uVar7 - 1 == lVar8) break;
      lVar8 = lVar8 + 1;
    } while (-1 < (char)*pbVar1);
    if ((char)*pbVar1 < '\0') {
      return;
    }
  }
  puVar4 = *(unsigned long long **)(this + 0x40);
  if (puVar4 < *(unsigned long long **)(this + 0x48)) {
    puVar4[2] = *(unsigned long long *)(param_2 + 0x10);
    uVar6 = *(unsigned long long *)(param_2 + 8);
    *puVar4 = *(unsigned long long *)param_2;
    puVar4[1] = uVar6;
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    *(unsigned long long **)(this + 0x40) = puVar4 + 3;
  }
  else {
    lVar8 = *(long *)(this + 0x38);
    lVar11 = (long)puVar4 - lVar8 >> 3;
    uVar7 = lVar11 * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar7) {
                    /* WARNING: Subroutine does not return */
      // std code
    }
    lVar8 = (long)*(unsigned long long **)(this + 0x48) - lVar8 >> 3;
    uVar12 = lVar8 * 0x5555555555555556;
    if (uVar12 < uVar7) {
      uVar12 = uVar7;
    }
    if (0x555555555555554 < (unsigned long)(lVar8 * -0x5555555555555555)) {
      uVar12 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar12 == 0) {
      pvVar9 = (void *)0x0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar12) {
                    /* WARNING: Subroutine does not return */
        // std code
      }
      pvVar9 = new(uVar12 * 0x18);
    }
    pvVar10 = (void *)((long)pvVar9 + lVar11 * 8);
    pvVar2 = (void *)((long)pvVar9 + uVar12 * 0x18);
    *(unsigned long long *)((long)pvVar9 + lVar11 * 8 + 0x10) = *(unsigned long long *)(param_2 + 0x10);
    uVar6 = *(unsigned long long *)(param_2 + 8);
    puVar4 = (unsigned long long *)((long)pvVar9 + lVar11 * 8);
    *puVar4 = *(unsigned long long *)param_2;
    puVar4[1] = uVar6;
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    lVar8 = (long)pvVar9 + lVar11 * 8 + 0x18;
    pvVar5 = *(void **)(this + 0x38);
    pvVar9 = *(void **)(this + 0x40);
    if (pvVar9 == pvVar5) {
      *(void **)(this + 0x38) = pvVar10;
      *(long *)(this + 0x40) = lVar8;
      *(void **)(this + 0x48) = pvVar2;
    }
    else {
      do {
        *(unsigned long long *)((long)pvVar10 + -8) = *(unsigned long long *)((long)pvVar9 + -8);
        uVar6 = *(unsigned long long *)((long)pvVar9 + -0x10);
        *(unsigned long long *)((long)pvVar10 + -0x18) = *(unsigned long long *)((long)pvVar9 + -0x18);
        *(unsigned long long *)((long)pvVar10 + -0x10) = uVar6;
        pvVar10 = (void *)((long)pvVar10 + -0x18);
        *(unsigned long long *)((long)pvVar9 + -0x18) = 0;
        *(unsigned long long *)((long)pvVar9 + -0x10) = 0;
        *(unsigned long long *)((long)pvVar9 + -8) = 0;
        pvVar9 = (void *)((long)pvVar9 + -0x18);
      } while (pvVar5 != pvVar9);
      pvVar5 = *(void **)(this + 0x38);
      pvVar9 = *(void **)(this + 0x40);
      *(void **)(this + 0x38) = pvVar10;
      *(long *)(this + 0x40) = lVar8;
      *(void **)(this + 0x48) = pvVar2;
      while (pvVar10 = pvVar9, pvVar10 != pvVar5) {
        pvVar9 = (void *)((long)pvVar10 + -0x18);
        if ((*(byte *)((long)pvVar10 + -0x18) & 1) != 0) {
          delete(*(void **)((long)pvVar10 + -8));
        }
      }
    }
    if (pvVar5 != (void *)0x0) {
      delete(pvVar5);
      return;
    }
  }
  return;
}
}
