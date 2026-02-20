#include <ni/controller_editor/MaschineStudioWidget.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace non-virtual thunk to NI {

void MaschineStudioWidget::onDeviceStatusChanged() {
char cVar1;
  MaschineStudioWidget *this_00;
  
  this_00 = this + -0x3f0;
  cVar1 = (**(code **)(**(long **)(this + 0x3d8) + 400))();
  if (cVar1 != '\0') {
    checkIfFWRevisionNeedsUpdate(this_00);
    return;
  }
  (**(code **)(*(long *)this_00 + 0x138))(this_00);
  this[0x3e0] = (MaschineStudioWidget)0x0;
  return;
}

MaschineStudioWidget::~MaschineStudioWidget() {
~MaschineStudioWidget(this + -0x6f8);
  delete(this + -0x6f8);
  return;
}
}
