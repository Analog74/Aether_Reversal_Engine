#include <ni/controller_editor/FeatureReport.hpp>
namespace NI::NHL2::Display {

FeatureReport::~FeatureReport() {
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
