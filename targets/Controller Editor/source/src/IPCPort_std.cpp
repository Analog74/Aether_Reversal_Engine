#include <ni/controller_editor/IPCPort_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2::IPCPort {

void IPCPort(std::string) {
code *pcVar1;
  unsigned long long *puVar2;
  dispatch_semaphore_t pdVar3;
  char *local_50;
  char *local_48;
  unsigned long long local_40;
  unsigned int local_34;
  
  *(void ***)this = &PTR__IPCPort_101b0e260;
  // std code
  puVar2 = (unsigned long long *)new char[0x50];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR____shared_ptr_emplace_101b0e4f8;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  pdVar3 = _dispatch_semaphore_create(0);
  puVar2[6] = pdVar3;
  if (pdVar3 != (dispatch_semaphore_t)0x0) {
    *(unsigned int *)(puVar2 + 7) = 0;
    puVar2[8] = 0;
    *(unsigned int *)(puVar2 + 9) = 0;
    *(unsigned long long **)(this + 0x20) = puVar2 + 3;
    *(unsigned long long **)(this + 0x28) = puVar2;
    return;
  }
  local_50 = 
  "/Volumes/build/NIBuild/3rdparty/boost-sync-snapshot-2020-08-14-R1/include/boost/sync/detail/semaphore/semaphore_dispatch.hpp"
  ;
  local_48 = "// boost code
  local_40 = 0x32;
  local_34 = 0xc;
  // boost code
  throw_exception<// boost code
            ((source_location *)&local_50,(errc_t *)&local_34,
             "semaphore constructor failed in dispatch_semaphore_create");
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
}
