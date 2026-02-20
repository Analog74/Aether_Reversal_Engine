#include <ni/controller_editor/MSTUpdaterUpgradeLogic.hpp>
namespace NI {

void MSTUpdaterUpgradeLogic::applicationCloseRequest() {
char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  timespec local_40;
  
  lVar2 = // boost code
  do {
    lVar3 = // boost code
    lVar4 = // boost code
    lVar4 = (lVar2 + 500000000) - lVar4;
    if (lVar4 < 1) {
      // boost code
      return;
    }
    lVar4 = lVar4 + lVar3;
    local_40.tv_sec = lVar4 / 1000000000;
    local_40.tv_nsec = lVar4 % 1000000000;
    cVar1 = // boost code
  } while (cVar1 == '\0');
  return;
}

void MSTUpdaterUpgradeLogic::connectInNormalMode() {
MSTUpdaterUpgradeLogic MVar1;
  long local_118 [4];
  long *local_f8;
  void **local_e8;
  code *local_e0;
  unsigned long long uStack_d8;
  MSTUpdaterUpgradeLogic *local_d0;
  void ***local_c8;
  USBDeviceFactory local_b8 [136];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_1002272e0;
  NHL2::USBDeviceFactory::USBDeviceFactory(local_b8);
  local_e8 = &PTR____func_1002333f8;
  local_e0 = onDeviceFound;
  uStack_d8 = 0;
  local_f8 = (long *)0x0;
  local_d0 = this;
  local_c8 = &local_e8;
  NHL2::USBDeviceFactory::setCallbacks(local_b8,&local_e8,local_118);
  if (local_f8 == local_118) {
    (**(code **)(local_118[0] + 0x20))(local_118);
  }
  else if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 0x28))();
  }
  if (local_c8 == &local_e8) {
    (*(code *)local_e8[4])(&local_e8);
  }
  else if (local_c8 != (void ***)0x0) {
    (*(code *)(*local_c8)[5])();
  }
  NHL2::USBDeviceFactory::initWithDeviceFilter
            (local_b8,(USBDeviceFilter *)&NHL2::USBDeviceDB::MaschineStudioDFU,false);
  NHL2::USBDeviceFactory::deInit(local_b8);
  MVar1 = this[0x10];
  NHL2::USBDeviceFactory::~USBDeviceFactory(local_b8);
  if (*(long *)PTR____stack_chk_guard_1002272e0 == local_30) {
    return 0((int7)((unsigned long)local_118 >> 8),MVar1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

void MSTUpdaterUpgradeLogic::connectInUpdateMode() {
char cVar1;
  unsigned long long uVar2;
  
  if ((this[0x10] == (MSTUpdaterUpgradeLogic)0x0) ||
     (uVar2 = 1, this[0x70] != (MSTUpdaterUpgradeLogic)0x2)) {
    cVar1 = NHL2::DFUDevice::reconnectInDFUMode((DFUDevice *)this);
    if ((cVar1 == '\0') || (uVar2 = 1, *(short *)(this + 0x74) == 0)) {
      uVar2 = 0;
    }
  }
  return uVar2;
}

void MSTUpdaterUpgradeLogic::flashFirmwares(int&) {
char cVar1;
  int iVar2;
  timespec local_38;
  GetStatus local_28 [8];
  
  iVar2 = -1;
  if ((this[0x10] == (MSTUpdaterUpgradeLogic)0x0) || (this[0x70] != (MSTUpdaterUpgradeLogic)0x2))
  goto LAB_1000061a9;
  iVar2 = 1;
  cVar1 = NHL2::DFUDevice::writeCustom((DFUDevice *)this,&FW::MaschineStudioPIC,0x3c00,'\x01');
  if (cVar1 == '\0') {
LAB_100006174:
    NHL2::DFUDevice::sendDFUAbort((DFUDevice *)this);
    iVar2 = -2;
  }
  else {
    cVar1 = NHL2::DFUDevice::writeImage((DFUDevice *)this,&FW::MaschineStudio,0xec00,local_28);
    if (cVar1 == '\0') goto LAB_100006174;
  }
  NHL2::DFUDevice::returnToAPPMode((DFUDevice *)this);
  NHL2::USBDevice::disconnect((USBDevice *)this);
  local_38.tv_sec = 5;
  local_38.tv_nsec = 0;
  // boost code
LAB_1000061a9:
  *param_1 = iVar2;
  return;
}

void MSTUpdaterUpgradeLogic::isUpdateRunning() {
char cVar1;
  long lVar2;
  long lVar3;
  timespec local_40;
  
  cVar1 = // boost code
  if (cVar1 != '\0') {
    lVar2 = // boost code
    do {
      lVar3 = // boost code
      local_40.tv_nsec = // boost code
      local_40.tv_nsec = (lVar2 + 500000000) - local_40.tv_nsec;
      if (local_40.tv_nsec < 1) {
        return 1;
      }
      local_40.tv_nsec = local_40.tv_nsec + lVar3;
      local_40.tv_sec = local_40.tv_nsec / 1000000000;
      local_40.tv_nsec = local_40.tv_nsec % 1000000000;
      cVar1 = // boost code
    } while (cVar1 == '\0');
  }
  return 0;
}

void MSTUpdaterUpgradeLogic::performUpdate(int&) {
long *plVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  char cVar6;
  thread_data_base *this_00;
  unsigned long long uVar7;
  _Unwind_Exception *exception_object;
  void *local_68 [2];
  unsigned int local_58;
  unsigned long long local_50;
  unsigned long long local_48;
  unsigned long long local_40;
  unsigned long long local_38;
  thread_data_base *local_30;
  long *local_28;
  
  if ((this[0x10] == (MSTUpdaterUpgradeLogic)0x0) || (this[0x70] != (MSTUpdaterUpgradeLogic)0x2)) {
    *param_1 = -1;
    uVar7 = 0;
  }
  else {
    *param_1 = 0;
    this_00 = (thread_data_base *)new(0x220);
    // boost code
    *(void ***)this_00 = &PTR__thread_data_1002334a8;
    *(code **)(this_00 + 0x200) = flashFirmwares;
    *(unsigned long long *)(this_00 + 0x208) = 0;
    *(MSTUpdaterUpgradeLogic **)(this_00 + 0x210) = this;
    *(int **)(this_00 + 0x218) = param_1;
    local_28 = (long *)0x0;
    local_30 = this_00;
    // boost code
    sp_pointer_construct<// boost code
              ((shared_ptr *)&local_30,(thread_data *)this_00,(shared_count *)&local_28);
    cVar6 = // boost code
    if (cVar6 == '\0') {
      uVar7 = // boost code
      // std code
      local_58 = 0x23;
      local_38 = 0;
      local_40 = 0;
      local_48 = 0;
      local_68[0] = PTR_vtable_100227248 + 0x10;
      local_50 = uVar7;
      // boost code
      local_68[0] = PTR_vtable_100227270 + 0x10;
      // std code
      // std code
      plVar5 = local_28;
      if (local_28 != (long *)0x0) {
        LOCK();
        plVar1 = local_28 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)(*local_28 + 0x10))(local_28);
          LOCK();
          piVar2 = (int *)((long)plVar5 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar5 + 0x18))(plVar5);
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      __Unwind_Resume(exception_object);
    }
    // boost code
    // boost code
    plVar5 = local_28;
    if (local_28 != (long *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*local_28 + 0x10))(local_28);
        LOCK();
        piVar2 = (int *)((long)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
      }
    }
    uVar7 = 1;
  }
  return uVar7;
}

