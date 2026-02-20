#include <ni/controller_editor/MaschineMK3PlusController.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

MaschineMK3PlusController::~MaschineMK3PlusController() {
long lVar1;
  uint local_24;
  
  *(void ***)this = &PTR__IControllerWithMCSModelsAndWidget_101ac3420;
  lVar1 = *(long *)(this + 0x18);
  (**(code **)(*(long *)(*(long *)(this + 0x20) + 0x7c8) + 0x18))(*(long *)(this + 0x20) + 0x7c8);
  // std code
  // std code
  __tree<// std code
  ::__erase_unique<unsigned_int>
            ((__tree<// std code
              *)(lVar1 + 0xca0),&local_24);
  IMultiControllerMaster<NI::ISingleController<NI::MaschineMK3PlusModelBase,NI::NHL2::MaschinePlus::Subscription,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>,NI::MaschineMK3PlusModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMK3PlusModelBase,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>,NI::NHL2::MaschinePlus::Subscription,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>
  ::s_uInstancesRefCount =
       IMultiControllerMaster<NI::ISingleController<NI::MaschineMK3PlusModelBase,NI::NHL2::MaschinePlus::Subscription,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>,NI::MaschineMK3PlusModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMK3PlusModelBase,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>,NI::NHL2::MaschinePlus::Subscription,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>
       ::s_uInstancesRefCount + -1;
  // std code
  if (IMultiControllerMaster<NI::ISingleController<NI::MaschineMK3PlusModelBase,NI::NHL2::MaschinePlus::Subscription,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>,NI::MaschineMK3PlusModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMK3PlusModelBase,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>,NI::NHL2::MaschinePlus::Subscription,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>
      ::s_uInstancesRefCount == 0) {
    if (IMultiControllerMaster<NI::ISingleController<NI::MaschineMK3PlusModelBase,NI::NHL2::MaschinePlus::Subscription,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>,NI::MaschineMK3PlusModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMK3PlusModelBase,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>,NI::NHL2::MaschinePlus::Subscription,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>
        ::s_pMasterInstanceModel != (long *)0x0) {
      (**(code **)(*IMultiControllerMaster<NI::ISingleController<NI::MaschineMK3PlusModelBase,NI::NHL2::MaschinePlus::Subscription,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>,NI::MaschineMK3PlusModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMK3PlusModelBase,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>,NI::NHL2::MaschinePlus::Subscription,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>
                    ::s_pMasterInstanceModel + 8))();
    }
    IMultiControllerMaster<NI::ISingleController<NI::MaschineMK3PlusModelBase,NI::NHL2::MaschinePlus::Subscription,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>,NI::MaschineMK3PlusModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMK3PlusModelBase,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>,NI::NHL2::MaschinePlus::Subscription,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>
    ::s_pMasterInstanceModel = (long *)0x0;
  }
  *(unsigned long long *)(this + 0x20) = 0;
  *(void ***)this = &PTR__IControllerWithWidget_101abc328;
  if (*(long *)(this + 0x10) != 0) {
    // std code
  }
  delete(this);
  return;
}
}
