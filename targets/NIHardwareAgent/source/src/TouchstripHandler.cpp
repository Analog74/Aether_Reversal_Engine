#include <ni/controller_editor/TouchstripHandler.hpp>
namespace NI::NHL2 {

TouchstripHandler::~TouchstripHandler() {
void *pvVar1;
  TouchstripHandler *pTVar2;
  
  *(void ***)this = &PTR__ControlHandlerWithState_1009eac68;
  pvVar1 = *(void **)(this + 0x50);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x58) = pvVar1;
    delete(pvVar1);
  }
  *(void ***)this = &PTR__ControlHandler_1009e9e40;
  pTVar2 = *(TouchstripHandler **)(this + 0x30);
  if (this + 0x10 == pTVar2) {
    (**(code **)(*(long *)pTVar2 + 0x20))();
  }
  else if (pTVar2 != (TouchstripHandler *)0x0) {
    (**(code **)(*(long *)pTVar2 + 0x28))();
  }
  delete(this);
  return;
}
}
