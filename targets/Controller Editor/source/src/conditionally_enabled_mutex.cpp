#include <ni/controller_editor/conditionally_enabled_mutex.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::asio::detail {

conditionally_enabled_mutex::~conditionally_enabled_mutex() {
_pthread_mutex_destroy((pthread_mutex_t *)(this + 8));
  return;
}
}
