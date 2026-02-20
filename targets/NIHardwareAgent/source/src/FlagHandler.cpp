#include <ni/controller_editor/FlagHandler.hpp>
namespace NI::NHL2::Traktor::KontrolS4MK3::Device {

void FlagHandler::beginTransaction() {
return;
}

void FlagHandler::endTransaction() {
return;
}

FlagHandler::~FlagHandler() {
FlagHandler *pFVar1;
  
  *(void ***)this = &PTR__ControlHandler_1009e9e40;
  pFVar1 = *(FlagHandler **)(this + 0x30);
  if (this + 0x10 == pFVar1) {
    (**(code **)(*(long *)pFVar1 + 0x20))();
  }
  else if (pFVar1 != (FlagHandler *)0x0) {
    (**(code **)(*(long *)pFVar1 + 0x28))();
  }
  delete(this);
  return;
}
}
