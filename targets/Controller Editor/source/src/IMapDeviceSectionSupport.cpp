#include <ni/controller_editor/IMapDeviceSectionSupport.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2 {

void IMapDeviceSectionSupport::getOtherSectionNeedsUpdate() const {
return this[0x128];
}

void IMapDeviceSectionSupport::selectDeviceSection(unsigned int) {
uint uVar1;
  
  uVar1 = (**(code **)(*(long *)this + 0x158))();
  if (param_1 < uVar1) {
    *(uint *)(this + 0x124) = param_1;
  }
  return;
}

void IMapDeviceSectionSupport::setOtherSectionNeedsUpdate(bool param_1) {
}
}
