#include <ni/controller_editor/assembleRequest_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace ni::uret::WorkerThread {

void assembleRequest(std::stringstream const&) {
unsigned char *puVar1;
  byte local_40 [16];
  void *local_30;
  byte local_28;
  unsigned char local_27 [7];
  unsigned long local_20;
  unsigned char *local_18;
  
  // std code
  puVar1 = local_18;
  if ((local_28 & 1) == 0) {
    local_20 = (unsigned long)(local_28 >> 1);
    puVar1 = local_27;
  }
  NI::GP::binaryToBase64(local_40,puVar1,local_20);
  // std code
  if ((local_40[0] & 1) != 0) {
    delete(local_30);
  }
  if ((local_28 & 1) != 0) {
    delete(local_18);
  }
  return param_1;
}
}
