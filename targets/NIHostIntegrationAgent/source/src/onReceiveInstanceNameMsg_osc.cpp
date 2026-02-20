#include <ni/controller_editor/onReceiveInstanceNameMsg_osc.hpp>
namespace NI::dawcontrol::live::LiveClient {

void onReceiveInstanceNameMsg(osc::ReceivedMessage const&) {
unsigned long long uVar1;
  unsigned long long uVar2;
  char *pcVar3;
  size_t sVar4;
  void *pvVar5;
  unsigned long uVar6;
  unsigned long long local_68;
  unsigned long long local_60;
  unsigned long long local_58;
  unsigned long long local_50;
  unsigned long long local_48;
  size_t local_40;
  void *local_38;
  
  uVar1 = *(unsigned long long *)(param_1 + 8);
  uVar2 = *(unsigned long long *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x10) == (int)uVar1) {
    return;
  }
  local_68 = uVar1;
  local_60 = uVar2;
  osc::ReceivedMessageArgumentIterator::Advance((ReceivedMessageArgumentIterator *)&local_68);
  local_58 = uVar1;
  local_50 = uVar2;
  pcVar3 = (char *)osc::ReceivedMessageArgument::AsString((ReceivedMessageArgument *)&local_58);
  sVar4 = strlen(pcVar3);
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    // std code
  }
  if (sVar4 < 0x17) {
    local_48 = 0(local_48._1_7_,(char)sVar4 * '\x02');
    pvVar5 = (void *)((long)&local_48 + 1);
    if (sVar4 == 0) goto LAB_100013298;
  }
  else {
    uVar6 = sVar4 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = new(uVar6);
    local_48 = uVar6 | 1;
    local_40 = sVar4;
    local_38 = pvVar5;
  }
  _memmove(pvVar5,pcVar3,sVar4);
LAB_100013298:
  *(unsigned char *)((long)pvVar5 + sVar4) = 0;
  updateAutoFocus(this,(string *)&local_48);
  if ((local_48 & 1) != 0) {
    delete(local_38);
  }
  return;
}
}
