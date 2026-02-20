#include <ni/controller_editor/executeOnMainThread_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA::Application {

void executeOnMainThread(std::function<void ()>) [clone .cold.1] {
if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x28))();
  }
  return;
}
}
