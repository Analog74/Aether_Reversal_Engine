#include <ni/controller_editor/insertAtCursorPosition_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL::DETAIL::MultilineTextEditContentArea {

void insertAtCursorPosition(2 param_2, std::string {
long lVar1;
  byte bVar2;
  unsigned long *puVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  unsigned long uVar8;
  long lVar9;
  unsigned long *puVar10;
  unsigned char auVar11 [12];
  
  void *local_50;
  unsigned long long local_48;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  long local_38;
  
  GP::StringUtil::fromUTF_filter<char>((StringUtil *)&local_48,param_2);
  uVar8 = 0;
  if ((local_48 & 1) == 0) {
    if ((local_48 >> 1 & 0x7f) <= uVar8) return;
    bVar2 = *(byte *)((long)&local_48 + uVar8 + 1);
  }
  else {
    if (CONCAT44(uStack_3c,uStack_40) <= uVar8) return;
    bVar2 = *(byte *)(local_38 + uVar8);
  }
  if ((bVar2 == 10) || (0x1f < bVar2)) {
    uVar8 = uVar8 + 1;
  }
  else {
    // std code
  }
  return;
  if (((byte)*param_2 & 1) != 0) {
    delete(*(void **)(param_2 + 0x10));
  }
  *(long *)(param_2 + 0x10) = local_38;
  *(unsigned long *)param_2 = local_48;
  *(unsigned long *)(param_2 + 8) = CONCAT44(uStack_3c,uStack_40);
  if (((byte)*param_2 & 1) == 0) {
    if ((byte)*param_2 >> 1 == 0) {
      return;
    }
  }
  else if (*(long *)(param_2 + 8) == 0) {
    return;
  }
  deleteSelectedTextNoSignalChange(this);
  auVar11 = MultilineText::toIteratorInText
                      (this,*(unsigned long long *)(this + 0x880),*(unsigned long long *)(this + 0x888));
  // std code
  MultilineText::insertText(this,auVar11._0_8_,auVar11._8_4_,local_60);
  if (((byte)local_60[0] & 1) != 0) {
    delete(local_50);
  }
  (**(code **)(*(long *)this + 0xd8))(this);
  lVar6 = MultilineText::toIteratorInText
                    (this,*(unsigned long long *)(this + 0x880),*(unsigned long long *)(this + 0x888));
  if (((byte)*param_2 & 1) == 0) {
    uVar8 = (unsigned long)((byte)*param_2 >> 1);
  }
  else {
    uVar8 = *(unsigned long *)(param_2 + 8);
  }
  uVar8 = lVar6 + uVar8;
  puVar3 = *(unsigned long **)(this + 0x3c0);
  lVar6 = *(long *)(this + 0x3c8) - (long)puVar3 >> 4;
  if (*(long *)(this + 0x3c8) - (long)puVar3 != 0) {
    lVar7 = 1;
    puVar10 = puVar3;
    lVar9 = 1;
    if (lVar6 != 0) {
      lVar9 = lVar6;
    }
    do {
      if (uVar8 < *puVar10) {
        lVar6 = -lVar7;
        return;
      }
      lVar1 = lVar9 + lVar7;
      lVar7 = lVar7 + -1;
      puVar10 = puVar10 + 2;
    } while (lVar1 != 2);
  }
  lVar6 = lVar6 + -2;
  local_48 = puVar3[lVar6 * 2];
  uStack_40 = (unsigned int)puVar3[lVar6 * 2 + 1];
  lVar9 = 0;
  if (local_48 != uVar8) {
    do {
      lVar9 = lVar9 + 1;
      // boost code
                ((u8_to_u32_iterator<// std code
    } while (local_48 != uVar8);
  }
  *(long *)(this + 0x880) = lVar9;
  *(long *)(this + 0x888) = lVar6;
  *(long *)(this + 0x890) = lVar9;
  *(unsigned long long *)(this + 0x898) = *(unsigned long long *)(this + 0x880);
  *(unsigned long long *)(this + 0x8a0) = *(unsigned long long *)(this + 0x888);
  if (*(Pane **)(this + 0x138) != (Pane *)0x0) {
    iVar5 = Pane::getCommonTimeInterval(*(Pane **)(this + 0x138),3);
    Widget::setTimer((Widget *)this,iVar5);
  }
  this[0x87c] = (MultilineTextEditContentArea)0x1;
  Widget::setInvalid((Widget *)this,0);
  nod::signal_type<nod::multithread_policy,void()>::operator()
            ((signal_type<nod::multithread_policy,void()> *)(this + 0x7a0));
  Widget::setInvalid((Widget *)this,0);
  nod::signal_type<nod::multithread_policy,void(// std code
            ((signal_type<nod::multithread_policy,void(// std code
             (string *)(this + 0x3a8));
  cVar4 = Widget::isInput((Widget *)this);
  if (cVar4 == '\0') {
    nod::signal_type<nod::multithread_policy,void(// std code
              ((signal_type<nod::multithread_policy,void(// std code
               (string *)(this + 0x3a8));
  }
  return;
}
}
