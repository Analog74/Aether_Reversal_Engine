#include <ni/controller_editor/onReceiveSceneSelectMsg_osc.hpp>
namespace NI::dawcontrol::live::LiveClient {

void onReceiveSceneSelectMsg(osc::ReceivedMessage const&) {
Tracks *this_00;
  unsigned long long uVar1;
  unsigned long long uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  unsigned long uVar6;
  unsigned long long local_40;
  unsigned long long local_38;
  unsigned long long local_30;
  unsigned long long local_28;
  
  uVar1 = *(unsigned long long *)(param_1 + 8);
  uVar2 = *(unsigned long long *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x10) != (int)uVar1) {
    local_40 = uVar1;
    local_38 = uVar2;
    osc::ReceivedMessageArgumentIterator::Advance((ReceivedMessageArgumentIterator *)&local_40);
    local_30 = uVar1;
    local_28 = uVar2;
    uVar4 = osc::ReceivedMessageArgument::AsInt32((ReceivedMessageArgument *)&local_30);
    this_00 = (Tracks *)(this + 0x90);
    iVar5 = Tracks::maxNumberOfScenes(this_00);
    if ((-1 < (int)uVar4) && ((int)uVar4 < iVar5)) {
      *(unsigned long *)(this + 0xe0) = (unsigned long)uVar4;
      lVar3 = *(long *)(this + 0xd8);
      uVar6 = Tracks::size(this_00);
      this[0x80] = (LiveClient)(lVar3 + 1U < uVar6);
      this[0x81] = (LiveClient)(*(long *)(this + 0xd8) != 0);
      lVar3 = *(long *)(this + 0xe0);
      uVar6 = Tracks::maxNumberOfScenes(this_00);
      this[0x82] = (LiveClient)(lVar3 + 1U < uVar6);
      this[0x83] = (LiveClient)(*(long *)(this + 0xe0) != 0);
    }
  }
  return;
}
}
