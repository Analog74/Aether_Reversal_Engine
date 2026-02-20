#include <ni/controller_editor/Selector_int__std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL::Selector {

void Selector(int, std::string) [clone .cold.1] {
long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar1 = *(long **)this;
  lVar2 = *param_2;
  lVar3 = *plVar1;
  *(unsigned long long *)(lVar3 + 8) = *(unsigned long long *)(lVar2 + 8);
  **(long **)(lVar2 + 8) = lVar3;
  *param_3 = 0;
  while (plVar1 != param_4) {
    plVar4 = (long *)plVar1[1];
    // std code
    __tree<// std code
    ::destroy((__tree<// std code
               *)(plVar1 + 5),(__tree_node *)plVar1[6]);
    delete(plVar1);
    plVar1 = plVar4;
  }
  return;
}
}
