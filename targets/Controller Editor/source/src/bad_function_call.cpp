#include <ni/controller_editor/bad_function_call.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost {

bad_function_call::~bad_function_call() {
// std code
  delete(this);
  return;
}
}
