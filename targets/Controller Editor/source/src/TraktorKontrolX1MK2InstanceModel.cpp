#include <ni/controller_editor/TraktorKontrolX1MK2InstanceModel.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace non-virtual thunk to NI {

TraktorKontrolX1MK2InstanceModel::~TraktorKontrolX1MK2InstanceModel() {
TraktorKontrolX1MK2InstanceModel *pTVar1;
  
  *(void ***)(this + -0x980) = &PTR__IMultiControllerInstance_101af0e28;
  *(void ***)(this + -0x960) = &PTR__IMultiControllerInstance_101af1188;
  *(void ***)(this + -0x1c0) = &PTR_getNumberOfDeviceSections_101af11b0;
  *(void ***)(this + -0x1b8) = &PTR__IMultiControllerInstance_101af11c8;
  *(void ***)(this + -0x1a8) = &PTR__IMultiControllerInstance_101af1248;
  *(void ***)(this + -0x1a0) = &PTR__IMultiControllerInstance_101af1288;
  *(void ***)this = &PTR__IMultiControllerInstance_101af12b8;
  pTVar1 = *(TraktorKontrolX1MK2InstanceModel **)(this + 0x330);
  if (this + 0x310 == pTVar1) {
    (**(code **)(*(long *)pTVar1 + 0x20))();
  }
  else if (pTVar1 != (TraktorKontrolX1MK2InstanceModel *)0x0) {
    (**(code **)(*(long *)pTVar1 + 0x28))();
  }
  IModelWithControllerAndMap<NI::Model,NI::NHL2::Traktor::KontrolX1MK2::Controller,NI::NHL2::Traktor::KontrolX1MK2::MapHandler,1u>
  ::~IModelWithControllerAndMap
            ((IModelWithControllerAndMap<NI::Model,NI::NHL2::Traktor::KontrolX1MK2::Controller,NI::NHL2::Traktor::KontrolX1MK2::MapHandler,1u>
              *)(this + -0x980));
  delete((IModelWithControllerAndMap<NI::Model,NI::NHL2::Traktor::KontrolX1MK2::Controller,NI::NHL2::Traktor::KontrolX1MK2::MapHandler,1u>
                   *)(this + -0x980));
  return;
}
}
