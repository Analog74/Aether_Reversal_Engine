#include <ni/controller_editor/Popup.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace non-virtual thunk to NI::NWL {

Popup::~Popup() {
Popup *pPVar1;
  
  *(void ***)(this + -0x60) = &PTR__Popup_101b13f10;
  *(void ***)this = &PTR__Popup_101b14000;
  nod::signal_type<nod::multithread_policy,void()>::~signal_type
            ((signal_type<nod::multithread_policy,void()> *)(this + 0x290));
  *(void ***)(this + -0x60) = &PTR__WidgetTemplate_101b18ab0;
  *(void ***)this = &PTR__WidgetTemplate_101b18b90;
  pPVar1 = *(Popup **)(this + 0x280);
  if (this + 0x260 == pPVar1) {
    (**(code **)(*(long *)pPVar1 + 0x20))();
  }
  else if (pPVar1 != (Popup *)0x0) {
    (**(code **)(*(long *)pPVar1 + 0x28))();
  }
  pPVar1 = *(Popup **)(this + 0x250);
  if (this + 0x230 == pPVar1) {
    (**(code **)(*(long *)pPVar1 + 0x20))();
  }
  else if (pPVar1 != (Popup *)0x0) {
    (**(code **)(*(long *)pPVar1 + 0x28))();
  }
  Widget::~Widget((Widget *)(this + -0x60));
  delete((Widget *)(this + -0x60));
  return;
}
}
