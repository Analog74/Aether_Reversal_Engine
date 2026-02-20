#include <ni/controller_editor/operator_void_____pugi.hpp>
namespace pugi::xml_text {

void operator void (*)(pugi::xml_text***)() const {
code *pcVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)this;
  if (puVar2 != (uint *)0x0) {
    if ((((uint)*(unsigned long long *)puVar2 & 0xf) - 3 < 2) ||
       ((((uint)*(unsigned long long *)puVar2 & 0xf) == 2 && (*(long *)(puVar2 + 4) != 0))))
    goto LAB_1001f7c28;
    for (puVar2 = *(uint **)(puVar2 + 8); puVar2 != (uint *)0x0; puVar2 = *(uint **)(puVar2 + 0xc))
    {
      if ((*puVar2 & 0xf) - 3 < 2) goto LAB_1001f7c28;
    }
  }
  puVar2 = (uint *)0x0;
LAB_1001f7c28:
  pcVar1 = unspecified_bool_xml_text;
  if (puVar2 == (uint *)0x0) {
    pcVar1 = (_func_void_xml_text_ptr_ptr_ptr *)0x0;
  }
  return pcVar1;
}
}
