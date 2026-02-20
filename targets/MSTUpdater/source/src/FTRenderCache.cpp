#include <ni/controller_editor/FTRenderCache.hpp>
namespace NI::UIA::DETAIL {

void FTRenderCache::getCharBitmap(char32_t param_1) {
}

FTRenderCache::~FTRenderCache() {
unsigned long long *puVar1;
  void *pvVar2;
  long lVar3;
  unsigned long long *puVar4;
  
  puVar4 = *(unsigned long long **)(this + 0x48);
  while (puVar4 != (unsigned long long *)0x0) {
    puVar1 = (unsigned long long *)*puVar4;
    pvVar2 = (void *)puVar4[6];
    if (pvVar2 != (void *)0x0) {
      if ((void *)puVar4[7] != pvVar2) {
        puVar4[7] = pvVar2;
      }
      delete(pvVar2);
    }
    delete(puVar4);
    puVar4 = puVar1;
  }
  pvVar2 = *(void **)(this + 0x38);
  *(unsigned long long *)(this + 0x38) = 0;
  if (pvVar2 != (void *)0x0) {
    delete(pvVar2);
  }
  lVar3 = *(long *)(this + 0x10);
  *(unsigned long long *)(this + 0x10) = 0;
  if (lVar3 != 0) {
    (**(code **)(this + 0x18))();
  }
  lVar3 = *(long *)this;
  *(unsigned long long *)this = 0;
  if (lVar3 != 0) {
    (**(code **)(this + 8))();
  }
  return;
}
}
