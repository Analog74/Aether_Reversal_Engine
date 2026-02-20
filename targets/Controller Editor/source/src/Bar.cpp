#include <ni/controller_editor/Bar.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace non-virtual thunk to NI::NWL {

Bar::~Bar() {
Bar *pBVar1;
  
  *(void ***)(this + -0x60) = &PTR__Bar_101b19b38;
  *(void ***)this = &PTR__Bar_101b19c18;
  PanelDrawer::~PanelDrawer((PanelDrawer *)(this + 0x2e0));
  pBVar1 = *(Bar **)(this + 0x2c0);
  if (this + 0x2a0 == pBVar1) {
    (**(code **)(*(long *)pBVar1 + 0x20))();
  }
  else if (pBVar1 != (Bar *)0x0) {
    (**(code **)(*(long *)pBVar1 + 0x28))();
  }
  *(void ***)(this + -0x60) = &PTR__WidgetTemplate_101b18780;
  *(void ***)this = &PTR__WidgetTemplate_101b18860;
  pBVar1 = *(Bar **)(this + 0x280);
  if (this + 0x260 == pBVar1) {
    (**(code **)(*(long *)pBVar1 + 0x20))();
  }
  else if (pBVar1 != (Bar *)0x0) {
    (**(code **)(*(long *)pBVar1 + 0x28))();
  }
  pBVar1 = *(Bar **)(this + 0x250);
  if (this + 0x230 == pBVar1) {
    (**(code **)(*(long *)pBVar1 + 0x20))();
  }
  else if (pBVar1 != (Bar *)0x0) {
    (**(code **)(*(long *)pBVar1 + 0x28))();
  }
  Widget::~Widget((Widget *)(this + -0x60));
  delete((Widget *)(this + -0x60));
  return;
}
}
