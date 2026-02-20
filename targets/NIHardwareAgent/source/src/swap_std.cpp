#include <ni/controller_editor/swap_std.hpp>
namespace std::function<void ()> {

void swap(std::function<void ()>&) {
function<void()> *pfVar1;
  function *pfVar2;
  long local_48 [5];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_1009cc2c8;
  if (param_1 != (function *)this) {
    pfVar1 = *(function<void()> **)(this + 0x20);
    if (pfVar1 == this) {
      if (*(function **)(param_1 + 0x20) == param_1) {
        (**(code **)(*(long *)pfVar1 + 0x18))(pfVar1,local_48);
        (**(code **)(**(long **)(this + 0x20) + 0x20))();
        *(unsigned long long *)(this + 0x20) = 0;
        (**(code **)(**(long **)(param_1 + 0x20) + 0x18))(*(long **)(param_1 + 0x20),this);
        (**(code **)(**(long **)(param_1 + 0x20) + 0x20))();
        *(unsigned long long *)(param_1 + 0x20) = 0;
        *(function<void()> **)(this + 0x20) = this;
        (**(code **)(local_48[0] + 0x18))(local_48,param_1);
        (**(code **)(local_48[0] + 0x20))(local_48);
      }
      else {
        (**(code **)(*(long *)pfVar1 + 0x18))(pfVar1,param_1);
        (**(code **)(**(long **)(this + 0x20) + 0x20))();
        *(unsigned long long *)(this + 0x20) = *(unsigned long long *)(param_1 + 0x20);
      }
      *(function **)(param_1 + 0x20) = param_1;
      if (*(long *)PTR____stack_chk_guard_1009cc2c8 == local_20) {
        return;
      }
      goto LAB_1001e394e;
    }
    pfVar2 = *(function **)(param_1 + 0x20);
    if (param_1 != pfVar2) {
      *(function **)(this + 0x20) = pfVar2;
      *(function<void()> **)(param_1 + 0x20) = pfVar1;
      if (*(long *)PTR____stack_chk_guard_1009cc2c8 == local_20) {
        return;
      }
      goto LAB_1001e394e;
    }
    (**(code **)(*(long *)pfVar2 + 0x18))(pfVar2,this);
    (**(code **)(**(long **)(param_1 + 0x20) + 0x20))();
    *(unsigned long long *)(param_1 + 0x20) = *(unsigned long long *)(this + 0x20);
    *(function<void()> **)(this + 0x20) = this;
  }
  if (*(long *)PTR____stack_chk_guard_1009cc2c8 == local_20) {
    return;
  }
LAB_1001e394e:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}
}
