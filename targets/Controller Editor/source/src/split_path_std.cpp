#include <ni/controller_editor/split_path_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::uri {

void split_path(1 param_1, std::string const& {
unsigned long uVar1;
  long *plVar2;
  string *psVar3;
  unsigned long long uVar4;
  locale *plVar5;
  istream *piVar6;
  void *pvVar7;
  uint in_EDX;
  void *pvVar8;
  long lVar9;
  string *this;
  string *in_RSI;
  istream *piVar10;
  void *pvVar11;
  unsigned long uVar12;
  void *local_168 [2];
  void *local_158 [3];
  long alStack_140 [5];
  byte local_118;
  void *local_108;
  void *local_f0 [19];
  locale local_58 [8];
  locale local_50 [8];
  unsigned long local_48;
  long lStack_40;
  void *local_38;
  
  *(unsigned long long *)param_1 = 0;
  *(unsigned long long *)(param_1 + 8) = 0;
  *(unsigned long long *)(param_1 + 0x10) = 0;
  // std code
  lVar9 = *(long *)((long)local_168[0] + -0x18);
  plVar5 = (locale *)// std code
  // std code
  // std code
  // std code
  plVar2 = *(long **)((long)alStack_140 + lVar9);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,plVar5);
    // std code
    // std code
    // std code
  }
  // std code
  local_48 = 0;
  lStack_40 = 0;
  local_38 = (void *)0x0;
  do {
    piVar10 = (istream *)local_168;
    piVar6 = // std code
                       (piVar10,(string *)&local_48,'/');
    if (((byte)piVar6[*(long *)(*(long *)piVar6 + -0x18) + 0x20] & 5) != 0) {
      if ((local_48 & 1) != 0) {
        delete(local_38);
      }
      local_168[0] = (char*)PTR_vtable_101ab45b8 + 0x18;
      local_f0[0] = (char*)PTR_vtable_101ab45b8 + 0x40;
      local_158[0] = (char*)PTR_vtable_101ab4590 + 0x10;
      if ((local_118 & 1) != 0) {
        delete(local_108);
      }
      // std code
      // std code
      // std code
      return param_1;
    }
    if ((local_48 & 1) == 0) return;
  } while (lStack_40 == 0);
  return;
  if ((byte)local_48._0_1_ >> 1 != 0) {
    psVar3 = *(string **)(param_1 + 8);
    if (psVar3 == *(string **)(param_1 + 0x10)) {
      lVar9 = (long)psVar3 - *(long *)param_1 >> 3;
      uVar1 = lVar9 * -0x5555555555555555 + 1;
      if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
        // std code
      }
      uVar12 = lVar9 * 0x5555555555555556;
      if ((unsigned long)(lVar9 * 0x5555555555555556) < uVar1) {
        uVar12 = uVar1;
      }
      if (0x555555555555554 < (unsigned long)(lVar9 * -0x5555555555555555)) {
        uVar12 = 0xaaaaaaaaaaaaaaa;
      }
      if (uVar12 == 0) {
        pvVar7 = (void *)0x0;
      }
      else {
        if (0xaaaaaaaaaaaaaaa < uVar12) {
                    /* WARNING: Subroutine does not return */
          // std code
        }
        pvVar7 = new char[uVar12 * 0x18];
      }
      this = (string *)(lVar9 * 8 + (long)pvVar7);
      // std code
      pvVar7 = (void *)(uVar12 * 0x18 + (long)pvVar7);
      psVar3 = this + 0x18;
      pvVar11 = *(void **)param_1;
      pvVar8 = *(void **)(param_1 + 8);
      if (pvVar8 == pvVar11) {
        *(string **)param_1 = this;
        *(string **)(param_1 + 8) = psVar3;
        *(void **)(param_1 + 0x10) = pvVar7;
      }
      else {
        do {
          *(unsigned long long *)(this + -8) = *(unsigned long long *)((long)pvVar8 + -8);
          uVar4 = *(unsigned long long *)((long)pvVar8 + -0x10);
          *(unsigned long long *)(this + -0x18) = *(unsigned long long *)((long)pvVar8 + -0x18);
          *(unsigned long long *)(this + -0x10) = uVar4;
          this = this + -0x18;
          *(unsigned long long *)((long)pvVar8 + -0x18) = 0;
          *(unsigned long long *)((long)pvVar8 + -0x10) = 0;
          *(unsigned long long *)((long)pvVar8 + -8) = 0;
          pvVar8 = (void *)((long)pvVar8 + -0x18);
        } while (pvVar11 != pvVar8);
        pvVar11 = *(void **)param_1;
        pvVar8 = *(void **)(param_1 + 8);
        *(string **)param_1 = this;
        *(string **)(param_1 + 8) = psVar3;
        *(void **)(param_1 + 0x10) = pvVar7;
        while (pvVar7 = pvVar8, pvVar7 != pvVar11) {
          pvVar8 = (void *)((long)pvVar7 + -0x18);
          if ((*(byte *)((long)pvVar7 + -0x18) & 1) != 0) {
            delete(*(void **)((long)pvVar7 + -8));
          }
        }
      }
      if (pvVar11 != (void *)0x0) {
        delete(pvVar11);
      }
    }
    else {
      // std code
      *(string **)(param_1 + 8) = psVar3 + 0x18;
    }
  }
  return;
}
}
