#include <ni/controller_editor/xml_parse_result.hpp>
namespace pugi {

xml_parse_result::xml_parse_result() {
*(unsigned int *)this = 4;
  *(unsigned long long *)(this + 8) = 0;
  *(unsigned int *)(this + 0x10) = 0;
  
}
}
