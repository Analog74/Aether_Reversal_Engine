#include <ni/controller_editor/getAssignmentByName_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2::Traktor::KontrolZ2::Map {

void getAssignmentByName(std::string const&) const {
long *plVar1;
  long lVar2;
  
  lVar2 = IMapAssignmentStorage::getAssignmentByName((IMapAssignmentStorage *)this,param_1);
  if (lVar2 != 0) {
    return lVar2;
  }
  plVar1 = *(long **)(this + 0x118);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001003cb536. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_1);
    return lVar2;
  }
  return 0;
}
}
