#include <ni/controller_editor/onReceiveTransportSessionRecMsg_osc.hpp>
namespace NI::dawcontrol::live::LiveClient {

void onReceiveTransportSessionRecMsg(osc::ReceivedMessage const&) {
int iVar1;
  LiveClient LVar2;
  unsigned long long local_20;
  unsigned long long local_18;
  
  local_20 = *(unsigned long long *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) == (int)local_20) {
    LVar2 = (LiveClient)0x0;
  }
  else {
    local_18 = *(unsigned long long *)(param_1 + 0x18);
    iVar1 = osc::ReceivedMessageArgument::AsInt32((ReceivedMessageArgument *)&local_20);
    LVar2 = (LiveClient)(iVar1 == 2);
  }
  this[0x8b] = LVar2;
  return;
}
}
