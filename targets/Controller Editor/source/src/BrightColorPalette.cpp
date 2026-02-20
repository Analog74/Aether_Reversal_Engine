#include <ni/controller_editor/BrightColorPalette.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2::DETAIL {

BrightColorPalette::~BrightColorPalette() {
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
