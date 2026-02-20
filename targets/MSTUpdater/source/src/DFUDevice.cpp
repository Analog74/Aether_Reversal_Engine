#include <ni/controller_editor/DFUDevice.hpp>
namespace NI::NHL2 {

void DFUDevice::getCustomImageVersion(unsigned char, unsigned int&) {
int iVar1;
  unsigned long long uVar2;
  void7 in_register_00000031;
  unsigned char local_30;
  unsigned char local_2f;
  void2 local_2e;
  short local_2c;
  void2 local_2a;
  ushort *local_28;
  uint local_20;
  ushort local_12;
  
  local_2c = (short)0(in_register_00000031,param_1) + 0x1c;
  local_30 = 0xc0;
  local_2f = 0xb3;
  local_2e = 0;
  local_2a = 2;
  local_28 = &local_12;
  local_20 = 0;
  iVar1 = (**(code **)(*(long *)this + 0x10))(this,&local_30);
  uVar2 = 0;
  if ((iVar1 == 0) && (1 < local_20)) {
    *param_2 = (uint)local_12;
    uVar2 = 1;
  }
  return uVar2;
}

void DFUDevice::getDFUState(unsigned char&) {
int iVar1;
  void *puVar2;
  unsigned long long uVar3;
  unsigned long long unaff_RBX;
  unsigned long uVar4;
  unsigned long long local_58;
  unsigned long long uStack_50;
  unsigned long long local_48;
  unsigned char local_40;
  unsigned char local_3f;
  void2 local_3e;
  void2 local_3c;
  ushort local_3a;
  uchar *local_38;
  uint local_30;
  
  local_30 = 0;
  local_40 = 0xa1;
  local_3f = 5;
  local_3e = 0;
  local_3c = *(void2 *)(this + 0x76);
  local_3a = 1;
  local_38 = param_1;
  iVar1 = (**(code **)(*(long *)this + 0x10))(this,&local_40);
  if ((iVar1 != 0) || (uVar4 = 0((int7)((unsigned long)unaff_RBX >> 8),1), local_30 != local_3a)) {
    if (Logging::detail::__reportLevelAsUInt < 2) {
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      // std code
      puVar2 = (void *)
               // std code
               find<// std code
                                  *)&Logging::allowedCategories,(string *)&local_58);
      // std code
      if (puVar2 != &0) {
        uVar3 = USBDevice::statusAsString(iVar1);
        uVar4 = 0;
        Logging::detail::__trace__msg
                  (1,"%s: DFU_GETSTATE failed with status 0x%x (%s)\n","DFUDevice",iVar1,uVar3);
        goto LAB_10001f36e;
      }
    }
    uVar4 = 0;
  }
LAB_10001f36e:
  return uVar4 & 0xffffffff;
}

