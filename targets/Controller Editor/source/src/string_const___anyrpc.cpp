#include <ni/controller_editor/string_const___anyrpc.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace anyrpc::XmlGenerateFaultResponse(int, std {

void string const&, anyrpc::Stream&) {
Value *pVVar1;
  unsigned long uVar2;
  string *psVar3;
  void **local_68;
  Stream *local_60;
  unsigned char local_58;
  unsigned long long local_54;
  unsigned long long local_48;
  unsigned long long uStack_40;
  unsigned int local_38;
  
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  pVVar1 = (Value *)Value::operator[]((Value *)&local_48,"faultCode");
  Value::Destroy(pVVar1);
  *(unsigned int *)(pVVar1 + 0x10) = 0x1607;
  *(long *)pVVar1 = (long)param_1;
  if (-1 < param_1) {
    *(unsigned int *)(pVVar1 + 0x10) = 0x3e07;
  }
  pVVar1 = (Value *)Value::operator[]((Value *)&local_48,"faultString");
  Value::Destroy(pVVar1);
  *(unsigned int *)(pVVar1 + 0x10) = 0x100006;
  if (((byte)*param_2 & 1) == 0) {
    uVar2 = (unsigned long)((byte)*param_2 >> 1);
    psVar3 = param_2 + 1;
  }
  else {
    uVar2 = *(unsigned long *)(param_2 + 8);
    psVar3 = *(string **)(param_2 + 0x10);
  }
  Value::CopyString(pVVar1,(char *)psVar3,uVar2);
  (**(code **)(*(long *)param_3 + 0x60))
            (param_3,"<?xml version=\"1.0\" encoding=\"utf-8\" ?>\r\n<methodResponse><fault>");
  local_68 = &PTR__XmlWriter_101b83418;
  local_58 = 0;
  local_54 = 0;
  local_60 = param_3;
  Value::TraverseInternal((Value *)&local_48,(Handler *)&local_68);
  (**(code **)(*(long *)param_3 + 0x60))(param_3,"</fault></methodResponse>\r\n");
  Value::Destroy((Value *)&local_48);
  return;
}
}
