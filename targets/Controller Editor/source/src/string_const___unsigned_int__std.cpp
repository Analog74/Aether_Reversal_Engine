#include <ni/controller_editor/string_const___unsigned_int__std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL::StyleParser2::addErrorMessage(std {

void string const&, unsigned int, std::string const&) {
string sVar1;
  long *plVar2;
  unsigned long long *puVar3;
  long lVar4;
  __tree_node_base *p_Var5;
  unsigned long long *puVar6;
  unsigned long long *puVar7;
  long lVar8;
  
  void *local_70;
  string *local_68;
  unsigned long local_60;
  void *pvStack_58;
  void *local_50;
  string *local_48;
  unsigned long local_40;
  
  local_68 = param_1;
  lVar4 = // std code
          __tree<// std code
          ::
          __emplace_unique_key_args<// std code
                    ((string *)(this + 0x38),(piecewise_construct_t *)param_1,
                     (tuple *)&// std code
  local_68 = (string *)CONCAT44(local_68._4_4_,param_2);
  // std code
  p_Var5 = (__tree_node_base *)new char[0x40];
  *(uint *)(p_Var5 + 0x20) = (uint)local_68;
  *(void **)(p_Var5 + 0x38) = local_50;
  *(unsigned long *)(p_Var5 + 0x28) = local_60;
  *(void **)(p_Var5 + 0x30) = pvStack_58;
  local_60 = 0;
  pvStack_58 = (void *)0x0;
  local_50 = (void *)0x0;
  puVar3 = *(unsigned long long **)(lVar4 + 0x40);
  if (*(unsigned long long **)(lVar4 + 0x40) == (unsigned long long *)0x0) {
    puVar6 = (unsigned long long *)(lVar4 + 0x40);
    puVar7 = puVar6;
  }
  else {
    do {
      while (puVar6 = puVar3, *(uint *)(puVar6 + 4) <= (uint)local_68) {
        puVar3 = (unsigned long long *)puVar6[1];
        if ((unsigned long long *)puVar6[1] == (unsigned long long *)0x0) {
          puVar7 = puVar6 + 1;
          return;
        }
      }
      puVar3 = (unsigned long long *)*puVar6;
      puVar7 = puVar6;
    } while ((unsigned long long *)*puVar6 != (unsigned long long *)0x0);
  }
  *(unsigned long long *)p_Var5 = 0;
  *(unsigned long long *)(p_Var5 + 8) = 0;
  *(unsigned long long **)(p_Var5 + 0x10) = puVar6;
  *puVar7 = p_Var5;
  if (**(long **)(lVar4 + 0x38) != 0) {
    *(long *)(lVar4 + 0x38) = **(long **)(lVar4 + 0x38);
    p_Var5 = (__tree_node_base *)*puVar7;
  }
  // std code
            (*(__tree_node_base **)(lVar4 + 0x40),p_Var5);
  *(long *)(lVar4 + 0x48) = *(long *)(lVar4 + 0x48) + 1;
  if ((local_60 & 1) != 0) {
    delete(local_50);
  }
  if (((byte)*param_1 & 1) == 0) {
    local_68 = param_1 + 1;
    local_60 = (unsigned long)((byte)*param_1 >> 1);
    sVar1 = *param_3;
  }
  else {
    local_60 = *(unsigned long *)(param_1 + 8);
    local_68 = *(string **)(param_1 + 0x10);
    sVar1 = *param_3;
  }
  if (((byte)sVar1 & 1) == 0) {
    local_48 = param_3 + 1;
    local_40 = (unsigned long)((byte)sVar1 >> 1);
  }
  else {
    local_40 = *(unsigned long *)(param_3 + 8);
    local_48 = *(string **)(param_3 + 0x10);
  }
  pvStack_58 = (void *)(unsigned long)param_2;
  fmt::v9::vformat(local_80,"Stylesheet error: {0}:{1} - {2}",0x1f,0xd2d,&local_68);
  lVar4 = 0;
  if (StyleSheetErrorsLogSource::m_logSinks != 0) {
    lVar8 = StyleSheetErrorsLogSource::m_logSinks;
    do {
      // std code
      plVar2 = *(long **)(lVar8 + 0x20);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        // std code
      }
      (**(code **)(*plVar2 + 0x30))(plVar2,(string *)&local_68);
      if (((unsigned long)local_68 & 1) != 0) {
        delete(pvStack_58);
      }
      lVar8 = lVar8 + 0x30;
    } while (lVar4 != lVar8);
  }
  if (((byte)local_80[0] & 1) != 0) {
    delete(local_70);
  }
  return;
}
}
