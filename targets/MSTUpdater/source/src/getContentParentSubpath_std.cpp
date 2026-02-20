#include <ni/controller_editor/getContentParentSubpath_std.hpp>
namespace NI::GP::FileContainerParser {

void getContentParentSubpath(std::string&) const {
unsigned long long uVar1;
  
  if (*(long **)(param_1 + 200) != (long *)0x0) {
    uVar1 = (**(code **)(**(long **)(param_1 + 200) + 0x40))();
    return uVar1;
  }
  return 0;
}
}
