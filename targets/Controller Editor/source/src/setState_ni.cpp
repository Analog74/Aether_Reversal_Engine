#include <ni/controller_editor/setState_ni.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL::StateSelector {

void setState(2 param_2, ni::symbol, bool {
long lVar1;
  
  if (s_StateDescriptors == param_2) {
    lVar1 = 0;
  }
  else if (0 == param_2) {
    lVar1 = 1;
  }
  else if (0 == param_2) {
    lVar1 = 2;
  }
  else if (0 == param_2) {
    lVar1 = 3;
  }
  else if (0 == param_2) {
    lVar1 = 4;
  }
  else if (0 == param_2) {
    lVar1 = 5;
  }
  else {
    if (0 != param_2) {
      return;
    }
    lVar1 = 6;
  }
  *(uint *)(this + lVar1 * 4) = (uint)param_3;
  return;
}
}
