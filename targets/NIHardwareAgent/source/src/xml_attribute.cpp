#include <ni/controller_editor/xml_attribute.hpp>
namespace pugi {

void xml_attribute::set_value(float param_1) {
}

void xml_attribute::value() const {
char *pcVar1;
  char *pcVar2;
  
  if (*(long *)this != 0) {
    pcVar1 = *(char **)(*(long *)this + 0x10);
    pcVar2 = "";
    if (pcVar1 != (char *)0x0) {
      pcVar2 = pcVar1;
    }
    return pcVar2;
  }
  return "";
}

xml_attribute::xml_attribute() {
*(unsigned long long *)this = 0;
  
}
}
