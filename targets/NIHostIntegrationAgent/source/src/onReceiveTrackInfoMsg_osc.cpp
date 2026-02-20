#include <ni/controller_editor/onReceiveTrackInfoMsg_osc.hpp>
namespace NI::dawcontrol::live::LiveClient {

void onReceiveTrackInfoMsg(osc::ReceivedMessage const&) {
unsigned long long uVar1;
  unsigned long long uVar2;
  bool bVar3;
  unsigned int uVar4;
  uint uVar5;
  int iVar6;
  unsigned long uVar7;
  string *this_00;
  unsigned long uVar8;
  unsigned long long local_68;
  unsigned long long uStack_60;
  unsigned long long local_58;
  unsigned long long uStack_50;
  unsigned long long local_48;
  unsigned long long uStack_40;
  unsigned long long local_38;
  
  uVar1 = *(unsigned long long *)(param_1 + 8);
  uVar2 = *(unsigned long long *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x10) == (int)uVar1) {
    return;
  }
  local_68 = uVar1;
  uStack_60 = uVar2;
  osc::ReceivedMessageArgumentIterator::Advance((ReceivedMessageArgumentIterator *)&local_68);
  local_48 = uVar1;
  uStack_40 = uVar2;
  uVar4 = osc::ReceivedMessageArgument::AsInt32((ReceivedMessageArgument *)&local_48);
  uVar2 = uStack_60;
  uVar1 = local_68;
  iVar6 = 2;
  bVar3 = false;
  switch(uVar4) {
  case 0:
    goto switchD_100012984_caseD_0;
  case 1:
    iVar6 = 1;
    break;
  case 2:
  case 5:
    bVar3 = false;
    iVar6 = 0;
    goto switchD_100012984_caseD_0;
  case 3:
    iVar6 = 4;
    bVar3 = true;
    goto switchD_100012984_caseD_0;
  case 4:
    iVar6 = 5;
    break;
  default:
    iVar6 = 6;
  }
  bVar3 = false;
switchD_100012984_caseD_0:
  osc::ReceivedMessageArgumentIterator::Advance((ReceivedMessageArgumentIterator *)&local_68);
  local_48 = uVar1;
  uStack_40 = uVar2;
  uVar5 = osc::ReceivedMessageArgument::AsInt32((ReceivedMessageArgument *)&local_48);
  if (-1 < (int)uVar5) {
    uVar8 = (unsigned long)uVar5;
    if (iVar6 != 5) {
      if (iVar6 == 4) {
        uVar7 = (*(long *)(this + 0xb0) - *(long *)(this + 0xa8) >> 5) * -0x3333333333333333;
        if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
          Tracks::setNumberOfReturnTracks((Tracks *)(this + 0x90),uVar8 + 1);
        }
        uVar8 = (*(long *)(this + 0x98) - *(long *)(this + 0x90) >> 5) * -0x3333333333333333 + uVar8
        ;
      }
      else {
        uVar7 = Tracks::size((Tracks *)(this + 0x90));
        if (uVar7 <= uVar8) {
          Tracks::setNumberOfTracks((Tracks *)(this + 0x90),uVar8 + 1);
        }
      }
    }
    this_00 = (string *)Tracks::operator[]((Tracks *)(this + 0x90),uVar8);
    *(int *)(this_00 + 0x80) = iVar6;
    local_58 = local_68;
    uStack_50 = uStack_60;
    osc::ReceivedMessageArgumentIterator::Advance((ReceivedMessageArgumentIterator *)&local_68);
    local_48 = local_58;
    uStack_40 = uStack_50;
    osc::ReceivedMessageArgument::AsString((ReceivedMessageArgument *)&local_48);
    // std code
    local_58 = local_68;
    uStack_50 = uStack_60;
    osc::ReceivedMessageArgumentIterator::Advance((ReceivedMessageArgumentIterator *)&local_68);
    local_48 = local_58;
    uStack_40 = uStack_50;
    uVar4 = osc::ReceivedMessageArgument::AsInt32((ReceivedMessageArgument *)&local_48);
    *(unsigned int *)(this_00 + 0x30) = uVar4;
    local_58 = local_68;
    uStack_50 = uStack_60;
    osc::ReceivedMessageArgumentIterator::Advance((ReceivedMessageArgumentIterator *)&local_68);
    local_48 = local_58;
    uStack_40 = uStack_50;
    iVar6 = osc::ReceivedMessageArgument::AsInt32((ReceivedMessageArgument *)&local_48);
    this_00[0x78] = (string)(0 < iVar6);
    local_58 = local_68;
    uStack_50 = uStack_60;
    osc::ReceivedMessageArgumentIterator::Advance((ReceivedMessageArgumentIterator *)&local_68);
    local_48 = local_58;
    uStack_40 = uStack_50;
    iVar6 = osc::ReceivedMessageArgument::AsInt32((ReceivedMessageArgument *)&local_48);
    this_00[0x7b] = (string)(0 < iVar6);
    local_58 = local_68;
    uStack_50 = uStack_60;
    osc::ReceivedMessageArgumentIterator::Advance((ReceivedMessageArgumentIterator *)&local_68);
    local_48 = local_58;
    uStack_40 = uStack_50;
    iVar6 = osc::ReceivedMessageArgument::AsInt32((ReceivedMessageArgument *)&local_48);
    this_00[0x79] = (string)(0 < iVar6);
    local_58 = local_68;
    uStack_50 = uStack_60;
    osc::ReceivedMessageArgumentIterator::Advance((ReceivedMessageArgumentIterator *)&local_68);
    local_48 = local_58;
    uStack_40 = uStack_50;
    uVar4 = osc::ReceivedMessageArgument::AsFloat((ReceivedMessageArgument *)&local_48);
    *(unsigned int *)(this_00 + 0x58) = uVar4;
    local_58 = local_68;
    uStack_50 = uStack_60;
    osc::ReceivedMessageArgumentIterator::Advance((ReceivedMessageArgumentIterator *)&local_68);
    local_48 = local_58;
    uStack_40 = uStack_50;
    uVar4 = osc::ReceivedMessageArgument::AsFloat((ReceivedMessageArgument *)&local_48);
    *(unsigned int *)(this_00 + 0x5c) = uVar4;
    if (bVar3) {
      // std code
    }
    else {
      // std code
      if (((byte)*this_00 & 1) != 0) {
        delete(*(void **)(this_00 + 0x10));
      }
      *(unsigned long long *)(this_00 + 0x10) = local_38;
      *(unsigned long long *)this_00 = local_48;
      *(unsigned long long *)(this_00 + 8) = uStack_40;
    }
    ::(anonymous_namespace)::processTrackName((Track *)this_00);
    *(unsigned long long *)(this_00 + 0x34) = 0;
  }
  return;
}
}
