#include <ni/controller_editor/onButtonClicked_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::IModalOverlay {

void onButtonClicked(1 param_1, std::string const&, int {
string sVar1;
  long *plVar2;
  unsigned char *puVar3;
  size_t sVar4;
  int iVar5;
  unsigned long long in_RAX;
  string *psVar6;
  unsigned long uVar7;
  unsigned int in_EDX;
  size_t sVar8;
  unsigned int in_register_00000034;
  string *psVar9;
  unsigned long long uStack_28;
  
  psVar9 = (string *)CONCAT44(in_register_00000034,param_2);
  uStack_28 = in_RAX;
  psVar6 = (string *)
           // std code
           __tree<// std code
           ::find<// std code
                                *)(param_1 + 0x3f0),psVar9);
  if ((param_1 + 0x3f8 != psVar6) && (plVar2 = *(long **)(psVar6 + 0x60), plVar2 != (long *)0x0)) {
    uStack_28 = CONCAT44(in_EDX,(unsigned int)uStack_28);
    (**(code **)(*plVar2 + 0x30))(plVar2,(long)&uStack_28 + 4);
  }
  sVar1 = *psVar9;
  sVar8 = (unsigned long)((byte)sVar1 >> 1);
  if (((byte)sVar1 & 1) != 0) {
    sVar8 = *(size_t *)(psVar9 + 8);
  }
  sVar4 = 0;
  if ((s_textDontShow & 1) == 0) {
    sVar4 = (unsigned long)(s_textDontShow >> 1);
  }
  if (sVar8 == sVar4) {
    puVar3 = 0;
    if ((s_textDontShow & 1) == 0) {
      puVar3 = &0;
    }
    if (((byte)sVar1 & 1) == 0) {
      if (sVar8 == 0) {
        return;
      }
      uVar7 = 0;
      while (psVar9[uVar7 + 1] == *(string *)(puVar3 + uVar7)) {
        uVar7 = uVar7 + 1;
        if ((byte)sVar1 >> 1 == uVar7) {
          return;
        }
      }
    }
    else {
      if (sVar8 == 0) {
        return;
      }
      iVar5 = _memcmp(*(void **)(psVar9 + 0x10),puVar3,sVar8);
      if (iVar5 == 0) {
        return;
      }
    }
  }
  if (*(long *)(param_1 + 0x4a0) != 0) {
    nod::signal_type<nod::multithread_policy,void()>::operator()
              ((signal_type<nod::multithread_policy,void()> *)(param_1 + 0x410));
  }
  return;
}
}
