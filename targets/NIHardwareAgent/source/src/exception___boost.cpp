#include <ni/controller_editor/exception___boost.hpp>
namespace boost::exception_detail::copy_boost_exception(boost {

void exception*, boost::exception const*) {
unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  char cVar4;
  long *in_RAX;
  long *plVar5;
  long *local_28;
  
  local_28 = in_RAX;
  if (*(long **)(param_2 + 8) == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else {
    (**(code **)(**(long **)(param_2 + 8) + 0x28))(&local_28);
    plVar5 = local_28;
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x18))(local_28);
      if (local_28 != (long *)0x0) {
        cVar4 = (**(code **)(*local_28 + 0x20))();
        if (cVar4 != '\0') {
          local_28 = (long *)0x0;
        }
      }
    }
  }
  *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_2 + 0x20);
  uVar1 = *(unsigned int *)(param_2 + 0x14);
  uVar2 = *(unsigned int *)(param_2 + 0x18);
  uVar3 = *(unsigned int *)(param_2 + 0x1c);
  *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_2 + 0x10);
  *(unsigned int *)(param_1 + 0x14) = uVar1;
  *(unsigned int *)(param_1 + 0x18) = uVar2;
  *(unsigned int *)(param_1 + 0x1c) = uVar3;
  if (*(long **)(param_1 + 8) != (long *)0x0) {
    cVar4 = (**(code **)(**(long **)(param_1 + 8) + 0x20))();
    if (cVar4 != '\0') {
      *(unsigned long long *)(param_1 + 8) = 0;
    }
  }
  *(long **)(param_1 + 8) = plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  return;
}
}
