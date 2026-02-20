#include <ni/controller_editor/operator_void_____pugi.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace pugi::xml_text {

void operator void (*)(pugi::xml_text***)() const {
code *pcVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)this;
  if (puVar2 != (uint *)0x0) {
    if ((((uint)*(unsigned long long *)puVar2 & 0xf) - 3 < 2) ||
       ((((uint)*(unsigned long long *)puVar2 & 0xf) == 2 && (*(long *)(puVar2 + 4) != 0))))
    return;
    for (puVar2 = *(uint **)(puVar2 + 8); puVar2 != (uint *)0x0; puVar2 = *(uint **)(puVar2 + 0xc))
    {
      if ((*puVar2 & 0xf) - 3 < 2) return;
    }
  }
  puVar2 = (uint *)0x0;
  pcVar1 = unspecified_bool_xml_text;
  if (puVar2 == (uint *)0x0) {
    pcVar1 = (_func_void_xml_text_ptr_ptr_ptr *)0x0;
  }
  return pcVar1;
}
}
