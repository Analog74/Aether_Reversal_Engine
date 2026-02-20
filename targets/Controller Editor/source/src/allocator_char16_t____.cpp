#include <ni/controller_editor/allocator_char16_t____.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace std::__split_buffer<char16_t*, std {

void allocator<char16_t*> >::push_front(char16_t* const&) {
unsigned long long *puVar1;
  unsigned long long *puVar2;
  void *pvVar3;
  unsigned long long uVar4;
  unsigned long long uVar5;
  unsigned long long uVar6;
  long lVar7;
  void *pvVar8;
  unsigned long uVar9;
  unsigned long uVar10;
  void *pvVar11;
  size_t sVar12;
  unsigned long uVar13;
  void *pvVar14;
  unsigned long uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  void *pvVar19;
  void *pvVar20;
  unsigned long uVar21;
  unsigned long uVar22;
  
  pvVar3 = *(void **)(this + 8);
  pvVar20 = pvVar3;
  if (pvVar3 != *(void **)this) return;
  uVar9 = *(unsigned long *)(this + 0x10);
  uVar15 = *(unsigned long *)(this + 0x18);
  if (uVar9 < uVar15) {
    lVar7 = (long)(uVar15 - uVar9) >> 3;
    lVar7 = (lVar7 - (lVar7 + 1 >> 0x3f)) + 1 >> 1;
    pvVar20 = (void *)(uVar9 + lVar7 * 8);
    sVar12 = uVar9 - (long)pvVar3;
    if (sVar12 != 0) {
      pvVar20 = (void *)((long)pvVar20 - sVar12);
      _memmove(pvVar20,pvVar3,sVar12);
      uVar9 = *(unsigned long *)(this + 0x10);
    }
    *(void **)(this + 8) = pvVar20;
    *(unsigned long *)(this + 0x10) = uVar9 + lVar7 * 8;
    return;
  }
  uVar21 = 1;
  if (uVar15 - (long)pvVar3 != 0) {
    uVar21 = (long)(uVar15 - (long)pvVar3) >> 2;
  }
  if (uVar21 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    // std code
  }
  uVar15 = uVar21 + 3 >> 2;
  pvVar8 = new char[uVar21 * 8];
  pvVar20 = (void *)((long)pvVar8 + uVar15 * 8);
  lVar7 = uVar9 - (long)pvVar3;
  pvVar19 = pvVar20;
  if (lVar7 != 0) {
    pvVar19 = (void *)(lVar7 + (long)pvVar20);
    uVar9 = lVar7 - 8;
    pvVar11 = pvVar20;
    pvVar14 = pvVar3;
    if ((0x17 < uVar9) &&
       (((void *)((long)pvVar3 + (uVar9 & 0xfffffffffffffff8) + 8) <=
         (void *)((long)pvVar8 + uVar15 * 8) ||
        ((void *)((long)pvVar8 + (uVar9 & 0xfffffffffffffff8) + uVar15 * 8 + 8) <= pvVar3)))) {
      uVar22 = (uVar9 >> 3) + 1;
      uVar9 = uVar22 & 0xfffffffffffffffc;
      uVar10 = (uVar9 - 4 >> 2) + 1;
      uVar13 = (unsigned long)((uint)uVar10 & 3);
      if (uVar9 - 4 < 0xc) {
        lVar16 = 0;
      }
      else {
        lVar17 = -(uVar10 & 0xfffffffffffffffc);
        lVar16 = 0;
        do {
          puVar1 = (unsigned long long *)((long)pvVar3 + lVar16 * 8);
          uVar4 = puVar1[1];
          puVar2 = (unsigned long long *)((long)pvVar3 + lVar16 * 8 + 0x10);
          uVar5 = *puVar2;
          uVar6 = puVar2[1];
          puVar2 = (unsigned long long *)((long)pvVar8 + lVar16 * 8 + uVar15 * 8);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          puVar1 = (unsigned long long *)((long)pvVar8 + lVar16 * 8 + uVar15 * 8 + 0x10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          puVar1 = (unsigned long long *)((long)pvVar3 + lVar16 * 8 + 0x20);
          uVar4 = puVar1[1];
          puVar2 = (unsigned long long *)((long)pvVar3 + lVar16 * 8 + 0x30);
          uVar5 = *puVar2;
          uVar6 = puVar2[1];
          puVar2 = (unsigned long long *)((long)pvVar8 + lVar16 * 8 + uVar15 * 8 + 0x20);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          puVar1 = (unsigned long long *)((long)pvVar8 + lVar16 * 8 + uVar15 * 8 + 0x30);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          puVar1 = (unsigned long long *)((long)pvVar3 + lVar16 * 8 + 0x40);
          uVar4 = puVar1[1];
          puVar2 = (unsigned long long *)((long)pvVar3 + lVar16 * 8 + 0x50);
          uVar5 = *puVar2;
          uVar6 = puVar2[1];
          puVar2 = (unsigned long long *)((long)pvVar8 + lVar16 * 8 + uVar15 * 8 + 0x40);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          puVar1 = (unsigned long long *)((long)pvVar8 + lVar16 * 8 + uVar15 * 8 + 0x50);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          puVar1 = (unsigned long long *)((long)pvVar3 + lVar16 * 8 + 0x60);
          uVar4 = puVar1[1];
          puVar2 = (unsigned long long *)((long)pvVar3 + lVar16 * 8 + 0x70);
          uVar5 = *puVar2;
          uVar6 = puVar2[1];
          puVar2 = (unsigned long long *)((long)pvVar8 + lVar16 * 8 + uVar15 * 8 + 0x60);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          puVar1 = (unsigned long long *)((long)pvVar8 + lVar16 * 8 + uVar15 * 8 + 0x70);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          lVar16 = lVar16 + 0x10;
          lVar17 = lVar17 + 4;
        } while (lVar17 != 0);
      }
      if (uVar13 != 0) {
        lVar17 = uVar15 * 8 + lVar16 * 8;
        lVar18 = 0;
        do {
          puVar2 = (unsigned long long *)((long)pvVar3 + lVar18 + lVar16 * 8);
          uVar4 = puVar2[1];
          puVar1 = (unsigned long long *)((long)pvVar3 + lVar18 + lVar16 * 8 + 0x10);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (unsigned long long *)((long)pvVar8 + lVar18 + lVar17);
          *puVar1 = *puVar2;
          puVar1[1] = uVar4;
          puVar1 = (unsigned long long *)((long)pvVar8 + lVar18 + lVar17 + 0x10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          lVar18 = lVar18 + 0x20;
        } while (uVar13 << 5 != lVar18);
      }
      if (uVar22 == uVar9) return;
      pvVar11 = (void *)(uVar9 * 8 + (long)pvVar20);
      pvVar14 = (void *)((long)pvVar3 + uVar9 * 8);
    }
    lVar17 = 0;
    do {
      *(unsigned long long *)((long)pvVar11 + lVar17) = *(unsigned long long *)((long)pvVar14 + lVar17);
      lVar17 = lVar17 + 8;
    } while ((long)pvVar8 + ((uVar15 * 8 + (lVar7 >> 3) * 8) - (long)pvVar11) != lVar17);
  }
  *(void **)this = pvVar8;
  *(void **)(this + 8) = pvVar20;
  *(void **)(this + 0x10) = pvVar19;
  *(void **)(this + 0x18) = (void *)((long)pvVar8 + uVar21 * 8);
  if (pvVar3 != (void *)0x0) {
    delete(pvVar3);
    pvVar20 = *(void **)(this + 8);
  }
  *(wchar16 **)((long)pvVar20 + -8) = *param_1;
  *(long *)(this + 8) = *(long *)(this + 8) + -8;
  return;
}
}
