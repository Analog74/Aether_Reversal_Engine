#include <ni/controller_editor/generic_compress_factory.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::http::compression::builtin {

void generic_compress_factory::make_compressor() const {
byte bVar1;
  long *plVar2;
  long in_RSI;
  unsigned long long *in_RDI;
  
  if (*(long **)(in_RSI + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(in_RSI + 0x40) + 0x30))();
    return;
  }
  // std code
  *in_RDI = &PTR_algorithm_101b1db70;
  plVar2 = (long *)in_RDI[8];
  if (in_RDI + 4 == plVar2) {
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

generic_compress_factory::~generic_compress_factory() {
generic_compress_factory gVar1;
  generic_compress_factory *pgVar2;
  
  *(void ***)this = &PTR_algorithm_101b1db70;
  pgVar2 = *(generic_compress_factory **)(this + 0x40);
  if (this + 0x20 == pgVar2) {
    (**(code **)(*(long *)pgVar2 + 0x20))();
    gVar1 = this[8];
  }
  else {
    if (pgVar2 != (generic_compress_factory *)0x0) {
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
