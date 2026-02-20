#include <ni/controller_editor/work.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::asio::io_context {

work::~work() {
scheduler *psVar1;
  scheduler *this_00;
  
  this_00 = *(scheduler **)this;
  LOCK();
  psVar1 = this_00 + 0xf0;
  *(long *)psVar1 = *(long *)psVar1 + -1;
  UNLOCK();
  if (*(long *)psVar1 == 0) {
    asio::detail::scheduler::stop(this_00);
  }
  return;
}
}
