#include <ni/controller_editor/AudioKontrol1.hpp>
namespace non-virtual thunk to NI::NHL2::SERVER {

AudioKontrol1::~AudioKontrol1() {
void *pvVar1;
  
  *(void ***)(this + -0x2a8) = &PTR__AudioKontrol1_1009ce7c0;
  *(void ***)this = &PTR_setLEDColor_1009cea88;
  GP::Registry::set("DirectMonitor",*(unsigned int *)(this + 0x30),0);
  *(void ***)this = &PTR_setLEDColor_1009e8108;
  pvVar1 = *(void **)(this + 8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar1;
    delete(pvVar1);
  }
  FX2Controller::~FX2Controller((FX2Controller *)(this + -0x2a8));
  delete((FX2Controller *)(this + -0x2a8));
  return;
}
}