void MSTUpdaterUpgradeLogic::resetIntoUpdateMode() {
char cVar1;
  unsigned long long unaff_R14;
  unsigned long uVar2;
  
  if (this[0x10] != (MSTUpdaterUpgradeLogic)0x0) {
    uVar2 = 0((int7)((unsigned long)unaff_R14 >> 8),1);
    if (this[0x70] == (MSTUpdaterUpgradeLogic)0x2) goto LAB_100005d7b;
    cVar1 = NHL2::DFUDevice::sendDFUDetach((DFUDevice *)this);
    if (cVar1 != '\0') {
      cVar1 = NHL2::DFUDevice::reconnectInDFUMode((DFUDevice *)this);
      if ((cVar1 != '\0') && (*(short *)(this + 0x74) != 0)) goto LAB_100005d7b;
    }
  }
  uVar2 = 0;
LAB_100005d7b:
  return uVar2 & 0xffffffff;
}

MSTUpdaterUpgradeLogic::~MSTUpdaterUpgradeLogic() {
long *plVar1;
  int *piVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  
  // boost code
  plVar4 = *(long **)(this + 0x88);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      LOCK();
      piVar2 = (int *)((long)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
  }
  NHL2::USBDevice::~USBDevice((USBDevice *)this);
  return;
}
}
