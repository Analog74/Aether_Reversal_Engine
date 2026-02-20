#include <ni/controller_editor/sentry_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace std::ostream::sentry {

void sentry(std::ostream&) {
/* WARNING: Could not recover jumptable at 0x00010097406c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_sentry_101b846b8)();
  return;
}
}
