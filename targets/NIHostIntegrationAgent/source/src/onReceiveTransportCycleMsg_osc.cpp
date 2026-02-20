#include <ni/controller_editor/onReceiveTransportCycleMsg_osc.hpp>
namespace NI::dawcontrol::logic::LogicModel {

void onReceiveTransportCycleMsg(osc::ReceivedMessage const&) {
float fVar1;
  unsigned long long local_20;
  unsigned long long local_18;
  
  local_20 = *(unsigned long long *)(param_1 + 8);
  local_18 = *(unsigned long long *)(param_1 + 0x18);
  fVar1 = (float)osc::ReceivedMessageArgument::AsFloat((ReceivedMessageArgument *)&local_20);
  this[0x40f] = (LogicModel)(fVar1 != 0.0);
  return;
}
}
