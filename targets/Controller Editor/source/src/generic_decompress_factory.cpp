#include <ni/controller_editor/generic_decompress_factory.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::http::compression::builtin {

void generic_decompress_factory::algorithm() const {
return this + 8;
}

void generic_decompress_factory::make_decompressor() const {
byte bVar1;
  long *plVar2;
  long in_RSI;
  unsigned long long *in_RDI;
  
  if (*(long **)(in_RSI + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(in_RSI + 0x50) + 0x30))();
    return;
  }
  // std code
  *in_RDI = &PTR_algorithm_101b1de40;
  plVar2 = (long *)in_RDI[10];
  if (in_RDI + 6 == plVar2) {
    (**(code **)(*plVar2 + 0x20))();
    bVar1 = *(byte *)(in_RDI + 1);
  }
  else {
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x28))();
    }
    bVar1 = *(byte *)(in_RDI + 1);
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  delete((void *)in_RDI[3]);
  return;
}

void generic_decompress_factory::weight() const {
return *(void2 *)(this + 0x20);
}

generic_decompress_factory::~generic_decompress_factory() {
generic_decompress_factory gVar1;
  generic_decompress_factory *pgVar2;
  
  *(void ***)this = &PTR_algorithm_101b1de40;
  pgVar2 = *(generic_decompress_factory **)(this + 0x50);
  if (this + 0x30 == pgVar2) {
    (**(code **)(*(long *)pgVar2 + 0x20))();
    gVar1 = this[8];
  }
  else {
    if (pgVar2 != (generic_decompress_factory *)0x0) {
      (**(code **)(*(long *)pgVar2 + 0x28))();
    }
    gVar1 = this[8];
  }
  if (((byte)gVar1 & 1) != 0) {
    delete(*(void **)(this + 0x18));
  }
  delete(this);
  return;
}
}
