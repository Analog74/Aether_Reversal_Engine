#include <ni/controller_editor/onReceiveBeatMsg_osc.hpp>
namespace NI::dawcontrol::live::LiveClient {

void onReceiveBeatMsg(osc::ReceivedMessage const&) {
unsigned long long uVar1;
  unsigned long long uVar2;
  unsigned long long local_38;
  unsigned long long local_30;
  unsigned long long local_28;
  unsigned long long local_20;
  
  uVar1 = *(unsigned long long *)(param_1 + 8);
  uVar2 = *(unsigned long long *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x10) != (int)uVar1) {
    local_38 = uVar1;
    local_30 = uVar2;
    osc::ReceivedMessageArgumentIterator::Advance((ReceivedMessageArgumentIterator *)&local_38);
    local_28 = uVar1;
    local_20 = uVar2;
    osc::ReceivedMessageArgument::AsInt32((ReceivedMessageArgument *)&local_28);
  }
  return;
}
}
