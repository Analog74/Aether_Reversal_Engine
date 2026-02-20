#include <ni/controller_editor/ParseStream_anyrpc.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace anyrpc::XmlReader {

void ParseStream(1 param_1, anyrpc::Handler& {
char cVar1;
  
  *(Handler **)(this + 0x10) = param_1;
  *(unsigned int *)(this + 0x18) = 0;
  (**(code **)(*(long *)param_1 + 0x10))(param_1);
  cVar1 = (**(code **)(**(long **)(this + 8) + 0x20))();
  while (cVar1 == '\0') {
    (**(code **)(**(long **)(this + 8) + 0x28))();
    cVar1 = (**(code **)(*(long *)this + 0x18))(this);
    if (cVar1 == '\0') break;
    (**(code **)(**(long **)(this + 8) + 0x30))();
    cVar1 = (**(code **)(**(long **)(this + 8) + 0x20))();
  }
  cVar1 = (**(code **)(**(long **)(this + 8) + 0x20))();
  if (cVar1 == '\0') {
    ParseValue(this,false);
  }
                    /* WARNING: Could not recover jumptable at 0x0001009463cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x18))(param_1);
  return;
}
}