void DFUDevice::queryDFUInfo() {
DescriptorHeader DVar1;
  bool bVar2;
  uint in_EAX;
  DescriptorHeader *pDVar3;
  DescriptorHeader *pDVar4;
  unsigned long long uVar5;
  unsigned long uVar6;
  unsigned long long uStack_28;
  
  uStack_28 = (unsigned long)in_EAX;
  pDVar3 = (DescriptorHeader *)
           USBDevice::getConfigurationDescriptor((USBDevice *)this,(uint *)((long)&uStack_28 + 4));
  if (pDVar3 == (DescriptorHeader *)0x0) {
    uVar5 = 0;
  }
  else {
    do {
      pDVar4 = pDVar3;
      if ((((pDVar3[1] == (DescriptorHeader)0x4) && (8 < (byte)*pDVar3)) &&
          (pDVar3[5] == (DescriptorHeader)0xfe)) &&
         ((pDVar3[6] == (DescriptorHeader)0x1 && ((byte)pDVar3[7] < 3)))) {
        pDVar4 = (DescriptorHeader *)USB::Descriptor::getNext(pDVar3,(uint *)((long)&uStack_28 + 4))
        ;
        if (pDVar4 == (DescriptorHeader *)0x0) {
          pDVar4 = (DescriptorHeader *)0x0;
        }
        else if ((pDVar4[1] == (DescriptorHeader)0x21) && (6 < (byte)*pDVar4)) {
          DVar1 = pDVar3[2];
          *(ushort *)(this + 0x76) = (ushort)(byte)DVar1;
          bVar2 = DVar1 != (DescriptorHeader)0x0;
          if (pDVar3[7] != (DescriptorHeader)0x0) {
            bVar2 = pDVar3[7] == (DescriptorHeader)0x1;
          }
          this[0x70] = (DFUDevice)(!bVar2 + '\x01');
          *(DescriptorHeader *)(this + 0x71) = pDVar4[2];
          *(void2 *)(this + 0x72) = *(void2 *)(pDVar4 + 3);
          uVar6 = (unsigned long)*(ushort *)(pDVar4 + 5);
          *(ushort *)(this + 0x74) = *(ushort *)(pDVar4 + 5);
          goto LAB_10001e4f2;
        }
      }
      pDVar3 = (DescriptorHeader *)USB::Descriptor::getNext(pDVar4,(uint *)((long)&uStack_28 + 4));
    } while (pDVar3 != (DescriptorHeader *)0x0);
    *(void2 *)(this + 0x74) = 0;
    *(unsigned int *)(this + 0x70) = 0;
    uVar6 = 0;
LAB_10001e4f2:
    uVar5 = 0((int7)(uVar6 >> 8),1);
  }
  return uVar5;
}

void DFUDevice::reconnectInDFUMode() {
uint uVar1;
  unsigned int *puVar2;
  unsigned long long unaff_RBX;
  unsigned long uVar3;
  void2 uStack_1f6;
  
  
  
  
  unsigned int local_190 [2];
  
  
  uint local_158;
  unsigned long long local_150;
  unsigned long long local_148;
  unsigned long long uStack_140;
  long local_138;
  long local_130;
  long local_128;
  long local_118 [4];
  long *local_f8;
  long local_e8 [4];
  long *local_c8;
  USBDeviceFactory local_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1002272e0;
  if ((this[0x10] == (DFUDevice)0x0) ||
     (uVar3 = 0((int7)((unsigned long)unaff_RBX >> 8),1), this[0x70] != (DFUDevice)0x2)) {
    uVar1 = *(uint *)(this + 0x20);
    // std code
    // std code
    // std code
    puVar2 = (unsigned int *)USBDeviceDB::getDeviceFilter(uVar1 & 0xffff,uVar1 >> 0x10,3);
    if (puVar2 == (unsigned int *)0x0) {
      puVar2 = (unsigned int *)PTR_NIUSBDevices_1002270c0;
    }
    if (this[0x10] != (DFUDevice)0x0) {
      USBDevice::disconnect((USBDevice *)this);
      local_150 = 2500000000;
      // std code
    }
    // std code
    local_190[0] = *puVar2;
    // std code
    // std code
    uStack_1f6 = (void2)(uVar1 >> 0x10);
    local_158._0_2_ = (void2)puVar2[0xe];
    local_158 = CONCAT22(uStack_1f6,(void2)local_158) & 0xfff0ffff | 0x20000;
    USBDeviceFactory::USBDeviceFactory(local_b8);
    local_148 = reconnect;
    uStack_140 = this;
    // std code
    local_c8 = (long *)0x0;
    local_c8 = (long *)new(0x30);
    *local_c8 = (long)&PTR____func_1002346b0;
    *(unsigned int *)(local_c8 + 1) = (unsigned int)local_148;
    *(unsigned int *)((long)local_c8 + 0xc) = local_148._4_4_;
    *(unsigned int *)(local_c8 + 2) = (unsigned int)uStack_140;
    *(unsigned int *)((long)local_c8 + 0x14) = uStack_140._4_4_;
    local_c8[5] = local_128;
    local_c8[4] = local_130;
    local_c8[3] = local_138;
    local_128 = 0;
    local_130 = 0;
    local_138 = 0;
    local_f8 = (long *)0x0;
    USBDeviceFactory::setCallbacks(local_b8,local_e8,local_118);
    if (local_f8 == local_118) {
      (**(code **)(local_118[0] + 0x20))(local_118);
    }
    else if (local_f8 != (long *)0x0) {
      (**(code **)(*local_f8 + 0x28))();
    }
    if (local_c8 == local_e8) {
      (**(code **)(local_e8[0] + 0x20))(local_e8);
    }
    else if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x28))();
    }
    // std code
    USBDeviceFactory::initWithDeviceFilter(local_b8,(USBDeviceFilter *)local_190,false);
    USBDeviceFactory::deInit(local_b8);
    uVar3 = 0((int7)((unsigned long)local_e8 >> 8),this[0x10] != (DFUDevice)0x0);
    USBDeviceFactory::~USBDeviceFactory(local_b8);
    // std code
    // std code
    // std code
    // std code
    // std code
    // std code
  }
  if (*(long *)PTR____stack_chk_guard_1002272e0 == local_38) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

