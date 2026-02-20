#include <ni/controller_editor/FX2Device.hpp>
namespace NI::NHL2 {

FX2Device::FX2Device() {
OSImpl *pOVar1;
  
  *(void ***)this = &PTR__FX2Device_1009e74a0;
  pOVar1 = (OSImpl *)new(0x408);
  *(void ***)pOVar1 = &PTR__OSImpl_1009e7458;
  *(unsigned int *)(pOVar1 + 8) = 0;
  *(unsigned long long *)(pOVar1 + 0x10) = 0;
  *(unsigned long long *)(pOVar1 + 0x18) = 0;
  // std code
  *(void ***)pOVar1 = &PTR__OSImpl_1009e7380;
  *(FX2Device **)(pOVar1 + 0x60) = this;
  ___bzero(pOVar1 + 0x68,0x38c);
  *(unsigned long long *)(pOVar1 + 0x3f8) = 0;
  *(unsigned long long *)(pOVar1 + 0x400) = 0;
  *(OSImpl **)(this + 0x70) = pOVar1;
  USBDevice::USBDevice((USBDevice *)this,pOVar1);
  *(void ***)this = &PTR__FX2Device_1009e74a0;
  *(void2 *)(this + 0x78) = 0;
  *(unsigned long long *)(this + 0x80) = 0;
  *(unsigned long long *)(this + 0x88) = 0;
  *(unsigned long long *)(this + 0x89) = 0;
  *(unsigned long long *)(this + 0x91) = 0;
  *(void2 *)(this + 0x99) = 5;
  this[0x9b] = (FX2Device)0x2;
  *(unsigned long long *)(this + 0x9c) = 0;
  this[0xa4] = (FX2Device)0x0;
  *(unsigned long long *)(this + 0xd0) = 0;
  *(unsigned long long *)(this + 0x100) = 0;
  *(unsigned long long *)(this + 0x130) = 0;
  *(unsigned long long *)(this + 0x160) = 0;
  *(unsigned long long *)(this + 400) = 0;
  *(unsigned long long *)(this + 0x1c0) = 0;
  *(unsigned int *)(this + 0x14) = 1;
  
}

void FX2Device::setAnalogThreshold(unsigned char) {
this[0x9b] = (FX2Device)param_1;
  return;
}

void FX2Device::setDirectMonitorState(unsigned int) {
int iVar1;
  unsigned long local_10;
  
  local_10 = (unsigned long)param_1;
  iVar1 = _IOConnectCallScalarMethod
                    (*(unsigned int *)(*(long *)(this + 0x70) + 0x6c),0xd,&local_10,1,0,0);
  return iVar1 == 0;
}

void FX2Device::setERPThreshold(unsigned char) {
this[0x99] = (FX2Device)param_1;
  return;
}

void FX2Device::subscribeToEvents() {
unsigned long long uVar1;
  
  if (this[0x10] != (FX2Device)0x0) {
    uVar1 = OSImpl::subscribeToEvents(*(OSImpl **)(this + 0x70));
    return uVar1;
  }
  return 0;
}

void FX2Device::triggerAsyncMIDIRead() {
OSImpl::triggerAsyncMIDIRead(*(OSImpl **)(this + 0x70));
  return;
}

void FX2Device::writeAnalogIO(unsigned char const*, unsigned int) {
int iVar1;
  unsigned long local_10;
  
  local_10 = (unsigned long)param_2;
  iVar1 = _IOConnectCallMethod
                    (*(unsigned int *)(*(long *)(this + 0x70) + 0x6c),6,&local_10,1,param_1,local_10,0
                     ,0,0,0);
  return iVar1 == 0;
}

void FX2Device::writeDeviceUserData(unsigned int, unsigned char const*, unsigned int) {
int iVar1;
  size_t sVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  char local_60;
  unsigned char local_5f [39];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009cc2c8;
  uVar4 = (param_3 + 0x1f >> 5 & 0xff) + param_1;
  bVar5 = true;
  if ((param_1 & 0xff) < uVar4) {
    do {
      sVar2 = (size_t)param_3;
      if (0x20 < param_3) {
        sVar2 = 0x20;
      }
      local_60 = (char)param_1;
      memcpy(local_5f,param_2,sVar2);
      iVar1 = _IOConnectCallStructMethod
                        (*(unsigned int *)(*(long *)(this + 0x70) + 0x6c),0x14,&local_60,0x21,0,0);
      if ((iVar1 != 0) || (param_3 < 0x21)) {
        bVar5 = iVar1 == 0;
        goto LAB_1001b73f3;
      }
      param_3 = param_3 - 0x20;
      param_2 = param_2 + 0x20;
      bVar3 = (char)param_1 + 1;
      param_1 = (uint)bVar3;
    } while (bVar3 < uVar4);
    bVar5 = true;
  }
LAB_1001b73f3:
  if (*(long *)PTR____stack_chk_guard_1009cc2c8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar5;
}

void FX2Device::writeDigitalIO(unsigned char const*, unsigned int) {
int iVar1;
  unsigned long long local_30;
  unsigned long local_28;
  
  local_30 = 0;
  memcpy(&local_30,param_1,(unsigned long)param_2);
  local_28 = (unsigned long)param_2;
  iVar1 = _IOConnectCallMethod
                    (*(unsigned int *)(*(long *)(this + 0x70) + 0x6c),2,&local_28,1,&local_30,8,0,0,0,
                     0);
  return iVar1 == 0;
}

FX2Device::~FX2Device() {
~FX2Device(this);
  delete(this);
  return;
}
}
