#include <ni/controller_editor/KontrolS_MK2_MCU_Server.hpp>
namespace NI::dawcontrol::mcu {

void KontrolS_MK2_MCU_Server::findClientHandle() const {
unsigned long long uVar1;
  void **local_58 [4];
  void ***local_38;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_100a44490;
  local_58[0] = &PTR____func_100a4b0b8;
  local_38 = local_58;
  uVar1 = (**(code **)(**(long **)(this + 0x50) + 0xf8))(*(long **)(this + 0x50),local_58);
  if (local_58 == local_38) {
    (*(code *)(*local_38)[4])();
  }
  else if (local_38 != (void ***)0x0) {
    (*(code *)(*local_38)[5])();
  }
  if (*(long *)PTR____stack_chk_guard_100a44490 == local_20) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

void KontrolS_MK2_MCU_Server::isConnectedToDaw() const {
return *(long *)(this + 0x48) != 0;
}

void KontrolS_MK2_MCU_Server::isEnabled() const {
return *(long *)(this + 0x48) != 0;
}

void KontrolS_MK2_MCU_Server::registerClient() {
long *plVar1;
  KontrolS_MK2_MCU_Client *this_00;
  
  // std code
  plVar1 = *(long **)(this + 0x50);
  this_00 = (KontrolS_MK2_MCU_Client *)new(0xa0);
  KontrolS_MK2_MCU_Client::KontrolS_MK2_MCU_Client(this_00,this);
  (**(code **)(*plVar1 + 0x38))(plVar1,this_00);
  DawControlServer::onClientHandleCreated((DawControlServer *)this);
  // std code
  return;
}

void KontrolS_MK2_MCU_Server::removeClient() {
KontrolS_MK2_MCU_Server *pKVar1;
  long lVar2;
  void **local_68 [4];
  void ***local_48;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_100a44490;
  // std code
  local_68[0] = &PTR____func_100a4b0b8;
  local_48 = local_68;
  lVar2 = (**(code **)(**(long **)(this + 0x50) + 0xf8))(*(long **)(this + 0x50),local_68);
  if (local_68 == local_48) {
    (*(code *)(*local_48)[4])();
  }
  else if (local_48 != (void ***)0x0) {
    (*(code *)(*local_48)[5])();
  }
  if (lVar2 != 0) {
    pKVar1 = *(KontrolS_MK2_MCU_Server **)(this + 0xc0);
    *(unsigned long long *)(this + 0xc0) = 0;
    if (this + 0xa0 == pKVar1) {
      (**(code **)(*(long *)pKVar1 + 0x20))();
    }
    else if (pKVar1 != (KontrolS_MK2_MCU_Server *)0x0) {
      (**(code **)(*(long *)pKVar1 + 0x28))();
    }
    (**(code **)(**(long **)(this + 0x50) + 0x40))(*(long **)(this + 0x50),lVar2);
  }
  // std code
  if (*(long *)PTR____stack_chk_guard_100a44490 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

KontrolS_MK2_MCU_Server::~KontrolS_MK2_MCU_Server() {
~KontrolS_MK2_MCU_Server(this);
  delete(this);
  return;
}
}
