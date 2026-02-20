#include <ni/controller_editor/tSimpleSelector.hpp>
namespace NI::NWL::StyleParser2 {

void tSimpleSelector::reset() {
long lVar1;
  long lVar2;
  
  if (((byte)*this & 1) == 0) {
    *(void2 *)this = 0;
  }
  else {
    **(unsigned char **)(this + 0x10) = 0;
    *(unsigned long long *)(this + 8) = 0;
  }
  if (((byte)this[0x18] & 1) == 0) {
    *(void2 *)(this + 0x18) = 0;
  }
  else {
    **(unsigned char **)(this + 0x28) = 0;
    *(unsigned long long *)(this + 0x20) = 0;
  }
  if (((byte)this[0x30] & 1) == 0) {
    *(void2 *)(this + 0x30) = 0;
  }
  else {
    **(unsigned char **)(this + 0x40) = 0;
    *(unsigned long long *)(this + 0x38) = 0;
  }
  if (((byte)this[0x48] & 1) == 0) {
    *(void2 *)(this + 0x48) = 0;
    lVar2 = *(long *)(this + 0x60);
  }
  else {
    **(unsigned char **)(this + 0x58) = 0;
    *(unsigned long long *)(this + 0x50) = 0;
    lVar2 = *(long *)(this + 0x60);
  }
  while (lVar1 = *(long *)(this + 0x68), lVar1 != lVar2) {
    *(long *)(this + 0x68) = lVar1 + -0x20;
    // std code
  }
  lVar2 = *(long *)(this + 0x78);
  while (lVar1 = *(long *)(this + 0x80), lVar1 != lVar2) {
    *(string **)(this + 0x80) = (string *)(lVar1 + -0x38);
    // std code
    // std code
  }
  this[0x90] = (tSimpleSelector)0x0;
  return;
}

tSimpleSelector::~tSimpleSelector() {
void *pvVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x78);
  if (pvVar2 != (void *)0x0) {
    pvVar1 = *(void **)(this + 0x80);
    if (pvVar1 != pvVar2) {
      do {
        *(string **)(this + 0x80) = (string *)((long)pvVar1 + -0x38);
        // std code
        // std code
        pvVar1 = *(void **)(this + 0x80);
      } while (pvVar1 != pvVar2);
      pvVar2 = *(void **)(this + 0x78);
    }
    delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x60);
  if (pvVar2 != (void *)0x0) {
    pvVar1 = *(void **)(this + 0x68);
    if (pvVar1 != pvVar2) {
      do {
        *(long *)(this + 0x68) = (long)pvVar1 + -0x20;
        // std code
        pvVar1 = *(void **)(this + 0x68);
      } while (pvVar1 != pvVar2);
      pvVar2 = *(void **)(this + 0x60);
    }
    delete(pvVar2);
  }
  // std code
  // std code
  // std code
  // std code
  return;
}
}
