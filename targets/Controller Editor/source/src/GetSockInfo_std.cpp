#include <ni/controller_editor/GetSockInfo_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace anyrpc::Connection {

void GetSockInfo(std::string&, unsigned int&) const {
ushort uVar1;
  int iVar2;
  unsigned int extraout_var;
  socklen_t local_5c;
  char local_58 [24];
  sockaddr local_40;
  long local_30;
  unsigned long uVar3;
  
  local_30 = *(long *)PTR____stack_chk_guard_101ab4610;
  local_5c = 0x10;
  iVar2 = _getsockname(*(int *)(this + 0x10),&local_40,&local_5c);
  uVar3 = CONCAT44(extraout_var,iVar2);
  if (iVar2 == 0) {
    _inet_ntop((uint)local_40.sa_family,local_40.sa_data + 2,local_58,0x14);
    // std code
    uVar1 = local_40.sa_data._0_2_ << 8 | (ushort)local_40.sa_data._0_2_ >> 8;
    uVar3 = (unsigned long)uVar1;
    *param_2 = (uint)uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_101ab4610 == local_30) {
    return 0((int7)(uVar3 >> 8),iVar2 == 0);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}
}
