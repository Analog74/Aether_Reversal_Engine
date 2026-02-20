#include <ni/controller_editor/out_of_range.hpp>
namespace std {

out_of_range::out_of_range(char const*) {
// std code
  *(void **)this = PTR_vtable_1009cc2a8 + 0x10;
  
}

out_of_range::~out_of_range() {
/* WARNING: Could not recover jumptable at 0x00010038c01a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__out_of_range_1009f4438)();
  return;
}
}
