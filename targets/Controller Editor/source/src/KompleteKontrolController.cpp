#include <ni/controller_editor/KompleteKontrolController.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

void KompleteKontrolController::hasSubmitButton() const {
return 0;
}

void KompleteKontrolController::isSubmitButtonEnabled() const {
long *plVar1;
  char cVar2;
  
  plVar1 = *(long **)(this + 0x20);
  cVar2 = (**(code **)(*plVar1 + 400))(plVar1);
  if (cVar2 != '\0') {
    // std code
    cVar2 = *(char *)((long)plVar1 + 0xc7c);
    // std code
    return cVar2 != '\0';
  }
  return false;
}

KompleteKontrolController::KompleteKontrolController(unsigned int) {
KompleteKontrolController(this,param_1);
  
}

KompleteKontrolController::~KompleteKontrolController() {
long lVar1;
  uint local_24;
  
  *(void ***)this = &PTR__IControllerWithMCSModelsAndWidget_101ad70d8;
  lVar1 = *(long *)(this + 0x18);
  (**(code **)(*(long *)(*(long *)(this + 0x20) + 0x7c8) + 0x18))(*(long *)(this + 0x20) + 0x7c8);
  // std code
  // std code
  __tree<// std code
  ::__erase_unique<unsigned_int>
            ((__tree<// std code
              *)(lVar1 + 0xd00),&local_24);
  IMultiControllerMaster<NI::KompleteKontrolMasterModel,NI::KompleteKontrolModelBase,NI::KompleteKontrolInstanceModel,NI::NHL2::Komplete::KontrolMK1::Subscription,NI::NHL2::Komplete::KontrolMK1::Controller,NI::NHL2::Komplete::KontrolMK1::MapHandler>
  ::s_uInstancesRefCount =
       IMultiControllerMaster<NI::KompleteKontrolMasterModel,NI::KompleteKontrolModelBase,NI::KompleteKontrolInstanceModel,NI::NHL2::Komplete::KontrolMK1::Subscription,NI::NHL2::Komplete::KontrolMK1::Controller,NI::NHL2::Komplete::KontrolMK1::MapHandler>
       ::s_uInstancesRefCount + -1;
  // std code
  if (IMultiControllerMaster<NI::KompleteKontrolMasterModel,NI::KompleteKontrolModelBase,NI::KompleteKontrolInstanceModel,NI::NHL2::Komplete::KontrolMK1::Subscription,NI::NHL2::Komplete::KontrolMK1::Controller,NI::NHL2::Komplete::KontrolMK1::MapHandler>
      ::s_uInstancesRefCount == 0) {
    if (IMultiControllerMaster<NI::KompleteKontrolMasterModel,NI::KompleteKontrolModelBase,NI::KompleteKontrolInstanceModel,NI::NHL2::Komplete::KontrolMK1::Subscription,NI::NHL2::Komplete::KontrolMK1::Controller,NI::NHL2::Komplete::KontrolMK1::MapHandler>
        ::s_pMasterInstanceModel != (long *)0x0) {
      (**(code **)(*IMultiControllerMaster<NI::KompleteKontrolMasterModel,NI::KompleteKontrolModelBase,NI::KompleteKontrolInstanceModel,NI::NHL2::Komplete::KontrolMK1::Subscription,NI::NHL2::Komplete::KontrolMK1::Controller,NI::NHL2::Komplete::KontrolMK1::MapHandler>
                    ::s_pMasterInstanceModel + 8))();
    }
    IMultiControllerMaster<NI::KompleteKontrolMasterModel,NI::KompleteKontrolModelBase,NI::KompleteKontrolInstanceModel,NI::NHL2::Komplete::KontrolMK1::Subscription,NI::NHL2::Komplete::KontrolMK1::Controller,NI::NHL2::Komplete::KontrolMK1::MapHandler>
    ::s_pMasterInstanceModel = (long *)0x0;
  }
  *(unsigned long long *)(this + 0x20) = 0;
  *(void ***)this = &PTR__IControllerWithWidget_101ad7170;
  if (*(long *)(this + 0x10) != 0) {
    // std code
  }
  delete(this);
  return;
}
}
