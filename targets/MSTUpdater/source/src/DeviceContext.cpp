#include <ni/controller_editor/DeviceContext.hpp>
namespace NI::UIA {

void DeviceContext::attachOSHandle(CGContext* param_1) {
}

void DeviceContext::detachOSHandle() {
unsigned long long *puVar1;
  
  puVar1 = *(unsigned long long **)(this + 0x20);
  _CGContextRestoreGState(*puVar1);
  *puVar1 = 0;
  *(unsigned long long *)(this + 0x10) = 0;
  *(unsigned long long *)(this + 8) = 0;
  return;
}

DeviceContext::DeviceContext(int, int) {
unsigned long long *puVar1;
  
  *(void ***)this = &PTR__DeviceContext_1002294f0;
  *(unsigned long long *)(this + 0x10) = 0;
  *(unsigned long long *)(this + 8) = 0;
  *(int *)(this + 0x18) = param_1;
  *(int *)(this + 0x1c) = param_2;
  puVar1 = (unsigned long long *)new(0x10);
  *puVar1 = 0;
  puVar1[1] = DETAIL::_gQuartzStatics;
  _CGColorSpaceRetain();
  *(unsigned long long **)(this + 0x20) = puVar1;
  *(unsigned long long *)(this + 0x28) = 0x3f8000003f800000;
  
}

DeviceContext::~DeviceContext() {
void *pvVar1;
  
  *(void ***)this = &PTR__DeviceContext_1002294f0;
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
