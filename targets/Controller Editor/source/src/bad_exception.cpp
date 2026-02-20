#include <ni/controller_editor/bad_exception.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace std {

bad_exception::~bad_exception() {
/* WARNING: Could not recover jumptable at 0x000100973f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bad_exception_101b84518)();
  return;
}
}
