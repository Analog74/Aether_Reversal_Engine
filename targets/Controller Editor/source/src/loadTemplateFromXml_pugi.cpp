#include <ni/controller_editor/loadTemplateFromXml_pugi.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::Model {

void loadTemplateFromXml(3 param_3, pugi::xml_node, unsigned int {
long *plVar1;
  unsigned long long local_18;
  
  local_18 = param_2;
  plVar1 = (long *)(**(code **)(*(long *)this + 0xe8))();
  (**(code **)(*plVar1 + 0x2f8))(plVar1,&local_18,param_3);
  return;
}
}
