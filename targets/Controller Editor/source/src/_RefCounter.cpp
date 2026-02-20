#include <ni/controller_editor/_RefCounter.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace pplx::details {

void _RefCounter::_Destroy() {
if (this != (_RefCounter *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001003ec0fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 8))();
    return;
  }
  return;
}

_RefCounter::~_RefCounter() {
delete(this);
  return;
}
}
