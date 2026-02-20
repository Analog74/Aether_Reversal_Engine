#include <ni/controller_editor/ident.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace ni::uret {

void ident::getNativeId() {
code *pcVar1;
  long *plVar2;
  object *this_00;
  value *this_01;
  string *psVar3;
  string local_60;
  unsigned long long local_5f;
  void2 local_57;
  void *local_50;
  unsigned long local_48;
  long lStack_40;
  void *local_38;
  long *local_28;
  
  if (0 == (long *)0x0) {
    // std code
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  (**(code **)(*0 + 0x30))(&local_48);
  if ((local_48 & 1) == 0) {
    if ((byte)local_48._0_1_ >> 1 == 0) return;
  }
  else if (lStack_40 == 0) {
    *(void **)(this + 0x10) = local_38;
    *(unsigned long *)this = local_48;
    *(long *)(this + 8) = lStack_40;
    return this;
  }
  web::json::value::parse((value *)&local_28,(string *)&local_48);
  this_00 = (object *)web::json::value::as_object((value *)&local_28);
  local_60 = (string)0x12;
  local_5f = 0x692d65766974616e;
  local_57 = 100;
  this_01 = (value *)web::json::object::operator[](this_00,&local_60);
  psVar3 = (string *)web::json::value::as_string(this_01);
  // std code
  if (((byte)local_60 & 1) != 0) {
    delete(local_50);
  }
  plVar2 = local_28;
  local_28 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0xc0))();
  }
  if ((local_48 & 1) != 0) {
    delete(local_38);
  }
  return this;
}
}
