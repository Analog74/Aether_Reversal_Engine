#include <ni/controller_editor/Parser.hpp>
namespace NI::NHL2::MIDI {

Parser::~Parser() {
void *pvVar1;
  Parser *pPVar2;
  
  pvVar1 = *(void **)(this + 0x88);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x90) = pvVar1;
    delete(pvVar1);
  }
  pPVar2 = *(Parser **)(this + 0x60);
  if (this + 0x40 == pPVar2) {
    (**(code **)(*(long *)pPVar2 + 0x20))();
    pPVar2 = *(Parser **)(this + 0x30);
    if (this + 0x10 == pPVar2) goto LAB_100039c3a;
  }
  else {
    if (pPVar2 != (Parser *)0x0) {
      (**(code **)(*(long *)pPVar2 + 0x28))();
    }
    pPVar2 = *(Parser **)(this + 0x30);
    if (this + 0x10 == pPVar2) {
LAB_100039c3a:
                    /* WARNING: Could not recover jumptable at 0x000100039c43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)pPVar2 + 0x20))();
      return;
    }
  }
  if (pPVar2 != (Parser *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100039c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pPVar2 + 0x28))();
    return;
  }
  return;
}
}
