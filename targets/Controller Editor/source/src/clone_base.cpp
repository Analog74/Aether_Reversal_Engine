#include <ni/controller_editor/clone_base.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::exception_detail {

clone_base::~clone_base() {
code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
}
