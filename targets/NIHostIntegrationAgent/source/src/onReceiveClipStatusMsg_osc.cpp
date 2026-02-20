#include <ni/controller_editor/onReceiveClipStatusMsg_osc.hpp>
namespace NI::dawcontrol::live::LiveClient {

void onReceiveClipStatusMsg(osc::ReceivedMessage const&) {
unsigned long long uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  unsigned long uVar8;
  long lVar9;
  long lVar10;
  unsigned long uVar11;
  Tracks *this_00;
  unsigned long uVar12;
  unsigned int uVar13;
  unsigned long local_68;
  unsigned long long uStack_60;
  unsigned long local_58;
  unsigned long long uStack_50;
  unsigned long local_48;
  unsigned long long uStack_40;
  
  uVar12 = *(unsigned long *)(param_1 + 8);
  uVar1 = *(unsigned long long *)(param_1 + 0x18);
  if (8 < (uint)(*(int *)(param_1 + 0x10) - (int)uVar12)) {
    local_68 = uVar12;
    uStack_60 = uVar1;
    osc::ReceivedMessageArgumentIterator::Advance((ReceivedMessageArgumentIterator *)&local_68);
    local_48 = uVar12;
    uStack_40 = uVar1;
    iVar3 = osc::ReceivedMessageArgument::AsInt32((ReceivedMessageArgument *)&local_48);
    local_58 = local_68;
    uStack_50 = uStack_60;
    osc::ReceivedMessageArgumentIterator::Advance((ReceivedMessageArgumentIterator *)&local_68);
    local_48 = local_58;
    uStack_40 = uStack_50;
    uVar4 = osc::ReceivedMessageArgument::AsInt32((ReceivedMessageArgument *)&local_48);
    this_00 = (Tracks *)(this + 0x90);
    iVar5 = Tracks::size(this_00);
    if (iVar5 <= iVar3) {
      Tracks::setNumberOfTracks(this_00,(long)(iVar3 + 1));
    }
    uVar12 = (unsigned long)iVar3;
    lVar7 = Tracks::operator[](this_00,uVar12);
    iVar3 = (int)((unsigned long)(*(long *)(lVar7 + 0x90) - *(long *)(lVar7 + 0x88)) >> 3);
    if (SBORROW4(uVar4,iVar3 * -0x49249249) == (int)(uVar4 + iVar3 * 0x49249249) < 0) {
      lVar7 = Tracks::operator[](this_00,uVar12);
      uVar11 = (unsigned long)(int)(uVar4 + 1);
      lVar9 = *(long *)(lVar7 + 0x90) - *(long *)(lVar7 + 0x88) >> 3;
      uVar8 = lVar9 * 0x6db6db6db6db6db7;
      if (uVar11 <= uVar8) {
        if (uVar11 <= uVar8 && uVar8 - uVar11 != 0) {
          lVar10 = *(long *)(lVar7 + 0x88) + uVar11 * 0x38;
          lVar9 = *(long *)(lVar7 + 0x90);
          local_58 = (unsigned long)uVar4;
          while (lVar2 = lVar9, lVar2 != lVar10) {
            lVar9 = lVar2 + -0x38;
            if ((*(byte *)(lVar2 + -0x38) & 1) != 0) {
              delete(*(void **)(lVar2 + -0x28));
            }
          }
          *(long *)(lVar7 + 0x90) = lVar10;
          uVar4 = (uint)local_58;
        }
      }
      else {
        // std code
                  ((vector<NI::dawcontrol::Clip,// std code
                   (lVar7 + 0x88),uVar11 + lVar9 * -0x6db6db6db6db6db7);
      }
    }
    lVar7 = Tracks::operator[](this_00,uVar12);
    lVar7 = *(long *)(lVar7 + 0x88);
    local_58 = local_68;
    uStack_50 = uStack_60;
    osc::ReceivedMessageArgumentIterator::Advance((ReceivedMessageArgumentIterator *)&local_68);
    local_48 = local_58;
    uStack_40 = uStack_50;
    uVar6 = osc::ReceivedMessageArgument::AsInt32((ReceivedMessageArgument *)&local_48);
    if (uVar6 < 6) {
      *(uint *)(lVar7 + 0x1c + (long)(int)uVar4 * 0x38) = uVar6;
    }
    local_58 = local_68;
    uStack_50 = uStack_60;
    osc::ReceivedMessageArgumentIterator::Advance((ReceivedMessageArgumentIterator *)&local_68);
    local_48 = local_58;
    uStack_40 = uStack_50;
    iVar3 = osc::ReceivedMessageArgument::AsInt32((ReceivedMessageArgument *)&local_48);
    lVar9 = (long)(int)uVar4 * 0x38;
    *(bool *)(lVar7 + 0x20 + lVar9) = 0 < iVar3;
    local_58 = local_68;
    uStack_50 = uStack_60;
    osc::ReceivedMessageArgumentIterator::Advance((ReceivedMessageArgumentIterator *)&local_68);
    local_48 = local_58;
    uStack_40 = uStack_50;
    iVar3 = osc::ReceivedMessageArgument::AsInt32((ReceivedMessageArgument *)&local_48);
    *(bool *)(lVar7 + 0x21 + lVar9) = 0 < iVar3;
    local_58 = local_68;
    uStack_50 = uStack_60;
    osc::ReceivedMessageArgumentIterator::Advance((ReceivedMessageArgumentIterator *)&local_68);
    local_48 = local_58;
    uStack_40 = uStack_50;
    uVar13 = osc::ReceivedMessageArgument::AsFloat((ReceivedMessageArgument *)&local_48);
    *(unsigned int *)(lVar7 + 0x24 + lVar9) = uVar13;
    local_58 = local_68;
    uStack_50 = uStack_60;
    osc::ReceivedMessageArgumentIterator::Advance((ReceivedMessageArgumentIterator *)&local_68);
    local_48 = local_58;
    uStack_40 = uStack_50;
    uVar13 = osc::ReceivedMessageArgument::AsFloat((ReceivedMessageArgument *)&local_48);
    *(unsigned int *)(lVar7 + 0x28 + lVar9) = uVar13;
    local_58 = local_68;
    uStack_50 = uStack_60;
    osc::ReceivedMessageArgumentIterator::Advance((ReceivedMessageArgumentIterator *)&local_68);
    local_48 = local_58;
    uStack_40 = uStack_50;
    uVar13 = osc::ReceivedMessageArgument::AsFloat((ReceivedMessageArgument *)&local_48);
    *(unsigned int *)(lVar7 + 0x2c + lVar9) = uVar13;
    local_58 = local_68;
    uStack_50 = uStack_60;
    osc::ReceivedMessageArgumentIterator::Advance((ReceivedMessageArgumentIterator *)&local_68);
    local_48 = local_58;
    uStack_40 = uStack_50;
    uVar13 = osc::ReceivedMessageArgument::AsFloat((ReceivedMessageArgument *)&local_48);
    *(unsigned int *)(lVar7 + 0x30 + lVar9) = uVar13;
  }
  return;
}
}
