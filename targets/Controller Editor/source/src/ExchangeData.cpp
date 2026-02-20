#include <ni/controller_editor/ExchangeData.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA {

ExchangeData::~ExchangeData() {
long *plVar1;
  
  plVar1 = *(long **)this;
  *(unsigned long long *)this = 0;
  if (plVar1 != (long *)0x0) {
    if (*plVar1 != 0) {
      (*(code *)PTR__objc_release_101ab46e0)();
      *plVar1 = 0;
    }
    if (plVar1[1] != 0) {
      (*(code *)PTR__objc_release_101ab46e0)();
    }
    delete(plVar1);
    return;
  }
  return;
}
}
