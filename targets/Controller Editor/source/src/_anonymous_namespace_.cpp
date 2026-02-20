#include <ni/controller_editor/_anonymous_namespace_.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace ni::thread {

void (anonymous namespace)::set_standard_priority(_opaque_pthread_t*, int) {
char cVar1;
  mach_port_t thread;
  kern_return_t kVar2;
  ostream *poVar3;
  long *plVar4;
  id local_38 [8];
  int local_30 [2];
  
  thread = _pthread_mach_thread_np(param_1);
  kVar2 = _thread_policy_set(thread,1,local_30,0);
  if (kVar2 != 0) {
    poVar3 = // std code
                       ((ostream *)PTR_cerr_101ab40e8,"Could not set thread priority! error: ",0x26)
    ;
    cVar1 = // std code
    // std code
    plVar4 = (long *)// std code
    (**(code **)(*plVar4 + 0x38))(plVar4,10);
    // std code
    // std code
    // std code
  }
  local_30[0] = param_2;
  kVar2 = _thread_policy_set(thread,3,local_30,1);
  if (kVar2 != 0) {
    poVar3 = // std code
                       ((ostream *)PTR_cerr_101ab40e8,"Could not set thread priority! error: ",0x26)
    ;
    cVar1 = // std code
    // std code
    plVar4 = (long *)// std code
    (**(code **)(*plVar4 + 0x38))(plVar4,10);
    // std code
    // std code
    // std code
  }
  return;
}
}
