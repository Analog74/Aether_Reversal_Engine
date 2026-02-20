#include <ni/controller_editor/uri_components.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::details {

uri_components::~uri_components() {
uri_components uVar1;
  
  if (((byte)this[0x78] & 1) == 0) {
    uVar1 = this[0x60];
  }
  else {
    delete(*(void **)(this + 0x88));
    uVar1 = this[0x60];
  }
  if (((byte)uVar1 & 1) == 0) {
    uVar1 = this[0x48];
  }
  else {
    delete(*(void **)(this + 0x70));
    uVar1 = this[0x48];
  }
  if (((byte)uVar1 & 1) == 0) {
    uVar1 = this[0x30];
  }
  else {
    delete(*(void **)(this + 0x58));
    uVar1 = this[0x30];
  }
  if (((byte)uVar1 & 1) == 0) {
    uVar1 = this[0x18];
  }
  else {
    delete(*(void **)(this + 0x40));
    uVar1 = this[0x18];
  }
  if (((byte)uVar1 & 1) == 0) {
    uVar1 = *this;
  }
  else {
    delete(*(void **)(this + 0x28));
    uVar1 = *this;
  }
  if (((byte)uVar1 & 1) != 0) {
    delete(*(void **)(this + 0x10));
    return;
  }
  return;
}
}
