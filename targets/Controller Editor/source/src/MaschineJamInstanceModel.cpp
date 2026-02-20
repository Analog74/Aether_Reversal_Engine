#include <ni/controller_editor/MaschineJamInstanceModel.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace non-virtual thunk to NI {

MaschineJamInstanceModel::~MaschineJamInstanceModel() {
MaschineJamInstanceModel *pMVar1;
  
  *(void ***)(this + -0x980) = &PTR__IMultiControllerInstance_101ae0f90;
  *(void ***)(this + -0x960) = &PTR__IMultiControllerInstance_101ae12f0;
  *(void ***)(this + -0x1c0) = &PTR_getNumberOfDeviceSections_101ae1318;
  *(void ***)(this + -0x1b8) = &PTR__IMultiControllerInstance_101ae1330;
  *(void ***)(this + -0x1a8) = &PTR__IMultiControllerInstance_101ae13b0;
  *(void ***)(this + -0x1a0) = &PTR__IMultiControllerInstance_101ae13f0;
  *(void ***)this = &PTR__IMultiControllerInstance_101ae1420;
  pMVar1 = *(MaschineJamInstanceModel **)(this + 0x330);
  if (this + 0x310 == pMVar1) {
    (**(code **)(*(long *)pMVar1 + 0x20))();
  }
  else if (pMVar1 != (MaschineJamInstanceModel *)0x0) {
    (**(code **)(*(long *)pMVar1 + 0x28))();
  }
  IModelWithControllerAndMap<NI::Model,NI::NHL2::MaschineJam::Controller,NI::NHL2::MaschineJam::MapHandler,1u>
  ::~IModelWithControllerAndMap
            ((IModelWithControllerAndMap<NI::Model,NI::NHL2::MaschineJam::Controller,NI::NHL2::MaschineJam::MapHandler,1u>
              *)(this + -0x980));
  delete((IModelWithControllerAndMap<NI::Model,NI::NHL2::MaschineJam::Controller,NI::NHL2::MaschineJam::MapHandler,1u>
                   *)(this + -0x980));
  return;
}
}
