#include <ni/controller_editor/posix_mutex.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::asio::detail {

posix_mutex::~posix_mutex() {
_pthread_mutex_destroy((pthread_mutex_t *)this);
  return;
}
}
