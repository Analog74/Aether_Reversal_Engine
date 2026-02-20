#include <ni/controller_editor/ThreeEqualSectionsNavigationWidget.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

void ThreeEqualSectionsNavigationWidget::drawSelectedSection(unsigned int) {
byte local_28 [5];
  ushort local_23;
  void *local_18;
  
  if (param_1 == 2) {
    local_28[0] = 10;
    local_28[1] = 0x66;
    local_28[2] = 0x61;
    local_28[3] = 0x6c;
    local_28[4] = 0x73;
    local_23 = 0x65;
    NWL::Widget::setAttribute(this,NI::symbolIsMiddle,local_28);
    if ((local_28[0] & 1) != 0) {
      delete(local_18);
    }
    local_28[0] = 8;
    local_28[1] = 0x74;
    local_28[2] = 0x72;
    local_28[3] = 0x75;
    local_28[4] = 0x65;
    local_23 = local_23 & 0xff00;
    NWL::Widget::setAttribute(this,NI::symbolIsRight,local_28);
  }
  else if (param_1 == 1) {
    local_28[0] = 8;
    local_28[1] = 0x74;
    local_28[2] = 0x72;
    local_28[3] = 0x75;
    local_28[4] = 0x65;
    local_23 = local_23 & 0xff00;
    NWL::Widget::setAttribute(this,NI::symbolIsMiddle,local_28);
    if ((local_28[0] & 1) != 0) {
      delete(local_18);
    }
    local_28[0] = 10;
    local_28[1] = 0x66;
    local_28[2] = 0x61;
    local_28[3] = 0x6c;
    local_28[4] = 0x73;
    local_23 = 0x65;
    NWL::Widget::setAttribute(this,NI::symbolIsRight,local_28);
  }
  else {
    if (param_1 != 0) {
      return;
    }
    local_28[0] = 10;
    local_28[1] = 0x66;
    local_28[2] = 0x61;
    local_28[3] = 0x6c;
    local_28[4] = 0x73;
    local_23 = 0x65;
    NWL::Widget::setAttribute(this,NI::symbolIsMiddle,local_28);
    if ((local_28[0] & 1) != 0) {
      delete(local_18);
    }
    local_28[0] = 10;
    local_28[1] = 0x66;
    local_28[2] = 0x61;
    local_28[3] = 0x6c;
    local_28[4] = 0x73;
    local_23 = 0x65;
    NWL::Widget::setAttribute(this,NI::symbolIsRight,local_28);
  }
  if ((local_28[0] & 1) != 0) {
    delete(local_18);
  }
  return;
}

ThreeEqualSectionsNavigationWidget::ThreeEqualSectionsNavigationWidget() {
ThreeEqualSectionsNavigationWidget(this);
  
}

void ThreeEqualSectionsNavigationWidget::updateSelectedSectionGraphically() {
drawSelectedSection(this,*(uint *)(this + 0x4b0));
  return;
}
}
