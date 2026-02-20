#include <ni/controller_editor/JogRenderer.hpp>
namespace NI::NHL2 {

JogRenderer::JogRenderer(float) [clone .cold.2] {
if (this != (JogRenderer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010038b1bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x28))();
    
  }
  
}

JogRenderer::~JogRenderer() {
JogRenderer *pJVar1;
  void *pvVar2;
  
  *(void ***)this = &PTR_processImpl_1009e81c8;
  *(void ***)(this + 0x4a0) = &PTR_processImpl_1009e81f8;
  *(void ***)(this + 0x520) = &PTR_processImpl_1009e8258;
  pJVar1 = *(JogRenderer **)(this + 0x5e0);
  if (this + 0x5c0 == pJVar1) {
    (**(code **)(*(long *)pJVar1 + 0x20))();
    pvVar2 = *(void **)(this + 0x598);
  }
  else {
    if (pJVar1 != (JogRenderer *)0x0) {
      (**(code **)(*(long *)pJVar1 + 0x28))();
    }
    pvVar2 = *(void **)(this + 0x598);
  }
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x5a0) = pvVar2;
    delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x578);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x580) = pvVar2;
    delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x4f8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x500) = pvVar2;
    delete(pvVar2);
  }
  *(void ***)(this + 0x380) = &PTR_processImpl_1009e81e0;
  *(void ***)(this + 0x3d0) = &PTR_processImpl_1009e8258;
  pJVar1 = *(JogRenderer **)(this + 0x490);
  if (this + 0x470 == pJVar1) {
    (**(code **)(*(long *)pJVar1 + 0x20))();
    pvVar2 = *(void **)(this + 0x448);
  }
  else {
    if (pJVar1 != (JogRenderer *)0x0) {
      (**(code **)(*(long *)pJVar1 + 0x28))();
    }
    pvVar2 = *(void **)(this + 0x448);
  }
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x450) = pvVar2;
    delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x428);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x430) = pvVar2;
    delete(pvVar2);
    return;
  }
  return;
}
}
