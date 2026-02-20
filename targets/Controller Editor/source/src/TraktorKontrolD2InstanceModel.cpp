#include <ni/controller_editor/TraktorKontrolD2InstanceModel.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace non-virtual thunk to NI {

TraktorKontrolD2InstanceModel::~TraktorKontrolD2InstanceModel() {
TraktorKontrolD2InstanceModel *pTVar1;
  
  *(void ***)(this + -0x980) = &PTR__IMultiControllerInstance_101ae3098;
  *(void ***)(this + -0x960) = &PTR__IMultiControllerInstance_101ae33f8;
  *(void ***)(this + -0x1c0) = &PTR_getNumberOfDeviceSections_101ae3420;
  *(void ***)(this + -0x1b8) = &PTR__IMultiControllerInstance_101ae3438;
  *(void ***)(this + -0x1a8) = &PTR__IMultiControllerInstance_101ae34b8;
  *(void ***)(this + -0x1a0) = &PTR__IMultiControllerInstance_101ae34f8;
  *(void ***)this = &PTR__IMultiControllerInstance_101ae3528;
  pTVar1 = *(TraktorKontrolD2InstanceModel **)(this + 0x350);
  if (this + 0x330 == pTVar1) {
    (**(code **)(*(long *)pTVar1 + 0x20))();
  }
  else if (pTVar1 != (TraktorKontrolD2InstanceModel *)0x0) {
    (**(code **)(*(long *)pTVar1 + 0x28))();
  }
  IModelWithControllerAndMap<NI::Model,NI::NHL2::Traktor::KontrolD2::Controller,NI::NHL2::Traktor::KontrolD2::MapHandler,1u>
  ::~IModelWithControllerAndMap
            ((IModelWithControllerAndMap<NI::Model,NI::NHL2::Traktor::KontrolD2::Controller,NI::NHL2::Traktor::KontrolD2::MapHandler,1u>
              *)(this + -0x980));
  delete((IModelWithControllerAndMap<NI::Model,NI::NHL2::Traktor::KontrolD2::Controller,NI::NHL2::Traktor::KontrolD2::MapHandler,1u>
                   *)(this + -0x980));
  return;
}
}
