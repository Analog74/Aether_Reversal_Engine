#include <ni/controller_editor/setOnCancelCallback_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL::ProgressDialog {

void setOnCancelCallback(std::function<void ()>) [clone .cold.1] {
if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x28))();
  }
  return;
}
}
