#include <ni/controller_editor/Bulk.hpp>
namespace NI::NHL2::Display::GenericHID::bulkRequest(NI::NHL2::Display {

void Bulk::Request*, unsigned long) {
long *plVar1;
  
  plVar1 = *(long **)(this + 0x28);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001001ab390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x40))(plVar1,2,param_1,param_2);
    return;
  }
  return;
}
}
