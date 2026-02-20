#include <ni/controller_editor/JogwheelHandler.hpp>
namespace NI::NHL2 {

JogwheelHandler::~JogwheelHandler() {
void *pvVar1;
  JogwheelHandler *pJVar2;
  
  *(void ***)this = &PTR__ControlHandlerWithState_1009eabe8;
  pvVar1 = *(void **)(this + 0x50);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x58) = pvVar1;
    delete(pvVar1);
  }
  *(void ***)this = &PTR__ControlHandler_1009e9e40;
  pJVar2 = *(JogwheelHandler **)(this + 0x30);
  if (this + 0x10 == pJVar2) {
    (**(code **)(*(long *)pJVar2 + 0x20))();
  }
  else if (pJVar2 != (JogwheelHandler *)0x0) {
    (**(code **)(*(long *)pJVar2 + 0x28))();
  }
  delete(this);
  return;
}
}