void DFUDevice::returnToAPPMode() {
unsigned char uVar1;
  ushort uVar2;
  int iVar3;
  void *puVar4;
  unsigned long long uVar5;
  unsigned long unaff_RBX;
  void7 uVar6;
  unsigned long long local_58;
  unsigned long long uStack_50;
  unsigned long long local_48;
  void2 local_40;
  void2 local_3e;
  void2 local_3c;
  void2 local_3a;
  unsigned long long local_38;
  unsigned int local_30;
  
  if (this[0x10] == (DFUDevice)0x0) {
    uVar2 = (ushort)(byte)this[0x71];
  }
  else {
    unaff_RBX = 0((int7)(unaff_RBX >> 8),1);
    if ((char)*(ushort *)(this + 0x70) == '\x01') goto LAB_10001fa85;
    uVar2 = *(ushort *)(this + 0x70) >> 8;
  }
  uVar6 = (void7)(unaff_RBX >> 8);
  if ((uVar2 & 8) == 0) {
    uVar1 = sendXMOSDFUResetFromDFU(this);
    unaff_RBX = 0(uVar6,uVar1);
  }
  else {
    local_30 = 0;
    local_40 = 0x21;
    local_3e = *(void2 *)(this + 0x72);
    local_3c = *(void2 *)(this + 0x76);
    local_3a = 0;
    local_38 = 0;
    iVar3 = (**(code **)(*(long *)this + 0x10))(this,&local_40);
    unaff_RBX = 0(uVar6,1);
    if (iVar3 != 0) {
      if (Logging::detail::__reportLevelAsUInt < 2) {
        local_58 = 0;
        uStack_50 = 0;
        local_48 = 0;
        // std code
        puVar4 = (void *)
                 // std code
                 find<// std code
                                    *)&Logging::allowedCategories,(string *)&local_58);
        // std code
        if (puVar4 != &0) {
          uVar5 = USBDevice::statusAsString(iVar3);
          unaff_RBX = 0;
          Logging::detail::__trace__msg
                    (1,"%s: DFU_DETACH failed with status 0x%x (%s)\n","DFUDevice",iVar3,uVar5);
          goto LAB_10001fa85;
        }
      }
      unaff_RBX = 0;
    }
  }
LAB_10001fa85:
  return unaff_RBX & 0xffffffff;
}

