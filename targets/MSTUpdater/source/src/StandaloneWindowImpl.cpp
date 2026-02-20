#include <ni/controller_editor/StandaloneWindowImpl.hpp>
namespace NI::UIA::COCOA {

void StandaloneWindowImpl::isFullScreenMode() const {
uint uVar1;
  
  if (*(long *)(this + 0x20) != 0) {
    uVar1 = (*(code *)PTR__objc_msgSend_100227360)(*(long *)(this + 0x20),"styleMask");
    return (uVar1 & 0x4000) >> 0xe;
  }
  return 0;
}

void StandaloneWindowImpl::resetFullScreenMode() {
long lVar1;
  char cVar2;
  unsigned int local_20 [2];
  
  lVar1 = *(long *)(this + 0x20);
  if (lVar1 != 0) {
    cVar2 = (**(code **)(*(long *)this + 0x128))(this);
    if (cVar2 != '\0') {
      (*(code *)PTR__objc_msgSend_100227360)(lVar1,"toggleFullScreen:",0);
      local_20[0] = 0;
      (**(code **)(*(long *)this + 0x188))(this,0xf4243,local_20,0);
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
