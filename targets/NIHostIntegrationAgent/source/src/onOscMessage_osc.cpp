#include <ni/controller_editor/onOscMessage_osc.hpp>
namespace NI::dawcontrol::logic::LogicModel {

void onOscMessage(osc::ReceivedMessage const&) {
char *pcVar1;
  long *plVar2;
  size_t sVar3;
  void *pvVar4;
  long lVar5;
  unsigned long uVar6;
  unsigned long long local_48;
  size_t local_40;
  void *local_38;
  
  pcVar1 = *(char **)param_1;
  sVar3 = strlen(pcVar1);
  if (0xffffffffffffffef < sVar3) {
                    /* WARNING: Subroutine does not return */
    // std code
  }
  if (sVar3 < 0x17) {
    local_48 = 0(local_48._1_7_,(char)sVar3 * '\x02');
    pvVar4 = (void *)((long)&local_48 + 1);
    if (sVar3 == 0) goto LAB_10002bc0f;
  }
  else {
    uVar6 = sVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar4 = new(uVar6);
    local_48 = uVar6 | 1;
    local_40 = sVar3;
    local_38 = pvVar4;
  }
  _memmove(pvVar4,pcVar1,sVar3);
LAB_10002bc0f:
  *(unsigned char *)((long)pvVar4 + sVar3) = 0;
  lVar5 = // std code
          __hash_table<// std code
          ::find<// std code
                               *)(this + 0x468),(string *)&local_48);
  if ((local_48 & 1) != 0) {
    delete(local_38);
  }
  if (lVar5 != 0) {
    plVar2 = *(long **)(lVar5 + 0x50);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      // std code
    }
    (**(code **)(*plVar2 + 0x30))(plVar2,param_1);
  }
  return;
}
}
