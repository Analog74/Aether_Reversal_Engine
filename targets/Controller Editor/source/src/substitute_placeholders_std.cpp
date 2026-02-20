#include <ni/controller_editor/substitute_placeholders_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::program_options::ambiguous_option {

void substitute_placeholders(std::string const&) const {
long lVar1;
  bool bVar2;
  void *pvVar3;
  unsigned long *puVar4;
  long lVar5;
  void *pvVar6;
  unsigned long uVar7;
  __tree_node **local_a8;
  __tree_node *local_a0;
  unsigned long long uStack_98;
  
  void *local_80;
  byte local_78 [16];
  void *local_68;
  void *local_60;
  void *local_58;
  unsigned long long local_48;
  unsigned long uStack_40;
  void *local_38;
  
  if ((*(int *)(this + 0x10) != 8) && (*(int *)(this + 0x10) != 4)) {
    // std code
    lVar5 = *(long *)(this + 0x78);
    lVar1 = *(long *)(this + 0x80);
    local_a0 = (__tree_node *)0x0;
    uStack_98 = 0;
    local_a8 = &local_a0;
    if (lVar5 != lVar1) {
      do {
        // std code
        __emplace_hint_unique_key_args<// std code
                  ((__tree<// std code
                   &local_a8,&local_a0,lVar5,lVar5);
        lVar5 = lVar5 + 0x18;
      } while (lVar1 != lVar5);
    }
    // std code
    vector<// std code
              ((vector<// std code
    // std code
    if (1 < (unsigned long)(((long)local_58 - (long)local_60 >> 3) * -0x5555555555555555)) {
      if ((long)local_58 - (long)local_60 != 0x18) {
        uVar7 = 1;
        do {
          // std code
          puVar4 = (unsigned long *)// std code
          local_38 = (void *)puVar4[2];
          local_48 = *puVar4;
          uStack_40 = puVar4[1];
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
          pvVar6 = local_38;
          if ((local_48 & 1) == 0) {
            pvVar6 = (void *)((long)&local_48 + 1);
          }
          // std code
          if ((local_48 & 1) != 0) {
            delete(local_38);
          }
          if ((local_78[0] & 1) != 0) {
            delete(local_68);
          }
          bVar2 = uVar7 < ((long)local_58 - (long)local_60 >> 3) * -0x5555555555555555 - 1U;
          uVar7 = (unsigned long)((int)uVar7 + 1);
        } while (bVar2);
      }
      // std code
    }
    if ((1 < (unsigned long)((*(long *)(this + 0x80) - *(long *)(this + 0x78) >> 3) * -0x5555555555555555))
       && ((long)local_58 - (long)local_60 == 0x18)) {
      // std code
    }
    // std code
    puVar4 = (unsigned long *)// std code
    local_38 = (void *)puVar4[2];
    local_48 = *puVar4;
    uStack_40 = puVar4[1];
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    pvVar6 = local_38;
    if ((local_48 & 1) == 0) {
      pvVar6 = (void *)((long)&local_48 + 1);
    }
    // std code
    if ((local_48 & 1) != 0) {
      delete(local_38);
    }
    if ((local_78[0] & 1) != 0) {
      delete(local_68);
    }
    error_with_option_name::substitute_placeholders((string *)this);
    pvVar6 = local_60;
    if (local_60 != (void *)0x0) {
      while (pvVar3 = local_58, pvVar3 != pvVar6) {
        local_58 = (void *)((long)pvVar3 + -0x18);
        if ((*(byte *)((long)pvVar3 + -0x18) & 1) != 0) {
          delete(*(void **)((long)pvVar3 + -8));
        }
      }
      local_58 = pvVar6;
      delete(local_60);
    }
    // std code
              ((__tree<// std code
               local_a0);
    if (((byte)local_90[0] & 1) != 0) {
      delete(local_80);
    }
    return;
  }
  error_with_option_name::substitute_placeholders((string *)this);
  return;
}
}
