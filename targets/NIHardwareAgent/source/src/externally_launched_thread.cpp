#include <ni/controller_editor/externally_launched_thread.hpp>
namespace boost::detail {

void externally_launched_thread::run() {
return;
}

externally_launched_thread::~externally_launched_thread() {
long *plVar1;
  int *piVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  *(void ***)this = &PTR__externally_launched_thread_1009f2ba8;
  lVar3 = *(long *)(this + 0x130);
  *(unsigned long long *)(this + 0x120) = *(unsigned long long *)(this + 0x118);
  for (lVar5 = *(long *)(this + 0x138); lVar5 != lVar3; lVar5 = lVar5 + -0x10) {
    plVar4 = *(long **)(lVar5 + -8);
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        LOCK();
        piVar2 = (int *)((long)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x18))(plVar4);
        }
      }
    }
  }
  *(long *)(this + 0x138) = lVar3;
  thread_data_base::~thread_data_base((thread_data_base *)this);
  delete(this);
  return;
}
}
