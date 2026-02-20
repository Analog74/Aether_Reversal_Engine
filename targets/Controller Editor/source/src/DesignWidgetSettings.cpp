#include <ni/controller_editor/DesignWidgetSettings.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace non-virtual thunk to NI::NWL::DETAIL {

DesignWidgetSettings::~DesignWidgetSettings() {
Widget *this_00;
  DesignWidgetSettings *pDVar1;
  
  this_00 = (Widget *)(this + -0x60);
  *(void ***)(this + -0x60) = &PTR__Bar_101b19b38;
  *(void ***)this = &PTR__Bar_101b19c18;
  PanelDrawer::~PanelDrawer((PanelDrawer *)(this + 0x2e0));
  pDVar1 = *(DesignWidgetSettings **)(this + 0x2c0);
  if (this + 0x2a0 == pDVar1) {
    (**(code **)(*(long *)pDVar1 + 0x20))();
  }
  else if (pDVar1 != (DesignWidgetSettings *)0x0) {
    (**(code **)(*(long *)pDVar1 + 0x28))();
  }
  *(void ***)this_00 = &PTR__WidgetTemplate_101b18780;
  *(void ***)this = &PTR__WidgetTemplate_101b18860;
  pDVar1 = *(DesignWidgetSettings **)(this + 0x280);
  if (this + 0x260 == pDVar1) {
    (**(code **)(*(long *)pDVar1 + 0x20))();
    pDVar1 = *(DesignWidgetSettings **)(this + 0x250);
    if (this + 0x230 == pDVar1) return;
  }
  else {
    if (pDVar1 != (DesignWidgetSettings *)0x0) {
      (**(code **)(*(long *)pDVar1 + 0x28))();
    }
    pDVar1 = *(DesignWidgetSettings **)(this + 0x250);
    if (this + 0x230 == pDVar1) {
      (**(code **)(*(long *)pDVar1 + 0x20))();
      return;
    }
  }
  if (pDVar1 != (DesignWidgetSettings *)0x0) {
    (**(code **)(*(long *)pDVar1 + 0x28))();
  }
  Widget::~Widget(this_00);
  delete(this_00);
  return;
}
}
