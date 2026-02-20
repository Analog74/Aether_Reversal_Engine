#include <ni/controller_editor/cell_aa_.hpp>
namespace agg::rasterizer_cells_aa<agg {

void cell_aa>::line(int, int, int, int) {
unsigned long long uVar1;
  int iVar2;
  uint uVar3;
  unsigned long uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  unsigned long uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint local_48;
  uint local_38;
  
  iVar2 = param_3 - param_1;
  if (0x7ffffe < iVar2 + 0x3fffffU) {
    iVar12 = param_3 + param_1 >> 1;
    iVar5 = param_4 + param_2 >> 1;
    line(this,param_1,param_2,iVar12,iVar5);
    line(this,iVar12,iVar5,param_3,param_4);
  }
  uVar7 = param_1 >> 8;
  uVar11 = *(unsigned long *)(this + 0x60);
  iVar5 = (int)(uVar11 >> 0x20);
  if ((int)uVar7 < (int)uVar11) {
    *(uint *)(this + 0x60) = uVar7;
    uVar11 = (unsigned long)uVar7;
  }
  iVar6 = param_2 >> 8;
  uVar4 = *(unsigned long *)(this + 0x68);
  iVar12 = (int)(uVar4 >> 0x20);
  if ((int)uVar4 < (int)uVar7) {
    *(uint *)(this + 0x68) = uVar7;
    uVar4 = (unsigned long)uVar7;
  }
  if (iVar6 < iVar5) {
    *(int *)(this + 100) = iVar6;
    iVar5 = iVar6;
  }
  iVar10 = param_3 >> 8;
  if (iVar12 < iVar6) {
    *(int *)(this + 0x6c) = iVar6;
    iVar12 = iVar6;
  }
  if (iVar10 < (int)uVar11) {
    *(int *)(this + 0x60) = iVar10;
  }
  iVar13 = param_4 >> 8;
  if ((int)uVar4 < iVar10) {
    *(int *)(this + 0x68) = iVar10;
  }
  if (iVar13 < iVar5) {
    *(int *)(this + 100) = iVar13;
  }
  if (iVar12 < iVar13) {
    *(int *)(this + 0x6c) = iVar13;
  }
  local_48 = param_2 & 0xff;
  set_curr_cell(this,uVar7,iVar6);
  if (iVar6 != iVar13) {
    uVar3 = param_4 - param_2;
    uVar8 = (int)uVar3 >> 0x1f;
    if (iVar2 == 0) {
      iVar2 = (param_1 + uVar7 * -0x100) * 2;
      uVar3 = uVar8 + 0x100 & 0xffffff00;
      uVar8 = uVar8 | 1;
      uVar1 = *(unsigned long long *)(this + 0x48);
      *(uint *)(this + 0x48) = (int)uVar1 + (uVar3 - local_48);
      *(uint *)(this + 0x4c) = (int)((unsigned long)uVar1 >> 0x20) + (uVar3 - local_48) * iVar2;
      set_curr_cell(this,uVar7,uVar8 + iVar6);
      if (uVar8 + iVar6 != iVar13) {
        iVar5 = uVar3 * 2 + -0x100;
        do {
          *(int *)(this + 0x48) = iVar5;
          *(int *)(this + 0x4c) = iVar5 * iVar2;
          set_curr_cell(this,uVar7,uVar8 * 2 + iVar6);
          iVar6 = iVar6 + uVar8;
        } while (iVar13 - uVar8 != iVar6);
      }
      iVar5 = uVar3 + (param_4 | 0xffffff00U);
      uVar1 = *(unsigned long long *)(this + 0x48);
      *(int *)(this + 0x48) = (int)uVar1 + iVar5;
      *(int *)(this + 0x4c) = (int)((unsigned long)uVar1 >> 0x20) + iVar5 * iVar2;
      return;
    }
    uVar7 = -uVar3;
    if (0 < (int)uVar3) {
      uVar7 = uVar3;
    }
    uVar15 = 0x100 - local_48;
    if ((int)uVar3 < 0) {
      uVar15 = local_48;
    }
    uVar16 = uVar8 | 1;
    iVar12 = (int)(uVar15 * iVar2) % (int)uVar7;
    uVar3 = iVar12 >> 0x1f;
    iVar5 = (int)(uVar15 * iVar2) / (int)uVar7 + param_1 + uVar3;
    local_38 = uVar8 + 0x100 & 0xffffff00;
    render_hline(this,iVar6,param_1,local_48,iVar5,uVar8 + 0x100 & 0xffffff00);
    set_curr_cell(this,iVar5 >> 8,uVar16 + iVar6);
    if (uVar16 + iVar6 == iVar13) {
      local_48 = 0x100 - local_38;
      iVar6 = iVar13;
      param_1 = iVar5;
    }
    else {
      iVar10 = (iVar2 * 0x100) % (int)uVar7;
      uVar8 = iVar10 >> 0x1f;
      iVar14 = (iVar12 - uVar7) + (uVar3 & uVar7);
      local_48 = 0x100 - local_38;
      iVar12 = iVar6;
      do {
        iVar9 = uVar16 + iVar12;
        uVar15 = iVar14 + (uVar8 & uVar7) + iVar10;
        uVar3 = 0;
        if (-1 < (int)uVar15) {
          uVar3 = uVar7;
        }
        iVar14 = uVar15 - uVar3;
        param_1 = uVar8 + (iVar2 * 0x100) / (int)uVar7 + iVar5 + (uVar15 >> 0x1f ^ 1);
        render_hline(this,iVar9,iVar5,local_48,param_1,local_38);
        set_curr_cell(this,param_1 >> 8,iVar12 + uVar16 * 2);
        iVar6 = iVar13;
        iVar5 = param_1;
        iVar12 = iVar9;
      } while ((uVar16 - iVar13) + iVar9 != 0);
    }
  }
  render_hline(this,iVar6,param_1,local_48,param_3,param_4 & 0xff);
  return;
}

void cell_aa>::render_hline(int, int, int, int, int) {
unsigned long long uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  iVar3 = param_4 >> 8;
  iVar6 = param_5 - param_3;
  if (iVar6 == 0) {
    set_curr_cell(this,iVar3,param_1);
    return;
  }
  iVar14 = param_2 >> 8;
  uVar7 = param_2 & 0xff;
  if (iVar14 == iVar3) {
    uVar1 = *(unsigned long long *)(this + 0x48);
    *(int *)(this + 0x48) = (int)uVar1 + iVar6;
    iVar3 = (int)((unsigned long)uVar1 >> 0x20) + ((param_4 & 0xffU) + uVar7) * iVar6;
  }
  else {
    uVar8 = param_4 - param_2;
    uVar4 = 0x100 - uVar7;
    if ((int)uVar8 < 0) {
      uVar4 = param_2 & 0xff;
    }
    uVar2 = -uVar8;
    if (0 < (int)uVar8) {
      uVar2 = uVar8;
    }
    uVar10 = ((int)uVar8 >> 0x1f) + 0x100U & 0xffffff00;
    uVar9 = (int)uVar8 >> 0x1f | 1;
    iVar11 = (int)(uVar4 * iVar6) % (int)uVar2;
    uVar8 = iVar11 >> 0x1f;
    iVar12 = (int)(uVar4 * iVar6) / (int)uVar2 + uVar8;
    uVar1 = *(unsigned long long *)(this + 0x48);
    *(int *)(this + 0x48) = (int)uVar1 + iVar12;
    *(uint *)(this + 0x4c) = (int)((unsigned long)uVar1 >> 0x20) + (uVar7 | uVar10) * iVar12;
    set_curr_cell(this,uVar9 + iVar14,param_1);
    iVar6 = param_3 + iVar12;
    if (uVar9 + iVar14 != iVar3) {
      iVar13 = ((iVar12 + param_5) - iVar6) * 0x100;
      iVar12 = iVar13 % (int)uVar2;
      uVar7 = iVar12 >> 0x1f;
      iVar11 = (iVar11 - uVar2) + (uVar8 & uVar2);
      do {
        uVar8 = iVar11 + (uVar7 & uVar2) + iVar12;
        iVar5 = (uVar8 >> 0x1f ^ 1) + iVar13 / (int)uVar2 + uVar7;
        uVar4 = 0;
        if (-1 < (int)uVar8) {
          uVar4 = uVar2;
        }
        iVar11 = uVar8 - uVar4;
        uVar1 = *(unsigned long long *)(this + 0x48);
        *(int *)(this + 0x48) = (int)uVar1 + iVar5;
        iVar6 = iVar6 + iVar5;
        *(int *)(this + 0x4c) = (int)((unsigned long)uVar1 >> 0x20) + iVar5 * 0x100;
        set_curr_cell(this,uVar9 * 2 + iVar14,param_1);
        iVar14 = iVar14 + uVar9;
      } while (iVar3 - uVar9 != iVar14);
    }
    uVar1 = *(unsigned long long *)(this + 0x48);
    *(int *)(this + 0x48) = (int)uVar1 + (param_5 - iVar6);
    iVar3 = (int)((unsigned long)uVar1 >> 0x20) + ((param_4 & 0xffU | 0x100) - uVar10) * (param_5 - iVar6);
  }
  *(int *)(this + 0x4c) = iVar3;
  return;
}

void cell_aa>::set_curr_cell(int, int) {
unsigned long long uVar1;
  void *pvVar2;
  void *pvVar3;
  unsigned long long *puVar4;
  uint uVar5;
  unsigned long uVar6;
  unsigned long uVar7;
  
  if (param_2 == *(int *)(this + 0x44) && param_1 == *(int *)(this + 0x40)) {
    return;
  }
  if (*(int *)(this + 0x48) != 0 || *(int *)(this + 0x4c) != 0) {
    if ((*(ushort *)(this + 0xc) & 0xfff) == 0) {
      if (0x3ff < *(uint *)this) goto LAB_100043565;
      uVar5 = *(uint *)(this + 8);
      uVar6 = *(unsigned long *)this;
      if ((uint)uVar6 <= uVar5) {
        uVar7 = uVar6 >> 0x20;
        if ((uint)uVar6 < (uint)(uVar6 >> 0x20)) {
          pvVar2 = *(void **)(this + 0x10);
        }
        else {
          pvVar2 = new__(uVar7 * 8 + 0x800 & 0x7fffffff8);
          pvVar3 = *(void **)(this + 0x10);
          if (pvVar3 != (void *)0x0) {
            memcpy(pvVar2,pvVar3,uVar7 << 3);
            delete__(pvVar3);
            uVar6 = (unsigned long)*(uint *)this;
            uVar7 = (unsigned long)*(uint *)(this + 4);
            uVar5 = *(uint *)(this + 8);
          }
          *(void **)(this + 0x10) = pvVar2;
          *(int *)(this + 4) = (int)uVar7 + 0x100;
        }
        pvVar3 = new__(0x10000);
        *(int *)this = (int)uVar6 + 1;
        *(void **)((long)pvVar2 + (uVar6 & 0xffffffff) * 8) = pvVar3;
      }
      *(uint *)(this + 8) = uVar5 + 1;
      puVar4 = *(unsigned long long **)(*(long *)(this + 0x10) + (unsigned long)uVar5 * 8);
      *(unsigned long long **)(this + 0x18) = puVar4;
    }
    else {
      puVar4 = *(unsigned long long **)(this + 0x18);
    }
    *(unsigned long long **)(this + 0x18) = puVar4 + 2;
    uVar1 = *(unsigned long long *)(this + 0x40);
    puVar4[1] = *(unsigned long long *)(this + 0x48);
    *puVar4 = uVar1;
    *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
  }
LAB_100043565:
  *(int *)(this + 0x40) = param_1;
  *(int *)(this + 0x44) = param_2;
  *(unsigned int *)(this + 0x48) = 0;
  *(unsigned int *)(this + 0x4c) = 0;
  return;
}

void cell_aa>::sort_cells() {
int *piVar1;
  unsigned long long uVar2;
  long lVar3;
  uint uVar4;
  void *pvVar5;
  unsigned long long *puVar6;
  void *pvVar7;
  long lVar8;
  int *piVar9;
  unsigned long uVar10;
  unsigned long uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  long *plVar16;
  uint uVar17;
  long *plVar18;
  
  if (this[0x70] != (rasterizer_cells_aa<agg::cell_aa>)0x0) {
    return;
  }
  uVar17 = *(uint *)(this + 0xc);
  if (*(int *)(this + 0x48) != 0 || *(int *)(this + 0x4c) != 0) {
    if ((uVar17 & 0xfff) == 0) {
      if (0x3ff < *(uint *)this) goto LAB_100043d39;
      uVar17 = *(uint *)(this + 8);
      uVar11 = *(unsigned long *)this;
      if ((uint)uVar11 <= uVar17) {
        uVar10 = uVar11 >> 0x20;
        if ((uint)uVar11 < (uint)(uVar11 >> 0x20)) {
          pvVar7 = *(void **)(this + 0x10);
        }
        else {
          pvVar7 = new__(uVar10 * 8 + 0x800 & 0x7fffffff8);
          pvVar5 = *(void **)(this + 0x10);
          if (pvVar5 != (void *)0x0) {
            memcpy(pvVar7,pvVar5,uVar10 << 3);
            delete__(pvVar5);
            uVar11 = (unsigned long)*(uint *)this;
            uVar10 = (unsigned long)*(uint *)(this + 4);
            uVar17 = *(uint *)(this + 8);
          }
          *(void **)(this + 0x10) = pvVar7;
          *(int *)(this + 4) = (int)uVar10 + 0x100;
        }
        pvVar5 = new__(0x10000);
        *(int *)this = (int)uVar11 + 1;
        *(void **)((long)pvVar7 + (uVar11 & 0xffffffff) * 8) = pvVar5;
      }
      *(uint *)(this + 8) = uVar17 + 1;
      puVar6 = *(unsigned long long **)(*(long *)(this + 0x10) + (unsigned long)uVar17 * 8);
      *(unsigned long long **)(this + 0x18) = puVar6;
    }
    else {
      puVar6 = *(unsigned long long **)(this + 0x18);
    }
    *(unsigned long long **)(this + 0x18) = puVar6 + 2;
    uVar2 = *(unsigned long long *)(this + 0x40);
    puVar6[1] = *(unsigned long long *)(this + 0x48);
    *puVar6 = uVar2;
    uVar17 = *(int *)(this + 0xc) + 1;
    *(uint *)(this + 0xc) = uVar17;
  }
LAB_100043d39:
  *(unsigned long long *)(this + 0x40) = 0x7fffffff7fffffff;
  *(unsigned long long *)(this + 0x48) = 0;
  if (uVar17 != 0) {
    *(unsigned int *)(this + 0x20) = 0;
    if (*(uint *)(this + 0x24) < uVar17) {
      if (*(void **)(this + 0x28) != (void *)0x0) {
        delete__(*(void **)(this + 0x28));
      }
      uVar4 = uVar17 + 0x10;
      *(uint *)(this + 0x24) = uVar4;
      if (uVar4 == 0) {
        pvVar7 = (void *)0x0;
      }
      else {
        pvVar7 = new__((unsigned long)uVar4 << 3);
      }
      *(void **)(this + 0x28) = pvVar7;
    }
    *(uint *)(this + 0x20) = uVar17;
    iVar13 = *(int *)(this + 0x6c);
    iVar14 = *(int *)(this + 100);
    uVar17 = (iVar13 - iVar14) + 1;
    *(unsigned int *)(this + 0x30) = 0;
    if (*(uint *)(this + 0x34) < uVar17) {
      if (*(void **)(this + 0x38) != (void *)0x0) {
        delete__(*(void **)(this + 0x38));
      }
      uVar4 = (iVar13 - iVar14) + 0x11;
      *(uint *)(this + 0x34) = uVar4;
      if (uVar4 == 0) {
        pvVar7 = (void *)0x0;
      }
      else {
        pvVar7 = new__((unsigned long)uVar4 << 3);
      }
      *(void **)(this + 0x38) = pvVar7;
    }
    else {
      pvVar7 = *(void **)(this + 0x38);
    }
    *(uint *)(this + 0x30) = uVar17;
    ___bzero(pvVar7,(unsigned long)uVar17 << 3);
    plVar16 = *(long **)(this + 0x10);
    uVar17 = *(uint *)(this + 0xc);
    plVar18 = plVar16;
    uVar4 = uVar17;
    while (uVar4 != 0) {
      uVar12 = uVar4;
      if (0x1000 < uVar4) {
        uVar12 = 0x1000;
      }
      uVar15 = uVar4 - uVar12;
      if (uVar12 != 0) {
        lVar8 = *plVar18;
        iVar13 = *(int *)(this + 100);
        lVar3 = *(long *)(this + 0x38);
        if (0xfff < uVar4) {
          uVar4 = 0x1000;
        }
        if ((uVar4 & 3) != 0) {
          iVar14 = -(uVar4 & 3);
          do {
            uVar12 = uVar12 - 1;
            piVar9 = (int *)(lVar3 + (unsigned long)(uint)(*(int *)(lVar8 + 4) - iVar13) * 8);
            *piVar9 = *piVar9 + 1;
            lVar8 = lVar8 + 0x10;
            iVar14 = iVar14 + 1;
          } while (iVar14 != 0);
        }
        if (2 < uVar4 - 1) {
          piVar9 = (int *)(lVar8 + 0x34);
          do {
            piVar1 = (int *)(lVar3 + (unsigned long)(uint)(piVar9[-0xc] - iVar13) * 8);
            *piVar1 = *piVar1 + 1;
            piVar1 = (int *)(lVar3 + (unsigned long)(uint)(piVar9[-8] - iVar13) * 8);
            *piVar1 = *piVar1 + 1;
            piVar1 = (int *)(lVar3 + (unsigned long)(uint)(piVar9[-4] - iVar13) * 8);
            *piVar1 = *piVar1 + 1;
            piVar1 = (int *)(lVar3 + (unsigned long)(uint)(*piVar9 - iVar13) * 8);
            *piVar1 = *piVar1 + 1;
            piVar9 = piVar9 + 0x10;
            uVar12 = uVar12 - 4;
          } while (uVar12 != 0);
        }
      }
      plVar18 = plVar18 + 1;
      uVar4 = uVar15;
    }
    uVar4 = *(uint *)(this + 0x30);
    uVar11 = (unsigned long)uVar4;
    if (uVar11 != 0) {
      lVar8 = *(long *)(this + 0x38);
      uVar10 = 0;
      if ((uVar4 & 3) == 0) {
        iVar13 = 0;
      }
      else {
        iVar14 = 0;
        do {
          iVar13 = *(int *)(lVar8 + uVar10 * 8) + iVar14;
          *(int *)(lVar8 + uVar10 * 8) = iVar14;
          uVar10 = uVar10 + 1;
          iVar14 = iVar13;
        } while ((uVar11 & 3) != uVar10);
      }
      if (2 < uVar11 - 1) {
        do {
          iVar14 = *(int *)(lVar8 + uVar10 * 8) + iVar13;
          *(int *)(lVar8 + uVar10 * 8) = iVar13;
          iVar13 = *(int *)(lVar8 + 8 + uVar10 * 8) + iVar14;
          *(int *)(lVar8 + 8 + uVar10 * 8) = iVar14;
          iVar14 = *(int *)(lVar8 + 0x10 + uVar10 * 8) + iVar13;
          *(int *)(lVar8 + 0x10 + uVar10 * 8) = iVar13;
          iVar13 = *(int *)(lVar8 + 0x18 + uVar10 * 8) + iVar14;
          *(int *)(lVar8 + 0x18 + uVar10 * 8) = iVar14;
          uVar10 = uVar10 + 4;
        } while (uVar10 < uVar11);
      }
    }
    while (uVar17 != 0) {
      uVar12 = uVar17;
      if (0x1000 < uVar17) {
        uVar12 = 0x1000;
      }
      uVar15 = uVar17 - uVar12;
      if (uVar12 != 0) {
        lVar8 = *plVar16;
        iVar13 = *(int *)(this + 100);
        if (0xfff < uVar17) {
          uVar17 = 0x1000;
        }
        if ((uVar17 & 1) != 0) {
          uVar12 = uVar12 - 1;
          uVar10 = (unsigned long)(uint)(*(int *)(lVar8 + 4) - iVar13);
          lVar3 = *(long *)(this + 0x38);
          iVar14 = *(int *)(lVar3 + 4 + uVar10 * 8);
          *(long *)(*(long *)(this + 0x28) +
                   (unsigned long)(uint)(*(int *)(lVar3 + uVar10 * 8) + iVar14) * 8) = lVar8;
          *(int *)(lVar3 + 4 + uVar10 * 8) = iVar14 + 1;
          lVar8 = lVar8 + 0x10;
        }
        if (uVar17 != 1) {
          lVar8 = lVar8 + 0x10;
          do {
            uVar10 = (unsigned long)(uint)(*(int *)(lVar8 + -0xc) - iVar13);
            lVar3 = *(long *)(this + 0x38);
            iVar14 = *(int *)(lVar3 + 4 + uVar10 * 8);
            *(long *)(*(long *)(this + 0x28) +
                     (unsigned long)(uint)(*(int *)(lVar3 + uVar10 * 8) + iVar14) * 8) = lVar8 + -0x10;
            *(int *)(lVar3 + 4 + uVar10 * 8) = iVar14 + 1;
            uVar10 = (unsigned long)(uint)(*(int *)(lVar8 + 4) - iVar13);
            lVar3 = *(long *)(this + 0x38);
            iVar14 = *(int *)(lVar3 + 4 + uVar10 * 8);
            uVar12 = uVar12 - 2;
            *(long *)(*(long *)(this + 0x28) +
                     (unsigned long)(uint)(*(int *)(lVar3 + uVar10 * 8) + iVar14) * 8) = lVar8;
            lVar8 = lVar8 + 0x20;
            *(int *)(lVar3 + 4 + uVar10 * 8) = iVar14 + 1;
          } while (uVar12 != 0);
        }
      }
      plVar16 = plVar16 + 1;
      uVar17 = uVar15;
    }
    if (uVar4 != 0) {
      uVar17 = 0;
      do {
        uVar4 = *(uint *)(*(long *)(this + 0x38) + 4 + (unsigned long)uVar17 * 8);
        if (uVar4 != 0) {
          qsort_cells<agg::cell_aa>
                    ((cell_aa **)
                     (*(long *)(this + 0x28) +
                     (unsigned long)*(uint *)(*(long *)(this + 0x38) + (unsigned long)uVar17 * 8) * 8),uVar4);
          uVar11 = (unsigned long)*(uint *)(this + 0x30);
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < (uint)uVar11);
    }
    this[0x70] = (rasterizer_cells_aa<agg::cell_aa>)0x1;
  }
  return;
}
}
