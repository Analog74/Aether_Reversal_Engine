#include <ni/controller_editor/sentry.hpp>
namespace std::ostream {

sentry::~sentry() {
/* WARNING: Could not recover jumptable at 0x00010038c0e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sentry_1009f4548)();
  return;
}
}
