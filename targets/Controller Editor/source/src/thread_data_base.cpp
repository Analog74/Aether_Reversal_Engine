#include <ni/controller_editor/thread_data_base.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::detail {

thread_data_base::thread_data_base() {
code *pcVar1;
  int iVar2;
  void *local_48 [5];
  
  *(unsigned long long *)(this + 8) = 0;
  *(unsigned long long *)(this + 0x10) = 0;
  *(void ***)this = &PTR__thread_data_base_101b326d8;
  *(unsigned long long *)(this + 0x18) = 0;
  *(unsigned long long *)(this + 0x20) = 0;
  *(unsigned long long *)(this + 0x28) = 0;
  iVar2 = _pthread_mutex_init((pthread_mutex_t *)(this + 0x30),(pthread_mutexattr_t *)0x0);
  if (iVar2 == 0) {
    condition_variable::condition_variable((condition_variable *)(this + 0x70));
    *(void2 *)(this + 0xe0) = 0;
    this[0xe2] = (thread_data_base)0x0;
    *(unsigned long long *)(this + 0xe8) = 0;
    *(unsigned long long *)(this + 0xf8) = 0;
    *(unsigned long long *)(this + 0x100) = 0;
    *(thread_data_base **)(this + 0xf0) = this + 0xf8;
    *(unsigned long long *)(this + 0x108) = 0;
    *(unsigned long long *)(this + 0x110) = 0;
    *(unsigned long long *)(this + 0x118) = 0;
    *(unsigned long long *)(this + 0x120) = 0;
    *(unsigned long long *)(this + 0x128) = 0;
    *(unsigned long long *)(this + 0x130) = 0;
    *(unsigned long long *)(this + 0x138) = 0;
    *(unsigned long long *)(this + 0x140) = 0;
    *(void2 *)(this + 0x148) = 1;
    
  }
  thread_exception::thread_exception
            ((thread_exception *)local_48,iVar2,
             "// boost code
  local_48[0] = (char*)PTR_vtable_101ab44f0 + 0x10;
  throw_exception<// boost code
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

thread_data_base::~thread_data_base() {
code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
}
