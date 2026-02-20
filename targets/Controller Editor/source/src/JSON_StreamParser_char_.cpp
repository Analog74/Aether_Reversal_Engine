#include <ni/controller_editor/JSON_StreamParser_char_.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::json::details {

void JSON_StreamParser<char>::NextCharacter() {
long *plVar1;
  char *pcVar2;
  int iVar3;
  
  plVar1 = *(long **)(this + 0x20);
  pcVar2 = (char *)plVar1[3];
  if (pcVar2 == (char *)plVar1[4]) {
    iVar3 = (**(code **)(*plVar1 + 0x50))();
    if (iVar3 != 10) return;
  }
  else {
    plVar1[3] = (long)(pcVar2 + 1);
    if (*pcVar2 != '\n') {
      *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
      return;
    }
  }
  *(long *)(this + 8) = *(long *)(this + 8) + 1;
  *(unsigned long long *)(this + 0x10) = 0;
  return;
}

void JSON_StreamParser<char>::PeekCharacter() {
long *plVar1;
  unsigned long uVar2;
  
  plVar1 = *(long **)(this + 0x20);
  if ((byte *)plVar1[3] != (byte *)plVar1[4]) {
    return (unsigned long)*(byte *)plVar1[3];
  }
                    /* WARNING: Could not recover jumptable at 0x00010056344b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar1 + 0x48))();
  return uVar2;
}
}
