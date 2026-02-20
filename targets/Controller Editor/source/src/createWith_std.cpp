#include <ni/controller_editor/createWith_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP::NSStringRef {

void createWith(std::string const&, bool) {
unsigned long long uVar1;
  
  if (*(long *)this != 0) {
    (*(code *)PTR__objc_release_101ab46e0)();
  }
  uVar1 = str2NSString(param_1,param_2);
  *(unsigned long long *)this = uVar1;
  return;
}
}
