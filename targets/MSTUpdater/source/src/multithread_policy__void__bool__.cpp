#include <ni/controller_editor/multithread_policy__void__bool__.hpp>
namespace nod::signal_type<nod {

void multithread_policy, void (bool)>::~signal_type() {
long *plVar1;
  void *pvVar2;
  void *pvVar3;
  
  invalidate_disconnector(this);
  if (*(long *)(this + 0x78) != 0) {
    // std code
  }
  pvVar3 = *(void **)(this + 0x40);
  if (pvVar3 != (void *)0x0) {
    pvVar2 = *(void **)(this + 0x48);
    if (pvVar2 != pvVar3) {
      do {
        *(long **)(this + 0x48) = (long *)((long)pvVar2 + -0x30);
        plVar1 = *(long **)((long)pvVar2 + -0x10);
        if (plVar1 == (long *)((long)pvVar2 + -0x30)) {
          (**(code **)(*plVar1 + 0x20))();
        }
        else if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x28))();
        }
        pvVar2 = *(void **)(this + 0x48);
      } while (pvVar2 != pvVar3);
      pvVar3 = *(void **)(this + 0x40);
    }
    delete(pvVar3);
  }
  // std code
  return;
}
}
