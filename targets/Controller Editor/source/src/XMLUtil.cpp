#include <ni/controller_editor/XMLUtil.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2 {

void XMLUtil::isName(char const*, char const*) {
byte bVar1;
  unsigned long long in_RAX;
  unsigned long uVar2;
  byte *pbVar3;
  
  uVar2 = 0((int7)((unsigned long)in_RAX >> 8),*param_1);
  if (*param_1 != '\0') {
    pbVar3 = (byte *)(param_1 + 1);
    do {
      if ((*param_2 == '\0') || ((char)uVar2 != *param_2)) return;
      param_2 = param_2 + 1;
      bVar1 = *pbVar3;
      uVar2 = (unsigned long)bVar1;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
  }
  uVar2 = 0;
  return 0((int7)(uVar2 >> 8),(char)uVar2 == *param_2);
}
}
