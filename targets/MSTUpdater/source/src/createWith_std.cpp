#include <ni/controller_editor/createWith_std.hpp>
namespace NI::GP::NSStringRef {

void createWith(std::string const&, bool) {
unsigned long long uVar1;
  
  if (*(long *)this != 0) {
    (*(code *)PTR__objc_msgSend_100227360)(*(long *)this,"release");
  }
  uVar1 = str2NSString(param_1,param_2);
  *(unsigned long long *)this = uVar1;
  return;
}
}
