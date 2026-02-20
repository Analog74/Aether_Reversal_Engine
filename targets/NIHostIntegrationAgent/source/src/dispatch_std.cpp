#include <ni/controller_editor/dispatch_std.hpp>
namespace NI::dawcontrol::ServiceThread {

void dispatch(std::function<void ()>) {
ServiceThread *local_10;
  
  local_10 = this + 8;
  // boost code
  initiate_dispatch_with_executor<// boost code
  ::operator()((function *)&local_10,param_2,(type *)0x0);
  return;
}
}
