#include <ni/controller_editor/PotiHandler.hpp>
namespace NI::NHL2 {

PotiHandler::~PotiHandler() {
void *pvVar1;
  PotiHandler *pPVar2;
  
  *(void ***)this = &PTR__ControlHandlerWithState_1009eac28;
  pvVar1 = *(void **)(this + 0x50);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x58) = pvVar1;
    delete(pvVar1);
  }
  *(void ***)this = &PTR__ControlHandler_1009e9e40;
  pPVar2 = *(PotiHandler **)(this + 0x30);
  if (this + 0x10 == pPVar2) {
    (**(code **)(*(long *)pPVar2 + 0x20))();
  }
  else if (pPVar2 != (PotiHandler *)0x0) {
    (**(code **)(*(long *)pPVar2 + 0x28))();
  }
  delete(this);
  return;
}
}
