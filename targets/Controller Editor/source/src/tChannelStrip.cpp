#include <ni/controller_editor/tChannelStrip.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace non-virtual thunk to NI::TraktorKontrolS4MasterDeckWidget {

tChannelStrip::~tChannelStrip() {
tChannelStrip *ptVar1;
  
  *(void ***)(this + -0x60) = &PTR__Bar_101b19b38;
  *(void ***)this = &PTR__Bar_101b19c18;
  NWL::PanelDrawer::~PanelDrawer((PanelDrawer *)(this + 0x2e0));
  ptVar1 = *(tChannelStrip **)(this + 0x2c0);
  if (this + 0x2a0 == ptVar1) {
    (**(code **)(*(long *)ptVar1 + 0x20))();
  }
  else if (ptVar1 != (tChannelStrip *)0x0) {
    (**(code **)(*(long *)ptVar1 + 0x28))();
  }
  *(void ***)(this + -0x60) = &PTR__WidgetTemplate_101b18780;
  *(void ***)this = &PTR__WidgetTemplate_101b18860;
  ptVar1 = *(tChannelStrip **)(this + 0x280);
  if (this + 0x260 == ptVar1) {
    (**(code **)(*(long *)ptVar1 + 0x20))();
  }
  else if (ptVar1 != (tChannelStrip *)0x0) {
    (**(code **)(*(long *)ptVar1 + 0x28))();
  }
  ptVar1 = *(tChannelStrip **)(this + 0x250);
  if (this + 0x230 == ptVar1) {
    (**(code **)(*(long *)ptVar1 + 0x20))();
  }
  else if (ptVar1 != (tChannelStrip *)0x0) {
    (**(code **)(*(long *)ptVar1 + 0x28))();
  }
  NWL::Widget::~Widget((Widget *)(this + -0x60));
  delete((Widget *)(this + -0x60));
  return;
}
}
