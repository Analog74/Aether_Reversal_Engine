#include <ni/controller_editor/WindowImpl.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA::DETAIL {

void WindowImpl::getPositionPhysical(bool) const {
void7 in_register_00000031;
  unsigned long long local_18;
  unsigned long long uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  (**(code **)(*(long *)this + 0x1d8))
            (this,&local_18,(int)0(in_register_00000031,param_1) + 0x100);
  return local_18;
}

void WindowImpl::getSizePhysical(bool) const {
void7 in_register_00000031;
  unsigned long long local_18;
  unsigned long long uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  (**(code **)(*(long *)this + 0x1d8))
            (this,&local_18,(int)0(in_register_00000031,param_1) + 0x100);
  return CONCAT44(uStack_10._4_4_ - local_18._4_4_,(int)uStack_10 - (int)local_18);
}

void WindowImpl::setDeleteWindowObject(bool param_1) {
}
}
