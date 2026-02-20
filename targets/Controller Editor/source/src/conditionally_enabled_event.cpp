#include <ni/controller_editor/conditionally_enabled_event.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::asio::detail {

conditionally_enabled_event::~conditionally_enabled_event() {
_pthread_cond_destroy((pthread_cond_t *)(this + 8));
  return;
}
}
