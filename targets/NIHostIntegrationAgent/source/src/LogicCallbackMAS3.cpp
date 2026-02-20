#include <ni/controller_editor/LogicCallbackMAS3.hpp>
namespace NI::dawcontrol::logic {

LogicCallbackMAS3::~LogicCallbackMAS3() {
void *pvVar1;
  long *plVar2;
  void *pvVar3;
  void *pvVar4;
  
  *(void ***)this = &PTR__LogicCallbackMAS3_100a47090;
  pvVar1 = *(void **)(this + 8);
  if (pvVar1 != (void *)0x0) {
    pvVar3 = *(void **)(this + 0x10);
    pvVar4 = pvVar1;
    if (pvVar3 != pvVar1) {
      do {
        plVar2 = *(long **)((long)pvVar3 + -0x10);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x30))(plVar2,*(unsigned long long *)((long)pvVar3 + -8));
        }
        pvVar3 = (void *)((long)pvVar3 + -0x10);
      } while (pvVar3 != pvVar1);
      pvVar4 = *(void **)(this + 8);
    }
    *(void **)(this + 0x10) = pvVar1;
    delete(pvVar4);
  }
  delete(this);
  return;
}
}
