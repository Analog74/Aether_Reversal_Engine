#include <ni/controller_editor/setCancelName_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL::ProgressDialog {

void setCancelName(1 param_1, std::string const& {
if (*(long **)(param_1 + 0x340) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001003dd038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x340) + 0x30))();
    return;
  }
  return;
}
}
