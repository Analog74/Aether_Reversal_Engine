#include <ni/controller_editor/getAssignmentLabel_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::IAssignmentSupport {

void getAssignmentLabel(std::string const&) const [clone .cold.1] {
void *pvVar1;
  unsigned long long *in_RCX;
  unsigned int in_EDX;
  unsigned long long in_RSI;
  
  if (((byte)param_1[0x30] & 1) != 0) {
    delete(*(void **)(param_1 + 0x40));
  }
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x20) = pvVar1;
    delete(pvVar1);
  }
  *in_RCX = in_RSI;
  *(unsigned int *)(in_RCX + 1) = in_EDX;
  return;
}
}
