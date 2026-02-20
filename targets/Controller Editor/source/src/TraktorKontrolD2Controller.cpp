#include <ni/controller_editor/TraktorKontrolD2Controller.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

TraktorKontrolD2Controller::TraktorKontrolD2Controller(unsigned int) {
TraktorKontrolD2Controller(this,param_1);
  
}

TraktorKontrolD2Controller::~TraktorKontrolD2Controller() {
long lVar1;
  uint local_24;
  
  *(void ***)this = &PTR__IControllerWithMCSModelsAndWidget_101ae1ba0;
  lVar1 = *(long *)(this + 0x18);
  (**(code **)(*(long *)(*(long *)(this + 0x20) + 0x7c8) + 0x18))(*(long *)(this + 0x20) + 0x7c8);
  // std code
  // std code
  __tree<// std code
  ::__erase_unique<unsigned_int>
            ((__tree<// std code
              *)(lVar1 + 0xcb0),&local_24);
  IMultiControllerMaster<NI::TraktorKontrolD2MasterModel,NI::TraktorKontrolD2ModelBase,NI::TraktorKontrolD2InstanceModel,NI::NHL2::Traktor::KontrolD2::Subscription,NI::NHL2::Traktor::KontrolD2::Controller,NI::NHL2::Traktor::KontrolD2::MapHandler>
  ::s_uInstancesRefCount =
       IMultiControllerMaster<NI::TraktorKontrolD2MasterModel,NI::TraktorKontrolD2ModelBase,NI::TraktorKontrolD2InstanceModel,NI::NHL2::Traktor::KontrolD2::Subscription,NI::NHL2::Traktor::KontrolD2::Controller,NI::NHL2::Traktor::KontrolD2::MapHandler>
       ::s_uInstancesRefCount + -1;
  // std code
  if (IMultiControllerMaster<NI::TraktorKontrolD2MasterModel,NI::TraktorKontrolD2ModelBase,NI::TraktorKontrolD2InstanceModel,NI::NHL2::Traktor::KontrolD2::Subscription,NI::NHL2::Traktor::KontrolD2::Controller,NI::NHL2::Traktor::KontrolD2::MapHandler>
      ::s_uInstancesRefCount == 0) {
    if (IMultiControllerMaster<NI::TraktorKontrolD2MasterModel,NI::TraktorKontrolD2ModelBase,NI::TraktorKontrolD2InstanceModel,NI::NHL2::Traktor::KontrolD2::Subscription,NI::NHL2::Traktor::KontrolD2::Controller,NI::NHL2::Traktor::KontrolD2::MapHandler>
        ::s_pMasterInstanceModel != (long *)0x0) {
      (**(code **)(*IMultiControllerMaster<NI::TraktorKontrolD2MasterModel,NI::TraktorKontrolD2ModelBase,NI::TraktorKontrolD2InstanceModel,NI::NHL2::Traktor::KontrolD2::Subscription,NI::NHL2::Traktor::KontrolD2::Controller,NI::NHL2::Traktor::KontrolD2::MapHandler>
                    ::s_pMasterInstanceModel + 8))();
    }
    IMultiControllerMaster<NI::TraktorKontrolD2MasterModel,NI::TraktorKontrolD2ModelBase,NI::TraktorKontrolD2InstanceModel,NI::NHL2::Traktor::KontrolD2::Subscription,NI::NHL2::Traktor::KontrolD2::Controller,NI::NHL2::Traktor::KontrolD2::MapHandler>
    ::s_pMasterInstanceModel = (long *)0x0;
  }
  *(unsigned long long *)(this + 0x20) = 0;
  *(void ***)this = &PTR__IControllerWithWidget_101ae1c38;
  if (*(long *)(this + 0x10) != 0) {
    // std code
  }
  delete(this);
  return;
}
}
