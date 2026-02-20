#include <ni/controller_editor/TraktorKontrolS8Controller.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

TraktorKontrolS8Controller::~TraktorKontrolS8Controller() {
long lVar1;
  uint local_24;
  
  *(void ***)this = &PTR__IControllerWithMCSModelsAndWidget_101acf940;
  lVar1 = *(long *)(this + 0x18);
  (**(code **)(*(long *)(*(long *)(this + 0x20) + 0x7c8) + 0x18))(*(long *)(this + 0x20) + 0x7c8);
  // std code
  // std code
  __tree<// std code
  ::__erase_unique<unsigned_int>
            ((__tree<// std code
              *)(lVar1 + 0xcb0),&local_24);
  IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS8ModelBase,NI::NHL2::Traktor::KontrolS8::Subscription,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>,NI::TraktorKontrolS8ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS8ModelBase,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>,NI::NHL2::Traktor::KontrolS8::Subscription,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>
  ::s_uInstancesRefCount =
       IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS8ModelBase,NI::NHL2::Traktor::KontrolS8::Subscription,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>,NI::TraktorKontrolS8ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS8ModelBase,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>,NI::NHL2::Traktor::KontrolS8::Subscription,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>
       ::s_uInstancesRefCount + -1;
  // std code
  if (IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS8ModelBase,NI::NHL2::Traktor::KontrolS8::Subscription,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>,NI::TraktorKontrolS8ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS8ModelBase,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>,NI::NHL2::Traktor::KontrolS8::Subscription,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>
      ::s_uInstancesRefCount == 0) {
    if (IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS8ModelBase,NI::NHL2::Traktor::KontrolS8::Subscription,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>,NI::TraktorKontrolS8ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS8ModelBase,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>,NI::NHL2::Traktor::KontrolS8::Subscription,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>
        ::s_pMasterInstanceModel != (long *)0x0) {
      (**(code **)(*IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS8ModelBase,NI::NHL2::Traktor::KontrolS8::Subscription,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>,NI::TraktorKontrolS8ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS8ModelBase,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>,NI::NHL2::Traktor::KontrolS8::Subscription,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>
                    ::s_pMasterInstanceModel + 8))();
    }
    IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS8ModelBase,NI::NHL2::Traktor::KontrolS8::Subscription,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>,NI::TraktorKontrolS8ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS8ModelBase,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>,NI::NHL2::Traktor::KontrolS8::Subscription,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>
    ::s_pMasterInstanceModel = (long *)0x0;
  }
  *(unsigned long long *)(this + 0x20) = 0;
  *(void ***)this = &PTR__IControllerWithWidget_101acfa08;
  if (*(long *)(this + 0x10) != 0) {
    // std code
  }
  delete(this);
  return;
}
}
