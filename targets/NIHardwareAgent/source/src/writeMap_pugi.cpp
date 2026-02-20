#include <ni/controller_editor/writeMap_pugi.hpp>
namespace NI::NHL2::ControllerMap {

void writeMap(pugi::xml_node&, bool) const {
ControllerMap *pCVar1;
  char *pcVar2;
  unsigned long long local_48;
  unsigned long long local_40;
  unsigned long long local_38;
  unsigned long long uStack_30;
  char *local_28;
  
  local_40 = pugi::xml_node::append_child(param_1,"midi-map");
  local_38 = pugi::xml_node::append_attribute((xml_node *)&local_40,"type");
  if (((byte)this[0x98] & 1) == 0) {
    pCVar1 = this + 0x99;
  }
  else {
    pCVar1 = *(ControllerMap **)(this + 0xa8);
  }
  pugi::xml_attribute::set_value((xml_attribute *)&local_38,(char *)pCVar1);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (char *)0x0;
  if (((byte)this[0xb0] & 1) == 0) {
    if ((byte)this[0xb0] >> 1 == 0) goto LAB_1000a63be;
  }
  else if (*(long *)(this + 0xb8) == 0) goto LAB_1000a63be;
  // std code
  local_48 = pugi::xml_node::append_attribute((xml_node *)&local_40,"name");
  pcVar2 = local_28;
  if ((local_38 & 1) == 0) {
    pcVar2 = (char *)((long)&local_38 + 1);
  }
  pugi::xml_attribute::set_value((xml_attribute *)&local_48,pcVar2);
LAB_1000a63be:
  (**(code **)(*(long *)this + 0x120))(this,&local_40,param_2);
  if ((local_38 & 1) != 0) {
    delete(local_28);
  }
  return;
}
}
