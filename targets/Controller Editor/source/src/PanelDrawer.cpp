#include <ni/controller_editor/PanelDrawer.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL {

void PanelDrawer::setPaletteColorIndex(unsigned long) {
unsigned long uVar1;
  
  uVar1 = *(unsigned long *)(this + 0xa8);
  if (uVar1 != param_1) {
    *(unsigned long *)(this + 0xa8) = param_1;
  }
  return 0((int7)(uVar1 >> 8),uVar1 != param_1);
}

PanelDrawer::~PanelDrawer() {
~PanelDrawer(this);
  return;
}
}
