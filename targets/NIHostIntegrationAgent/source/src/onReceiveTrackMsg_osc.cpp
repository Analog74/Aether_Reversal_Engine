#include <ni/controller_editor/onReceiveTrackMsg_osc.hpp>
namespace NI::dawcontrol::live::LiveClient {

void onReceiveTrackMsg(osc::ReceivedMessage const&) {
long lVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  char *pcVar4;
  size_t sVar5;
  void *pvVar6;
  unsigned long uVar7;
  string *this_00;
  unsigned long uVar8;
  int iVar9;
  unsigned long uVar10;
  long local_78;
  size_t sStack_70;
  unsigned long long local_68;
  unsigned long long local_60;
  size_t local_58;
  void *local_50;
  long local_48;
  size_t sStack_40;
  int local_34;
  
  lVar1 = *(long *)(param_1 + 8);
  sVar5 = *(size_t *)(param_1 + 0x18);
  if ((*(int *)(param_1 + 0x10) - (int)lVar1 & 0xfffffffeU) == 0) {
    return;
  }
  local_48 = lVar1;
  sStack_40 = sVar5;
  osc::ReceivedMessageArgumentIterator::Advance((ReceivedMessageArgumentIterator *)&local_48);
  local_60 = lVar1;
  local_58 = sVar5;
  local_34 = osc::ReceivedMessageArgument::AsInt32((ReceivedMessageArgument *)&local_60);
  sVar5 = sStack_40;
  lVar1 = local_48;
  osc::ReceivedMessageArgumentIterator::Advance((ReceivedMessageArgumentIterator *)&local_48);
  local_78 = lVar1;
  sStack_70 = sVar5;
  pcVar4 = (char *)osc::ReceivedMessageArgument::AsString((ReceivedMessageArgument *)&local_78);
  sVar5 = strlen(pcVar4);
  if (0xffffffffffffffef < sVar5) {
                    /* WARNING: Subroutine does not return */
    // std code
  }
  if (sVar5 < 0x17) {
    local_60 = 0(local_60._1_7_,(char)sVar5 * '\x02');
    pvVar6 = (void *)((long)&local_60 + 1);
    if (sVar5 != 0) goto LAB_100011837;
                    /* WARNING (jumptable): Ignoring partial resolution of indirect */
                    /* WARNING: Ignoring partial resolution of indirect */
    local_60._1_1_ = 0;
    if (local_48 == *(long *)(param_1 + 0x10)) goto LAB_1000119e9;
  }
  else {
    uVar8 = sVar5 + 0x10 & 0xfffffffffffffff0;
    pvVar6 = new(uVar8);
    local_60 = uVar8 | 1;
    local_58 = sVar5;
    local_50 = pvVar6;
LAB_100011837:
    _memmove(pvVar6,pcVar4,sVar5);
    *(unsigned char *)((long)pvVar6 + sVar5) = 0;
    if (local_48 == *(long *)(param_1 + 0x10)) goto LAB_1000119e9;
  }
  sVar5 = sStack_40;
  lVar1 = local_48;
  osc::ReceivedMessageArgumentIterator::Advance((ReceivedMessageArgumentIterator *)&local_48);
  local_78 = lVar1;
  sStack_70 = sVar5;
  uVar2 = osc::ReceivedMessageArgument::AsInt32((ReceivedMessageArgument *)&local_78);
  sVar5 = sStack_40;
  lVar1 = local_48;
  if (local_48 == *(long *)(param_1 + 0x10)) goto LAB_1000119e9;
  osc::ReceivedMessageArgumentIterator::Advance((ReceivedMessageArgumentIterator *)&local_48);
  local_78 = lVar1;
  sStack_70 = sVar5;
  uVar3 = osc::ReceivedMessageArgument::AsInt32((ReceivedMessageArgument *)&local_78);
  iVar9 = 2;
  switch(uVar3) {
  case 0:
    break;
  case 1:
    iVar9 = 1;
    break;
  case 2:
  case 5:
    iVar9 = 0;
    break;
  case 3:
    uVar8 = (unsigned long)local_34;
    uVar10 = (*(long *)(this + 0xb0) - *(long *)(this + 0xa8) >> 5) * -0x3333333333333333;
    if (uVar10 < uVar8 || uVar10 - uVar8 == 0) {
      Tracks::setNumberOfReturnTracks((Tracks *)(this + 0x90),uVar8 + 1);
    }
    uVar10 = (*(long *)(this + 0x98) - *(long *)(this + 0x90) >> 5) * -0x3333333333333333 + uVar8;
    iVar9 = 4;
    goto LAB_100011969;
  case 4:
    uVar10 = (unsigned long)local_34;
    iVar9 = 5;
    uVar8 = uVar10;
    goto LAB_100011969;
  default:
    iVar9 = 6;
  }
  uVar7 = Tracks::size((Tracks *)(this + 0x90));
  uVar10 = (unsigned long)local_34;
  uVar8 = uVar10;
  if (uVar7 <= uVar10) {
    Tracks::setNumberOfTracks((Tracks *)(this + 0x90),uVar10 + 1);
  }
LAB_100011969:
  this_00 = (string *)Tracks::operator[]((Tracks *)(this + 0x90),uVar10);
  *(int *)(this_00 + 0x80) = iVar9;
  if (iVar9 == 4) {
    // std code
  }
  else {
    // std code
    if (((byte)*this_00 & 1) != 0) {
      delete(*(void **)(this_00 + 0x10));
    }
    *(unsigned long long *)(this_00 + 0x10) = local_68;
    *(long *)this_00 = local_78;
    *(size_t *)(this_00 + 8) = sStack_70;
  }
  // std code
  *(unsigned int *)(this_00 + 0x30) = uVar2;
  ::(anonymous_namespace)::processTrackName((Track *)this_00);
  *(unsigned long long *)(this_00 + 0x34) = 0;
LAB_1000119e9:
  if ((local_60 & 1) != 0) {
    delete(local_50);
  }
  return;
}
}
