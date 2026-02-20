#include <ni/controller_editor/setViewMovedToWindowListener_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA::COCOA::WindowImplBase {

void setViewMovedToWindowListener(std::function<void ()>) {
WindowImplBase *pWVar1;
  WindowImplBase *pWVar2;
  long lVar3;
  
  pWVar1 = this + 0x50;
  pWVar2 = *(WindowImplBase **)(this + 0x70);
  *(unsigned long long *)(this + 0x70) = 0;
  if (pWVar1 == pWVar2) {
    (**(code **)(*(long *)pWVar2 + 0x20))();
    lVar3 = *(long *)(param_2 + 0x20);
  }
  else {
    if (pWVar2 != (WindowImplBase *)0x0) {
      (**(code **)(*(long *)pWVar2 + 0x28))();
    }
    lVar3 = *(long *)(param_2 + 0x20);
  }
  if (lVar3 == 0) {
    *(unsigned long long *)(this + 0x70) = 0;
  }
  else if(2 param_2, 2 param_2, 2 param_2, param_2 == lVar3 {
    *(WindowImplBase **(this + 0x70 = pWVar1;
    (**(code **)(**(long **)(param_2 + 0x20) + 0x18))(*(long **)(param_2 + 0x20),pWVar1);
  }
  else {
    *(long *)(this + 0x70) = lVar3;
    *(unsigned long long *)(param_2 + 0x20) = 0;
  }
  return;
}
}
