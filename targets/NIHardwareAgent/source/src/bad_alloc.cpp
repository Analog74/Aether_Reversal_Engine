#include <ni/controller_editor/bad_alloc.hpp>
namespace std {

bad_alloc::bad_alloc() {
/* WARNING: Could not recover jumptable at 0x00010038c254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_bad_alloc_1009f4730)();
  
}
}
