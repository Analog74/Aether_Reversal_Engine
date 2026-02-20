#include <ni/controller_editor/HIDDisplayImplementation.hpp>
namespace NI::NHL2::SERVER {

void HIDDisplayImplementation::dimDisplays(unsigned int) {
long lVar1;
  unsigned long uVar2;
  
  Display::GenericHID::setBacklight((uint)**(unsigned long long **)(this + 8));
  lVar1 = *(long *)(this + 8);
  if (1 < (unsigned long)(*(long *)(this + 0x10) - lVar1 >> 3)) {
    uVar2 = 1;
    do {
      *(char *)(*(long *)(*(long *)(lVar1 + uVar2 * 8) + 0x40) + 8) = (char)param_1;
      uVar2 = uVar2 + 1;
      lVar1 = *(long *)(this + 8);
    } while (uVar2 < (unsigned long)(*(long *)(this + 0x10) - lVar1 >> 3));
  }
  return;
}

void HIDDisplayImplementation::turnOnDisplays() {
long lVar1;
  unsigned long uVar2;
  
  Display::GenericHID::setBacklight((uint)**(unsigned long long **)(this + 8));
  lVar1 = *(long *)(this + 8);
  if (1 < (unsigned long)(*(long *)(this + 0x10) - lVar1 >> 3)) {
    uVar2 = 1;
    do {
      *(HIDDisplayImplementation *)(*(long *)(*(long *)(lVar1 + uVar2 * 8) + 0x40) + 8) = this[0x30]
      ;
      uVar2 = uVar2 + 1;
      lVar1 = *(long *)(this + 8);
    } while (uVar2 < (unsigned long)(*(long *)(this + 0x10) - lVar1 >> 3));
  }
  return;
}
}
