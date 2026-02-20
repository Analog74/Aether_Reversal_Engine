#include <ni/controller_editor/xml_node_const___std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2::ControllerMap::readMapHeader(pugi {

void xml_node const&, std::string&) {
uint uVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  unsigned long long local_30;
  
  pcVar2 = (char *)pugi::xml_node::name((xml_node *)param_1);
  cVar3 = *pcVar2;
  if (cVar3 == '\0') {
    pcVar4 = "midi-map";
  }
  else {
    pcVar4 = "midi-map";
    do {
      pcVar2 = pcVar2 + 1;
      if ((*pcVar4 == '\0') || (cVar3 != *pcVar4)) return;
      pcVar4 = pcVar4 + 1;
      cVar3 = *pcVar2;
    } while (cVar3 != '\0');
  }
  cVar3 = '\0';
  if (cVar3 == *pcVar4) {
    pugi::xml_attribute::xml_attribute((xml_attribute *)&local_30);
    local_30 = pugi::xml_node::attribute((xml_node *)param_1,"type");
    uVar1 = pugi::xml_attribute::operator!((xml_attribute *)&local_30);
    if ((char)uVar1 == '\0') {
      pugi::xml_attribute::value((xml_attribute *)&local_30);
      // std code
    }
    uVar1 = uVar1 ^ 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
}
