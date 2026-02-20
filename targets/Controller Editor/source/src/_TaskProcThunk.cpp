#include <ni/controller_editor/_TaskProcThunk.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace pplx::details {

void _TaskProcThunk::_Bridge(void*) [clone .cold.1] {
if (param_1 != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x0001009685fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))();
    return;
  }
  return;
}
}
