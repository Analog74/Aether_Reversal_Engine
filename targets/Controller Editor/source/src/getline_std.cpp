#include <ni/controller_editor/getline_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::program_options::detail {

void getline(1 param_1, std::string& {
uint uVar1;
  char cVar2;
  long *plVar3;
  istream *piVar4;
  unsigned long long local_50;
  unsigned long long uStack_48;
  unsigned long long local_40;
  unsigned long local_38;
  unsigned long long uStack_30;
  void *local_28;
  
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (void *)0x0;
  piVar4 = *(istream **)(this + 0xb8);
  // std code
  plVar3 = (long *)// std code
  cVar2 = (**(code **)(*plVar3 + 0x38))(plVar3,10);
  // std code
  piVar4 = // std code
                     (piVar4,(string *)&local_38,cVar2);
  uVar1 = *(uint *)(piVar4 + *(long *)(*(long *)piVar4 + -0x18) + 0x20);
  if ((uVar1 & 5) == 0) {
    // std code
    if (((byte)*param_1 & 1) != 0) {
      delete(*(void **)(param_1 + 0x10));
    }
    *(unsigned long long *)(param_1 + 0x10) = local_40;
    *(unsigned long long *)param_1 = local_50;
    *(unsigned long long *)(param_1 + 8) = uStack_48;
  }
  if ((local_38 & 1) != 0) {
    delete(local_28);
  }
  return (uVar1 & 5) == 0;
}
}
