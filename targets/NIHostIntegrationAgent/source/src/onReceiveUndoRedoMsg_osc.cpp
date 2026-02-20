#include <ni/controller_editor/onReceiveUndoRedoMsg_osc.hpp>
namespace NI::dawcontrol::logic::LogicModel {

void onReceiveUndoRedoMsg(osc::ReceivedMessage const&, bool) {
void3 in_register_00000011;
  float fVar1;
  unsigned long long local_28;
  unsigned long long local_20;
  
  local_28 = *(unsigned long long *)(param_1 + 8);
  local_20 = *(unsigned long long *)(param_1 + 0x18);
  fVar1 = (float)osc::ReceivedMessageArgument::AsFloat((ReceivedMessageArgument *)&local_28);
  if (CONCAT31(in_register_00000011,param_2) == 0) {
    this[0x40a] = (LogicModel)(fVar1 != 0.0);
  }
  else {
    this[0x40b] = (LogicModel)(fVar1 != 0.0);
  }
  return;
}
}
