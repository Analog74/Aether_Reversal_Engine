#include <ni/controller_editor/apply_default_boost.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::program_options::typed_value<unsigned int, char> {

void apply_default(boost::any&) const {
long *plVar1;
  long *plVar2;
  unsigned long long uVar3;
  
  plVar1 = *(long **)(this + 0x30);
  if (plVar1 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar1 + 0x18))(plVar1);
    plVar2 = *(long **)param_1;
    *(unsigned long long *)param_1 = uVar3;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  return plVar1 != (long *)0x0;
}
}
