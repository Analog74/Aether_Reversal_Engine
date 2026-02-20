#include <ni/controller_editor/sentry.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace std::ostream {

sentry::~sentry() {
/* WARNING: Could not recover jumptable at 0x000100974072. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sentry_101b846c0)();
  return;
}
}
