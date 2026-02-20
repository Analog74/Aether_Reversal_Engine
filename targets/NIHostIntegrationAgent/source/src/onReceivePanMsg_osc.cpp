#include <ni/controller_editor/onReceivePanMsg_osc.hpp>
namespace NI::dawcontrol::logic::LogicModel {

void onReceivePanMsg(osc::ReceivedMessage const&, unsigned long) {
long lVar1;
  float fVar2;
  unsigned long long local_30;
  unsigned long long local_28;
  float local_1c;
  
  local_30 = *(unsigned long long *)(param_1 + 8);
  local_28 = *(unsigned long long *)(param_1 + 0x18);
  fVar2 = (float)osc::ReceivedMessageArgument::AsFloat((ReceivedMessageArgument *)&local_30);
  local_1c = fVar2 + -0.5 + fVar2 + -0.5;
  lVar1 = Tracks::operator[]((Tracks *)(this + 0x518),param_2);
  *(float *)(lVar1 + 0x5c) = local_1c;
  return;
}
}
