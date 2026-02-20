#include <ni/controller_editor/uri.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web {

void uri::authority() const [clone .cold.1] {
byte *in_RCX;
  long in_RDX;
  byte *in_RSI;
  byte *in_RDI;
  
  if ((*in_RDI & 1) != 0) {
    delete(*(void **)(in_RDX + 0x70));
  }
  if ((*in_RSI & 1) != 0) {
    delete(*(void **)(in_RDX + 0x58));
  }
  if ((*(byte *)(in_RDX + 0x30) & 1) != 0) {
    delete(*(void **)(in_RDX + 0x40));
  }
  if ((*(byte *)(in_RDX + 0x18) & 1) != 0) {
    delete(*(void **)(in_RDX + 0x28));
  }
  if ((*in_RCX & 1) != 0) {
    delete(*(void **)(in_RDX + 0x10));
  }
  return;
}

void uri::resource() const [clone .cold.1] {
byte *in_RCX;
  long in_RDX;
  byte *in_RSI;
  byte *in_RDI;
  
  if ((*in_RDI & 1) != 0) {
    delete(*(void **)(in_RDX + 0x70));
  }
  if ((*in_RSI & 1) != 0) {
    delete(*(void **)(in_RDX + 0x58));
  }
  if ((*(byte *)(in_RDX + 0x30) & 1) != 0) {
    delete(*(void **)(in_RDX + 0x40));
  }
  if ((*(byte *)(in_RDX + 0x18) & 1) != 0) {
    delete(*(void **)(in_RDX + 0x28));
  }
  if ((*in_RCX & 1) != 0) {
    delete(*(void **)(in_RDX + 0x10));
  }
  return;
}
}
