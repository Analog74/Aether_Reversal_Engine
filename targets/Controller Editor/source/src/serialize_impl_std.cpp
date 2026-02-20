#include <ni/controller_editor/serialize_impl_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::json::details::_Array {

void serialize_impl(std::string&) const {
unsigned long long *puVar1;
  
  puVar1 = *(unsigned long long **)(this + 8);
  if (puVar1 != *(unsigned long long **)(this + 0x10)) {
    do {
      (**(code **)(*(long *)*puVar1 + 0xb0))();
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(unsigned long long **)(this + 0x10));
  }
  // std code
                    /* WARNING: Could not recover jumptable at 0x000100541319. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 200))(this,param_1);
  return;
}
}
