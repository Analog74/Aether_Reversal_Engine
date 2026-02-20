#include <ni/controller_editor/Widget___std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL::Pane::setRoot(std::shared_ptr<NI::NWL {

void Widget>, std::string const&) [clone .cold.1] {
long *plVar1;
  long lVar2;
  
  LOCK();
  plVar1 = param_1 + 1;
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar2 != 0) {
    return;
  }
  (**(code **)(*param_1 + 0x10))();
  // std code
  return;
}
}
