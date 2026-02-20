#include <ni/controller_editor/parseSelector_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL::Algorithm::DETAIL {

void parseSelector(1 param_1, std::string const& {
long lVar1;
  list *plVar2;
  list *plVar3;
  runtime_error *this;
  unsigned long long local_138;
  unsigned long long uStack_130;
  unsigned long long local_128;
  unsigned long long uStack_120;
  unsigned long long *local_118;
  unsigned long long local_110;
  unsigned long long uStack_108;
  unsigned long long *local_100;
  unsigned long long local_f8;
  unsigned long long uStack_f0;
  unsigned long long local_e0;
  unsigned long long uStack_d8;
  unsigned long long local_d0;
  unsigned long long *local_c8;
  unsigned long long local_c0;
  unsigned long long uStack_b8;
  unsigned long long local_a8;
  unsigned long long uStack_a0;
  unsigned long long local_98;
  AttibuteSelector local_90 [8];
  __tree_node *local_88;
  long local_78;
  list *local_70;
  long local_68;
  unsigned long long local_60;
  unsigned long long uStack_58;
  unsigned long long local_50;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned long long uStack_3c;
  char local_30;
  
  local_118 = &local_110;
  local_110 = 0;
  uStack_108 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_100 = &local_f8;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  local_c8 = &local_c0;
  local_c0 = 0;
  uStack_b8 = 0;
  StyleParser2::processStringSingleSelector((StyleParser2 *)&local_a8,(string *)&local_138);
  if (local_30 != '\0') {
    *(unsigned long long *)(param_1 + 0x10) = local_98;
    *(unsigned long long *)param_1 = local_a8;
    *(unsigned long long *)(param_1 + 8) = uStack_a0;
    AttibuteSelector::AttibuteSelector((AttibuteSelector *)(param_1 + 0x18),local_90);
    // std code
    ::list((list<NI::NWL::Selector::tParentSelector,// std code
            *)(param_1 + 0x30),(list *)&local_78);
    *(unsigned long *)(param_1 + 100) = CONCAT44(uStack_40,uStack_44);
    *(unsigned long long *)(param_1 + 0x6c) = uStack_3c;
    *(unsigned long long *)(param_1 + 0x58) = local_50;
    *(unsigned long *)(param_1 + 0x60) = CONCAT44(uStack_44,uStack_48);
    *(unsigned long long *)(param_1 + 0x48) = local_60;
    *(unsigned long long *)(param_1 + 0x50) = uStack_58;
    if (local_30 != '\0') {
      if (local_68 != 0) {
        lVar1 = *(long *)local_70;
        *(unsigned long long *)(lVar1 + 8) = *(unsigned long long *)(local_78 + 8);
        **(long **)(local_78 + 8) = lVar1;
        local_68 = 0;
        plVar3 = local_70;
        while (plVar3 != (list *)&local_78) {
          plVar2 = *(list **)(plVar3 + 8);
          // std code
          __tree<// std code
          ::destroy((__tree<// std code
                     *)(plVar3 + 0x28),*(__tree_node **)(plVar3 + 0x30));
          delete(plVar3);
          plVar3 = plVar2;
        }
      }
      // std code
      __tree<// std code
      ::destroy((__tree<// std code
                 *)local_90,local_88);
    }
    StyleParser2::~StyleParser2((StyleParser2 *)&local_138);
    return param_1;
  }
  this = (runtime_error *)___cxa_allocate_exception(0x10);
  // std code
  // std code
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(this,PTR_typeinfo_101ab4310,PTR__runtime_error_101ab40c0);
}
}
