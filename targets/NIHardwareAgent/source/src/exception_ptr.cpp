#include <ni/controller_editor/exception_ptr.hpp>
namespace boost {

exception_ptr::~exception_ptr() {
long *plVar1;
  int *piVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 8);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      LOCK();
      piVar2 = (int *)((long)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
  }
  return;
}
}
