#include <ni/controller_editor/apple_scheduler.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace pplx::details {

void apple_scheduler::schedule(void (*)(void*), void*) {
dispatch_queue_t queue;
  
  queue = _dispatch_get_global_queue(0,0);
  _dispatch_async_f(queue,param_2,(dispatch_function_t)param_1);
  return;
}

apple_scheduler::~apple_scheduler() {
delete(this);
  return;
}
}