void DFUDevice::sendDFUAbort() {
int iVar1;
  void *puVar2;
  unsigned long long uVar3;
  unsigned long long unaff_RBX;
  unsigned long uVar4;
  unsigned long long local_58;
  unsigned long long uStack_50;
  unsigned long long local_48;
  unsigned char local_40;
  unsigned char local_3f;
  void2 local_3e;
  void2 local_3c;
  void2 local_3a;
  unsigned long long local_38;
  unsigned int local_30;
  
  local_30 = 0;
  local_40 = 0x21;
  local_3f = 6;
  local_3e = 0;
  local_3c = *(void2 *)(this + 0x76);
  local_3a = 0;
  local_38 = 0;
  iVar1 = (**(code **)(*(long *)this + 0x10))(this,&local_40);
  uVar4 = 0((int7)((unsigned long)unaff_RBX >> 8),1);
  if (iVar1 != 0) {
    if (Logging::detail::__reportLevelAsUInt < 2) {
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      // std code
      puVar2 = (void *)
               // std code
               find<// std code
                                  *)&Logging::allowedCategories,(string *)&local_58);
      // std code
      if (puVar2 != &0) {
        uVar3 = USBDevice::statusAsString(iVar1);
        uVar4 = 0;
        Logging::detail::__trace__msg
                  (1,"%s: DFU_ABORT failed with status 0x%x (%s)\n","DFUDevice",iVar1,uVar3);
        goto LAB_10001f879;
      }
    }
    uVar4 = 0;
  }
LAB_10001f879:
  return uVar4 & 0xffffffff;
}

void DFUDevice::sendDFUDetach() {
unsigned char uVar1;
  int iVar2;
  void *puVar3;
  unsigned long long uVar4;
  unsigned long long unaff_RBX;
  void7 uVar6;
  unsigned long uVar5;
  unsigned long long local_58;
  unsigned long long uStack_50;
  unsigned long long local_48;
  void2 local_40;
  void2 local_3e;
  void2 local_3c;
  void2 local_3a;
  unsigned long long local_38;
  unsigned int local_30;
  
  uVar6 = (void7)((unsigned long)unaff_RBX >> 8);
  if (((byte)this[0x71] & 8) == 0) {
    uVar1 = sendXMOSDFUResetIntoDFU(this);
    uVar5 = 0(uVar6,uVar1);
  }
  else {
    local_30 = 0;
    local_40 = 0x21;
    local_3e = *(void2 *)(this + 0x72);
    local_3c = *(void2 *)(this + 0x76);
    local_3a = 0;
    local_38 = 0;
    iVar2 = (**(code **)(*(long *)this + 0x10))(this,&local_40);
    uVar5 = 0(uVar6,1);
    if (iVar2 != 0) {
      if (Logging::detail::__reportLevelAsUInt < 2) {
        local_58 = 0;
        uStack_50 = 0;
        local_48 = 0;
        // std code
        puVar3 = (void *)
                 // std code
                 find<// std code
                                    *)&Logging::allowedCategories,(string *)&local_58);
        // std code
        if (puVar3 != &0) {
          uVar4 = USBDevice::statusAsString(iVar2);
          uVar5 = 0;
          Logging::detail::__trace__msg
                    (1,"%s: DFU_DETACH failed with status 0x%x (%s)\n","DFUDevice",iVar2,uVar4);
          goto LAB_10001f69b;
        }
      }
      uVar5 = 0;
    }
  }
LAB_10001f69b:
  return uVar5 & 0xffffffff;
}

void DFUDevice::sendXMOSDFUResetFromDFU() {
int iVar1;
  void *puVar2;
  unsigned long long uVar3;
  unsigned long long unaff_RBX;
  unsigned long uVar4;
  unsigned long long local_58;
  unsigned long long uStack_50;
  unsigned long long local_48;
  unsigned char local_40;
  unsigned char local_3f;
  void2 local_3e;
  void2 local_3c;
  void2 local_3a;
  unsigned long long local_38;
  unsigned int local_30;
  
  local_30 = 0;
  local_40 = 0x21;
  local_3f = 0xf3;
  local_3e = 0;
  local_3c = *(void2 *)(this + 0x76);
  local_3a = 0;
  local_38 = 0;
  iVar1 = (**(code **)(*(long *)this + 0x10))(this,&local_40);
  uVar4 = 0((int7)((unsigned long)unaff_RBX >> 8),1);
  if (iVar1 != 0) {
    if (Logging::detail::__reportLevelAsUInt < 2) {
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      // std code
      puVar2 = (void *)
               // std code
               find<// std code
                                  *)&Logging::allowedCategories,(string *)&local_58);
      // std code
      if (puVar2 != &0) {
        uVar3 = USBDevice::statusAsString(iVar1);
        uVar4 = 0;
        Logging::detail::__trace__msg
                  (1,"%s: XMOS_DFU_RESETFROMDFU failed with status 0x%x (%s)\n","DFUDevice",iVar1,
                   uVar3);
        goto LAB_10001f969;
      }
    }
    uVar4 = 0;
  }
