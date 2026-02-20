#include <ni/controller_editor/connection_body_base.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::signals2::detail {

connection_body_base::~connection_body_base() {
code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
}
