#include <ni/controller_editor/wios.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace std {

wios::~wios() {
/* WARNING: Could not recover jumptable at 0x00010097421c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__wios_101b848f8)();
  return;
}
}
