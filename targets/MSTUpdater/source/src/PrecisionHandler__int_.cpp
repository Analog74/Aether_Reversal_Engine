#include <ni/controller_editor/PrecisionHandler__int_.hpp>
namespace fmt::ArgVisitor<fmt::internal {

void PrecisionHandler, int>::visit_double(double param_1) {
}

void PrecisionHandler, int>::visit_long_double(long double) {
visit_any_double<long_double>(param_1);
                    /* WARNING: Subroutine does not return */
  visit_unhandled_arg();
}

void PrecisionHandler, int>::visit_pointer(void const*) {
/* WARNING: Subroutine does not return */
  visit_unhandled_arg();
}

void PrecisionHandler, int>::visit_unhandled_arg() {
/* WARNING: Subroutine does not return */
  internal::PrecisionHandler::report_unhandled_arg();
}
}
