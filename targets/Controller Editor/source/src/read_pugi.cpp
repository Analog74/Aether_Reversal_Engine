#include <ni/controller_editor/read_pugi.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2::Komplete::KontrolMK1::KeyZoneMap {

void read(pugi::xml_node const&, bool) [clone .cold.1] {
void7 in_register_00000011;
  
  if (((byte)*this & 1) != 0) {
    delete(*(void **)(0(in_register_00000011,param_2) + 0x28));
  }
  if (((byte)*param_1 & 1) != 0) {
    delete(*(void **)(0(in_register_00000011,param_2) + 0x10));
  }
  return;
}
}
