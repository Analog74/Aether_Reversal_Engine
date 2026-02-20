#include <ni/controller_editor/sentry_std.hpp>
namespace std::ostream::sentry {

void sentry(std::ostream&) {
/* WARNING: Could not recover jumptable at 0x00010038c0e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_sentry_1009f4540)();
  return;
}
}
