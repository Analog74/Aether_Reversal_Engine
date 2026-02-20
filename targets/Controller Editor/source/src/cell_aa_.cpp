#include <ni/controller_editor/cell_aa_.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace agg::rasterizer_cells_aa<agg {

void cell_aa>::line(int, int, int, int) {
int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int local_48;
  int local_34;
  
  iVar1 = param_3 - param_1;
  if (0x7ffffe < iVar1 + 0x3fffffU) {
    iVar11 = param_3 + param_1 >> 1;
    iVar7 = param_2 + param_4 >> 1;
    line(this,param_1,param_2,iVar11,iVar7);
    line(this,iVar11,iVar7,param_3,param_4);
  }
  iVar11 = param_1 >> 8;
  iVar7 = *(int *)(this + 0x60);
  if (iVar11 < *(int *)(this + 0x60)) {
    *(int *)(this + 0x60) = iVar11;
    iVar7 = iVar11;
  }
  iVar9 = param_2 >> 8;
  iVar13 = *(int *)(this + 0x68);
  if (*(int *)(this + 0x68) < iVar11) {
    *(int *)(this + 0x68) = iVar11;
    iVar13 = iVar11;
  }
  iVar4 = *(int *)(this + 100);
  if (iVar9 < *(int *)(this + 100)) {
    *(int *)(this + 100) = iVar9;
    iVar4 = iVar9;
  }
  iVar6 = param_3 >> 8;
  iVar10 = *(int *)(this + 0x6c);
  iVar2 = param_4 >> 8;
  if (iVar10 < iVar9) {
    *(int *)(this + 0x6c) = iVar9;
    iVar10 = iVar9;
  }
  if (iVar6 < iVar7) {
    *(int *)(this + 0x60) = iVar6;
  }
  if (iVar13 < iVar6) {
    *(int *)(this + 0x68) = iVar6;
  }
  if (iVar2 < iVar4) {
    *(int *)(this + 100) = iVar2;
  }
  if (iVar10 < iVar2) {
    *(int *)(this + 0x6c) = iVar2;
  }
  uVar8 = param_2 & 0xff;
  set_curr_cell(this,iVar11,iVar9);
  if (iVar9 != iVar2) {
    uVar12 = param_4 - param_2;
    if (iVar1 == 0) {
      iVar1 = (param_1 & 0xffU) * 2;
      uVar5 = ~(uVar12 >> 0x17) & 0x100;
      uVar12 = (int)uVar12 >> 0x1f | 1;
      *(uint *)(this + 0x48) = *(int *)(this + 0x48) + (uVar5 - uVar8);
      *(uint *)(this + 0x4c) = *(int *)(this + 0x4c) + (uVar5 - uVar8) * iVar1;
      set_curr_cell(this,iVar11,uVar12 + iVar9);
      if (uVar12 + iVar9 != iVar2) {
        iVar7 = uVar5 * 2 + -0x100;
        do {
          *(int *)(this + 0x48) = iVar7;
          *(int *)(this + 0x4c) = iVar7 * iVar1;
          set_curr_cell(this,iVar11,uVar12 * 2 + iVar9);
          iVar9 = iVar9 + uVar12;
        } while (iVar2 - uVar12 != iVar9);
      }
      iVar7 = uVar5 + (param_4 | 0xffffff00U);
      *(int *)(this + 0x48) = *(int *)(this + 0x48) + iVar7;
      *(int *)(this + 0x4c) = *(int *)(this + 0x4c) + iVar7 * iVar1;
      return;
    }
    if ((int)uVar12 < 0) {
      uVar12 = -uVar12;
      local_48 = -1;
      local_34 = 0;
      uVar5 = uVar8;
    }
    else {
      local_34 = 0x100;
      local_48 = 1;
      uVar5 = 0x100 - uVar8;
    }
    iVar11 = (int)(uVar5 * iVar1) % (int)uVar12;
    iVar7 = (int)(uVar5 * iVar1) / (int)uVar12 + param_1 + (iVar11 >> 0x1f);
    render_hline(this,iVar9,param_1,uVar8,iVar7,local_34);
    iVar13 = local_48 + iVar9;
    set_curr_cell(this,iVar7 >> 8,iVar13);
    if (iVar13 == iVar2) {
      uVar8 = 0x100 - local_34;
      iVar9 = iVar2;
      param_1 = iVar7;
    }
    else {
      iVar4 = (iVar1 * 0x100) % (int)uVar12;
      uVar5 = iVar4 >> 0x1f;
      uVar8 = uVar12;
      if (iVar11 < 0) {
        uVar8 = 0;
      }
      iVar11 = iVar11 - uVar8;
      uVar8 = 0x100 - local_34;
      iVar10 = iVar9 + local_48 * 2;
      do {
        uVar14 = iVar11 + (uVar5 & uVar12) + iVar4;
        uVar3 = uVar12;
        if ((int)uVar14 < 0) {
          uVar3 = 0;
        }
        iVar11 = uVar14 - uVar3;
        param_1 = (uVar5 + (iVar1 * 0x100) / (int)uVar12 + iVar7) - ((int)~uVar14 >> 0x1f);
        render_hline(this,iVar13,iVar7,uVar8,param_1,local_34);
        iVar13 = iVar13 + local_48;
        set_curr_cell(this,param_1 >> 8,iVar10);
        iVar10 = iVar10 + local_48;
        iVar9 = iVar2;
        iVar7 = param_1;
      } while (iVar2 != iVar13);
    }
  }
  render_hline(this,iVar9,param_1,uVar8,param_3,param_4 & 0xff);
  return;
}

