#include <ni/controller_editor/TraktorKontrolS5Controller.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

TraktorKontrolS5Controller::~TraktorKontrolS5Controller() {
long lVar1;
  uint local_24;
  
  *(void ***)this = &PTR__IControllerWithMCSModelsAndWidget_101acddc8;
  lVar1 = *(long *)(this + 0x18);
  (**(code **)(*(long *)(*(long *)(this + 0x20) + 0x7c8) + 0x18))(*(long *)(this + 0x20) + 0x7c8);
  // std code
  // std code
  __tree<// std code
  ::__erase_unique<unsigned_int>
            ((__tree<// std code
              *)(lVar1 + 0xcb0),&local_24);
  IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS5ModelBase,NI::NHL2::Traktor::KontrolS5::Subscription,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>,NI::TraktorKontrolS5ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS5ModelBase,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>,NI::NHL2::Traktor::KontrolS5::Subscription,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>
  ::s_uInstancesRefCount =
       IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS5ModelBase,NI::NHL2::Traktor::KontrolS5::Subscription,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>,NI::TraktorKontrolS5ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS5ModelBase,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>,NI::NHL2::Traktor::KontrolS5::Subscription,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>
       ::s_uInstancesRefCount + -1;
  // std code
  if (IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS5ModelBase,NI::NHL2::Traktor::KontrolS5::Subscription,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>,NI::TraktorKontrolS5ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS5ModelBase,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>,NI::NHL2::Traktor::KontrolS5::Subscription,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>
      ::s_uInstancesRefCount == 0) {
    if (IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS5ModelBase,NI::NHL2::Traktor::KontrolS5::Subscription,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>,NI::TraktorKontrolS5ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS5ModelBase,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>,NI::NHL2::Traktor::KontrolS5::Subscription,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>
        ::s_pMasterInstanceModel != (long *)0x0) {
      (**(code **)(*IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS5ModelBase,NI::NHL2::Traktor::KontrolS5::Subscription,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>,NI::TraktorKontrolS5ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS5ModelBase,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>,NI::NHL2::Traktor::KontrolS5::Subscription,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>
                    ::s_pMasterInstanceModel + 8))();
    }
    IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS5ModelBase,NI::NHL2::Traktor::KontrolS5::Subscription,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>,NI::TraktorKontrolS5ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS5ModelBase,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>,NI::NHL2::Traktor::KontrolS5::Subscription,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>
    ::s_pMasterInstanceModel = (long *)0x0;
  }
  *(unsigned long long *)(this + 0x20) = 0;
  *(void ***)this = &PTR__IControllerWithWidget_101acde90;
  if (*(long *)(this + 0x10) != 0) {
    // std code
  }
  delete(this);
  return;
}
}
