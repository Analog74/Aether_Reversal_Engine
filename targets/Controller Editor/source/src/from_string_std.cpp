#include <ni/controller_editor/from_string_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::http::http_version {

void from_string(std::string const&) {
long lVar1;
  long *plVar2;
  int iVar3;
  locale *plVar4;
  uint in_EDX;
  uint uVar5;
  uint uVar6;
  void *local_168 [2];
  void *local_158 [2];
  uint auStack_148 [2];
  long alStack_140 [5];
  byte local_118;
  void *local_108;
  void *local_f0 [19];
  locale local_58 [8];
  uint local_50 [2];
  unsigned long local_48;
  long lStack_40;
  void *local_38;
  uint local_28;
  char local_21;
  
  // std code
  lVar1 = *(long *)((long)local_168[0] + -0x18);
  plVar4 = (locale *)// std code
  // std code
  // std code
  // std code
  plVar2 = *(long **)((long)alStack_140 + lVar1);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,plVar4);
    // std code
    // std code
    // std code
  }
  // std code
  local_48 = 0;
  lStack_40 = 0;
  local_38 = (void *)0x0;
  // std code
            ((istream *)local_168,(string *)&local_48,'/');
  local_50[0] = 0;
  // std code
  local_21 = '\0';
  // std code
  local_28 = 0;
  // std code
  if ((*(uint *)((long)auStack_148 + *(long *)((long)local_168[0] + -0x18)) & 7) == 2) {
    if ((local_48 & 1) == 0) {
      if ((byte)local_48._0_1_ >> 1 == 4) return;
    }
    else if (lStack_40 == 4) {
      iVar3 = // std code
      uVar6 = 0;
      if (iVar3 == 0) {
        uVar5 = 0;
        if (local_21 == '.') {
          uVar6 = local_50[0] & 0xff;
          uVar5 = local_28 << 8;
        }
        return;
      }
    }
  }
  uVar6 = 0;
  uVar5 = 0;
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
  return uVar6 | uVar5;
}
}
