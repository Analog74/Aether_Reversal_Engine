#include <ni/controller_editor/ControllerDevice.hpp>
namespace NI::NHL2 {

void ControllerDevice::getDeviceInfo() const {
return this + 0x60;
}

void ControllerDevice::getFirmwareVersion(unsigned int&) const {
unsigned int uVar1;
  long lVar2;
  
  uVar1 = (**(code **)(*(long *)this + 0xe0))();
  if ((char)uVar1 != '\0') {
    lVar2 = (**(code **)(*(long *)this + 0xf8))(this);
    *param_1 = (uint)*(ushort *)(lVar2 + 4);
  }
  return uVar1;
}

void ControllerDevice::getFloatProperty(unsigned int, float&) const {
return 0;
}

void ControllerDevice::getMIDITransportEnabled() const {
return 0;
}

void ControllerDevice::getOSHandle() const {
return this + 0x58;
}

void ControllerDevice::getServiceVersion(unsigned int&) const {
return 0;
}

void ControllerDevice::isConnected() const {
return this[0x50];
}

void ControllerDevice::queryPotiValues() const {
long lVar1;
  long lVar2;
  AnalogControlHandler *this_00;
  long lVar3;
  long lVar4;
  
  if (*(long *)(this + 0x138) != 0) {
    lVar4 = *(long *)(this + 0x130);
    lVar2 = *(long *)(this + 0x138) * 0x20 + lVar4;
    do {
      lVar1 = *(long *)(lVar4 + 0x10);
      for (lVar3 = *(long *)(lVar4 + 8); lVar3 != lVar1; lVar3 = lVar3 + 0x18) {
        if ((*(long *)(lVar3 + 8) != 0) &&
           (this_00 = (AnalogControlHandler *)
                      ___dynamic_cast(*(long *)(lVar3 + 8),&ControlHandler::typeinfo,
                                      &AnalogControlHandler::typeinfo,0),
           this_00 != (AnalogControlHandler *)0x0)) {
          AnalogControlHandler::queryValues(this_00);
        }
      }
      lVar4 = lVar4 + 0x20;
    } while (lVar4 != lVar2);
  }
  return;
}

void ControllerDevice::setFloatProperty(unsigned int, float) {
return 0;
}

void ControllerDevice::subscribeToHIDInputReports() {
/* WARNING: Could not recover jumptable at 0x0001001c5158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(this + 0x40) + 0x28))(this + 0x40,s_bForceHIDReaderThreads);
  return;
}

void ControllerDevice::subscribeToMIDIEvents(unsigned int) {
return;
}

void ControllerDevice::writeUserData() {
/* WARNING: Could not recover jumptable at 0x0001001c50b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x148))();
  return;
}

ControllerDevice::~ControllerDevice() {
long *plVar1;
  long lVar2;
  ControllerDevice *pCVar3;
  void *pvVar4;
  long *plVar5;
  void *pvVar6;
  long lVar7;
  void *pvVar8;
  long lVar9;
  
  *(void ***)this = &PTR__ControllerDevice_1009e7e48;
  *(void ***)(this + 0x40) = &PTR__ControllerDevice_1009e7fc8;
  pCVar3 = *(ControllerDevice **)(this + 0x170);
  if (this + 0x150 == pCVar3) {
    (**(code **)(*(long *)pCVar3 + 0x20))();
    lVar9 = *(long *)(this + 0x138);
  }
  else {
    if (pCVar3 != (ControllerDevice *)0x0) {
      (**(code **)(*(long *)pCVar3 + 0x28))();
    }
    lVar9 = *(long *)(this + 0x138);
  }
  if (lVar9 != 0) {
    lVar7 = *(long *)(this + 0x130);
    do {
      lVar9 = lVar9 + -1;
      pvVar4 = *(void **)(lVar7 + 8);
      if (pvVar4 != (void *)0x0) {
        pvVar8 = *(void **)(lVar7 + 0x10);
        pvVar6 = pvVar4;
        if (pvVar8 != pvVar4) {
          do {
            plVar5 = *(long **)((long)pvVar8 + -8);
            pvVar8 = (void *)((long)pvVar8 + -0x18);
            if (plVar5 != (long *)0x0) {
              LOCK();
              plVar1 = plVar5 + 1;
              lVar2 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar2 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
                // std code
              }
            }
          } while (pvVar4 != pvVar8);
          pvVar6 = *(void **)(lVar7 + 8);
        }
        *(void **)(lVar7 + 0x10) = pvVar4;
        delete(pvVar6);
      }
      lVar7 = lVar7 + 0x20;
    } while (lVar9 != 0);
  }
  if (*(long *)(this + 0x140) != 0) {
    delete(*(void **)(this + 0x130));
  }
  // std code
  HIDDevice::~HIDDevice((HIDDevice *)(this + 0x40));
  return;
}
}
