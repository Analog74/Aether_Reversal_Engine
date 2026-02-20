#include <ni/controller_editor/makeRootValue_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace ni::uret {

void makeRootValue(std::string) {
__tree_node *p_Var1;
  __tree_node *p_Var2;
  unsigned long long uVar3;
  long lVar4;
  __tree<// std code
  *p_Var5;
  __tree_node *p_Var6;
  unsigned char *local_80;
  __tree_node *local_78;
  __tree_node *local_70;
  unsigned long long uStack_68;
  __tree_node **local_58;
  __tree_node *local_50;
  unsigned long long uStack_48;
  unsigned long long local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101ab4610;
  local_70 = (__tree_node *)0x0;
  uStack_68 = 0;
  local_58 = (__tree_node **)&Event::eventKey;
  local_78 = (__tree_node *)&local_70;
  lVar4 = // std code
          __tree<// std code
          ::
          __emplace_unique_key_args<// std code
                    ((string *)&local_78,(piecewise_construct_t *)&Event::eventKey,
                     (tuple *)&// std code
  if (((int)*(uint *)(lVar4 + 0x38) >> 0x1f ^ *(uint *)(lVar4 + 0x38)) == 4) {
    if ((*(byte *)(lVar4 + 0x40) & 1) != 0) {
      delete(*(void **)(lVar4 + 0x50));
    }
    *(unsigned long long *)(lVar4 + 0x50) = param_2[2];
    uVar3 = param_2[1];
    *(unsigned long long *)(lVar4 + 0x40) = *param_2;
    *(unsigned long long *)(lVar4 + 0x48) = uVar3;
    *(void2 *)param_2 = 0;
  }
  else {
    local_40 = param_2[2];
    local_50 = (__tree_node *)*param_2;
    uStack_48 = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    local_58 = (__tree_node **)CONCAT44(local_58._4_4_,4);
    // boost code
    variant<// boost code
    ::variant_assign((variant<// boost code
                      *)(lVar4 + 0x38),(variant *)&local_58);
    // boost code
    variant<// boost code
    ::destroy_content((variant<// boost code
                       *)&local_58);
  }
  local_58 = &local_50;
  local_50 = (__tree_node *)0x0;
  uStack_48 = 0;
  local_80 = &Event::propertyKey;
  lVar4 = // std code
          __tree<// std code
          ::
          __emplace_unique_key_args<// std code
                    ((string *)&local_78,(piecewise_construct_t *)&Event::propertyKey,
                     (tuple *)&// std code
  // boost code
  variant<// boost code
  ::
  move_assign<// std code
            ((variant<// boost code
              *)(lVar4 + 0x38),(map *)&local_58);
  // std code
  __tree<// std code
  ::destroy((__tree<// std code
             *)&local_58,local_50);
  p_Var5 = (__tree<// std code
            *)new char[0x18];
  *(unsigned long long *)(p_Var5 + 8) = 0;
  *(unsigned long long *)(p_Var5 + 0x10) = 0;
  *(__tree<// std code
    **)p_Var5 = p_Var5 + 8;
  p_Var6 = local_78;
  while (p_Var2 = p_Var6, p_Var2 != (__tree_node *)&local_70) {
    // std code
    __tree<// std code
    ::
    __emplace_hint_unique_key_args<// std code
              (p_Var5,p_Var5 + 8,p_Var2 + 0x20);
    p_Var1 = *(__tree_node **)(p_Var2 + 8);
    if (*(__tree_node **)(p_Var2 + 8) == (__tree_node *)0x0) {
      p_Var6 = *(__tree_node **)(p_Var2 + 0x10);
      if ((__tree_node *)*(__tree_node ***)*(__tree_node **)(p_Var2 + 0x10) != p_Var2) {
        do {
          p_Var2 = *(__tree_node **)(p_Var2 + 0x10);
          p_Var6 = *(__tree_node **)(p_Var2 + 0x10);
        } while (*(__tree_node **)*(__tree_node **)(p_Var2 + 0x10) != p_Var2);
      }
    }
    else {
      do {
        p_Var6 = p_Var1;
        p_Var1 = *(__tree_node **)p_Var6;
      } while (p_Var1 != (__tree_node *)0x0);
    }
  }
  *(__tree<// std code
    **)(this + 8) = p_Var5;
  *(unsigned int *)this = 6;
  // std code
  __tree<// std code
  ::destroy((__tree<// std code
             *)&local_78,local_70);
  if (*(long *)PTR____stack_chk_guard_101ab4610 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}
}
