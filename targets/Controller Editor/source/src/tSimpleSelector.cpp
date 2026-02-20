#include <ni/controller_editor/tSimpleSelector.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL::StyleParser2 {

tSimpleSelector::~tSimpleSelector() {
tSimpleSelector tVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar2 = *(void **)(this + 0x78);
  if (pvVar2 != (void *)0x0) {
    pvVar3 = *(void **)(this + 0x80);
    pvVar4 = pvVar2;
    if (*(void **)(this + 0x80) != pvVar2) {
      do {
        pvVar4 = (void *)((long)pvVar3 + -0x28);
        if ((*(byte *)((long)pvVar3 + -0x18) & 1) != 0) {
          delete(*(void **)((long)pvVar3 + -8));
        }
        pvVar3 = pvVar4;
      } while (pvVar2 != pvVar4);
      pvVar4 = *(void **)(this + 0x78);
    }
    *(void **)(this + 0x80) = pvVar2;
    delete(pvVar4);
  }
  pvVar2 = *(void **)(this + 0x60);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x68) = pvVar2;
    delete(pvVar2);
  }
  if (((byte)this[0x48] & 1) == 0) {
    tVar1 = this[0x30];
  }
  else {
    delete(*(void **)(this + 0x58));
    tVar1 = this[0x30];
  }
  if (((byte)tVar1 & 1) == 0) {
    tVar1 = this[0x18];
  }
  else {
    delete(*(void **)(this + 0x40));
    tVar1 = this[0x18];
  }
  if (((byte)tVar1 & 1) == 0) {
    tVar1 = *this;
  }
  else {
    delete(*(void **)(this + 0x28));
    tVar1 = *this;
  }
  if (((byte)tVar1 & 1) == 0) {
    return;
  }
  delete(*(void **)(this + 0x10));
  return;
}
}