void cell_aa>::render_hline(int, int, int, int, int) {
int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int local_40;
  
  iVar6 = param_4 >> 8;
  iVar8 = param_5 - param_3;
  if (iVar8 == 0) {
    set_curr_cell(this,iVar6,param_1);
    return;
  }
  iVar11 = param_2 >> 8;
  uVar2 = param_2 & 0xff;
  if (iVar11 == iVar6) {
    *(int *)(this + 0x48) = *(int *)(this + 0x48) + iVar8;
    *(uint *)(this + 0x4c) = *(int *)(this + 0x4c) + ((param_4 & 0xffU) + uVar2) * iVar8;
  }
  else {
    uVar9 = param_4 - param_2;
    if ((int)uVar9 < 0) {
      uVar9 = -uVar9;
      local_40 = -1;
      uVar7 = 0;
      uVar3 = uVar2;
    }
    else {
      uVar7 = 0x100;
      local_40 = 1;
      uVar3 = 0x100 - uVar2;
    }
    iVar4 = (int)(uVar3 * iVar8) % (int)uVar9;
    iVar8 = (iVar4 >> 0x1f) + (int)(uVar3 * iVar8) / (int)uVar9;
    *(int *)(this + 0x48) = *(int *)(this + 0x48) + iVar8;
    *(uint *)(this + 0x4c) = *(int *)(this + 0x4c) + (uVar2 | uVar7) * iVar8;
    set_curr_cell(this,local_40 + iVar11,param_1);
    iVar12 = param_3 + iVar8;
    if (local_40 + iVar11 != iVar6) {
      iVar5 = ((iVar8 + param_5) - iVar12) * 0x100;
      iVar8 = iVar5 % (int)uVar9;
      uVar3 = iVar8 >> 0x1f;
      uVar2 = uVar9;
      if (iVar4 < 0) {
        uVar2 = 0;
      }
      iVar4 = iVar4 - uVar2;
      do {
        uVar10 = iVar4 + (uVar3 & uVar9) + iVar8;
        iVar1 = (iVar5 / (int)uVar9 + uVar3) - ((int)~uVar10 >> 0x1f);
        uVar2 = uVar9;
        if ((int)uVar10 < 0) {
          uVar2 = 0;
        }
        *(int *)(this + 0x48) = *(int *)(this + 0x48) + iVar1;
        iVar4 = uVar10 - uVar2;
        iVar12 = iVar12 + iVar1;
        *(int *)(this + 0x4c) = *(int *)(this + 0x4c) + iVar1 * 0x100;
        set_curr_cell(this,local_40 * 2 + iVar11,param_1);
        iVar11 = iVar11 + local_40;
      } while (iVar6 - local_40 != iVar11);
    }
    *(int *)(this + 0x48) = *(int *)(this + 0x48) + (param_5 - iVar12);
    *(uint *)(this + 0x4c) =
         *(int *)(this + 0x4c) + ((param_4 & 0xffU | 0x100) - uVar7) * (param_5 - iVar12);
  }
  return;
}

