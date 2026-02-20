#include <ni/controller_editor/exception.hpp>
namespace std {

exception::~exception() {
/* WARNING: Could not recover jumptable at 0x00010038c260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__exception_1009f4740)();
  return;
}
}
