#include <ni/controller_editor/TraktorKontrolX1MK2Controller.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

void TraktorKontrolX1MK2Controller::recalibratePotiGroup(unsigned int) const {
char cVar1;
  long *plVar2;
  long lVar3;
  unsigned long long uVar4;
  unsigned int in_register_0000003c;
  long *plVar5;
  __tree_node **local_590;
  __tree_node *local_588;
  unsigned long long uStack_580;
  __tree_node **local_578;
  __tree_node *local_570;
  unsigned long long uStack_568;
  __tree_node **local_560;
  __tree_node *local_558;
  unsigned long long uStack_550;
  void2 local_544;
  unsigned char local_542;
  void2 local_541;
  unsigned char local_53f;
  void2 local_53e;
  unsigned char local_53c;
  void2 local_53b;
  unsigned char local_539;
  unsigned long long local_538;
  void **local_508;
  DialogSpecs local_2b8 [72];
  unsigned int local_270;
  unsigned char local_26c;
  unsigned long long local_268;
  unsigned long long uStack_260;
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
  long local_208 [4];
  long *local_1e8;
  long local_1d8 [4];
  long *local_1b8;
  long local_1a8 [4];
  long *local_188;
  long local_178 [4];
  long *local_158;
  void **local_148;
  unsigned long long local_140;
  void ***local_128;
  void **local_118;
  unsigned long long local_110;
  void ***local_f8;
  void **local_e8;
  unsigned long long local_e0;
  void ***local_c8;
  void **local_b8;
  unsigned long long local_b0;
  void ***local_98;
  void **local_88;
  unsigned long long local_80;
  void ***local_68;
  void **local_58;
  unsigned long long local_50;
  void ***local_38;
  long local_28;
  
  plVar5 = (long *)CONCAT44(in_register_0000003c,param_1);
  local_28 = *(long *)PTR____stack_chk_guard_101ab4610;
  plVar2 = (long *)(**(code **)(*plVar5 + 0x10))();
  cVar1 = (**(code **)(*plVar2 + 400))(plVar2);
  if (cVar1 != '\0') {
    plVar2 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5);
    lVar3 = (**(code **)(*plVar2 + 0x160))(plVar2);
    if (lVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = ___dynamic_cast(lVar3,&NHL2::Controller::typeinfo,
                              &NHL2::Traktor::KontrolX1MK2::Controller::typeinfo,0);
    }
    local_590 = &local_588;
    local_588 = (__tree_node *)0x0;
    uStack_580 = 0;
    local_578 = &local_570;
    local_570 = (__tree_node *)0x0;
    uStack_568 = 0;
    local_560 = &local_558;
    local_558 = (__tree_node *)0x0;
    uStack_550 = 0;
    local_58 = &PTR____func_101af1430;
    local_50 = uVar4;
    local_38 = &local_58;
    DialogSpecs::setFunctionForCalibrationType((DialogSpecs *)&local_590,1,&local_58);
    if (&local_58 == local_38) {
      (*(code *)(*local_38)[4])();
    }
    else if (local_38 != (void ***)0x0) {
      (*(code *)(*local_38)[5])();
    }
    local_88 = &PTR____func_101af14b0;
    local_80 = uVar4;
    local_68 = &local_88;
    DialogSpecs::setFunctionForCalibrationType((DialogSpecs *)&local_590,2,&local_88);
    if (&local_88 == local_68) {
      (*(code *)(*local_68)[4])();
    }
    else if (local_68 != (void ***)0x0) {
      (*(code *)(*local_68)[5])();
    }
    local_b8 = &PTR____func_101af1530;
    local_b0 = uVar4;
    local_98 = &local_b8;
    DialogSpecs::setFunctionForCalibrationType((DialogSpecs *)&local_590,3,&local_b8);
    if (&local_b8 == local_98) {
      (*(code *)(*local_98)[4])();
    }
    else if (local_98 != (void ***)0x0) {
      (*(code *)(*local_98)[5])();
    }
    local_e8 = &PTR____func_101af15b0;
    local_e0 = uVar4;
    local_c8 = &local_e8;
    DialogSpecs::setFunctionForCalibrationType((DialogSpecs *)&local_590,4,&local_e8);
    if (&local_e8 == local_c8) {
      (*(code *)(*local_c8)[4])();
    }
    else if (local_c8 != (void ***)0x0) {
      (*(code *)(*local_c8)[5])();
    }
    local_118 = &PTR____func_101af1630;
    local_110 = uVar4;
    local_f8 = &local_118;
    DialogSpecs::setFunctionForCalibrationType((DialogSpecs *)&local_590,5,&local_118);
    if (&local_118 == local_f8) {
      (*(code *)(*local_f8)[4])();
    }
    else if (local_f8 != (void ***)0x0) {
      (*(code *)(*local_f8)[5])();
    }
    local_148 = &PTR____func_101af16b0;
    local_140 = uVar4;
    local_128 = &local_148;
    DialogSpecs::setFunctionForCalibrationType((DialogSpecs *)&local_590,0,&local_148);
    if (&local_148 == local_128) {
      (*(code *)(*local_128)[4])();
    }
    else if (local_128 != (void ***)0x0) {
      (*(code *)(*local_128)[5])();
    }
    local_538 = (void **)CONCAT62(CONCAT51(local_538._3_5_,local_542),local_544);
    local_158 = (long *)0x0;
    local_158 = (long *)new char[0x28];
    *local_158 = (long)&PTR____func_101af1730;
    *(unsigned int *)(local_158 + 1) = 0x61;
    *(unsigned int *)((long)local_158 + 0xc) = 0;
    *(unsigned int *)(local_158 + 2) = 0;
    *(unsigned int *)((long)local_158 + 0x14) = 0;
    local_158[3] = (long)plVar5;
    *(unsigned char *)(local_158 + 4) = 0;
    *(void2 *)((long)local_158 + 0x21) = (void2)local_538;
    *(unsigned char *)((long)local_158 + 0x23) = local_538._2_1_;
    *(unsigned int *)((long)local_158 + 0x24) = 0;
    DialogSpecs::setFunctionForTextRetrievalType((DialogSpecs *)&local_590,0,local_178);
    if (local_178 == local_158) {
      (**(code **)(*local_158 + 0x20))();
    }
    else if (local_158 != (long *)0x0) {
      (**(code **)(*local_158 + 0x28))();
    }
    local_538 = (void **)CONCAT62(CONCAT51(local_538._3_5_,local_53f),local_541);
    local_188 = (long *)0x0;
    local_188 = (long *)new char[0x28];
    *local_188 = (long)&PTR____func_101af1730;
    *(unsigned int *)(local_188 + 1) = 0x61;
    *(unsigned int *)((long)local_188 + 0xc) = 0;
    *(unsigned int *)(local_188 + 2) = 0;
    *(unsigned int *)((long)local_188 + 0x14) = 0;
    local_188[3] = (long)plVar5;
    *(unsigned char *)(local_188 + 4) = 1;
    *(void2 *)((long)local_188 + 0x21) = (void2)local_538;
    *(unsigned char *)((long)local_188 + 0x23) = local_538._2_1_;
    *(unsigned int *)((long)local_188 + 0x24) = 0;
    DialogSpecs::setFunctionForTextRetrievalType((DialogSpecs *)&local_590,1,local_1a8);
    if (local_1a8 == local_188) {
      (**(code **)(*local_188 + 0x20))();
    }
    else if (local_188 != (long *)0x0) {
      (**(code **)(*local_188 + 0x28))();
    }
    local_538 = (void **)CONCAT62(CONCAT51(local_538._3_5_,local_53c),local_53e);
    local_1b8 = (long *)0x0;
    local_1b8 = (long *)new char[0x28];
    *local_1b8 = (long)&PTR____func_101af1730;
    *(unsigned int *)(local_1b8 + 1) = 0x61;
    *(unsigned int *)((long)local_1b8 + 0xc) = 0;
    *(unsigned int *)(local_1b8 + 2) = 0;
    *(unsigned int *)((long)local_1b8 + 0x14) = 0;
    local_1b8[3] = (long)plVar5;
    *(unsigned char *)(local_1b8 + 4) = 2;
    *(void2 *)((long)local_1b8 + 0x21) = (void2)local_538;
    *(unsigned char *)((long)local_1b8 + 0x23) = local_538._2_1_;
    *(unsigned int *)((long)local_1b8 + 0x24) = 0;
    DialogSpecs::setFunctionForTextRetrievalType((DialogSpecs *)&local_590,2,local_1d8);
    if (local_1d8 == local_1b8) {
      (**(code **)(*local_1b8 + 0x20))();
    }
    else if (local_1b8 != (long *)0x0) {
      (**(code **)(*local_1b8 + 0x28))();
    }
    local_538 = (void **)CONCAT62(CONCAT51(local_538._3_5_,local_539),local_53b);
    local_1e8 = (long *)0x0;
    local_1e8 = (long *)new char[0x28];
    *local_1e8 = (long)&PTR____func_101af1730;
    *(unsigned int *)(local_1e8 + 1) = 0x61;
    *(unsigned int *)((long)local_1e8 + 0xc) = 0;
    *(unsigned int *)(local_1e8 + 2) = 0;
    *(unsigned int *)((long)local_1e8 + 0x14) = 0;
    local_1e8[3] = (long)plVar5;
    *(unsigned char *)(local_1e8 + 4) = 3;
    *(void2 *)((long)local_1e8 + 0x21) = (void2)local_538;
    *(unsigned char *)((long)local_1e8 + 0x23) = local_538._2_1_;
    *(unsigned int *)((long)local_1e8 + 0x24) = 0;
    DialogSpecs::setFunctionForTextRetrievalType((DialogSpecs *)&local_590,3,local_208);
    if (local_208 == local_1e8) {
      (**(code **)(*local_1e8 + 0x20))();
    }
    else if (local_1e8 != (long *)0x0) {
      (**(code **)(*local_1e8 + 0x28))();
    }
    NWL::Dialog::Dialog((Dialog *)&local_538);
    local_538 = &PTR__ICalibrationDialog_101af59c0;
    local_508 = &PTR__ICalibrationDialog_101af5a60;
    DialogSpecs::DialogSpecs(local_2b8,(DialogSpecs *)&local_590);
    local_270 = 0xffffffff;
    local_26c = 0;
    local_538 = &PTR__PotiCalibrationDialog_101af5b80;
    local_508 = &PTR__PotiCalibrationDialog_101af5c20;
    local_268 = 0;
    uStack_260 = 0;
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
    PotiCalibrationDialog::showDialog((PotiCalibrationDialog *)&local_538);
    PotiCalibrationDialog::~PotiCalibrationDialog((PotiCalibrationDialog *)&local_538);
    // std code
    __tree<// std code
    ::destroy((__tree<// std code
               *)&local_560,local_558);
    // std code
    __tree<// std code
    ::destroy((__tree<// std code
               *)&local_578,local_570);
    // std code
    __tree<// std code
    ::destroy((__tree<// std code
               *)&local_590,local_588);
  }
  if (*(long *)PTR____stack_chk_guard_101ab4610 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

TraktorKontrolX1MK2Controller::TraktorKontrolX1MK2Controller(unsigned int) {
TraktorKontrolX1MK2Controller(this,param_1);
  
}

TraktorKontrolX1MK2Controller::~TraktorKontrolX1MK2Controller() {
long lVar1;
  uint local_24;
  
  *(void ***)this = &PTR__IControllerWithMCSModelsAndWidget_101aef930;
  lVar1 = *(long *)(this + 0x18);
  (**(code **)(*(long *)(*(long *)(this + 0x20) + 0x7c8) + 0x18))(*(long *)(this + 0x20) + 0x7c8);
  // std code
  // std code
  __tree<// std code
  ::__erase_unique<unsigned_int>
            ((__tree<// std code
              *)(lVar1 + 0xc90),&local_24);
  IMultiControllerMaster<NI::TraktorKontrolX1MK2MasterModel,NI::TraktorKontrolX1MK2Model,NI::TraktorKontrolX1MK2InstanceModel,NI::NHL2::Traktor::KontrolX1MK2::Subscription,NI::NHL2::Traktor::KontrolX1MK2::Controller,NI::NHL2::Traktor::KontrolX1MK2::MapHandler>
  ::s_uInstancesRefCount =
       IMultiControllerMaster<NI::TraktorKontrolX1MK2MasterModel,NI::TraktorKontrolX1MK2Model,NI::TraktorKontrolX1MK2InstanceModel,NI::NHL2::Traktor::KontrolX1MK2::Subscription,NI::NHL2::Traktor::KontrolX1MK2::Controller,NI::NHL2::Traktor::KontrolX1MK2::MapHandler>
       ::s_uInstancesRefCount + -1;
  // std code
  if (IMultiControllerMaster<NI::TraktorKontrolX1MK2MasterModel,NI::TraktorKontrolX1MK2Model,NI::TraktorKontrolX1MK2InstanceModel,NI::NHL2::Traktor::KontrolX1MK2::Subscription,NI::NHL2::Traktor::KontrolX1MK2::Controller,NI::NHL2::Traktor::KontrolX1MK2::MapHandler>
      ::s_uInstancesRefCount == 0) {
    if (IMultiControllerMaster<NI::TraktorKontrolX1MK2MasterModel,NI::TraktorKontrolX1MK2Model,NI::TraktorKontrolX1MK2InstanceModel,NI::NHL2::Traktor::KontrolX1MK2::Subscription,NI::NHL2::Traktor::KontrolX1MK2::Controller,NI::NHL2::Traktor::KontrolX1MK2::MapHandler>
        ::s_pMasterInstanceModel != (long *)0x0) {
      (**(code **)(*IMultiControllerMaster<NI::TraktorKontrolX1MK2MasterModel,NI::TraktorKontrolX1MK2Model,NI::TraktorKontrolX1MK2InstanceModel,NI::NHL2::Traktor::KontrolX1MK2::Subscription,NI::NHL2::Traktor::KontrolX1MK2::Controller,NI::NHL2::Traktor::KontrolX1MK2::MapHandler>
                    ::s_pMasterInstanceModel + 8))();
    }
    IMultiControllerMaster<NI::TraktorKontrolX1MK2MasterModel,NI::TraktorKontrolX1MK2Model,NI::TraktorKontrolX1MK2InstanceModel,NI::NHL2::Traktor::KontrolX1MK2::Subscription,NI::NHL2::Traktor::KontrolX1MK2::Controller,NI::NHL2::Traktor::KontrolX1MK2::MapHandler>
    ::s_pMasterInstanceModel = (long *)0x0;
  }
  *(unsigned long long *)(this + 0x20) = 0;
  *(void ***)this = &PTR__IControllerWithWidget_101aef9c8;
  if (*(long *)(this + 0x10) != 0) {
    // std code
  }
  delete(this);
  return;
}
}
