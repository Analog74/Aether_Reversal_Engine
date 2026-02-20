#include <ni/controller_editor/IModelDevicePropertiesSupport.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

void IModelDevicePropertiesSupport::setModelIntegerProperty(unsigned int, unsigned int) {
uint local_18;
  uint local_14;
  unsigned long long local_10;
  
  local_10 = 1;
  local_18 = param_2;
  local_14 = param_1;
  (**(code **)(*(long *)this + 0x10))(this,&local_18);
  return;
}
}
