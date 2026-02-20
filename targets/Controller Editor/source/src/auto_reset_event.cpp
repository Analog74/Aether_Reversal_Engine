#include <ni/controller_editor/auto_reset_event.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::sync::mach {

auto_reset_event::~auto_reset_event() {
_dispatch_release(*(dispatch_object_t *)this);
  return;
}
}
