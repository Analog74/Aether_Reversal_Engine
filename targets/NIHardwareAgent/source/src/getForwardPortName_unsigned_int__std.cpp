#include <ni/controller_editor/getForwardPortName_unsigned_int__std.hpp>
namespace NI::NHL2::SERVER::USBDeviceManager {

void getForwardPortName(unsigned int, std::string&) {
long lVar1;
  USBDeviceManager *pUVar2;
  USBDeviceManager *pUVar3;
  uint uVar4;
  
  uVar4 = 0x1101;
  if (param_1 != 0x1100) {
    uVar4 = param_1;
  }
  pUVar3 = *(USBDeviceManager **)(this + 0x90);
  if (pUVar3 != (USBDeviceManager *)0x0) {
    pUVar2 = this + 0x90;
    do {
      if (*(uint *)(pUVar3 + 0x20) >= uVar4) {
        pUVar2 = pUVar3;
      }
      pUVar3 = *(USBDeviceManager **)(pUVar3 + (unsigned long)(*(uint *)(pUVar3 + 0x20) < uVar4) * 8);
    } while (pUVar3 != (USBDeviceManager *)0x0);
    if ((pUVar2 != this + 0x90) && (*(uint *)(pUVar2 + 0x20) <= uVar4)) {
      lVar1 = *(long *)(pUVar2 + 0x28);
      if ((*(byte *)(lVar1 + 0x170) & 1) == 0) {
        if (*(byte *)(lVar1 + 0x170) >> 1 != 0) {
LAB_10007ecfa:
          // std code
          return 1;
        }
      }
      else if (*(long *)(lVar1 + 0x178) != 0) goto LAB_10007ecfa;
    }
  }
  return 0;
}
}
