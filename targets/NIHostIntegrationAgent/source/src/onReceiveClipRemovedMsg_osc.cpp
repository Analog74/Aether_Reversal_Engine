#include <ni/controller_editor/onReceiveClipRemovedMsg_osc.hpp>
namespace NI::dawcontrol::live::LiveClient {

void onReceiveClipRemovedMsg(osc::ReceivedMessage const&) {
unsigned long long *puVar1;
  unsigned long long uVar2;
  unsigned long long uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  Tracks *this_00;
  unsigned long long local_48;
  unsigned long long uStack_40;
  unsigned long long local_38;
  unsigned long long uStack_30;
  
  uVar2 = *(unsigned long long *)(param_1 + 8);
  uVar3 = *(unsigned long long *)(param_1 + 0x18);
  if ((*(int *)(param_1 + 0x10) - (int)uVar2 & 0xfffffffeU) != 0) {
    local_48 = uVar2;
    uStack_40 = uVar3;
    osc::ReceivedMessageArgumentIterator::Advance((ReceivedMessageArgumentIterator *)&local_48);
    local_38 = uVar2;
    uStack_30 = uVar3;
    iVar4 = osc::ReceivedMessageArgument::AsInt32((ReceivedMessageArgument *)&local_38);
    uVar3 = uStack_40;
    uVar2 = local_48;
    osc::ReceivedMessageArgumentIterator::Advance((ReceivedMessageArgumentIterator *)&local_48);
    local_38 = uVar2;
    uStack_30 = uVar3;
    iVar5 = osc::ReceivedMessageArgument::AsInt32((ReceivedMessageArgument *)&local_38);
    this_00 = (Tracks *)(this + 0x90);
    iVar6 = Tracks::size(this_00);
    if (iVar4 < iVar6) {
      lVar7 = Tracks::operator[](this_00,(long)iVar4);
      iVar6 = (int)((unsigned long)(*(long *)(lVar7 + 0x90) - *(long *)(lVar7 + 0x88)) >> 3);
      if (SBORROW4(iVar5,iVar6 * -0x49249249) != iVar5 + iVar6 * 0x49249249 < 0) {
        lVar7 = Tracks::operator[](this_00,(long)iVar4);
        lVar7 = *(long *)(lVar7 + 0x88);
        lVar8 = (long)iVar5 * 0x38;
        puVar1 = (unsigned long long *)(lVar7 + lVar8);
        if ((*(byte *)(lVar7 + lVar8) & 1) != 0) {
          delete(*(void **)(lVar7 + 0x10 + lVar8));
        }
        *(unsigned long long *)((long)puVar1 + 0xc) = 0;
        *(unsigned long long *)((long)puVar1 + 0x14) = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
        *(unsigned int *)(lVar7 + 0x1c + lVar8) = 5;
        *(void2 *)(lVar7 + 0x20 + lVar8) = 0;
        puVar1 = (unsigned long long *)(lVar7 + 0x24 + lVar8);
        *puVar1 = 0;
        puVar1[1] = 0;
      }
    }
  }
  return;
}
}
