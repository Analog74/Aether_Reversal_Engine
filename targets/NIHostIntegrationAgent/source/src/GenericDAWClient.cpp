#include <ni/controller_editor/GenericDAWClient.hpp>
namespace NI::dawcontrol::generic_daw {

void GenericDAWClient::onFocus(bool param_1) {
}

GenericDAWClient::~GenericDAWClient() {
int *piVar1;
  GenericDAWClient GVar2;
  long *plVar3;
  GenericDAWClient *pGVar4;
  
  // boost code
  plVar3 = *(long **)(this + 0xa8);
  if (plVar3 != (long *)0x0) {
    LOCK();
    piVar1 = (int *)((long)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x18))();
    }
  }
  plVar3 = *(long **)(this + 0x98);
  *(unsigned long long *)(this + 0x98) = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = *(long **)(this + 0x90);
  *(unsigned long long *)(this + 0x90) = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(void ***)(this + 0x10) = &PTR__InternalClient_100a57970;
  pGVar4 = *(GenericDAWClient **)(this + 0x70);
  if (this + 0x50 == pGVar4) {
    (**(code **)(*(long *)pGVar4 + 0x20))();
    GVar2 = this[0x30];
  }
  else {
    if (pGVar4 != (GenericDAWClient *)0x0) {
      (**(code **)(*(long *)pGVar4 + 0x28))();
    }
    GVar2 = this[0x30];
  }
  if (((byte)GVar2 & 1) == 0) {
    return;
  }
  delete(*(void **)(this + 0x40));
  return;
}
}
