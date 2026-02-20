#include <ni/controller_editor/IControllerWidget.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

void IControllerWidget::emitSwitchToAssignmentView() {
nod::signal_type<nod::multithread_policy,void()>::operator()
            ((signal_type<nod::multithread_policy,void()> *)(this + 0x10));
  return;
}

void IControllerWidget::getAssignablePageElementsForPageSet(unsigned int, unsigned int) {
IControllerWidget *pIVar1;
  __tree_node_base *p_Var2;
  __tree_node_base *p_Var3;
  IControllerWidget *pIVar4;
  __tree_node_base *p_Var5;
  __tree_node_base *p_Var6;
  IControllerWidget *pIVar7;
  
  if (*(IControllerWidget **)(this + 600) == (IControllerWidget *)0x0) {
    pIVar4 = this + 600;
    p_Var2 = *(__tree_node_base **)pIVar4;
    pIVar7 = pIVar4;
  }
  else {
    pIVar1 = *(IControllerWidget **)(this + 600);
    pIVar7 = this + 600;
    do {
      while (pIVar4 = pIVar1, param_2 < *(uint *)(pIVar4 + 0x20)) {
        pIVar1 = *(IControllerWidget **)pIVar4;
        pIVar7 = pIVar4;
        if (*(IControllerWidget **)pIVar4 == (IControllerWidget *)0x0) return;
      }
      if (param_2 <= *(uint *)(pIVar4 + 0x20)) break;
      pIVar7 = pIVar4 + 8;
      pIVar1 = *(IControllerWidget **)(pIVar4 + 8);
    } while (*(IControllerWidget **)(pIVar4 + 8) != (IControllerWidget *)0x0);
    p_Var2 = *(__tree_node_base **)pIVar7;
  }
  if (p_Var2 == (__tree_node_base *)0x0) {
    p_Var2 = (__tree_node_base *)new char[0x40];
    *(uint *)(p_Var2 + 0x20) = param_2;
    *(unsigned long long *)(p_Var2 + 0x30) = 0;
    *(unsigned long long *)(p_Var2 + 0x38) = 0;
    *(__tree_node_base **)(p_Var2 + 0x28) = p_Var2 + 0x30;
    *(unsigned long long *)p_Var2 = 0;
    *(unsigned long long *)(p_Var2 + 8) = 0;
    *(IControllerWidget **)(p_Var2 + 0x10) = pIVar4;
    *(__tree_node_base **)pIVar7 = p_Var2;
    p_Var3 = p_Var2;
    if (**(long **)(this + 0x250) != 0) {
      *(long *)(this + 0x250) = **(long **)(this + 0x250);
      p_Var3 = *(__tree_node_base **)pIVar7;
    }
    // std code
              (*(__tree_node_base **)(this + 600),p_Var3);
    *(long *)(this + 0x260) = *(long *)(this + 0x260) + 1;
    p_Var3 = *(__tree_node_base **)(p_Var2 + 0x30);
  }
  else {
    p_Var3 = *(__tree_node_base **)(p_Var2 + 0x30);
  }
  if (p_Var3 == (__tree_node_base *)0x0) {
    p_Var5 = p_Var2 + 0x30;
    p_Var3 = *(__tree_node_base **)p_Var5;
    p_Var6 = p_Var5;
  }
  else {
    p_Var6 = p_Var2 + 0x30;
    do {
      while (p_Var5 = p_Var3, param_1 < *(uint *)(p_Var5 + 0x20)) {
        p_Var3 = *(__tree_node_base **)p_Var5;
        p_Var6 = p_Var5;
        if (*(__tree_node_base **)p_Var5 == (__tree_node_base *)0x0) return;
      }
      if (param_1 <= *(uint *)(p_Var5 + 0x20)) break;
      p_Var6 = p_Var5 + 8;
      p_Var3 = *(__tree_node_base **)(p_Var5 + 8);
    } while (*(__tree_node_base **)(p_Var5 + 8) != (__tree_node_base *)0x0);
    p_Var3 = *(__tree_node_base **)p_Var6;
  }
  if (p_Var3 == (__tree_node_base *)0x0) {
    p_Var3 = (__tree_node_base *)new char[0x40];
    *(uint *)(p_Var3 + 0x20) = param_1;
    *(unsigned long long *)(p_Var3 + 0x30) = 0;
    *(unsigned long long *)(p_Var3 + 0x38) = 0;
    *(__tree_node_base **)(p_Var3 + 0x28) = p_Var3 + 0x30;
    *(unsigned long long *)p_Var3 = 0;
    *(unsigned long long *)(p_Var3 + 8) = 0;
    *(__tree_node_base **)(p_Var3 + 0x10) = p_Var5;
    *(__tree_node_base **)p_Var6 = p_Var3;
    p_Var5 = p_Var3;
    if (**(long **)(p_Var2 + 0x28) != 0) {
      *(long *)(p_Var2 + 0x28) = **(long **)(p_Var2 + 0x28);
      p_Var5 = *(__tree_node_base **)p_Var6;
    }
    // std code
              (*(__tree_node_base **)(p_Var2 + 0x30),p_Var5);
    *(long *)(p_Var2 + 0x38) = *(long *)(p_Var2 + 0x38) + 1;
  }
  return p_Var3 + 0x28;
}

