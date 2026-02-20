#include <ni/controller_editor/onReceiveSizeMsg_osc.hpp>
namespace NI::dawcontrol::live::LiveClient {

void onReceiveSizeMsg(osc::ReceivedMessage const&) {
unsigned long long uVar1;
  unsigned long long uVar2;
  long lVar3;
  Tracks *this_00;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  unsigned long uVar8;
  int iVar9;
  unsigned long uVar10;
  long lVar11;
  unsigned long uVar12;
  unsigned long long local_78;
  unsigned long long uStack_70;
  int local_5c;
  Tracks *local_58;
  unsigned long long uStack_50;
  unsigned long long local_48;
  unsigned long long uStack_40;
  int local_34;
  
  uVar1 = *(unsigned long long *)(param_1 + 8);
  uVar2 = *(unsigned long long *)(param_1 + 0x18);
  local_78 = uVar1;
  uStack_70 = uVar2;
  osc::ReceivedMessageArgumentIterator::Advance((ReceivedMessageArgumentIterator *)&local_78);
  local_48 = uVar1;
  uStack_40 = uVar2;
  uVar4 = osc::ReceivedMessageArgument::AsInt32((ReceivedMessageArgument *)&local_48);
  local_58 = (Tracks *)local_78;
  uStack_50 = uStack_70;
  osc::ReceivedMessageArgumentIterator::Advance((ReceivedMessageArgumentIterator *)&local_78);
  local_48 = local_58;
  uStack_40 = uStack_50;
  iVar5 = osc::ReceivedMessageArgument::AsInt32((ReceivedMessageArgument *)&local_48);
  local_58 = (Tracks *)local_78;
  uStack_50 = uStack_70;
  osc::ReceivedMessageArgumentIterator::Advance((ReceivedMessageArgumentIterator *)&local_78);
  local_48 = local_58;
  uStack_40 = uStack_50;
  local_5c = osc::ReceivedMessageArgument::AsInt32((ReceivedMessageArgument *)&local_48);
  local_58 = (Tracks *)(this + 0x90);
  Tracks::setNumberOfTracks(local_58,(long)(int)uVar4);
  if (uVar4 != 0) {
    uVar12 = (unsigned long)iVar5;
    uVar10 = 0;
    do {
      local_48 = CONCAT44(local_48._4_4_,(int)uVar10);
      lVar6 = Tracks::operator[](local_58,uVar10);
      lVar7 = *(long *)(lVar6 + 0x90) - *(long *)(lVar6 + 0x88) >> 3;
      uVar8 = lVar7 * 0x6db6db6db6db6db7;
      if (uVar8 < uVar12) {
        // std code
                  ((vector<NI::dawcontrol::Clip,// std code
                   (lVar6 + 0x88),uVar12 + lVar7 * -0x6db6db6db6db6db7);
      }
      else if (uVar8 >= uVar12 && uVar8 - uVar12 != 0) {
        lVar11 = *(long *)(lVar6 + 0x88) + uVar12 * 0x38;
        lVar7 = *(long *)(lVar6 + 0x90);
        while (lVar3 = lVar7, lVar3 != lVar11) {
          lVar7 = lVar3 + -0x38;
          if ((*(byte *)(lVar3 + -0x38) & 1) != 0) {
            delete(*(void **)(lVar3 + -0x28));
          }
        }
        *(long *)(lVar6 + 0x90) = lVar11;
      }
      local_34 = 5;
      util::OSCServer::send<int,int_const&>
                ((OSCServer *)(*(long *)(this + 0xe8) + 0x60),"/live/track/info",&local_34,
                 (int *)&local_48);
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar4);
  }
  iVar5 = local_5c;
  Tracks::setNumberOfReturnTracks(local_58,(long)local_5c);
  if (iVar5 != 0) {
    iVar9 = 0;
    do {
      local_48 = CONCAT44(local_48._4_4_,iVar9);
      local_34 = 3;
      util::OSCServer::send<int,int_const&>
                ((OSCServer *)(*(long *)(this + 0xe8) + 0x60),"/live/track/info",&local_34,
                 (int *)&local_48);
      iVar9 = iVar9 + 1;
    } while (iVar5 != iVar9);
  }
  this_00 = local_58;
  Tracks::setHasMasterTrack(local_58,true);
  lVar6 = *(long *)(this + 0xd8);
  uVar10 = Tracks::size(this_00);
  this[0x80] = (LiveClient)(lVar6 + 1U < uVar10);
  this[0x81] = (LiveClient)(*(long *)(this + 0xd8) != 0);
  lVar6 = *(long *)(this + 0xe0);
  uVar10 = Tracks::maxNumberOfScenes(this_00);
  this[0x82] = (LiveClient)(lVar6 + 1U < uVar10);
  this[0x83] = (LiveClient)(*(long *)(this + 0xe0) != 0);
  return;
}
}
