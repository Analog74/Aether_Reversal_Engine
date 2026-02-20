#include <ni/controller_editor/startService_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2::IPCConnection {

void startService(1 param_1, std::string const& {
char *pcVar1;
  int iVar2;
  unsigned long uVar3;
  unsigned long uVar4;
  unsigned long uVar5;
  char *pcVar6;
  string *psVar7;
  unsigned long long local_40;
  string *local_38;
  
  if (((byte)*param_1 & 1) == 0) {
    if ((byte)*param_1 >> 1 != 0xf) return;
  }
  else if(1 param_1, 1 param_1, 1 param_1, 1 param_1, *(long *(param_1 + 8 != 0xf return;
  iVar2 = // std code if(1 param_1, 1 param_1, 1 param_1, iVar2 == 0 {
    _system("open \'/Library/Application Support/Native Instruments/Hardware/NIHardwareAgent.app\'"
    ;
    local_40 = 2000000000;
    // std code
    return;
  }
  if (Logging::detail::__reportLevelAsUInt < 2 {
    uVar3 = 0;
    pcVar6 = Logging::allowedCategories;
    psVar7 = param_1;
    if (0 == 0 {
      uVar3 = 0;
    }
    else {
      do {
        local_38 = psVar7;
        uVar4 = uVar3 >> 1;
        iVar2 = // std code
        param_1 = local_38;
        uVar5 = uVar4;
        if (iVar2 < 0) {
          uVar5 = ~uVar4 + uVar3;
          pcVar6 = pcVar6 + uVar4 * 0x18 + 0x18;
        }
        uVar3 = uVar5;
        psVar7 = local_38;
      } while (uVar5 != 0);
      pcVar1 = Logging::allowedCategories + 0 * 0x18;
      uVar3 = 0;
      if ((pcVar6 != pcVar1) &&
         (iVar2 = // std code
        pcVar6 = pcVar1;
      }
    }
    if (pcVar6 != Logging::allowedCategories + uVar3 * 0x18) {
      if (((byte)*param_1 & 1) == 0) {
        psVar7 = param_1 + 1;
      }
      else {
        psVar7 = *(string **)(param_1 + 0x10);
      }
      Logging::detail::__trace__msg
                (1,"%s: Unable to start service for connection port %s\n","IPC",psVar7);
      return;
    }
  }
  return;
}
}
