#include <ni/controller_editor/KompleteDeviceManager.hpp>
namespace NI::HWS2 {

void KompleteDeviceManager::loadDevices() {
long lVar1;
  long *plVar2;
  SupportedMIDeviceClassImpl<NI::dawcontrol::hw::komplete_kontrol::mk1::KontrolS_MK1> *local_a8;
  long *local_a0;
  SupportedMIDeviceClassImpl<NI::dawcontrol::hw::komplete_kontrol::mk2::KontrolS_MK2> *local_98;
  long *local_90;
  SupportedMIDeviceClassImpl<NI::dawcontrol::hw::komplete_kontrol::mk1_AM::KontrolAM_MK1<(NI::dawcontrol::hw::ControllerType)2>>
  *local_88;
  long *local_80;
  SupportedMIDeviceClassImpl<NI::dawcontrol::hw::komplete_kontrol::mk1_AM::KontrolAM_MK1<(NI::dawcontrol::hw::ControllerType)3>>
  *local_78;
  long *local_70;
  SupportedMIDeviceClassImpl<NI::dawcontrol::hw::maschine::mk3::MaschineMK3> *local_68;
  long *local_60;
  SupportedDeviceClassImpl<NI::NHL2::SERVER::MaschineMikroMK3> *local_58;
  long *local_50;
  SupportedMIDeviceClassImpl<NI::dawcontrol::hw::maschine::MaschinePlus> *local_48;
  long *local_40;
  unsigned long long local_38;
  long *plStack_30;
  
  plVar2 = (long *)new(0x1b0);
  plVar2[1] = 0;
  plVar2[2] = 0;
  *plVar2 = (long)&PTR____shared_ptr_emplace_100a450e8;
  NHL2::SERVER::USBDeviceManager::
  SupportedMIDeviceClassImpl<NI::dawcontrol::hw::komplete_kontrol::mk1::KontrolS_MK1>::
  SupportedMIDeviceClassImpl
            ((SupportedMIDeviceClassImpl<NI::dawcontrol::hw::komplete_kontrol::mk1::KontrolS_MK1> *)
             (plVar2 + 4),"Komplete Kontrol MK1",
             (USBDeviceFilter *)&NHL2::USBDeviceDB::KompleteKontrolS49MK1,true,4,false);
  plVar2[4] = (long)&PTR__KompleteKontrolMK1DeviceInfo_100a45138;
  local_38 = 0;
  plStack_30 = (long *)0x0;
  local_a8 = (SupportedMIDeviceClassImpl<NI::dawcontrol::hw::komplete_kontrol::mk1::KontrolS_MK1> *)
             (plVar2 + 4);
  local_a0 = plVar2;
  NHL2::SERVER::USBDeviceManager::registerDevice((USBDeviceManager *)this,&local_a8);
  if (local_a0 != (long *)0x0) {
    LOCK();
    plVar2 = local_a0 + 1;
    lVar1 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*local_a0 + 0x10))(local_a0);
      // std code
    }
  }
  if (plStack_30 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_30 + 1;
    lVar1 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      // std code
    }
  }
  plVar2 = (long *)new(0x1b0);
  plVar2[1] = 0;
  plVar2[2] = 0;
  *plVar2 = (long)&PTR____shared_ptr_emplace_100a451d8;
  NHL2::SERVER::USBDeviceManager::
  SupportedMIDeviceClassImpl<NI::dawcontrol::hw::komplete_kontrol::mk2::KontrolS_MK2>::
  SupportedMIDeviceClassImpl
            ((SupportedMIDeviceClassImpl<NI::dawcontrol::hw::komplete_kontrol::mk2::KontrolS_MK2> *)
             (plVar2 + 4),"Komplete Kontrol MK2",
             (USBDeviceFilter *)&NHL2::USBDeviceDB::KompleteKontrolS49MK2,true,3,false);
  plVar2[4] = (long)&PTR__KompleteKontrolMK2DeviceInfo_100a45228;
  local_38 = 0;
  plStack_30 = (long *)0x0;
  local_98 = (SupportedMIDeviceClassImpl<NI::dawcontrol::hw::komplete_kontrol::mk2::KontrolS_MK2> *)
             (plVar2 + 4);
  local_90 = plVar2;
  NHL2::SERVER::USBDeviceManager::registerDevice((USBDeviceManager *)this,&local_98);
  if (local_90 != (long *)0x0) {
    LOCK();
    plVar2 = local_90 + 1;
    lVar1 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*local_90 + 0x10))(local_90);
      // std code
    }
  }
  if (plStack_30 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_30 + 1;
    lVar1 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      // std code
    }
  }
  plVar2 = (long *)new(0x1b0);
  plVar2[1] = 0;
  plVar2[2] = 0;
  *plVar2 = (long)&PTR____shared_ptr_emplace_100a452c8;
  NHL2::SERVER::USBDeviceManager::
  SupportedMIDeviceClassImpl<NI::dawcontrol::hw::komplete_kontrol::mk1_AM::KontrolAM_MK1<(NI::dawcontrol::hw::ControllerType)2>>
  ::SupportedMIDeviceClassImpl
            ((SupportedMIDeviceClassImpl<NI::dawcontrol::hw::komplete_kontrol::mk1_AM::KontrolAM_MK1<(NI::dawcontrol::hw::ControllerType)2>>
              *)(plVar2 + 4),"Komplete Kontrol A",
             (USBDeviceFilter *)&NHL2::USBDeviceDB::KompleteKontrolA25,true,1,false);
  plVar2[4] = (long)&PTR__KompleteKontrolADeviceInfo_100a45318;
  local_38 = 0;
  plStack_30 = (long *)0x0;
  local_88 = (SupportedMIDeviceClassImpl<NI::dawcontrol::hw::komplete_kontrol::mk1_AM::KontrolAM_MK1<(NI::dawcontrol::hw::ControllerType)2>>
              *)(plVar2 + 4);
  local_80 = plVar2;
  NHL2::SERVER::USBDeviceManager::registerDevice((USBDeviceManager *)this,&local_88);
  if (local_80 != (long *)0x0) {
    LOCK();
    plVar2 = local_80 + 1;
    lVar1 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*local_80 + 0x10))(local_80);
      // std code
    }
  }
  if (plStack_30 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_30 + 1;
    lVar1 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      // std code
    }
  }
  plVar2 = (long *)new(0x1b0);
  plVar2[1] = 0;
  plVar2[2] = 0;
  *plVar2 = (long)&PTR____shared_ptr_emplace_100a453b8;
  NHL2::SERVER::USBDeviceManager::
  SupportedMIDeviceClassImpl<NI::dawcontrol::hw::komplete_kontrol::mk1_AM::KontrolAM_MK1<(NI::dawcontrol::hw::ControllerType)3>>
  ::SupportedMIDeviceClassImpl
            ((SupportedMIDeviceClassImpl<NI::dawcontrol::hw::komplete_kontrol::mk1_AM::KontrolAM_MK1<(NI::dawcontrol::hw::ControllerType)3>>
              *)(plVar2 + 4),"Komplete Kontrol M",
             (USBDeviceFilter *)&NHL2::USBDeviceDB::KompleteKontrolM32,true,1,false);
  plVar2[4] = (long)&PTR__KompleteKontrolMDeviceInfo_100a45408;
  local_38 = 0;
  plStack_30 = (long *)0x0;
  local_78 = (SupportedMIDeviceClassImpl<NI::dawcontrol::hw::komplete_kontrol::mk1_AM::KontrolAM_MK1<(NI::dawcontrol::hw::ControllerType)3>>
              *)(plVar2 + 4);
  local_70 = plVar2;
  NHL2::SERVER::USBDeviceManager::registerDevice((USBDeviceManager *)this,&local_78);
  if (local_70 != (long *)0x0) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar1 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      // std code
    }
  }
  if (plStack_30 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_30 + 1;
    lVar1 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      // std code
    }
  }
  plVar2 = (long *)new(0x1b0);
  plVar2[1] = 0;
  plVar2[2] = 0;
  *plVar2 = (long)&PTR____shared_ptr_emplace_100a454a8;
  NHL2::SERVER::USBDeviceManager::
  SupportedMIDeviceClassImpl<NI::dawcontrol::hw::maschine::mk3::MaschineMK3>::
  SupportedMIDeviceClassImpl
            ((SupportedMIDeviceClassImpl<NI::dawcontrol::hw::maschine::mk3::MaschineMK3> *)
             (plVar2 + 4),"Maschine MK3",(USBDeviceFilter *)&NHL2::USBDeviceDB::MaschineMK3HID,true,
             1,false);
  plVar2[4] = (long)&PTR__MaschineMK3DeviceInfo_100a454f8;
  local_38 = 0;
  plStack_30 = (long *)0x0;
  local_68 = (SupportedMIDeviceClassImpl<NI::dawcontrol::hw::maschine::mk3::MaschineMK3> *)
             (plVar2 + 4);
  local_60 = plVar2;
  NHL2::SERVER::USBDeviceManager::registerDevice((USBDeviceManager *)this,&local_68);
  if (local_60 != (long *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar1 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*local_60 + 0x10))(local_60);
      // std code
    }
  }
  if (plStack_30 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_30 + 1;
    lVar1 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      // std code
    }
  }
  plVar2 = (long *)new(0x1b0);
  plVar2[1] = 0;
  plVar2[2] = 0;
  *plVar2 = (long)&PTR____shared_ptr_emplace_100a45598;
  NHL2::SERVER::USBDeviceManager::SupportedDeviceClassImpl<NI::NHL2::SERVER::MaschineMikroMK3>::
  SupportedDeviceClassImpl
            ((SupportedDeviceClassImpl<NI::NHL2::SERVER::MaschineMikroMK3> *)(plVar2 + 4),
             "Maschine Mikro MK3",(USBDeviceFilter *)&NHL2::USBDeviceDB::MaschineMikroMK3,true,false
            );
  local_38 = 0;
  plStack_30 = (long *)0x0;
  local_58 = (SupportedDeviceClassImpl<NI::NHL2::SERVER::MaschineMikroMK3> *)(plVar2 + 4);
  local_50 = plVar2;
  NHL2::SERVER::USBDeviceManager::registerDevice((USBDeviceManager *)this,&local_58);
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar2 = local_50 + 1;
    lVar1 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*local_50 + 0x10))(local_50);
      // std code
    }
  }
  if (plStack_30 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_30 + 1;
    lVar1 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      // std code
    }
  }
  plVar2 = (long *)new(0x1b0);
  plVar2[1] = 0;
  plVar2[2] = 0;
  *plVar2 = (long)&PTR____shared_ptr_emplace_100a45688;
  NHL2::SERVER::USBDeviceManager::
  SupportedMIDeviceClassImpl<NI::dawcontrol::hw::maschine::MaschinePlus>::SupportedMIDeviceClassImpl
            ((SupportedMIDeviceClassImpl<NI::dawcontrol::hw::maschine::MaschinePlus> *)(plVar2 + 4),
             "Maschine Plus",(USBDeviceFilter *)&NHL2::USBDeviceDB::MaschinePlus,true,1,false);
  plVar2[4] = (long)&PTR__MaschinePlusDeviceInfo_100a456d8;
  local_38 = 0;
  plStack_30 = (long *)0x0;
  local_48 = (SupportedMIDeviceClassImpl<NI::dawcontrol::hw::maschine::MaschinePlus> *)(plVar2 + 4);
  local_40 = plVar2;
  NHL2::SERVER::USBDeviceManager::registerDevice((USBDeviceManager *)this,&local_48);
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    lVar1 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*local_40 + 0x10))(local_40);
      // std code
    }
  }
  if (plStack_30 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_30 + 1;
    lVar1 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      // std code
    }
  }
  NHL2::USBDeviceFactory::initWithDeviceFilter
            ((USBDeviceFactory *)(this + 0x10),(USBDeviceFilter *)&NHL2::USBDeviceDB::NIHIDDevices,
             true);
  return;
}

KompleteDeviceManager::~KompleteDeviceManager() {
NHL2::SERVER::USBDeviceManager::~USBDeviceManager((USBDeviceManager *)this);
  delete(this);
  return;
}
}