void IControllerWidget::getAssignablePageMenuForPageSet(unsigned int, unsigned int) {
IControllerWidget *pIVar1;
  __tree_node_base *p_Var2;
  __tree_node_base *p_Var3;
  IControllerWidget *pIVar4;
  __tree_node_base *p_Var5;
  __tree_node_base *p_Var6;
  IControllerWidget *pIVar7;
  
  if (*(IControllerWidget **)(this + 0x270) == (IControllerWidget *)0x0) {
    pIVar4 = this + 0x270;
    p_Var2 = *(__tree_node_base **)pIVar4;
    pIVar7 = pIVar4;
  }
  else {
    pIVar1 = *(IControllerWidget **)(this + 0x270);
    pIVar7 = this + 0x270;
    do {
      while (pIVar4 = pIVar1, param_2 < *(uint *)(pIVar4 + 0x20)) {
        pIVar1 = *(IControllerWidget **)pIVar4;
        pIVar7 = pIVar4;
        if (*(IControllerWidget **)pIVar4 == (IControllerWidget *)0x0) return;
      }
      if (param_2 <= *(uint *)(pIVar4 + 0x20)) break;
      pIVar7 = pIVar4 + 8;
      pIVar1 = *(IControllerWidget **)(pIVar4 + 8);
    } while (*(IControllerWidget **)(pIVar4 + 8) != (IControllerWidget *)0x0);
    p_Var2 = *(__tree_node_base **)pIVar7;
  }
  if (p_Var2 == (__tree_node_base *)0x0) {
    p_Var2 = (__tree_node_base *)new char[0x40];
    *(uint *)(p_Var2 + 0x20) = param_2;
    *(unsigned long long *)(p_Var2 + 0x30) = 0;
    *(unsigned long long *)(p_Var2 + 0x38) = 0;
    *(__tree_node_base **)(p_Var2 + 0x28) = p_Var2 + 0x30;
    *(unsigned long long *)p_Var2 = 0;
    *(unsigned long long *)(p_Var2 + 8) = 0;
    *(IControllerWidget **)(p_Var2 + 0x10) = pIVar4;
    *(__tree_node_base **)pIVar7 = p_Var2;
    p_Var3 = p_Var2;
    if (**(long **)(this + 0x268) != 0) {
      *(long *)(this + 0x268) = **(long **)(this + 0x268);
      p_Var3 = *(__tree_node_base **)pIVar7;
    }
    // std code
              (*(__tree_node_base **)(this + 0x270),p_Var3);
    *(long *)(this + 0x278) = *(long *)(this + 0x278) + 1;
    p_Var3 = *(__tree_node_base **)(p_Var2 + 0x30);
  }
  else {
    p_Var3 = *(__tree_node_base **)(p_Var2 + 0x30);
  }
  if (p_Var3 == (__tree_node_base *)0x0) {
    p_Var5 = p_Var2 + 0x30;
    p_Var3 = *(__tree_node_base **)p_Var5;
    p_Var6 = p_Var5;
  }
  else {
    p_Var6 = p_Var2 + 0x30;
    do {
      while (p_Var5 = p_Var3, param_1 < *(uint *)(p_Var5 + 0x20)) {
        p_Var3 = *(__tree_node_base **)p_Var5;
        p_Var6 = p_Var5;
        if (*(__tree_node_base **)p_Var5 == (__tree_node_base *)0x0) return;
      }
      if (param_1 <= *(uint *)(p_Var5 + 0x20)) break;
      p_Var6 = p_Var5 + 8;
      p_Var3 = *(__tree_node_base **)(p_Var5 + 8);
    } while (*(__tree_node_base **)(p_Var5 + 8) != (__tree_node_base *)0x0);
    p_Var3 = *(__tree_node_base **)p_Var6;
  }
  if (p_Var3 == (__tree_node_base *)0x0) {
    p_Var3 = (__tree_node_base *)new char[0x38];
    *(uint *)(p_Var3 + 0x20) = param_1;
    *(unsigned long long *)(p_Var3 + 0x28) = 0;
    *(unsigned long long *)(p_Var3 + 0x30) = 0;
    *(unsigned long long *)p_Var3 = 0;
    *(unsigned long long *)(p_Var3 + 8) = 0;
    *(__tree_node_base **)(p_Var3 + 0x10) = p_Var5;
    *(__tree_node_base **)p_Var6 = p_Var3;
    p_Var5 = p_Var3;
    if (**(long **)(p_Var2 + 0x28) != 0) {
      *(long *)(p_Var2 + 0x28) = **(long **)(p_Var2 + 0x28);
      p_Var5 = *(__tree_node_base **)p_Var6;
    }
    // std code
              (*(__tree_node_base **)(p_Var2 + 0x30),p_Var5);
    *(long *)(p_Var2 + 0x38) = *(long *)(p_Var2 + 0x38) + 1;
  }
  return p_Var3 + 0x28;
}

IControllerWidget::~IControllerWidget() {
code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
}
