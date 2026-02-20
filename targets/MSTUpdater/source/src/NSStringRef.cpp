#include <ni/controller_editor/NSStringRef.hpp>
namespace NI::GP {

void NSStringRef::assign(NSString*, bool) {
NSString *pNVar1;
  
  pNVar1 = *(NSString **)this;
  if (pNVar1 != param_1) {
    if (pNVar1 != (NSString *)0x0) {
      (*(code *)PTR__objc_msgSend_100227360)(pNVar1,"release");
    }
    *(NSString **)this = param_1;
    if ((param_1 != (NSString *)0x0) && (param_2)) {
      (*(code *)PTR__objc_msgSend_100227360)(param_1,"retain");
      return;
    }
  }
  return;
}

NSStringRef::~NSStringRef() {
if (*(long *)this != 0) {
    (*(code *)PTR__objc_msgSend_100227360)(*(long *)this,"release");
  }
  return;
}
}
