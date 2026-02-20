#include <ni/controller_editor/platform.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace pplx::details {

void platform::GetCurrentThreadId() {
_pthread_self();
  return;
}
}
