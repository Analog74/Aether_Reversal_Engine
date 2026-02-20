#include <ni/controller_editor/onReceiveArmMsg_osc.hpp>
namespace NI::dawcontrol::live::LiveClient {

void onReceiveArmMsg(osc::ReceivedMessage const&) {
unsigned long long uVar1;
  unsigned long long uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  unsigned long uVar6;
  long lVar7;
  unsigned long long local_58;
  unsigned long long uStack_50;
  unsigned long long local_48;
  unsigned long long uStack_40;
  
  uVar1 = *(unsigned long long *)(param_1 + 8);
  uVar2 = *(unsigned long long *)(param_1 + 0x18);
  if (2 < (uint)(*(int *)(param_1 + 0x10) - (int)uVar1)) {
    local_58 = uVar1;
    uStack_50 = uVar2;
    osc::ReceivedMessageArgumentIterator::Advance((ReceivedMessageArgumentIterator *)&local_58);
    local_48 = uVar1;
    uStack_40 = uVar2;
    uVar3 = osc::ReceivedMessageArgument::AsInt32((ReceivedMessageArgument *)&local_48);
    uVar2 = uStack_50;
    uVar1 = local_58;
    osc::ReceivedMessageArgumentIterator::Advance((ReceivedMessageArgumentIterator *)&local_58);
    local_48 = uVar1;
    uStack_40 = uVar2;
    uVar4 = osc::ReceivedMessageArgument::AsInt32((ReceivedMessageArgument *)&local_48);
    uVar2 = uStack_50;
    uVar1 = local_58;
    osc::ReceivedMessageArgumentIterator::Advance((ReceivedMessageArgumentIterator *)&local_58);
    local_48 = uVar1;
    uStack_40 = uVar2;
    iVar5 = osc::ReceivedMessageArgument::AsInt32((ReceivedMessageArgument *)&local_48);
    if (((uVar3 < 6) && ((7U >> (uVar3 & 0x1f) & 1) != 0)) && (-1 < (int)uVar4)) {
      uVar6 = Tracks::size((Tracks *)(this + 0x90));
      if (uVar4 < uVar6) {
        lVar7 = Tracks::operator[]((Tracks *)(this + 0x90),(unsigned long)uVar4);
        *(bool *)(lVar7 + 0x78) = 0 < iVar5;
      }
    }
  }
  return;
}
}
