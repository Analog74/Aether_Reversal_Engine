#include <ni/controller_editor/ButtonHandler.hpp>
namespace NI::NHL2 {

ButtonHandler::~ButtonHandler() {
ButtonHandler *pBVar1;
  
  *(void ***)this = &PTR__ControlHandlerWithState_1009eaba8;
  if (*(void **)(this + 0x50) != (void *)0x0) {
    delete(*(void **)(this + 0x50));
  }
  *(void ***)this = &PTR__ControlHandler_1009e9e40;
  pBVar1 = *(ButtonHandler **)(this + 0x30);
  if (this + 0x10 == pBVar1) {
    (**(code **)(*(long *)pBVar1 + 0x20))();
  }
  else if (pBVar1 != (ButtonHandler *)0x0) {
    (**(code **)(*(long *)pBVar1 + 0x28))();
  }
  delete(this);
  return;
}
}
