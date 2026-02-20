#include <ni/controller_editor/GripLabel.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace non-virtual thunk to NI::NWL {

GripLabel::~GripLabel() {
GripLabel *pGVar1;
  
  *(void ***)(this + -0x60) = &PTR__WidgetTemplate_101b189a0;
  *(void ***)this = &PTR__WidgetTemplate_101b18a80;
  pGVar1 = *(GripLabel **)(this + 0x280);
  if (this + 0x260 == pGVar1) {
    (**(code **)(*(long *)pGVar1 + 0x20))();
  }
  else if (pGVar1 != (GripLabel *)0x0) {
    (**(code **)(*(long *)pGVar1 + 0x28))();
  }
  pGVar1 = *(GripLabel **)(this + 0x250);
  if (this + 0x230 == pGVar1) {
    (**(code **)(*(long *)pGVar1 + 0x20))();
  }
  else if (pGVar1 != (GripLabel *)0x0) {
    (**(code **)(*(long *)pGVar1 + 0x28))();
  }
  Widget::~Widget((Widget *)(this + -0x60));
  delete((Widget *)(this + -0x60));
  return;
}
}
