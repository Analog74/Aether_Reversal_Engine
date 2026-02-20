#include <ni/controller_editor/ColorValueEdit_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::ColorValueEdit {

void ColorValueEdit(std::string const&) [clone .cold.3] {
ColorValueEdit *pCVar1;
  long lVar2;
  
  LOCK();
  pCVar1 = this + 8;
  lVar2 = *(long *)pCVar1;
  *(long *)pCVar1 = *(long *)pCVar1 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*(long *)this + 0x10))();
    // std code
  }
  return;
}
}
