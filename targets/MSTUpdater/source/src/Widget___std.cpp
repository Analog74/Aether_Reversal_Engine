#include <ni/controller_editor/Widget___std.hpp>
namespace NI::NWL::Pane::setRoot(std::shared_ptr<NI::NWL {

void Widget>, std::string const&) {
uint *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  unsigned long long in_RAX;
  Widget *pWVar5;
  unsigned long long local_38;
  
  local_38 = in_RAX;
  eraseAllOverlayWidgets(this);
  pWVar5 = *(Widget **)(this + 0x18);
  if (pWVar5 != (Widget *)0x0) {
    lVar2 = *(long *)(this + 0x20);
    if (lVar2 != 0) {
      // std code
    }
    Widget::setPane(pWVar5,(Pane *)0x0);
    if (lVar2 != 0) {
      // std code
    }
  }
  pWVar5 = (Widget *)*param_2;
  lVar2 = param_2[1];
  if (lVar2 != 0) {
    // std code
  }
  *(Widget **)(this + 0x18) = pWVar5;
  lVar3 = *(long *)(this + 0x20);
  *(long *)(this + 0x20) = lVar2;
  if (lVar3 != 0) {
    // std code
    pWVar5 = *(Widget **)(this + 0x18);
  }
  if (pWVar5 != (Widget *)0x0) {
    Widget::setPane(pWVar5,this);
    lVar2 = *(long *)(this + 0x18);
    ni::symbol::symbol((symbol *)&local_38,param_3);
    *(unsigned long long *)(lVar2 + 0xf0) = local_38;
    Widget::setSize(*(Widget **)(this + 0x18),this + 8);
    Widget::setStyleSheetChanged(*(Widget **)(this + 0x18));
    pWVar5 = *(Widget **)(this + 0x18);
    if (((byte)pWVar5[0x1e9] & 0x10) == 0) {
      Widget::updateClipRectFromParent(pWVar5);
      uVar4 = Widget::s_uDefaultInvalidAspects;
      if (*(long *)(pWVar5 + 0x138) != 0) {
        LOCK();
        puVar1 = (uint *)(*(long *)(pWVar5 + 0x138) + 0x7c);
        *puVar1 = *puVar1 | 1;
        UNLOCK();
      }
      LOCK();
      *(uint *)(pWVar5 + 500) = *(uint *)(pWVar5 + 500) | uVar4;
      uVar4 = Widget::s_uDefaultInvalidAspects;
      UNLOCK();
      lVar2 = *(long *)(pWVar5 + 0x118);
      if (lVar2 != 0) {
        if (*(long *)(lVar2 + 0x138) != 0) {
          LOCK();
          puVar1 = (uint *)(*(long *)(lVar2 + 0x138) + 0x7c);
          *puVar1 = *puVar1 | 1;
          UNLOCK();
        }
        LOCK();
        *(uint *)(lVar2 + 500) = *(uint *)(lVar2 + 500) | uVar4;
        UNLOCK();
      }
    }
    else {
      if (*(long *)(pWVar5 + 0x138) == 0) {
        pWVar5[0x1f8] = (Widget)0x1;
        uVar4 = Widget::s_uDefaultInvalidAspects;
      }
      else {
        LOCK();
        *(unsigned int *)(*(long *)(pWVar5 + 0x138) + 0x7c) = 3;
        UNLOCK();
        pWVar5[0x1f8] = (Widget)0x1;
        uVar4 = Widget::s_uDefaultInvalidAspects;
        if (*(long *)(pWVar5 + 0x138) != 0) {
          LOCK();
          puVar1 = (uint *)(*(long *)(pWVar5 + 0x138) + 0x7c);
          *puVar1 = *puVar1 | 1;
          UNLOCK();
        }
      }
      LOCK();
      *(uint *)(pWVar5 + 500) = *(uint *)(pWVar5 + 500) | uVar4;
      UNLOCK();
    }
    (**(code **)(*(long *)this + 0x50))(this);
  }
  return;
}
}
