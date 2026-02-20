#include <ni/controller_editor/connection.hpp>
namespace boost::signals2 {

void connection::disconnect() const {
long *plVar1;
  int *piVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(long **)(this + 8);
  if (plVar3 != (long *)0x0) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    if (*(connection_body_base **)this != (connection_body_base *)0x0) {
      signals2::detail::connection_body_base::disconnect(*(connection_body_base **)this);
    }
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
  }
  return;
}
}
