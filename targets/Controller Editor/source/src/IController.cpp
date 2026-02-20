#include <ni/controller_editor/IController.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

void IController::getWidgetName() const {
char *pcVar1;
  unsigned long uVar2;
  long *in_RSI;
  unsigned long *in_RDI;
  unsigned long uVar3;
  unsigned char *puVar4;
  string local_48;
  unsigned char local_47 [7];
  size_t local_40;
  unsigned char *local_38;
  
  (**(code **)(*in_RSI + 0x18))(&local_48);
  GP::StringUtil::removeCharacter(&local_48,' ',0,0xffffffffffffffff);
  *in_RDI = 0;
  in_RDI[1] = 0;
  in_RDI[2] = 0;
  uVar2 = local_40;
  puVar4 = local_38;
  if (((byte)local_48 & 1) == 0) {
    uVar2 = (unsigned long)((byte)local_48 >> 1);
    puVar4 = local_47;
  }
  if (0xffffffffffffffef < uVar2 + 5) {
                    /* WARNING: Subroutine does not return */
    // std code
  }
  if (uVar2 + 5 < 0x17) {
    *(char *)in_RDI = (char)uVar2 * '\x02';
    pcVar1 = (char *)((long)in_RDI + 1);
    if (uVar2 == 0) return;
  }
  else {
    uVar3 = uVar2 + 0x15 & 0xfffffffffffffff0;
    pcVar1 = (char *)new char[uVar3];
    in_RDI[2] = (unsigned long)pcVar1;
    *in_RDI = uVar3 | 1;
    in_RDI[1] = uVar2;
  }
  memcpy(pcVar1,puVar4,uVar2);
  pcVar1[uVar2] = '\0';
  // std code
  if (((byte)local_48 & 1) != 0) {
    delete(local_38);
  }
  return;
}

void IController::recalibrateJogwheelWithId(unsigned int) const {
return;
}
}
