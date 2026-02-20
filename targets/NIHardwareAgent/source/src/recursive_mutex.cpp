#include <ni/controller_editor/recursive_mutex.hpp>
namespace std {

recursive_mutex::recursive_mutex() {
/* WARNING: Could not recover jumptable at 0x00010038c140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_recursive_mutex_1009f45c0)();
  
}

recursive_mutex::~recursive_mutex() {
/* WARNING: Could not recover jumptable at 0x00010038c146. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__recursive_mutex_1009f45c8)();
  return;
}
}
