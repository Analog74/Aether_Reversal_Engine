#include <ni/controller_editor/MainWidget.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace non-virtual thunk to NI {

void MainWidget::updatePageList(unsigned int, bool) {
updatePageList(this + -0x3f0,param_1,param_2);
  return;
}

void MainWidget::updatePageListContent(unsigned int, bool, bool) {
updatePageListContent(this + -0x3f0,param_1,param_2,param_3);
  return;
}

MainWidget::~MainWidget() {
~MainWidget(this + -0x3f0);
  delete(this + -0x3f0);
  return;
}
}
