#include <ni/controller_editor/prepareText_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL::TextEdit {

void prepareText(std::string&) {
long *plVar1;
  long lVar2;
  unsigned long uVar3;
  unsigned long long local_40;
  unsigned long long uStack_38;
  unsigned long long local_30;
  
  lVar2 = // std code
  if (lVar2 != -1) {
    // std code
  }
  uVar3 = 0;
  do {
    while (((byte)*param_1 & 1) == 0) {
      if ((byte)*param_1 >> 1 <= uVar3) return;
      if ((byte)param_1[uVar3 + 1] < 0x20) return;
      uVar3 = uVar3 + 1;
    }
    if (*(unsigned long *)(param_1 + 8) <= uVar3) {
      plVar1 = *(long **)(this + 0x970);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x30))(plVar1,param_1);
      }
      GP::StringUtil::fromUTF_filter<char>((StringUtil *)&local_40,param_1);
      if (((byte)*param_1 & 1) != 0) {
        delete(*(void **)(param_1 + 0x10));
      }
      *(unsigned long long *)(param_1 + 0x10) = local_30;
      *(unsigned long long *)param_1 = local_40;
      *(unsigned long long *)(param_1 + 8) = uStack_38;
      return;
    }
    if (0x1f < *(byte *)(*(long *)(param_1 + 0x10) + uVar3)) return;
    // std code
  } while( true );
}
}
