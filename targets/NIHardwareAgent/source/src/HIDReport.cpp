#include <ni/controller_editor/HIDReport.hpp>
namespace NI::NHL2 {

void HIDReport::setID(unsigned char) {
**(uchar **)this = param_1;
  return;
}

HIDReport::~HIDReport() {
void *pvVar1;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 8) = pvVar1;
    delete(pvVar1);
    return;
  }
  return;
}
}
