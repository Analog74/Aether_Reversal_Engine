#include <ni/controller_editor/addSubMenu_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL::MenuBar {

void addSubMenu(std::string const&) {
unsigned long uVar1;
  long *plVar2;
  unsigned int *puVar3;
  tMenuItem *ptVar4;
  unsigned long long *puVar5;
  byte bVar6;
  void *pvVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  void *pvVar11;
  long lVar12;
  long lVar13;
  tMenuItem *ptVar14;
  void *pvVar15;
  long *in_RSI;
  long *plVar16;
  unsigned long uVar17;
  long local_68 [4];
  long *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101ab4610;
  local_48 = (long *)0x0;
  ptVar14 = (tMenuItem *)in_RSI[1];
  if (ptVar14 < (tMenuItem *)in_RSI[2]) {
    tMenuItem::tMenuItem(ptVar14,1);
    in_RSI[1] = (long)(ptVar14 + 0x70);
  }
  else {
    lVar13 = (long)ptVar14 - *in_RSI >> 4;
    uVar1 = lVar13 * 0x6db6db6db6db6db7 + 1;
    if (0x249249249249249 < uVar1) {
                    /* WARNING: Subroutine does not return */
      // std code
    }
    lVar12 = in_RSI[2] - *in_RSI >> 4;
    uVar17 = lVar12 * -0x2492492492492492;
    if (uVar17 < uVar1) {
      uVar17 = uVar1;
    }
    if (0x124924924924923 < (unsigned long)(lVar12 * 0x6db6db6db6db6db7)) {
      uVar17 = 0x249249249249249;
    }
    if (uVar17 == 0) {
      pvVar11 = (void *)0x0;
    }
    else {
      if (0x249249249249249 < uVar17) {
                    /* WARNING: Subroutine does not return */
        // std code
      }
      pvVar11 = new char[uVar17 * 0x70];
    }
    ptVar14 = (tMenuItem *)(lVar13 * 0x10 + (long)pvVar11);
    tMenuItem::tMenuItem(ptVar14,1);
    pvVar11 = (void *)((long)pvVar11 + uVar17 * 0x70);
    pvVar7 = (void *)*in_RSI;
    pvVar15 = (void *)in_RSI[1];
    if (pvVar15 == pvVar7) {
      *in_RSI = (long)ptVar14;
      in_RSI[1] = (long)(ptVar14 + 0x70);
      in_RSI[2] = (long)pvVar11;
    }
    else {
      lVar13 = 0;
      do {
        *(unsigned int *)(ptVar14 + lVar13 + -0x70) = *(unsigned int *)((long)pvVar15 + lVar13 + -0x70);
        *(unsigned long long *)(ptVar14 + lVar13 + -0x58) = *(unsigned long long *)((long)pvVar15 + lVar13 + -0x58);
        puVar3 = (unsigned int *)((long)pvVar15 + lVar13 + -0x68);
        uVar8 = puVar3[1];
        uVar9 = puVar3[2];
        uVar10 = puVar3[3];
        ptVar4 = ptVar14 + lVar13 + -0x68;
        *(unsigned int *)ptVar4 = *puVar3;
        *(unsigned int *)(ptVar4 + 4) = uVar8;
        *(unsigned int *)(ptVar4 + 8) = uVar9;
        *(unsigned int *)(ptVar4 + 0xc) = uVar10;
        puVar5 = (unsigned long long *)((long)pvVar15 + lVar13 + -0x68);
        *puVar5 = 0;
        puVar5[1] = 0;
        *(unsigned long long *)((long)pvVar15 + lVar13 + -0x58) = 0;
        lVar12 = *(long *)((long)pvVar15 + lVar13 + -0x30);
        if (lVar12 == 0) {
          *(unsigned long long *)(ptVar14 + lVar13 + -0x30) = 0;
        }
        else if ((long)pvVar15 + lVar13 + -0x50 == lVar12) {
          *(tMenuItem **)(ptVar14 + lVar13 + -0x30) = ptVar14 + lVar13 + -0x50;
          (**(code **)(**(long **)((long)pvVar15 + lVar13 + -0x30) + 0x18))();
        }
        else {
          *(long *)(ptVar14 + lVar13 + -0x30) = lVar12;
          *(unsigned long long *)((long)pvVar15 + lVar13 + -0x30) = 0;
        }
        *(unsigned long long *)(ptVar14 + lVar13 + -0x20) = *(unsigned long long *)((long)pvVar15 + lVar13 + -0x20);
        *(unsigned long long *)(ptVar14 + lVar13 + -0x18) = *(unsigned long long *)((long)pvVar15 + lVar13 + -0x18);
        puVar5 = (unsigned long long *)((long)pvVar15 + lVar13 + -0x20);
        *puVar5 = 0;
        puVar5[1] = 0;
        ptVar14[lVar13 + -0x10] = *(tMenuItem *)((long)pvVar15 + lVar13 + -0x10);
        lVar13 = lVar13 + -0x70;
      } while ((long)pvVar7 - (long)pvVar15 != lVar13);
      pvVar7 = (void *)*in_RSI;
      pvVar15 = (void *)in_RSI[1];
      *in_RSI = (long)(ptVar14 + lVar13);
      in_RSI[1] = (long)(ptVar14 + 0x70);
      in_RSI[2] = (long)pvVar11;
      for (; pvVar15 != pvVar7; pvVar15 = (void *)((long)pvVar15 + -0x70)) {
        plVar16 = *(long **)((long)pvVar15 + -0x18);
        if (plVar16 == (long *)0x0) {
          plVar16 = *(long **)((long)pvVar15 + -0x30);
          if ((long *)((long)pvVar15 + -0x50) != plVar16) return;
          (**(code **)(*plVar16 + 0x20))();
          bVar6 = *(byte *)((long)pvVar15 + -0x68);
        }
        else {
          LOCK();
          plVar2 = plVar16 + 1;
          lVar13 = *plVar2;
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (lVar13 != 0) return;
          (**(code **)(*plVar16 + 0x10))(plVar16);
          // std code
          plVar16 = *(long **)((long)pvVar15 + -0x30);
          if ((long *)((long)pvVar15 + -0x50) == plVar16) return;
          if (plVar16 != (long *)0x0) {
            (**(code **)(*plVar16 + 0x28))();
          }
          bVar6 = *(byte *)((long)pvVar15 + -0x68);
        }
        if ((bVar6 & 1) != 0) {
          delete(*(void **)((long)pvVar15 + -0x58));
        }
      }
    }
    if (pvVar7 != (void *)0x0) {
      delete(pvVar7);
    }
  }
  if (local_68 == local_48) {
    (**(code **)(*local_48 + 0x20))();
  }
  else if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x28))();
  }
  lVar13 = *(long *)(in_RSI[1] + -0x18);
  *(unsigned long long *)param_1 = *(unsigned long long *)(in_RSI[1] + -0x20);
  *(long *)(param_1 + 8) = lVar13;
  if (lVar13 != 0) {
    LOCK();
    *(long *)(lVar13 + 8) = *(long *)(lVar13 + 8) + 1;
    UNLOCK();
  }
  if (*(long *)PTR____stack_chk_guard_101ab4610 == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}
}
