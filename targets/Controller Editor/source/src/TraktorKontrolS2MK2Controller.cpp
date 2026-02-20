#include <ni/controller_editor/TraktorKontrolS2MK2Controller.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

TraktorKontrolS2MK2Controller::~TraktorKontrolS2MK2Controller() {
long lVar1;
  uint local_24;
  
  *(void ***)this = &PTR__IControllerWithMCSModelsAndWidget_101ac89f0;
  lVar1 = *(long *)(this + 0x18);
  (**(code **)(*(long *)(*(long *)(this + 0x20) + 0x7c8) + 0x18))(*(long *)(this + 0x20) + 0x7c8);
  // std code
  // std code
  __tree<// std code
  ::__erase_unique<unsigned_int>
            ((__tree<// std code
              *)(lVar1 + 0xc88),&local_24);
  IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS2MK2ModelBase,NI::NHL2::Traktor::KontrolS2MK2::Subscription,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>,NI::TraktorKontrolS2MK2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS2MK2ModelBase,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>,NI::NHL2::Traktor::KontrolS2MK2::Subscription,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>
  ::s_uInstancesRefCount =
       IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS2MK2ModelBase,NI::NHL2::Traktor::KontrolS2MK2::Subscription,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>,NI::TraktorKontrolS2MK2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS2MK2ModelBase,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>,NI::NHL2::Traktor::KontrolS2MK2::Subscription,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>
       ::s_uInstancesRefCount + -1;
  // std code
  if (IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS2MK2ModelBase,NI::NHL2::Traktor::KontrolS2MK2::Subscription,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>,NI::TraktorKontrolS2MK2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS2MK2ModelBase,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>,NI::NHL2::Traktor::KontrolS2MK2::Subscription,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>
      ::s_uInstancesRefCount == 0) {
    if (IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS2MK2ModelBase,NI::NHL2::Traktor::KontrolS2MK2::Subscription,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>,NI::TraktorKontrolS2MK2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS2MK2ModelBase,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>,NI::NHL2::Traktor::KontrolS2MK2::Subscription,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>
        ::s_pMasterInstanceModel != (long *)0x0) {
      (**(code **)(*IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS2MK2ModelBase,NI::NHL2::Traktor::KontrolS2MK2::Subscription,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>,NI::TraktorKontrolS2MK2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS2MK2ModelBase,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>,NI::NHL2::Traktor::KontrolS2MK2::Subscription,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>
                    ::s_pMasterInstanceModel + 8))();
    }
    IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS2MK2ModelBase,NI::NHL2::Traktor::KontrolS2MK2::Subscription,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>,NI::TraktorKontrolS2MK2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS2MK2ModelBase,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>,NI::NHL2::Traktor::KontrolS2MK2::Subscription,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>
    ::s_pMasterInstanceModel = (long *)0x0;
  }
  *(unsigned long long *)(this + 0x20) = 0;
  *(void ***)this = &PTR__IControllerWithWidget_101ac8ab8;
  if (*(long *)(this + 0x10) != 0) {
    // std code
  }
  delete(this);
  return;
}
}