void cell_aa>::set_curr_cell(int, int) {
unsigned long long uVar1;
  void *pvVar2;
  void *pvVar3;
  unsigned long long *puVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_2 == *(int *)(this + 0x44) && param_1 == *(int *)(this + 0x40)) {
    return;
  }
  if (*(int *)(this + 0x48) != 0 || *(int *)(this + 0x4c) != 0) {
    if ((*(ushort *)(this + 0xc) & 0xfff) == 0) {
      uVar6 = *(uint *)this;
      if (0x3ff < uVar6) return;
      uVar5 = *(uint *)(this + 8);
      if (uVar6 <= uVar5) {
        uVar5 = *(uint *)(this + 4);
        if (uVar5 <= uVar6) {
          uVar6 = uVar5 + 0x100;
          pvVar2 = new__((unsigned long)uVar6 * 8);
          pvVar3 = *(void **)(this + 0x10);
          if (pvVar3 != (void *)0x0) {
            memcpy(pvVar2,pvVar3,(unsigned long)uVar5 << 3);
            delete__(pvVar3);
            uVar6 = *(int *)(this + 4) + 0x100;
          }
          *(void **)(this + 0x10) = pvVar2;
          *(uint *)(this + 4) = uVar6;
        }
        pvVar3 = new__(0x10000);
        uVar6 = *(uint *)this;
        *(uint *)this = uVar6 + 1;
        *(void **)(*(long *)(this + 0x10) + (unsigned long)uVar6 * 8) = pvVar3;
        uVar5 = *(uint *)(this + 8);
      }
      *(uint *)(this + 8) = uVar5 + 1;
      puVar4 = *(unsigned long long **)(*(long *)(this + 0x10) + (unsigned long)uVar5 * 8);
      *(unsigned long long **)(this + 0x18) = puVar4;
    }
    else {
      puVar4 = *(unsigned long long **)(this + 0x18);
    }
    *(unsigned long long **)(this + 0x18) = puVar4 + 2;
    uVar1 = *(unsigned long long *)(this + 0x48);
    *puVar4 = *(unsigned long long *)(this + 0x40);
    puVar4[1] = uVar1;
    *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
  }
  *(int *)(this + 0x40) = param_1;
  *(int *)(this + 0x44) = param_2;
  *(unsigned long long *)(this + 0x48) = 0;
  return;
}

