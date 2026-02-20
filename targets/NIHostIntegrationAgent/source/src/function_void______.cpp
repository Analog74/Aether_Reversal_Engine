#include <ni/controller_editor/function_void______.hpp>
namespace boost::signals2::slot<void (), boost {

void function<void ()> >::~slot() {
unsigned long uVar1;
  
  uVar1 = *(unsigned long *)(this + 0x18);
  if (uVar1 != 0) {
    if (((uVar1 & 1) == 0) && (*(code **)(uVar1 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar1 & 0xfffffffffffffffe))(this + 0x20,this + 0x20,2);
    }
    *(unsigned long long *)(this + 0x18) = 0;
  }
  if (*(variant **)this != (variant *)0x0) {
    // std code
    vector<// boost code
    ::__base_destruct_at_end_abi_v15006_
              ((vector<// boost code
                *)this,*(variant **)this);
    delete(*(void **)this);
    return;
  }
  return;
}
}
