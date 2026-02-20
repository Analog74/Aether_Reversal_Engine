#include <ni/controller_editor/AppTarget.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA {

void AppTarget::asString() const {
int *in_RSI;
  string *psVar1;
  string *in_RDI;
  
  if (*in_RSI - 1U < 8) {
    psVar1 = (string *)(&PTR_standalone_101b242c8)[(int)(*in_RSI - 1U)];
  }
  else {
    psVar1 = (string *)&ni::commons::target_type::void;
  }
  // std code
  return;
}

void AppTarget::setTarget(unsigned int) {
*(uint *)this = param_1;
  return;
}
}
