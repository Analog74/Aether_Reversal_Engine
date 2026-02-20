#include <ni/controller_editor/function_bool__int__.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace std {

void function<bool (int)>::~function() {
function<bool(int)> *pfVar1;
  
  pfVar1 = *(function<bool(int)> **)(this + 0x20);
  if (this == pfVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010072ee70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x20))();
    return;
  }
  if (pfVar1 != (function<bool(int)> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010072ee69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x28))();
    return;
  }
  return;
}
}
