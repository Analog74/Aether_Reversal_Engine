#include <ni/controller_editor/cell_aa__agg.hpp>
namespace void agg::qsort_cells<agg {

void cell_aa>(agg::cell_aa**, unsigned int) {
long lVar1;
  cell_aa **ppcVar2;
  unsigned long uVar3;
  long lVar4;
  cell_aa **ppcVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  cell_aa **ppcVar9;
  cell_aa **ppcVar10;
  long lVar11;
  cell_aa *pcVar12;
  cell_aa **ppcVar13;
  cell_aa **ppcVar14;
  cell_aa *pcVar15;
  cell_aa *pcVar16;
  unsigned long uStack_2b8;
  void *puStack_2b0;
  unsigned long auStack_2a8 [81];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_1002272e0;
  lVar11 = 0;
  ppcVar14 = param_1 + param_2;
  do {
    while (9 < (int)((unsigned long)((long)ppcVar14 - (long)param_1) >> 3)) {
      uVar3 = (unsigned long)((long)ppcVar14 - (long)param_1) >> 1 & 0x3fffffff8;
      pcVar16 = *param_1;
      *param_1 = *(cell_aa **)((long)param_1 + uVar3);
      *(cell_aa **)((long)param_1 + uVar3) = pcVar16;
      ppcVar5 = param_1 + 1;
      ppcVar10 = ppcVar14 + -1;
      pcVar12 = ppcVar14[-1];
      pcVar16 = param_1[1];
      iVar6 = *(int *)pcVar16;
      pcVar15 = pcVar16;
      if (*(int *)pcVar12 < iVar6) {
        *ppcVar5 = pcVar12;
        *ppcVar10 = pcVar16;
        pcVar15 = *ppcVar5;
        iVar6 = *(int *)pcVar15;
        pcVar12 = pcVar16;
      }
      pcVar16 = *param_1;
      iVar7 = *(int *)pcVar16;
      if (iVar7 < iVar6) {
        *param_1 = pcVar15;
        param_1[1] = pcVar16;
        pcVar12 = *ppcVar10;
        iVar7 = *(int *)pcVar15;
        pcVar16 = pcVar15;
      }
      if (*(int *)pcVar12 < iVar7) {
        *param_1 = pcVar12;
        *ppcVar10 = pcVar16;
      }
      while( true ) {
      }
      *param_1 = pcVar12;
      *ppcVar10 = pcVar16;
      ppcVar13 = ppcVar14;
      ppcVar2 = ppcVar5;
      ppcVar9 = param_1;
      if ((long)ppcVar10 - (long)param_1 <= (long)ppcVar14 - (long)ppcVar5) {
        ppcVar13 = ppcVar10;
        ppcVar2 = param_1;
        ppcVar9 = ppcVar5;
        ppcVar10 = ppcVar14;
      }
      param_1 = ppcVar2;
      auStack_2a8[lVar11] = (unsigned long)ppcVar9;
      auStack_2a8[lVar11 + 1] = (unsigned long)ppcVar10;
      lVar11 = lVar11 + 2;
      ppcVar14 = ppcVar13;
    }
    if (param_1 + 1 < ppcVar14) {
      lVar8 = 0;
      ppcVar5 = param_1 + 1;
      ppcVar10 = param_1;
      do {
        ppcVar9 = ppcVar5;
        pcVar16 = ppcVar10[1];
        iVar7 = *(int *)pcVar16;
        iVar6 = *(int *)*ppcVar10;
        lVar4 = lVar8;
        while (iVar7 < iVar6) {
          *(unsigned long long *)((long)param_1 + lVar4 + 8) = *(unsigned long long *)((long)param_1 + lVar4);
          *(cell_aa **)((long)param_1 + lVar4) = pcVar16;
          if (lVar4 == 0) break;
          lVar1 = lVar4 + -8;
          lVar4 = lVar4 + -8;
          iVar6 = **(int **)((long)param_1 + lVar1);
        }
        ppcVar5 = ppcVar9 + 1;
        lVar8 = lVar8 + 8;
        ppcVar10 = ppcVar9;
      } while (ppcVar5 < ppcVar14);
    }
    if (lVar11 < 1) {
      if (*(long *)PTR____stack_chk_guard_1002272e0 != local_20) {
                    /* WARNING: Subroutine does not return */
        puStack_2b0 = &UNK_100044247;
        ___stack_chk_fail();
      }
      return;
    }
    param_1 = (cell_aa **)(&uStack_2b8)[lVar11];
    ppcVar14 = (cell_aa **)(&puStack_2b0)[lVar11];
    lVar11 = lVar11 + -2;
  } while( true );
}
}
