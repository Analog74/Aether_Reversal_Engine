#include <ni/controller_editor/directory_iterator.hpp>
namespace boost::filesystem {

directory_iterator::~directory_iterator() {
long *plVar1;
  int *piVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(this + 8);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      LOCK();
      piVar2 = (int *)((long)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
  }
  return;
}
}
