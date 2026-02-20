#include <ni/controller_editor/function_bool__int__.hpp>
namespace std {

void function<bool (int)>::~function() {
function<bool(int)> *pfVar1;
  
  pfVar1 = *(function<bool(int)> **)(this + 0x20);
  if (this == pfVar1) {
                    /* WARNING: Could not recover jumptable at 0x0001002f18b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x20))();
    return;
  }
  if (pfVar1 != (function<bool(int)> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001002f18a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x28))();
    return;
  }
  return;
}
}
