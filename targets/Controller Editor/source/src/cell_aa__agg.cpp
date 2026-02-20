#include <ni/controller_editor/cell_aa__agg.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace void agg::qsort_cells<agg {

void cell_aa>(agg::cell_aa**, unsigned int) {
int iVar1;
  int iVar2;
  cell_aa **ppcVar3;
  unsigned long uVar4;
  cell_aa **ppcVar5;
  cell_aa **ppcVar6;
  cell_aa *pcVar7;
  long lVar8;
  cell_aa **ppcVar9;
  long lVar10;
  long lVar11;
  cell_aa **ppcVar12;
  cell_aa *pcVar13;
  cell_aa *pcVar14;
  void *apuStack_2c8 [83];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_101ab4610;
  lVar11 = 0;
  ppcVar12 = param_1 + param_2;
  do {
    while (ppcVar5 = param_1, (int)((unsigned long)((long)ppcVar12 - (long)param_1) >> 3) < 10) {
      ppcVar9 = ppcVar5 + 1;
      if (ppcVar9 < ppcVar12) {
        pcVar14 = *ppcVar5;
        pcVar13 = ppcVar5[1];
        iVar1 = *(int *)pcVar13;
        iVar2 = *(int *)pcVar14;
        ppcVar3 = ppcVar9;
        while (ppcVar5 = ppcVar9, iVar1 < iVar2) {
          *ppcVar3 = pcVar14;
          ppcVar3[-1] = pcVar13;
          if (ppcVar3 + -1 == param_1) break;
          pcVar14 = ppcVar3[-2];
          ppcVar3 = ppcVar3 + -1;
          iVar2 = *(int *)pcVar14;
        }
        return;
      }
      if (lVar11 < 1) {
        if (*(long *)PTR____stack_chk_guard_101ab4610 == local_30) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        apuStack_2c8[1] = &UNK_1004ebcf2;
        ___stack_chk_fail();
      }
      param_1 = (cell_aa **)apuStack_2c8[lVar11];
      lVar8 = lVar11 + 1;
      lVar11 = lVar11 + -2;
      ppcVar12 = (cell_aa **)apuStack_2c8[lVar8];
    }
    uVar4 = (unsigned long)((long)ppcVar12 - (long)param_1) >> 1 & 0x3fffffff8;
    pcVar14 = *param_1;
    *param_1 = *(cell_aa **)((long)param_1 + uVar4);
    *(cell_aa **)((long)param_1 + uVar4) = pcVar14;
    ppcVar5 = param_1 + 1;
    ppcVar9 = ppcVar12 + -1;
    pcVar7 = ppcVar12[-1];
    pcVar14 = param_1[1];
    iVar2 = *(int *)pcVar14;
    pcVar13 = pcVar14;
    if (*(int *)pcVar7 < iVar2) {
      *ppcVar5 = pcVar7;
      *ppcVar9 = pcVar14;
      pcVar13 = *ppcVar5;
      iVar2 = *(int *)pcVar13;
      pcVar7 = pcVar14;
    }
    pcVar14 = *param_1;
    if (*(int *)pcVar14 < iVar2) {
      *param_1 = pcVar13;
      param_1[1] = pcVar14;
      pcVar7 = *ppcVar9;
      pcVar14 = pcVar13;
      if (*(int *)pcVar7 < iVar2) {
        *param_1 = pcVar7;
        *ppcVar9 = pcVar14;
      }
    }
    else if(1 param_1, 1 param_1, 1 param_1, 1 param_1, *(int *pcVar7 < *(int *pcVar14 return;
    while( true  {
      pcVar14 = *param_1;
      iVar2 = *(int *)pcVar14;
      lVar8 = (long)ppcVar12 - (long)ppcVar5;
      do {
        pcVar13 = ppcVar5[1];
        ppcVar5 = ppcVar5 + 1;
        lVar8 = lVar8 + -8;
      } while (*(int *)pcVar13 < iVar2);
      lVar10 = (long)ppcVar9 - (long)param_1;
      do {
        pcVar7 = ppcVar9[-1];
        ppcVar9 = ppcVar9 + -1;
        lVar10 = lVar10 + -8;
      } while (iVar2 < *(int *)pcVar7);
      if (ppcVar9 < ppcVar5) break;
      *ppcVar5 = pcVar7;
      *ppcVar9 = pcVar13;
    }
    *param_1 = pcVar7;
    *ppcVar9 = pcVar14;
    ppcVar3 = ppcVar5;
    ppcVar6 = ppcVar12;
    if (lVar8 < lVar10) {
      ppcVar3 = param_1;
      ppcVar6 = ppcVar9;
      param_1 = ppcVar5;
      ppcVar9 = ppcVar12;
    }
    apuStack_2c8[lVar11 + 2] = (void *)ppcVar3;
    apuStack_2c8[lVar11 + 3] = (void *)ppcVar6;
    lVar11 = lVar11 + 2;
    ppcVar12 = ppcVar9;
  } while( true );
}
}
