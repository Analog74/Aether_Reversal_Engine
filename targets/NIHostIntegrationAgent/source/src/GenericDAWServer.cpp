#include <ni/controller_editor/GenericDAWServer.hpp>
namespace NI::dawcontrol::generic_daw {

GenericDAWServer::~GenericDAWServer() {
void *pvVar1;
  GenericDAWServer *pGVar2;
  
  pvVar1 = *(void **)(this + 0x158);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x160) = pvVar1;
    delete(pvVar1);
  }
  pGVar2 = *(GenericDAWServer **)(this + 0x130);
  if (this + 0x110 == pGVar2) {
    (**(code **)(*(long *)pGVar2 + 0x20))();
    pGVar2 = *(GenericDAWServer **)(this + 0x100);
    if (this + 0xe0 == pGVar2) goto LAB_1000406e6;
LAB_1000406a2:
    if (pGVar2 != (GenericDAWServer *)0x0) {
      (**(code **)(*(long *)pGVar2 + 0x28))();
    }
    pGVar2 = *(GenericDAWServer **)(this + 0xc0);
    if (this + 0xa0 == pGVar2) {
LAB_1000406ff:
      (**(code **)(*(long *)pGVar2 + 0x20))();
      goto LAB_100040705;
    }
  }
  else {
    if (pGVar2 != (GenericDAWServer *)0x0) {
      (**(code **)(*(long *)pGVar2 + 0x28))();
    }
    pGVar2 = *(GenericDAWServer **)(this + 0x100);
    if (this + 0xe0 != pGVar2) goto LAB_1000406a2;
LAB_1000406e6:
    (**(code **)(*(long *)pGVar2 + 0x20))();
    pGVar2 = *(GenericDAWServer **)(this + 0xc0);
    if (this + 0xa0 == pGVar2) goto LAB_1000406ff;
  }
  if (pGVar2 != (GenericDAWServer *)0x0) {
    (**(code **)(*(long *)pGVar2 + 0x28))();
  }
LAB_100040705:
  // std code
  DawControlServer::~DawControlServer((DawControlServer *)this);
  delete(this);
  return;
}
}
