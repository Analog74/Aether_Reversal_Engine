#include <ni/controller_editor/logic_error_std.hpp>
namespace std::logic_error {

void logic_error(std::logic_error const&) {
/* WARNING: Could not recover jumptable at 0x00010038c00e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_logic_error_1009f4428)();
  return;
}
}
