#include <ni/controller_editor/StandaloneWindowImpl.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA::COCOA {

void StandaloneWindowImpl::isFullScreenMode() const {
uint uVar1;
  
  if (*(long *)(this + 0x20) != 0) {
    uVar1 = (*(code *)PTR__objc_msgSend_101ab46d8)(*(long *)(this + 0x20),"styleMask");
    return uVar1 >> 0xe & 1;
  }
  return 0;
}

void StandaloneWindowImpl::resetFullScreenMode() {
long lVar1;
  char cVar2;
  unsigned int local_20 [2];
  
  lVar1 = *(long *)(this + 0x20);
  if (lVar1 != 0) {
    cVar2 = (**(code **)(*(long *)this + 0x150))();
    if (cVar2 != '\0') {
      (*(code *)PTR__objc_msgSend_101ab46d8)(lVar1,"toggleFullScreen:",0);
      local_20[0] = 0;
      (**(code **)(*(long *)this + 0x1c0))(this,0xf4243,local_20,0);
    }
  }
  return;
}

StandaloneWindowImpl::~StandaloneWindowImpl() {
WindowImpl::~WindowImpl((WindowImpl *)this);
  delete(this);
  return;
}
}
