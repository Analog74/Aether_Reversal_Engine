#include <ni/controller_editor/DeviceContextImpl.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA {

void DeviceContextImpl::attachOSHandle(CGContext* param_1) {
}

void DeviceContextImpl::detachOSHandle() {
unsigned long long *puVar1;
  
  puVar1 = *(unsigned long long **)(this + 0x20);
  _CGContextRestoreGState(*puVar1);
  *puVar1 = 0;
  *(unsigned long long *)(this + 8) = 0;
  *(unsigned long long *)(this + 0x10) = 0;
  return;
}

DeviceContextImpl::DeviceContextImpl(int, int) {
unsigned long long *puVar1;
  
  *(void ***)this = &PTR__DeviceContextImpl_101b233f0;
  *(unsigned long long *)(this + 8) = 0;
  *(unsigned long long *)(this + 0x10) = 0;
  *(int *)(this + 0x18) = param_1;
  *(int *)(this + 0x1c) = param_2;
  puVar1 = (unsigned long long *)new char[0x10];
  *puVar1 = 0;
  puVar1[1] = DETAIL::_gQuartzStatics;
  _CGColorSpaceRetain();
  *(unsigned long long **)(this + 0x20) = puVar1;
  *(unsigned long long *)(this + 0x28) = 0x3f8000003f800000;
  
}

DeviceContextImpl::~DeviceContextImpl() {
void *pvVar1;
  
  *(void ***)this = &PTR__DeviceContextImpl_101b233f0;
  pvVar1 = *(void **)(this + 0x20);
  *(unsigned long long *)(this + 0x20) = 0;
  if (pvVar1 != (void *)0x0) {
    _CGColorSpaceRelease(*(unsigned long long *)((long)pvVar1 + 8));
    delete(pvVar1);
  }
  delete(this);
  return;
}
}
