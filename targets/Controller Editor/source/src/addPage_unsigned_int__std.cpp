#include <ni/controller_editor/addPage_unsigned_int__std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2::MapHandler {

void addPage(3 param_3, unsigned int, std::string const&, bool {
unsigned int uVar1;
  long lVar2;
  long *plVar3;
  char in_CL;
  void7 in_register_00000011;
  unsigned int in_register_0000003c;
  long *plVar4;
  unsigned long long in_R9;
  unsigned long uVar5;
  unsigned int local_38;
  unsigned int local_34;
  
  plVar4 = (long *)CONCAT44(in_register_0000003c,param_1);
  uVar5 = (unsigned long)param_2 & 0xffffffff;
  plVar3 = plVar4 + 0x26;
  // std code
  uVar1 = *(unsigned int *)((long)plVar4 + 0x124);
  lVar2 = (**(code **)(*(long *)plVar4[0x40] + 0xa8))((long *)plVar4[0x40],uVar5,uVar1);
  if (in_CL == '\0') {
    (**(code **)(*(long *)plVar4[0x40] + 0xe8))
              ((long *)plVar4[0x40],(unsigned long)param_2 & 0xffffffff,uVar1,
               0(in_register_00000011,param_3),0,in_R9,plVar3);
  }
  else {
    (**(code **)(*plVar4 + 0xe8))(plVar4,lVar2);
    (**(code **)(*(long *)plVar4[0x40] + 0xe8))
              ((long *)plVar4[0x40],uVar5,uVar1,0(in_register_00000011,param_3),1);
    plVar3 = (long *)(**(code **)(*(long *)plVar4[0x40] + 0xa8))((long *)plVar4[0x40],uVar5,0);
    if ((lVar2 != 0) && (plVar3 != (long *)0x0)) {
      (**(code **)(*plVar3 + 0x30))(plVar3,lVar2);
    }
  }
  local_38 = 3;
  local_34 = (int)param_2;
  (**(code **)(*plVar4 + 0x110))(plVar4,&local_38);
  local_38 = 4;
  local_34 = (int)param_2;
  (**(code **)(*plVar4 + 0x110))(plVar4,&local_38);
  // std code
  (**(code **)(plVar4[1] + 0x10))(plVar4 + 1,uVar5,0);
  return;
}
}
