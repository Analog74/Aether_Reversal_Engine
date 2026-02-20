#include <ni/controller_editor/runtime_error_std.hpp>
namespace std::runtime_error {

void runtime_error(std::runtime_error const&) {
/* WARNING: Could not recover jumptable at 0x00010038c038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_runtime_error_1009f4460)();
  return;
}
}
