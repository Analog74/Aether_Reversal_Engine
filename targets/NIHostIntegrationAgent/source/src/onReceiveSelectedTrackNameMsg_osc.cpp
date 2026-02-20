#include <ni/controller_editor/onReceiveSelectedTrackNameMsg_osc.hpp>
namespace NI::dawcontrol::logic::LogicModel {

void onReceiveSelectedTrackNameMsg(osc::ReceivedMessage const&) {
unsigned long long local_20;
  unsigned long long local_18;
  
  local_20 = *(unsigned long long *)(param_1 + 8);
  local_18 = *(unsigned long long *)(param_1 + 0x18);
  osc::ReceivedMessageArgument::AsString((ReceivedMessageArgument *)&local_20);
  // std code
  return;
}
}
