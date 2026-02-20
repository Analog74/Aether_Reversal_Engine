#include <ni/controller_editor/ProgressWidget.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace non-virtual thunk to NI::NWL::ProgressDialog {

ProgressWidget::~ProgressWidget() {
ProgressWidget *pPVar1;
  
  *(void ***)(this + -0x60) = &PTR__Bar_101b19b38;
  *(void ***)this = &PTR__Bar_101b19c18;
  PanelDrawer::~PanelDrawer((PanelDrawer *)(this + 0x2e0));
  pPVar1 = *(ProgressWidget **)(this + 0x2c0);
  if (this + 0x2a0 == pPVar1) {
    (**(code **)(*(long *)pPVar1 + 0x20))();
  }
  else if (pPVar1 != (ProgressWidget *)0x0) {
    (**(code **)(*(long *)pPVar1 + 0x28))();
  }
  *(void ***)(this + -0x60) = &PTR__WidgetTemplate_101b18780;
  *(void ***)this = &PTR__WidgetTemplate_101b18860;
  pPVar1 = *(ProgressWidget **)(this + 0x280);
  if (this + 0x260 == pPVar1) {
    (**(code **)(*(long *)pPVar1 + 0x20))();
  }
  else if (pPVar1 != (ProgressWidget *)0x0) {
    (**(code **)(*(long *)pPVar1 + 0x28))();
  }
  pPVar1 = *(ProgressWidget **)(this + 0x250);
  if (this + 0x230 == pPVar1) {
    (**(code **)(*(long *)pPVar1 + 0x20))();
  }
  else if (pPVar1 != (ProgressWidget *)0x0) {
    (**(code **)(*(long *)pPVar1 + 0x28))();
  }
  Widget::~Widget((Widget *)(this + -0x60));
  delete((Widget *)(this + -0x60));
  return;
}
}
