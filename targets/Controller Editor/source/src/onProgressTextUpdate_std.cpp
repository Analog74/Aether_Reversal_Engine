#include <ni/controller_editor/onProgressTextUpdate_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::ControllerEditorSplashScreen {

void onProgressTextUpdate(1 param_1, std::string const& {
if (*(long **)(param_1 + 0x388) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x388) + 0xd0))();
    NWL::Widget::setInvalid(*(Widget **)(param_1 + 0x388),0);
    return;
  }
  return;
}
}
