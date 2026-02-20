#include <ni/controller_editor/TraktorKontrolS4Controller.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

void TraktorKontrolS4Controller::checkJogwheelCalibrationState(unsigned int) const {
byte bVar1;
  long lVar2;
  Controller *this_00;
  int local_14;
  
  lVar2 = (**(code **)(**(long **)(this + 0x20) + 0x160))();
  if (lVar2 == 0) {
    this_00 = (Controller *)0x0;
  }
  else {
    this_00 = (Controller *)
              ___dynamic_cast(lVar2,&NHL2::Controller::typeinfo,
                              &NHL2::Traktor::KontrolS4MK1::Controller::typeinfo,0);
  }
  local_14 = 0xff;
  bVar1 = NHL2::Traktor::KontrolS4MK1::Controller::getJogwheelCalibrationState
                    (this_00,param_1,(eJogwheelCalibrationMode *)&local_14);
  return bVar1 & local_14 != 0xff;
}

void TraktorKontrolS4Controller::recalibrateJogwheel(unsigned int) const {
char cVar1;
  long lVar2;
  __tree_node **local_578;
  __tree_node *local_570;
  unsigned long long uStack_568;
  __tree_node **local_560;
  __tree_node *local_558;
  unsigned long long uStack_550;
  __tree_node **local_548;
  __tree_node *local_540;
  unsigned long long uStack_538;
  void2 local_52b;
  unsigned char local_529;
  unsigned long long local_528;
  void **local_4f8;
  DialogSpecs local_2a8 [72];
  unsigned int local_260;
  unsigned char local_25c;
  unsigned long long local_258;
  unsigned long long uStack_250;
  unsigned long long local_248;
  unsigned long long uStack_240;
  unsigned long long local_238;
  unsigned long long uStack_230;
  unsigned long long local_228;
  unsigned long long uStack_220;
  unsigned long long local_218;
  unsigned long long uStack_210;
  unsigned long long local_208;
  unsigned long long uStack_200;
  unsigned long long local_1f8;
  unsigned long long uStack_1f0;
  long local_1e8 [4];
  long *local_1c8;
  long local_1b8 [4];
  long *local_198;
  long local_188 [4];
  long *local_168;
  long local_158 [4];
  long *local_138;
  long local_128 [4];
  long *local_108;
  long local_f8 [4];
  long *local_d8;
  long local_c8 [4];
  long *local_a8;
  long local_98 [4];
  long *local_78;
  long local_68 [4];
  long *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101ab4610;
  cVar1 = (**(code **)(**(long **)(this + 0x20) + 400))();
  if (cVar1 != '\0') {
    lVar2 = (**(code **)(**(long **)(this + 0x20) + 0x160))();
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = ___dynamic_cast(lVar2,&NHL2::Controller::typeinfo,
                              &NHL2::Traktor::KontrolS4MK1::Controller::typeinfo,0);
    }
    local_578 = &local_570;
    local_570 = (__tree_node *)0x0;
    uStack_568 = 0;
    local_560 = &local_558;
    local_558 = (__tree_node *)0x0;
    uStack_550 = 0;
    local_548 = &local_540;
    local_540 = (__tree_node *)0x0;
    uStack_538 = 0;
    local_48 = (long *)0x0;
    local_48 = (long *)new char[0x28];
    *local_48 = (long)&PTR____func_101aea180;
    local_48[1] = (long)NHL2::Traktor::KontrolS4MK1::Controller::calibrateJogwheel;
    local_48[2] = 0;
    local_48[3] = lVar2;
    *(uint *)(local_48 + 4) = param_1;
    *(unsigned int *)((long)local_48 + 0x24) = 2;
    DialogSpecs::setFunctionForCalibrationType((DialogSpecs *)&local_578,6,local_68);
    if (local_68 == local_48) {
      (**(code **)(*local_48 + 0x20))();
    }
    else if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x28))();
    }
    local_78 = (long *)0x0;
    local_78 = (long *)new char[0x28];
    *local_78 = (long)&PTR____func_101aea180;
    local_78[1] = (long)NHL2::Traktor::KontrolS4MK1::Controller::calibrateJogwheel;
    local_78[2] = 0;
    local_78[3] = lVar2;
    *(uint *)(local_78 + 4) = param_1;
    *(unsigned int *)((long)local_78 + 0x24) = 3;
    DialogSpecs::setFunctionForCalibrationType((DialogSpecs *)&local_578,7,local_98);
    if (local_98 == local_78) {
      (**(code **)(*local_78 + 0x20))();
    }
    else if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x28))();
    }
    local_a8 = (long *)0x0;
    local_a8 = (long *)new char[0x28];
    *local_a8 = (long)&PTR____func_101aea180;
    local_a8[1] = (long)NHL2::Traktor::KontrolS4MK1::Controller::calibrateJogwheel;
    local_a8[2] = 0;
    local_a8[3] = lVar2;
    *(uint *)(local_a8 + 4) = param_1;
    *(unsigned int *)((long)local_a8 + 0x24) = 4;
    DialogSpecs::setFunctionForCalibrationType((DialogSpecs *)&local_578,8,local_c8);
    if (local_c8 == local_a8) {
      (**(code **)(*local_a8 + 0x20))();
    }
    else if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x28))();
    }
    local_d8 = (long *)0x0;
    local_d8 = (long *)new char[0x28];
    *local_d8 = (long)&PTR____func_101aea180;
    local_d8[1] = (long)NHL2::Traktor::KontrolS4MK1::Controller::calibrateJogwheel;
    local_d8[2] = 0;
    local_d8[3] = lVar2;
    *(uint *)(local_d8 + 4) = param_1;
    *(unsigned int *)((long)local_d8 + 0x24) = 1;
    DialogSpecs::setFunctionForCalibrationType((DialogSpecs *)&local_578,9,local_f8);
    if (local_f8 == local_d8) {
      (**(code **)(*local_d8 + 0x20))();
    }
    else if (local_d8 != (long *)0x0) {
      (**(code **)(*local_d8 + 0x28))();
    }
    local_108 = (long *)0x0;
    local_108 = (long *)new char[0x28];
    *local_108 = (long)&PTR____func_101aea180;
    local_108[1] = (long)NHL2::Traktor::KontrolS4MK1::Controller::calibrateJogwheel;
    local_108[2] = 0;
    local_108[3] = lVar2;
    *(uint *)(local_108 + 4) = param_1;
    *(unsigned int *)((long)local_108 + 0x24) = 10;
    DialogSpecs::setFunctionForCalibrationType((DialogSpecs *)&local_578,10,local_128);
    if (local_128 == local_108) {
      (**(code **)(*local_108 + 0x20))();
    }
    else if (local_108 != (long *)0x0) {
      (**(code **)(*local_108 + 0x28))();
    }
    local_138 = (long *)0x0;
    local_138 = (long *)new char[0x28];
    *local_138 = (long)&PTR____func_101aea180;
    local_138[1] = (long)NHL2::Traktor::KontrolS4MK1::Controller::calibrateJogwheel;
    local_138[2] = 0;
    local_138[3] = lVar2;
    *(uint *)(local_138 + 4) = param_1;
    *(unsigned int *)((long)local_138 + 0x24) = 0xfac;
    DialogSpecs::setFunctionForCalibrationType((DialogSpecs *)&local_578,0xb,local_158);
    if (local_158 == local_138) {
      (**(code **)(*local_138 + 0x20))();
    }
    else if (local_138 != (long *)0x0) {
      (**(code **)(*local_138 + 0x28))();
    }
    local_168 = (long *)0x0;
    local_168 = (long *)new char[0x28];
    *local_168 = (long)&PTR____func_101aea180;
    local_168[1] = (long)NHL2::Traktor::KontrolS4MK1::Controller::calibrateJogwheel;
    local_168[2] = 0;
    local_168[3] = lVar2;
    *(uint *)(local_168 + 4) = param_1;
    *(unsigned int *)((long)local_168 + 0x24) = 0;
    DialogSpecs::setFunctionForCalibrationType((DialogSpecs *)&local_578,0,local_188);
    if (local_188 == local_168) {
      (**(code **)(*local_168 + 0x20))();
    }
    else if (local_168 != (long *)0x0) {
      (**(code **)(*local_168 + 0x28))();
    }
    local_198 = (long *)0x0;
    local_198 = (long *)new char[0x28];
    *local_198 = (long)&PTR____func_101aea218;
    local_198[1] = (long)checkJogwheelCalibrationState;
    local_198[2] = 0;
    local_198[3] = (long)this;
    *(uint *)(local_198 + 4) = param_1;
    DialogSpecs::setFunctionForConfirmationType((DialogSpecs *)&local_578,0,local_1b8);
    if (local_1b8 == local_198) {
      (**(code **)(*local_198 + 0x20))();
    }
    else if (local_198 != (long *)0x0) {
      (**(code **)(*local_198 + 0x28))();
    }
    local_528 = (void **)CONCAT62(CONCAT51(local_528._3_5_,local_529),local_52b);
    local_1c8 = (long *)0x0;
    local_1c8 = (long *)new char[0x28];
    *local_1c8 = (long)&PTR____func_101aea2c8;
    *(unsigned int *)(local_1c8 + 1) = 0x69;
    *(unsigned int *)((long)local_1c8 + 0xc) = 0;
    *(unsigned int *)(local_1c8 + 2) = 0;
    *(unsigned int *)((long)local_1c8 + 0x14) = 0;
    local_1c8[3] = (long)this;
    *(unsigned char *)(local_1c8 + 4) = 0;
    *(void2 *)((long)local_1c8 + 0x21) = (void2)local_528;
    *(unsigned char *)((long)local_1c8 + 0x23) = local_528._2_1_;
    *(uint *)((long)local_1c8 + 0x24) = param_1;
    DialogSpecs::setFunctionForTextRetrievalType((DialogSpecs *)&local_578,0,local_1e8);
    if (local_1e8 == local_1c8) {
      (**(code **)(*local_1c8 + 0x20))();
    }
    else if (local_1c8 != (long *)0x0) {
      (**(code **)(*local_1c8 + 0x28))();
    }
    NWL::Dialog::Dialog((Dialog *)&local_528);
    local_528 = &PTR__ICalibrationDialog_101af59c0;
    local_4f8 = &PTR__ICalibrationDialog_101af5a60;
    DialogSpecs::DialogSpecs(local_2a8,(DialogSpecs *)&local_578);
    local_260 = 0xffffffff;
    local_25c = 0;
    local_528 = &PTR__JogwheelCalibrationDialog_101af5d20;
    local_4f8 = &PTR__JogwheelCalibrationDialog_101af5dc0;
    local_258 = 0;
    uStack_250 = 0;
    local_248 = 0;
    uStack_240 = 0;
    local_238 = 0;
    uStack_230 = 0;
    local_228 = 0;
    uStack_220 = 0;
    local_218 = 0;
    uStack_210 = 0;
    local_208 = 0;
    uStack_200 = 0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    JogwheelCalibrationDialog::showDialog((JogwheelCalibrationDialog *)&local_528);
    JogwheelCalibrationDialog::~JogwheelCalibrationDialog((JogwheelCalibrationDialog *)&local_528);
    // std code
    __tree<// std code
    ::destroy((__tree<// std code
               *)&local_548,local_540);
    // std code
    __tree<// std code
    ::destroy((__tree<// std code
               *)&local_560,local_558);
    // std code
    __tree<// std code
    ::destroy((__tree<// std code
               *)&local_578,local_570);
  }
  if (*(long *)PTR____stack_chk_guard_101ab4610 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

TraktorKontrolS4Controller::~TraktorKontrolS4Controller() {
long lVar1;
  uint local_24;
  
  *(void ***)this = &PTR__IControllerWithMCSModelsAndWidget_101aca5f8;
  lVar1 = *(long *)(this + 0x18);
  (**(code **)(*(long *)(*(long *)(this + 0x20) + 0x7c8) + 0x18))(*(long *)(this + 0x20) + 0x7c8);
  // std code
  // std code
  __tree<// std code
  ::__erase_unique<unsigned_int>
            ((__tree<// std code
              *)(lVar1 + 0xc88),&local_24);
  IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS4ModelBase,NI::NHL2::Traktor::KontrolS4MK1::Subscription,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>,NI::TraktorKontrolS4ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS4ModelBase,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>,NI::NHL2::Traktor::KontrolS4MK1::Subscription,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>
  ::s_uInstancesRefCount =
       IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS4ModelBase,NI::NHL2::Traktor::KontrolS4MK1::Subscription,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>,NI::TraktorKontrolS4ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS4ModelBase,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>,NI::NHL2::Traktor::KontrolS4MK1::Subscription,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>
       ::s_uInstancesRefCount + -1;
  // std code
  if (IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS4ModelBase,NI::NHL2::Traktor::KontrolS4MK1::Subscription,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>,NI::TraktorKontrolS4ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS4ModelBase,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>,NI::NHL2::Traktor::KontrolS4MK1::Subscription,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>
      ::s_uInstancesRefCount == 0) {
    if (IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS4ModelBase,NI::NHL2::Traktor::KontrolS4MK1::Subscription,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>,NI::TraktorKontrolS4ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS4ModelBase,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>,NI::NHL2::Traktor::KontrolS4MK1::Subscription,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>
        ::s_pMasterInstanceModel != (long *)0x0) {
      (**(code **)(*IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS4ModelBase,NI::NHL2::Traktor::KontrolS4MK1::Subscription,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>,NI::TraktorKontrolS4ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS4ModelBase,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>,NI::NHL2::Traktor::KontrolS4MK1::Subscription,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>
                    ::s_pMasterInstanceModel + 8))();
    }
    IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS4ModelBase,NI::NHL2::Traktor::KontrolS4MK1::Subscription,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>,NI::TraktorKontrolS4ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS4ModelBase,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>,NI::NHL2::Traktor::KontrolS4MK1::Subscription,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>
    ::s_pMasterInstanceModel = (long *)0x0;
  }
  *(unsigned long long *)(this + 0x20) = 0;
  *(void ***)this = &PTR__IControllerWithWidget_101aca6c0;
  if (*(long *)(this + 0x10) != 0) {
    // std code
  }
  delete(this);
  return;
}
}
