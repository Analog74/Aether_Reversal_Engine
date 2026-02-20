#include <ni/controller_editor/UIA.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA::COCOA::WindowImplBase::WindowImplBase(NI {

void UIA::WindowBase&) {
DeviceContextImpl *this_00;
  
  DETAIL::WindowImpl::WindowImpl((WindowImpl *)this,param_1);
  *(void ***)this = &PTR__WindowImplBase_101b23d80;
  *(unsigned long long *)(this + 0x18) = 0;
  *(unsigned long long *)(this + 0x20) = 0;
  *(unsigned long long *)(this + 0x28) = 0;
  this_00 = (DeviceContextImpl *)new char[0x30];
  DeviceContextImpl::DeviceContextImpl(this_00,0,0);
  *(DeviceContextImpl **)(this + 0x30) = this_00;
  this[0x38] = (WindowImplBase)0x0;
  *(unsigned long long *)(this + 0x70) = 0;
  this[0x80] = (WindowImplBase)0x0;
  *(unsigned long long *)(this + 0x3c) = 0;
  *(unsigned long long *)(this + 0x44) = 0;
  this[0x4c] = (WindowImplBase)0x0;
  return;
}
}
