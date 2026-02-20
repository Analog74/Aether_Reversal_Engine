#include <ni/controller_editor/readDisplayState_pugi.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2::MapHandlerUpdateThread {

void readDisplayState(1 param_1, pugi::xml_node const& {
char cVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned long long local_30;
  unsigned long long local_28;
  unsigned long long local_20;
  
  local_30 = pugi::xml_node::child((xml_node *)param_1,"display_state");
  cVar1 = pugi::xml_node::empty((xml_node *)&local_30);
  if (cVar1 == '\0') {
    local_20 = pugi::xml_node::child((xml_node *)&local_30,"display_mode");
    local_28 = pugi::xml_node::text((xml_node *)&local_20);
    uVar2 = pugi::xml_text::as_int((xml_text *)&local_28,0);
    *(unsigned int *)(this + 0x44) = uVar2;
    local_20 = pugi::xml_node::child((xml_node *)&local_30,"knob_mode");
    local_28 = pugi::xml_node::text((xml_node *)&local_20);
    iVar3 = pugi::xml_text::as_int((xml_text *)&local_28,0);
    this[0x42] = (MapHandlerUpdateThread)(iVar3 != 0);
  }
  return;
}
}
