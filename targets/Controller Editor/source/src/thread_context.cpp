#include <ni/controller_editor/thread_context.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::asio::detail {

void thread_context::top_of_thread_call_stack() {
void *pvVar1;
  
  pvVar1 = _pthread_getspecific
                     (call_stack<// boost code
                      ::top_);
  if (pvVar1 != (void *)0x0) {
    return *(unsigned long long *)((long)pvVar1 + 8);
  }
  return 0;
}
}
