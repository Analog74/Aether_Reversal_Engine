#include <ni/controller_editor/Property_const___std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL::(anonymous namespace)::retrieveURL(NI::NWL {

void Property const&, std::string&) {
int iVar1;
  unsigned long long uVar2;
  byte bVar3;
  bool bVar4;
  
  long local_28;
  void *local_20;
  
  if (*(int *)(param_1 + 0x68) != 5) {
    if (*(int *)(param_1 + 0x68) != 4) {
      return 0;
    }
    if (*(int *)(param_1 + 0x50) == 4) {
      // std code
      // std code
      if (((byte)local_30[0] & 1) == 0) {
        return 1;
      }
      delete(local_20);
      return 1;
    }
    uVar2 = // std code
                    /* WARNING: Subroutine does not return */
    ___clang_call_terminate(uVar2);
  }
  if (*(int *)(param_1 + 0x50) != 4) return;
  // std code
  bVar3 = (byte)local_30[0] & 1;
  if (bVar3 == 0) {
    if ((byte)local_30[0] >> 1 == 2) return;
  }
  else if (local_28 == 2) {
    iVar1 = // std code
    bVar4 = iVar1 == 0;
    bVar3 = (byte)local_30[0] & 1;
    goto joined_r0x0001004def40;
  }
  bVar4 = false;
joined_r0x0001004def40:
  if (bVar3 != 0) {
    delete(local_20);
  }
  if (bVar4) {
    // std code
    return 1;
  }
  return 0;
}
}
