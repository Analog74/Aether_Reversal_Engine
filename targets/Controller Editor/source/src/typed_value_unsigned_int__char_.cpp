#include <ni/controller_editor/typed_value_unsigned_int__char_.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::program_options {

void typed_value<unsigned int, char>::is_composing() const {
return this[0x70];
}

void typed_value<unsigned int, char>::is_required() const {
return this[0x74];
}

void typed_value<unsigned int, char>::max_tokens() const {
if (this[0x72] != (typed_value<unsigned_int,char>)0x0) {
    return 0xffffffff;
  }
  return (byte)this[0x73] ^ 1;
}

void typed_value<unsigned int, char>::min_tokens() const {
if (this[0x73] != (typed_value<unsigned_int,char>)0x0) {
    return false;
  }
  return *(long *)(this + 0x50) == 0;
}

void typed_value<unsigned int, char>::~typed_value() {
unsigned long uVar1;
  
  *(void ***)this = &PTR_name_101b0d050;
  *(void ***)(this + 8) = &PTR_value_type_101b0d0c0;
  uVar1 = *(unsigned long *)(this + 0x78);
  if (uVar1 != 0) {
    if (((uVar1 & 1) == 0) && (*(code **)(uVar1 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar1 & 0xfffffffffffffffe))(this + 0x80,this + 0x80,2);
    }
    *(unsigned long long *)(this + 0x78) = 0;
  }
  if (((byte)this[0x58] & 1) != 0) {
    delete(*(void **)(this + 0x68));
  }
  if (*(long **)(this + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x50) + 8))();
  }
  if (((byte)this[0x38] & 1) != 0) {
    delete(*(void **)(this + 0x48));
  }
  if (*(long **)(this + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x30) + 8))();
  }
  if (((byte)this[0x18] & 1) == 0) {
    return;
  }
  delete(*(void **)(this + 0x28));
  return;
}
}
