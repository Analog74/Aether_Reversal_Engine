#include <ni/controller_editor/Stream___anyrpc.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace anyrpc::internal::Base64Decode(anyrpc {

void Stream&, anyrpc::Stream&, char) {
char cVar1;
  byte bVar2;
  unsigned long long extraout_RDX;
  int iVar3;
  bool bVar4;
  char local_37;
  char local_36;
  char local_35;
  char local_34 [4];
  
  iVar3 = 0;
  while( true ) {
  }
  if (iVar3 < 2) {
    bVar4 = false;
  }
  else {
    if (iVar3 == 2) {
      cVar1 = (**(code **)(*(long *)param_2 + 0x30))(param_2);
      if (cVar1 != '=') return;
      cVar1 = ((byte)local_34[1] >> 4) + local_34[0] * '\x04';
      (**(code **)(*(long *)param_1 + 0x58))(param_1,(int)cVar1,extraout_RDX,cVar1);
    }
    else {
      local_37 = ((byte)local_34[1] >> 4) + local_34[0] * '\x04';
      local_36 = ((byte)local_34[2] >> 2) + local_34[1] * '\x10';
      (**(code **)(*(long *)param_1 + 0x70))(param_1,&local_37,2);
    }
    cVar1 = (**(code **)(*(long *)param_2 + 0x28))(param_2);
    bVar4 = cVar1 == param_3;
  }
  return bVar4;
}
}
