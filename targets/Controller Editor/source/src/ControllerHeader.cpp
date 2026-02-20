#include <ni/controller_editor/ControllerHeader.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

ControllerHeader::~ControllerHeader() {
ControllerHeader *pCVar1;
  
  *(void ***)this = &PTR__Bar_101b19b38;
  *(void ***)(this + 0x60) = &PTR__Bar_101b19c18;
  NWL::PanelDrawer::~PanelDrawer((PanelDrawer *)(this + 0x340));
  pCVar1 = *(ControllerHeader **)(this + 800);
  if (this + 0x300 == pCVar1) {
    (**(code **)(*(long *)pCVar1 + 0x20))();
  }
  else if (pCVar1 != (ControllerHeader *)0x0) {
    (**(code **)(*(long *)pCVar1 + 0x28))();
  }
  *(void ***)this = &PTR__WidgetTemplate_101b18780;
  *(void ***)(this + 0x60) = &PTR__WidgetTemplate_101b18860;
  pCVar1 = *(ControllerHeader **)(this + 0x2e0);
  if (this + 0x2c0 == pCVar1) {
    (**(code **)(*(long *)pCVar1 + 0x20))();
    pCVar1 = *(ControllerHeader **)(this + 0x2b0);
    if (this + 0x290 == pCVar1) return;
  }
  else {
    if (pCVar1 != (ControllerHeader *)0x0) {
      (**(code **)(*(long *)pCVar1 + 0x28))();
    }
    pCVar1 = *(ControllerHeader **)(this + 0x2b0);
    if (this + 0x290 == pCVar1) {
      (**(code **)(*(long *)pCVar1 + 0x20))();
      return;
    }
  }
  if (pCVar1 != (ControllerHeader *)0x0) {
    (**(code **)(*(long *)pCVar1 + 0x28))();
  }
  NWL::Widget::~Widget((Widget *)this);
  return;
}
}
