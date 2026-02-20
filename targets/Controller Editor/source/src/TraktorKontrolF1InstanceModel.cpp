#include <ni/controller_editor/TraktorKontrolF1InstanceModel.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace non-virtual thunk to NI {

TraktorKontrolF1InstanceModel::~TraktorKontrolF1InstanceModel() {
TraktorKontrolF1InstanceModel *pTVar1;
  
  *(void ***)(this + -0x980) = &PTR__IMultiControllerInstance_101ae5610;
  *(void ***)(this + -0x960) = &PTR__IMultiControllerInstance_101ae5970;
  *(void ***)(this + -0x1c0) = &PTR_getNumberOfDeviceSections_101ae5998;
  *(void ***)(this + -0x1b8) = &PTR__IMultiControllerInstance_101ae59b0;
  *(void ***)(this + -0x1a8) = &PTR__IMultiControllerInstance_101ae5a30;
  *(void ***)(this + -0x1a0) = &PTR__IMultiControllerInstance_101ae5a70;
  *(void ***)this = &PTR__IMultiControllerInstance_101ae5aa0;
  pTVar1 = *(TraktorKontrolF1InstanceModel **)(this + 0x330);
  if (this + 0x310 == pTVar1) {
    (**(code **)(*(long *)pTVar1 + 0x20))();
  }
  else if (pTVar1 != (TraktorKontrolF1InstanceModel *)0x0) {
    (**(code **)(*(long *)pTVar1 + 0x28))();
  }
  IModelWithControllerAndMap<NI::Model,NI::NHL2::Traktor::KontrolF1::Controller,NI::NHL2::Traktor::KontrolF1::MapHandler,1u>
  ::~IModelWithControllerAndMap
            ((IModelWithControllerAndMap<NI::Model,NI::NHL2::Traktor::KontrolF1::Controller,NI::NHL2::Traktor::KontrolF1::MapHandler,1u>
              *)(this + -0x980));
  delete((IModelWithControllerAndMap<NI::Model,NI::NHL2::Traktor::KontrolF1::Controller,NI::NHL2::Traktor::KontrolF1::MapHandler,1u>
                   *)(this + -0x980));
  return;
}
}
