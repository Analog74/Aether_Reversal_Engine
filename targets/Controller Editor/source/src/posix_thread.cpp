#include <ni/controller_editor/posix_thread.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::asio::detail {

posix_thread::~posix_thread() {
if (this[8] == (posix_thread)0x0) {
    _pthread_detach(*(pthread_t *)this);
  }
  return;
}
}
