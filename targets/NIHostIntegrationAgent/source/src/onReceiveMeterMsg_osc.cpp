#include <ni/controller_editor/onReceiveMeterMsg_osc.hpp>
namespace NI::dawcontrol::live::LiveClient {

void onReceiveMeterMsg(osc::ReceivedMessage const&) {
unsigned long long uVar1;
  unsigned long long uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  float fVar9;
  unsigned long long local_58;
  unsigned long long uStack_50;
  unsigned long long local_48;
  unsigned long long uStack_40;
  
  uVar1 = *(unsigned long long *)(param_1 + 8);
  uVar2 = *(unsigned long long *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x10) - (int)uVar1 != 4) {
    return;
  }
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
  iVar7 = 6;
  if (uVar4 < 6) {
    iVar7 = *(int *)(&0 + (long)(int)uVar4 * 4);
  }
  osc::ReceivedMessageArgumentIterator::Advance((ReceivedMessageArgumentIterator *)&local_58);
  local_48 = uVar1;
  uStack_40 = uVar2;
  iVar5 = osc::ReceivedMessageArgument::AsInt32((ReceivedMessageArgument *)&local_48);
  uVar2 = uStack_50;
  uVar1 = local_58;
  osc::ReceivedMessageArgumentIterator::Advance((ReceivedMessageArgumentIterator *)&local_58);
  local_48 = uVar1;
  uStack_40 = uVar2;
  fVar9 = (float)osc::ReceivedMessageArgument::AsFloat((ReceivedMessageArgument *)&local_48);
  if (0.674674 <= fVar9) {
    fVar9 = ((fVar9 + -0.674674) / 0.32532603) * 0.616 + 0.384;
    if (iVar7 != 4) goto LAB_100011eb3;
LAB_100011f02:
    if ((int)uVar3 < 0) {
      return;
    }
    lVar6 = *(long *)(this + 0xa8);
    lVar8 = *(long *)(this + 0xb0);
  }
  else {
    fVar9 = (fVar9 / 0.674674) * 0.384;
    if (iVar7 == 4) goto LAB_100011f02;
LAB_100011eb3:
    if (iVar7 == 5) {
      if (*(long *)(this + 0xc0) == *(long *)(this + 200)) {
        return;
      }
      lVar6 = *(long *)(this + 0xc0) + (long)iVar5 * 4;
      goto LAB_100011f59;
    }
    if ((int)uVar3 < 0) {
      return;
    }
    lVar6 = *(long *)(this + 0x90);
    lVar8 = *(long *)(this + 0x98);
  }
  iVar7 = (int)((unsigned long)(lVar8 - lVar6) >> 5);
  if (SBORROW4(uVar3,iVar7 * -0x33333333) == (int)(uVar3 + iVar7 * 0x33333333) < 0) {
    return;
  }
  lVar6 = lVar6 + (unsigned long)uVar3 * 0xa0 + (long)iVar5 * 4;
LAB_100011f59:
  *(float *)(lVar6 + 0x34) = fVar9;
  return;
}
}
