#include <ni/controller_editor/bad_exception.hpp>
namespace std {

bad_exception::~bad_exception() {
/* WARNING: Could not recover jumptable at 0x00010038c020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bad_exception_1009f4440)();
  return;
}
}
