#include <ni/controller_editor/Settings_.hpp>
namespace boost::optional<NI::dawcontrol::hw::komplete_kontrol::mk2::cmm {

void Settings>::~optional() {
void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  if (*this != (optional<NI::dawcontrol::hw::komplete_kontrol::mk2::cmm::Settings>)0x0) {
    pvVar1 = *(void **)(this + 0x20);
    if (pvVar1 != (void *)0x0) {
      pvVar3 = *(void **)(this + 0x28);
      pvVar4 = pvVar1;
      if (*(void **)(this + 0x28) != pvVar1) {
        do {
          pvVar4 = *(void **)((long)pvVar3 + -0x18);
          if (pvVar4 != (void *)0x0) {
            *(void **)((long)pvVar3 + -0x10) = pvVar4;
            delete(pvVar4);
          }
          pvVar4 = (void *)((long)pvVar3 + -0x130);
          pvVar2 = *(void **)((long)pvVar3 + -0x30);
          if (pvVar2 != (void *)0x0) {
            *(void **)((long)pvVar3 + -0x28) = pvVar2;
            delete(pvVar2);
          }
          pvVar3 = pvVar4;
        } while (pvVar4 != pvVar1);
        pvVar4 = *(void **)(this + 0x20);
      }
      *(void **)(this + 0x28) = pvVar1;
      delete(pvVar4);
    }
    *this = (optional<NI::dawcontrol::hw::komplete_kontrol::mk2::cmm::Settings>)0x0;
  }
  return;
}
}