void cell_aa>::sort_cells() {
int *piVar1;
  unsigned long long uVar2;
  uint uVar3;
  void *pvVar4;
  unsigned long long *puVar5;
  void *pvVar6;
  uint uVar7;
  unsigned long uVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  int *piVar13;
  long *plVar14;
  unsigned long uVar15;
  long *plVar16;
  uint uVar17;
  uint uVar18;
  
  if (this[0x70] != (rasterizer_cells_aa<agg::cell_aa>)0x0) {
    return;
  }
  uVar18 = *(uint *)(this + 0xc);
  if (*(int *)(this + 0x48) != 0 || *(int *)(this + 0x4c) != 0) {
    if ((uVar18 & 0xfff) == 0) {
      uVar3 = *(uint *)this;
      if (0x3ff < uVar3) return;
      uVar18 = *(uint *)(this + 8);
      if (uVar3 <= uVar18) {
        uVar18 = *(uint *)(this + 4);
        if (uVar18 <= uVar3) {
          uVar3 = uVar18 + 0x100;
          pvVar4 = new__((unsigned long)uVar3 * 8);
          pvVar6 = *(void **)(this + 0x10);
          if (pvVar6 != (void *)0x0) {
            memcpy(pvVar4,pvVar6,(unsigned long)uVar18 << 3);
            delete__(pvVar6);
            uVar3 = *(int *)(this + 4) + 0x100;
          }
          *(void **)(this + 0x10) = pvVar4;
          *(uint *)(this + 4) = uVar3;
        }
        pvVar6 = new__(0x10000);
        uVar18 = *(uint *)this;
        *(uint *)this = uVar18 + 1;
        *(void **)(*(long *)(this + 0x10) + (unsigned long)uVar18 * 8) = pvVar6;
        uVar18 = *(uint *)(this + 8);
      }
      *(uint *)(this + 8) = uVar18 + 1;
      puVar5 = *(unsigned long long **)(*(long *)(this + 0x10) + (unsigned long)uVar18 * 8);
      *(unsigned long long **)(this + 0x18) = puVar5;
    }
    else {
      puVar5 = *(unsigned long long **)(this + 0x18);
    }
    *(unsigned long long **)(this + 0x18) = puVar5 + 2;
    uVar2 = *(unsigned long long *)(this + 0x48);
    *puVar5 = *(unsigned long long *)(this + 0x40);
    puVar5[1] = uVar2;
    uVar18 = *(int *)(this + 0xc) + 1;
    *(uint *)(this + 0xc) = uVar18;
  }
  *(unsigned long long *)(this + 0x40) = 0x7fffffff7fffffff;
  *(unsigned long long *)(this + 0x48) = 0;
  if (uVar18 != 0) {
    *(unsigned int *)(this + 0x20) = 0;
    if (*(uint *)(this + 0x24) < uVar18) {
      if (*(void **)(this + 0x28) != (void *)0x0) {
        delete__(*(void **)(this + 0x28));
      }
      uVar3 = uVar18 + 0x10;
      *(uint *)(this + 0x24) = uVar3;
      if (uVar3 == 0) {
        pvVar6 = (void *)0x0;
      }
      else {
        pvVar6 = new__((unsigned long)uVar3 << 3);
      }
      *(void **)(this + 0x28) = pvVar6;
    }
    *(uint *)(this + 0x20) = uVar18;
    iVar11 = *(int *)(this + 0x6c);
    iVar10 = *(int *)(this + 100);
    uVar18 = (iVar11 - iVar10) + 1;
    *(unsigned int *)(this + 0x30) = 0;
    if (*(uint *)(this + 0x34) < uVar18) {
      if (*(void **)(this + 0x38) != (void *)0x0) {
        delete__(*(void **)(this + 0x38));
      }
      uVar3 = (iVar11 - iVar10) + 0x11;
      *(uint *)(this + 0x34) = uVar3;
      if (uVar3 == 0) {
        pvVar6 = (void *)0x0;
      }
      else {
        pvVar6 = new__((unsigned long)uVar3 << 3);
      }
      *(void **)(this + 0x38) = pvVar6;
    }
    else {
      pvVar6 = *(void **)(this + 0x38);
    }
    *(uint *)(this + 0x30) = uVar18;
    ___bzero(pvVar6);
    plVar16 = *(long **)(this + 0x10);
    uVar18 = *(uint *)(this + 0xc);
    if (uVar18 != 0) {
      iVar11 = *(int *)(this + 100);
      lVar9 = *(long *)(this + 0x38);
      plVar14 = plVar16;
      uVar3 = uVar18;
      do {
        lVar12 = *plVar14;
        uVar17 = 0x1000;
        if (uVar3 < 0x1000) {
          uVar17 = uVar3;
        }
        uVar7 = uVar17;
        if ((uVar17 & 1) != 0) {
          piVar13 = (int *)(lVar9 + (unsigned long)(uint)(*(int *)(lVar12 + 4) - iVar11) * 8);
          *piVar13 = *piVar13 + 1;
          lVar12 = lVar12 + 0x10;
          uVar7 = uVar17 - 1;
        }
        if (uVar17 != 1) {
          piVar13 = (int *)(lVar12 + 0x14);
          do {
            piVar1 = (int *)(lVar9 + (unsigned long)(uint)(piVar13[-4] - iVar11) * 8);
            *piVar1 = *piVar1 + 1;
            piVar1 = (int *)(lVar9 + (unsigned long)(uint)(*piVar13 - iVar11) * 8);
            *piVar1 = *piVar1 + 1;
            piVar13 = piVar13 + 8;
            uVar7 = uVar7 - 2;
          } while (uVar7 != 0);
        }
        plVar14 = plVar14 + 1;
        uVar3 = uVar3 - uVar17;
      } while (uVar3 != 0);
    }
    uVar3 = *(uint *)(this + 0x30);
    uVar15 = (unsigned long)uVar3;
    if (uVar15 != 0) {
      lVar9 = *(long *)(this + 0x38);
      if (uVar15 - 1 < 3) {
        uVar8 = 0;
        iVar11 = 0;
      }
      else {
        uVar8 = 0;
        iVar11 = 0;
        do {
          iVar10 = *(int *)(lVar9 + uVar8 * 8) + iVar11;
          *(int *)(lVar9 + uVar8 * 8) = iVar11;
          iVar11 = *(int *)(lVar9 + 8 + uVar8 * 8) + iVar10;
          *(int *)(lVar9 + 8 + uVar8 * 8) = iVar10;
          iVar10 = *(int *)(lVar9 + 0x10 + uVar8 * 8) + iVar11;
          *(int *)(lVar9 + 0x10 + uVar8 * 8) = iVar11;
          iVar11 = *(int *)(lVar9 + 0x18 + uVar8 * 8) + iVar10;
          *(int *)(lVar9 + 0x18 + uVar8 * 8) = iVar10;
          uVar8 = uVar8 + 4;
        } while ((uVar3 & 0xfffffffc) != uVar8);
      }
      if ((unsigned long)(uVar3 & 3) != 0) {
        lVar9 = lVar9 + uVar8 * 8;
        uVar8 = 0;
        do {
          iVar10 = *(int *)(lVar9 + uVar8 * 8);
          *(int *)(lVar9 + uVar8 * 8) = iVar11;
          uVar8 = uVar8 + 1;
          iVar11 = iVar10 + iVar11;
        } while ((uVar3 & 3) != uVar8);
      }
    }
    if (uVar18 != 0) {
      iVar11 = *(int *)(this + 100);
      do {
        lVar9 = *plVar16;
        uVar17 = 0x1000;
        if (uVar18 < 0x1000) {
          uVar17 = uVar18;
        }
        uVar7 = uVar17;
        if ((uVar17 & 1) != 0) {
          uVar8 = (unsigned long)(uint)(*(int *)(lVar9 + 4) - iVar11);
          lVar12 = *(long *)(this + 0x38);
          iVar10 = *(int *)(lVar12 + 4 + uVar8 * 8);
          *(long *)(*(long *)(this + 0x28) +
                   (unsigned long)(uint)(*(int *)(lVar12 + uVar8 * 8) + iVar10) * 8) = lVar9;
          *(int *)(lVar12 + 4 + uVar8 * 8) = iVar10 + 1;
          lVar9 = lVar9 + 0x10;
          uVar7 = uVar17 - 1;
        }
        if (uVar17 != 1) {
          lVar9 = lVar9 + 0x10;
          do {
            uVar8 = (unsigned long)(uint)(*(int *)(lVar9 + -0xc) - iVar11);
            lVar12 = *(long *)(this + 0x38);
            iVar10 = *(int *)(lVar12 + 4 + uVar8 * 8);
            *(long *)(*(long *)(this + 0x28) +
                     (unsigned long)(uint)(*(int *)(lVar12 + uVar8 * 8) + iVar10) * 8) = lVar9 + -0x10;
            *(int *)(lVar12 + 4 + uVar8 * 8) = iVar10 + 1;
            uVar8 = (unsigned long)(uint)(*(int *)(lVar9 + 4) - iVar11);
            lVar12 = *(long *)(this + 0x38);
            iVar10 = *(int *)(lVar12 + 4 + uVar8 * 8);
            *(long *)(*(long *)(this + 0x28) +
                     (unsigned long)(uint)(*(int *)(lVar12 + uVar8 * 8) + iVar10) * 8) = lVar9;
            lVar9 = lVar9 + 0x20;
            *(int *)(lVar12 + 4 + uVar8 * 8) = iVar10 + 1;
            uVar7 = uVar7 - 2;
          } while (uVar7 != 0);
        }
        plVar16 = plVar16 + 1;
        uVar18 = uVar18 - uVar17;
      } while (uVar18 != 0);
    }
    if (uVar3 != 0) {
      uVar8 = 0;
      do {
        uVar18 = *(uint *)(*(long *)(this + 0x38) + 4 + uVar8 * 8);
        if (uVar18 != 0) {
          qsort_cells<agg::cell_aa>
                    ((cell_aa **)
                     ((unsigned long)*(uint *)(*(long *)(this + 0x38) + uVar8 * 8) * 8 +
                     *(long *)(this + 0x28)),uVar18);
          uVar15 = (unsigned long)*(uint *)(this + 0x30);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar15);
    }
    this[0x70] = (rasterizer_cells_aa<agg::cell_aa>)0x1;
  }
  return;
}
}
