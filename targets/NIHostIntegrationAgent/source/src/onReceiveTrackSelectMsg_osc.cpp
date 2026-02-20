#include <ni/controller_editor/onReceiveTrackSelectMsg_osc.hpp>
namespace NI::dawcontrol::live::LiveClient {

void onReceiveTrackSelectMsg(osc::ReceivedMessage const&) {
Tracks *this_00;
  unsigned long long uVar1;
  long lVar2;
  uint uVar3;
  char *pcVar4;
  size_t sVar5;
  void *pvVar6;
  unsigned long uVar7;
  unsigned long uVar8;
  unsigned int uVar9;
  unsigned long long local_88;
  size_t sStack_80;
  unsigned long long local_78;
  size_t sStack_70;
  unsigned long long local_68;
  size_t sStack_60;
  uint local_4c;
  unsigned long long local_48;
  size_t sStack_40;
  void *local_38;
  
  uVar1 = *(unsigned long long *)(param_1 + 8);
  sVar5 = *(size_t *)(param_1 + 0x18);
  if ((uint)(*(int *)(param_1 + 0x10) - (int)uVar1) < 3) {
    return;
  }
  local_78 = uVar1;
  sStack_70 = sVar5;
  osc::ReceivedMessageArgumentIterator::Advance((ReceivedMessageArgumentIterator *)&local_78);
  local_48 = uVar1;
  sStack_40 = sVar5;
  uVar3 = osc::ReceivedMessageArgument::AsInt32((ReceivedMessageArgument *)&local_48);
  uVar9 = 6;
  if (uVar3 < 6) {
    uVar9 = *(unsigned int *)(&0 + (long)(int)uVar3 * 4);
  }
  local_68 = local_78;
  sStack_60 = sStack_70;
  osc::ReceivedMessageArgumentIterator::Advance((ReceivedMessageArgumentIterator *)&local_78);
  local_48 = local_68;
  sStack_40 = sStack_60;
  local_4c = osc::ReceivedMessageArgument::AsInt32((ReceivedMessageArgument *)&local_48);
  local_68 = local_78;
  sStack_60 = sStack_70;
  osc::ReceivedMessageArgumentIterator::Advance((ReceivedMessageArgumentIterator *)&local_78);
  local_88 = local_68;
  sStack_80 = sStack_60;
  pcVar4 = (char *)osc::ReceivedMessageArgument::AsString((ReceivedMessageArgument *)&local_88);
  sVar5 = strlen(pcVar4);
  if (0xffffffffffffffef < sVar5) {
                    /* WARNING: Subroutine does not return */
    // std code
  }
  local_68 = CONCAT44(local_68._4_4_,uVar9);
  if (sVar5 < 0x17) {
    local_48 = 0(local_48._1_7_,(char)sVar5 * '\x02');
    pvVar6 = (void *)((long)&local_48 + 1);
    if (sVar5 == 0) {
                    /* WARNING: Ignoring partial resolution of indirect */
      local_48._1_1_ = 0;
      goto joined_r0x0001000126c0;
    }
  }
  else {
    uVar7 = sVar5 + 0x10 & 0xfffffffffffffff0;
    pvVar6 = new(uVar7);
    local_48 = uVar7 | 1;
    sStack_40 = sVar5;
    local_38 = pvVar6;
  }
  _memmove(pvVar6,pcVar4,sVar5);
  *(unsigned char *)((long)pvVar6 + sVar5) = 0;
joined_r0x0001000126c0:
  if (-1 < (int)local_4c) {
    uVar7 = (unsigned long)local_4c;
    if ((int)local_68 == 4) {
      uVar7 = uVar7 + (*(long *)(this + 0x98) - *(long *)(this + 0x90) >> 5) * -0x3333333333333333;
    }
    else if ((int)local_68 == 5) {
      uVar7 = (*(long *)(this + 0x98) - *(long *)(this + 0x90) >> 5) * -0x3333333333333333 + uVar7 +
              (*(long *)(this + 0xb0) - *(long *)(this + 0xa8) >> 5) * -0x3333333333333333;
    }
    this_00 = (Tracks *)(this + 0x90);
    uVar8 = Tracks::size(this_00);
    if (uVar7 < uVar8) {
      *(unsigned long *)(this + 0xd8) = uVar7;
      uVar8 = Tracks::size(this_00);
      this[0x80] = (LiveClient)(uVar7 + 1 < uVar8);
      this[0x81] = (LiveClient)(*(long *)(this + 0xd8) != 0);
      lVar2 = *(long *)(this + 0xe0);
      uVar7 = Tracks::maxNumberOfScenes(this_00);
      this[0x82] = (LiveClient)(lVar2 + 1U < uVar7);
      this[0x83] = (LiveClient)(*(long *)(this + 0xe0) != 0);
    }
    updateAutoFocus(this,(string *)&local_48);
  }
  if ((local_48 & 1) != 0) {
    delete(local_38);
  }
  return;
}
}
