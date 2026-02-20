#include <ni/controller_editor/writeTemplate_pugi.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2::MapHandler {

void writeTemplate(pugi::xml_node&, unsigned int) const {
// std code
  if ((unsigned long)param_2 < (unsigned long)(*(long *)(this + 0x230) - *(long *)(this + 0x228) >> 3)) {
    ControllerMap::writeMap
              (*(ControllerMap **)(*(long *)(this + 0x228) + (unsigned long)param_2 * 8),param_1,true);
  }
  else {
    ControllerMap::writeMap(*(ControllerMap **)(this + 0x200),param_1,true);
  }
  // std code
  return;
}
}
