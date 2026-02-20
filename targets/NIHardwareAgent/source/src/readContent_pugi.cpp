#include <ni/controller_editor/readContent_pugi.hpp>
namespace NI::NHL2::Traktor::KontrolS4MK1::Map {

void readContent(pugi::xml_node const&, bool) [clone .cold.1] {
void *pvVar1;
  
  if (((byte)param_1[0x30] & 1) != 0) {
    delete(*(void **)(param_1 + 0x40));
  }
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x20) = pvVar1;
    delete(pvVar1);
  }
  return;
}
}
