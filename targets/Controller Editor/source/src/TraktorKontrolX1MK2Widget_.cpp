#include <ni/controller_editor/TraktorKontrolX1MK2Widget_.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::IControllerWithWidget<NI {

void TraktorKontrolX1MK2Widget>::createGUI() {
TraktorKontrolX1MK2Widget *this;
  long lVar1;
  Model *pMVar2;
  long *plVar3;
  long *plVar4;
  long *in_RSI;
  unsigned long long *in_RDI;
  
  pMVar2 = (Model *)(**(code **)(*in_RSI + 0x10))();
  plVar3 = (long *)new char[0x750];
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR____shared_ptr_emplace_101af1bf8;
  this = (TraktorKontrolX1MK2Widget *)(plVar3 + 4);
  TraktorKontrolX1MK2Widget::TraktorKontrolX1MK2Widget(this,pMVar2);
  if (plVar3[0x21] == 0) {
    LOCK();
    plVar3[1] = plVar3[1] + 1;
    UNLOCK();
    LOCK();
    plVar3[2] = plVar3[2] + 1;
    UNLOCK();
    plVar3[0x20] = (long)this;
    plVar3[0x21] = (long)plVar3;
  }
  else {
    if (*(long *)(plVar3[0x21] + 8) != -1) return;
    LOCK();
    plVar3[1] = plVar3[1] + 1;
    UNLOCK();
    LOCK();
    plVar3[2] = plVar3[2] + 1;
    UNLOCK();
    plVar3[0x20] = (long)this;
    plVar3[0x21] = (long)plVar3;
    // std code
  }
  plVar4 = plVar3 + 1;
  LOCK();
  lVar1 = *plVar4;
  *plVar4 = *plVar4 + -1;
  UNLOCK();
  if (lVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    // std code
  }
  LOCK();
  plVar3[2] = plVar3[2] + 1;
  UNLOCK();
  in_RSI[1] = (long)this;
  lVar1 = in_RSI[2];
  in_RSI[2] = (long)plVar3;
  if (lVar1 != 0) {
    // std code
  }
  *in_RDI = this;
  in_RDI[1] = plVar3;
  return;
}

void TraktorKontrolX1MK2Widget>::getGUI() const {
long lVar1;
  long in_RSI;
  unsigned long long *in_RDI;
  
  *in_RDI = *(unsigned long long *)(in_RSI + 8);
  lVar1 = *(long *)(in_RSI + 0x10);
  in_RDI[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(long *)(lVar1 + 0x10) = *(long *)(lVar1 + 0x10) + 1;
    UNLOCK();
  }
  return;
}

void TraktorKontrolX1MK2Widget>::~IControllerWithWidget() {
code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
}
