#include <ni/controller_editor/EncoderHandler.hpp>
namespace NI::NHL2 {

EncoderHandler::~EncoderHandler() {
void *pvVar1;
  EncoderHandler *pEVar2;
  
  *(void ***)this = &PTR__ControlHandlerWithState_1009eabe8;
  pvVar1 = *(void **)(this + 0x50);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x58) = pvVar1;
    delete(pvVar1);
  }
  *(void ***)this = &PTR__ControlHandler_1009e9e40;
  pEVar2 = *(EncoderHandler **)(this + 0x30);
  if (this + 0x10 == pEVar2) {
    (**(code **)(*(long *)pEVar2 + 0x20))();
  }
  else if (pEVar2 != (EncoderHandler *)0x0) {
    (**(code **)(*(long *)pEVar2 + 0x28))();
  }
  delete(this);
  return;
}
}