LAB_10001f969:
  return uVar4 & 0xffffffff;
}

void DFUDevice::sendXMOSDFUResetIntoDFU() {
int iVar1;
  void *puVar2;
  unsigned long long uVar3;
  unsigned long long unaff_RBX;
  unsigned long uVar4;
  unsigned long long local_58;
  unsigned long long uStack_50;
  unsigned long long local_48;
  unsigned char local_40;
  unsigned char local_3f;
  void2 local_3e;
  void2 local_3c;
  void2 local_3a;
  unsigned long long local_38;
  unsigned int local_30;
  
  local_30 = 0;
  local_40 = 0x21;
  local_3f = 0xf2;
  local_3e = 0;
  local_3c = *(void2 *)(this + 0x76);
  local_3a = 0;
  local_38 = 0;
  iVar1 = (**(code **)(*(long *)this + 0x10))(this,&local_40);
  uVar4 = 0((int7)((unsigned long)unaff_RBX >> 8),1);
  if (iVar1 != 0) {
    if (Logging::detail::__reportLevelAsUInt < 2) {
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      // std code
      puVar2 = (void *)
               // std code
               find<// std code
                                  *)&Logging::allowedCategories,(string *)&local_58);
      // std code
      if (puVar2 != &0) {
        uVar3 = USBDevice::statusAsString(iVar1);
        uVar4 = 0;
        Logging::detail::__trace__msg
                  (1,"%s: XMOS_DFU_RESETINTODFU failed with status 0x%x (%s)\n","DFUDevice",iVar1,
                   uVar3);
        goto LAB_10001f789;
      }
    }
    uVar4 = 0;
  }
LAB_10001f789:
  return uVar4 & 0xffffffff;
}

void DFUDevice::writeCustom(unsigned char const*, unsigned int, unsigned char) {
int iVar1;
  uint uVar2;
  bool bVar3;
  unsigned char local_40;
  char local_3f;
  ushort local_3e;
  void2 local_3c;
  short local_3a;
  uchar *local_38;
  unsigned int local_30;
  
  local_3f = param_3 + '\x1c';
  local_3c = *(void2 *)(this + 0x76);
  local_40 = 0x41;
  local_3e = 0;
  local_30 = 0;
  bVar3 = false;
  if ((param_1 != (uchar *)0x0) && (param_2 != 0)) {
    if (this[0x70] == (DFUDevice)0x2) {
      uVar2 = param_2 >> 8;
      local_3a = 0x100;
      local_38 = param_1;
      if (uVar2 != 0) {
        do {
          iVar1 = (**(code **)(*(long *)this + 0x10))(this,&local_40);
          if (iVar1 != 0) goto LAB_10001f52a;
          local_38 = local_38 + 0x100;
          local_3e = local_3e + 1;
        } while (local_3e < uVar2);
      }
      local_3a = (short)param_2 - (short)(uVar2 << 8);
      iVar1 = (**(code **)(*(long *)this + 0x10))(this,&local_40);
      bVar3 = iVar1 == 0;
    }
    else {
LAB_10001f52a:
      bVar3 = false;
    }
  }
  return bVar3;
}

DFUDevice::~DFUDevice() {
USBDevice::~USBDevice((USBDevice *)this);
  delete(this);
  return;
}
}
