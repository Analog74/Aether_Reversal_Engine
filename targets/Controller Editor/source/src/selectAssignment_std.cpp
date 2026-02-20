#include <ni/controller_editor/selectAssignment_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::TraktorKontrolZ2Widget {

void selectAssignment(std::string const&) [clone .cold.1] {
string *psVar1;
  long lVar2;
  
  LOCK();
  psVar1 = param_1 + 8;
  lVar2 = *(long *)psVar1;
  *(long *)psVar1 = *(long *)psVar1 + -1;
  UNLOCK();
  if (lVar2 != 0) {
    return;
  }
  (**(code **)(*(long *)param_1 + 0x10))();
  // std code
  return;
}
}
