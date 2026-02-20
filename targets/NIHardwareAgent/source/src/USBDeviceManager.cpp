#include <ni/controller_editor/USBDeviceManager.hpp>
namespace NI::NHL2::SERVER {

void USBDeviceManager::getDeviceEnabled(unsigned int) {
uint uVar1;
  USBDeviceManager *pUVar2;
  USBDeviceManager *pUVar3;
  
  uVar1 = 0x1101;
  if (param_1 != 0x1100) {
    uVar1 = param_1;
  }
  pUVar3 = *(USBDeviceManager **)(this + 0x90);
  if (pUVar3 != (USBDeviceManager *)0x0) {
    pUVar2 = this + 0x90;
    do {
      if (*(uint *)(pUVar3 + 0x20) >= uVar1) {
        pUVar2 = pUVar3;
      }
      pUVar3 = *(USBDeviceManager **)(pUVar3 + (unsigned long)(*(uint *)(pUVar3 + 0x20) < uVar1) * 8);
    } while (pUVar3 != (USBDeviceManager *)0x0);
    if ((pUVar2 != this + 0x90) && (*(uint *)(pUVar2 + 0x20) <= uVar1)) {
      return 0((int7)((unsigned long)*(long *)(pUVar2 + 0x28) >> 8),
                      *(char *)(*(long *)(pUVar2 + 0x28) + 0x169) != '\0');
    }
  }
  return 0;
}

void USBDeviceManager::loadDevices() {
return;
}

void USBDeviceManager::unloadDevices() {
long *plVar1;
  long lVar2;
  USBDeviceClass *this_00;
  long *plVar3;
  USBDeviceManager *pUVar4;
  USBDeviceManager *pUVar5;
  USBDeviceManager *pUVar6;
  
  USBDeviceFactory::deInit((USBDeviceFactory *)(this + 0x10));
  pUVar6 = *(USBDeviceManager **)(this + 0x88);
  do {
    while( true ) {
      pUVar5 = pUVar6;
      if (pUVar5 == this + 0x90) {
        // std code
        __tree<// std code
        ::destroy((__tree<// std code
                   *)(this + 0x88),*(__tree_node **)(this + 0x90));
        *(USBDeviceManager **)(this + 0x88) = this + 0x90;
        *(unsigned long long *)(this + 0x90) = 0;
        *(unsigned long long *)(this + 0x98) = 0;
        return;
      }
      this_00 = *(USBDeviceClass **)(pUVar5 + 0x28);
      *(unsigned long long *)(this_00 + 0x160) = 0;
      USBDeviceFactory::deInit((USBDeviceFactory *)(this_00 + 0x90));
      USBDeviceClass::removeDevices(this_00);
      *(long *)(pUVar5 + 0x28) = 0;
      plVar3 = *(long **)(pUVar5 + 0x30);
      *(long *)(pUVar5 + 0x30) = 0;
      if (plVar3 == (long *)0x0) break;
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 != 0) break;
      (**(code **)(*plVar3 + 0x10))(plVar3);
      // std code
      pUVar4 = *(USBDeviceManager **)(pUVar5 + 8);
      if (*(USBDeviceManager **)(pUVar5 + 8) == (USBDeviceManager *)0x0) goto LAB_10007e96b;
LAB_10007e940:
      do {
        pUVar6 = pUVar4;
        pUVar4 = *(USBDeviceManager **)pUVar6;
      } while (pUVar4 != (USBDeviceManager *)0x0);
    }
    pUVar4 = *(USBDeviceManager **)(pUVar5 + 8);
    if (*(USBDeviceManager **)(pUVar5 + 8) != (USBDeviceManager *)0x0) goto LAB_10007e940;
LAB_10007e96b:
    pUVar6 = *(USBDeviceManager **)(pUVar5 + 0x10);
    if (*(USBDeviceManager **)*(USBDeviceManager **)(pUVar5 + 0x10) != pUVar5) {
      do {
        pUVar5 = *(USBDeviceManager **)(pUVar5 + 0x10);
        pUVar6 = *(USBDeviceManager **)(pUVar5 + 0x10);
      } while (*(USBDeviceManager **)*(USBDeviceManager **)(pUVar5 + 0x10) != pUVar5);
    }
  } while( true );
}

USBDeviceManager::USBDeviceManager() [clone .cold.2] {
if (this != (USBDeviceManager *)0x0) {
    (**(code **)(*(long *)this + 0x28))();
  }
  
}

USBDeviceManager::~USBDeviceManager() {
*(void ***)this = &PTR__USBDeviceManager_1009d8518;
  unloadDevices(this);
  // std code
  __tree<// std code
  ::destroy((__tree<// std code
             *)(this + 0x88),*(__tree_node **)(this + 0x90));
  USBDeviceFactory::~USBDeviceFactory((USBDeviceFactory *)(this + 0x10));
  delete(this);
  return;
}
}
