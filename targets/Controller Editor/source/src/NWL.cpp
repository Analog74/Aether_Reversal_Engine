#include <ni/controller_editor/NWL.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL::DETAIL::DesignWidgetTree::toggleNode(NI::NWL::Node<std::weak_ptr<NI {

void NWL::Widget> >&) {
long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  if (*(long *)(param_1 + 0x40) == 0) {
    plVar2 = (long *)0x0;
    plVar4 = *(long **)(this + 0x800);
    plVar3 = *(long **)(this + 0x808);
    if (plVar4 == plVar3) return;
    do {
      if ((long *)*plVar4 != (long *)0x0) {
        (**(code **)(*(long *)*plVar4 + 8))();
        plVar3 = *(long **)(this + 0x808);
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar3);
    *(unsigned long long *)(this + 0x808) = *(unsigned long long *)(this + 0x800);
    plVar4 = *(long **)(this + 0x770);
  }
  else {
    plVar2 = (long *)// std code
    if (plVar2 != (long *)0x0) {
      lVar1 = *(long *)(param_1 + 0x38);
      if ((lVar1 != 0) && (*(long *)(lVar1 + 0x138) != 0)) {
        if (*(long *)(lVar1 + 0x120) != *(long *)(lVar1 + 0x128)) {
          plVar4 = *(long **)(this + 0x770);
          if (((plVar4 != (long *)0x0) && (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8))) &&
             (((byte)param_1[0x30] & 1) == 0)) {
            (**(code **)(*plVar4 + 0x30))(plVar4,param_1);
          }
          param_1[0x30] = (Node)((byte)param_1[0x30] ^ 1);
          *(unsigned long long *)(this + 0x7e8) = *(unsigned long long *)(this + 0x7e0);
          Tree<NI::NWL::DETAIL::DesignWidgetTreeNode,// std code
                    ((Tree<NI::NWL::DETAIL::DesignWidgetTreeNode,// std code
                     this,(Node *)(this + 0x7f8));
          Widget::setAlign((Widget *)this);
        }
        return;
      }
      return;
    }
    plVar2 = (long *)0x0;
    plVar4 = *(long **)(this + 0x800);
    plVar3 = *(long **)(this + 0x808);
    if (plVar4 != plVar3) return;
    *(long **)(this + 0x808) = plVar4;
    plVar4 = *(long **)(this + 0x770);
  }
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x30))(plVar4,this + 0x7f8);
  }
  *(unsigned long long *)(this + 0x7e8) = *(unsigned long long *)(this + 0x7e0);
  Tree<NI::NWL::DETAIL::DesignWidgetTreeNode,// std code
            ((Tree<NI::NWL::DETAIL::DesignWidgetTreeNode,// std code
             (Node *)(this + 0x7f8));
  Widget::setAlign((Widget *)this);
  if (plVar2 == (long *)0x0) {
    return;
  }
  LOCK();
  plVar4 = plVar2 + 1;
  lVar1 = *plVar4;
  *plVar4 = *plVar4 + -1;
  UNLOCK();
  if (lVar1 != 0) {
    return;
  }
  (**(code **)(*plVar2 + 0x10))(plVar2);
  // std code
  return;
}
}
