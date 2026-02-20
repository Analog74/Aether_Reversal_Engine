#include <ni/controller_editor/Stack.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace non-virtual thunk to NI::NWL {

Stack::~Stack() {
Stack *pSVar1;
  
  *(void ***)(this + -0x60) = &PTR__WidgetTemplate_101b18ef0;
  *(void ***)this = &PTR__WidgetTemplate_101b18fd0;
  pSVar1 = *(Stack **)(this + 0x280);
  if (this + 0x260 == pSVar1) {
    (**(code **)(*(long *)pSVar1 + 0x20))();
  }
  else if (pSVar1 != (Stack *)0x0) {
    (**(code **)(*(long *)pSVar1 + 0x28))();
  }
  pSVar1 = *(Stack **)(this + 0x250);
  if (this + 0x230 == pSVar1) {
    (**(code **)(*(long *)pSVar1 + 0x20))();
  }
  else if (pSVar1 != (Stack *)0x0) {
    (**(code **)(*(long *)pSVar1 + 0x28))();
  }
  Widget::~Widget((Widget *)(this + -0x60));
  delete((Widget *)(this + -0x60));
  return;
}
}
