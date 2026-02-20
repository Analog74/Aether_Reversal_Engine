#include <ni/controller_editor/ClientInstances.hpp>
namespace NI::dawcontrol {

ClientInstances::~ClientInstances() {
byte bVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar2 = *(void **)this;
  if (pvVar2 != (void *)0x0) {
    pvVar3 = *(void **)(this + 8);
    pvVar4 = pvVar2;
    if (pvVar3 != pvVar2) {
      do {
        if ((*(byte *)((long)pvVar3 + -0x20) & 1) == 0) {
          bVar1 = *(byte *)((long)pvVar3 + -0x38);
        }
        else {
          delete(*(void **)((long)pvVar3 + -0x10));
          bVar1 = *(byte *)((long)pvVar3 + -0x38);
        }
        if ((bVar1 & 1) != 0) {
          delete(*(void **)((long)pvVar3 + -0x28));
        }
        pvVar3 = (void *)((long)pvVar3 + -0x40);
      } while (pvVar3 != pvVar2);
      pvVar4 = *(void **)this;
    }
    *(void **)(this + 8) = pvVar2;
    delete(pvVar4);
    return;
  }
  return;
}
}
