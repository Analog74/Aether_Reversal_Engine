#include <ni/controller_editor/loadDefaultStyleSheet_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL::Pane {

void loadDefaultStyleSheet(1 param_1, std::string const& {
StyleSheetManager *this_00;
  
  this_00 = (StyleSheetManager *)
            ManagerContainer::getStyleSheetManager(Lib::(anonymous_namespace)::s_managerContainer);
  StyleSheetManager::loadDefault(this_00,param_1);
  if (*(Widget **)(this + 0x18) != (Widget *)0x0) {
    Widget::setStyleSheetChanged(*(Widget **)(this + 0x18));
    return;
  }
  return;
}
}
