#include <ni/controller_editor/Assignment__3ul_.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace std::array<NI::NHL2 {

void Assignment, 3ul>::~array() {
array<NI::NHL2::Assignment,3ul> aVar1;
  void *pvVar2;
  
  if (((byte)this[0x198] & 1) == 0) {
    aVar1 = this[0x180];
  }
  else {
    delete(*(void **)(this + 0x1a8));
    aVar1 = this[0x180];
  }
  if (((byte)aVar1 & 1) == 0) {
    pvVar2 = *(void **)(this + 0x168);
  }
  else {
    delete(*(void **)(this + 400));
    pvVar2 = *(void **)(this + 0x168);
  }
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x170) = pvVar2;
    delete(pvVar2);
  }
  if (((byte)this[0xf0] & 1) == 0) {
    aVar1 = this[0xd8];
  }
  else {
    delete(*(void **)(this + 0x100));
    aVar1 = this[0xd8];
  }
  if (((byte)aVar1 & 1) == 0) {
    pvVar2 = *(void **)(this + 0xc0);
  }
  else {
    delete(*(void **)(this + 0xe8));
    pvVar2 = *(void **)(this + 0xc0);
  }
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 200) = pvVar2;
    delete(pvVar2);
  }
  if (((byte)this[0x48] & 1) == 0) {
    aVar1 = this[0x30];
  }
  else {
    delete(*(void **)(this + 0x58));
    aVar1 = this[0x30];
  }
  if (((byte)aVar1 & 1) == 0) {
    pvVar2 = *(void **)(this + 0x18);
  }
  else {
    delete(*(void **)(this + 0x40));
    pvVar2 = *(void **)(this + 0x18);
  }
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x20) = pvVar2;
    delete(pvVar2);
    return;
  }
  return;
}
}
