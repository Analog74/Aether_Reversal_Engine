#include <ni/controller_editor/SelectorHandler.hpp>
namespace NI::NHL2::Traktor::KontrolS4MK3::Device {

void SelectorHandler::resetStates() {
return;
}

SelectorHandler::~SelectorHandler() {
SelectorHandler *pSVar1;
  
  *(void ***)this = &PTR__ControlHandler_1009e9e40;
  pSVar1 = *(SelectorHandler **)(this + 0x30);
  if (this + 0x10 == pSVar1) {
    (**(code **)(*(long *)pSVar1 + 0x20))();
  }
  else if (pSVar1 != (SelectorHandler *)0x0) {
    (**(code **)(*(long *)pSVar1 + 0x28))();
  }
  delete(this);
  return;
}
}
