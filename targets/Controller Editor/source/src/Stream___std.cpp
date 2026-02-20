#include <ni/controller_editor/Stream___std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL::StyleParser2::processStream(NI::GP {

void Stream&, std::string const&) {
long *plVar1;
  int iVar2;
  unsigned int uVar3;
  void *pvVar4;
  long lVar5;
  unsigned long long local_48;
  unsigned long long uStack_40;
  void *local_38;
  
  plVar1 = *(long **)(param_2 + 8);
  lVar5 = -1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1,0,2);
    if (*(long **)(param_2 + 8) != (long *)0x0) {
      iVar2 = (**(code **)(**(long **)(param_2 + 8) + 0x28))();
      lVar5 = (long)iVar2;
    }
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = (void *)0x0;
  // std code
  (**(code **)(**(long **)(param_2 + 8) + 0x38))(*(long **)(param_2 + 8),0,0);
  pvVar4 = local_38;
  if ((local_48 & 1) == 0) {
    pvVar4 = (void *)((long)&local_48 + 1);
  }
  (**(code **)(**(long **)(param_2 + 8) + 0x18))(*(long **)(param_2 + 8),pvVar4,lVar5);
  checkBOM((StyleParser2 *)param_1,(string *)&local_48);
  uVar3 = processBuffer((string *)param_1,(string *)&local_48);
  if ((local_48 & 1) != 0) {
    delete(local_38);
  }
  return uVar3;
}
}
