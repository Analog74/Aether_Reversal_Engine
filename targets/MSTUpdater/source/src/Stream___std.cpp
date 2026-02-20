#include <ni/controller_editor/Stream___std.hpp>
namespace NI::NWL::StyleParser2::processStream(NI::GP {

void Stream&, std::string) {
long *plVar1;
  char cVar2;
  unsigned int uVar3;
  unsigned long uVar4;
  unsigned char *puVar5;
  
  unsigned long long local_48;
  unsigned long uStack_40;
  unsigned char *local_38;
  
  plVar1 = *(long **)((long)param_1 + 8);
  cVar2 = -1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1,0,2);
    if (*(long **)((long)param_1 + 8) != (long *)0x0) {
      cVar2 = (**(code **)(**(long **)((long)param_1 + 8) + 0x28))();
    }
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = (unsigned char *)0x0;
  // std code
  plVar1 = *(long **)((long)param_1 + 8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1,0,0);
  }
  puVar5 = local_38;
  if ((local_48 & 1) == 0) {
    puVar5 = (unsigned char *)((long)&local_48 + 1);
  }
  GP::Stream::readRaw(param_1,(unsigned long)puVar5);
  *(unsigned int *)(this + 0x50) = 0;
  uVar4 = local_48 >> 1 & 0x7f;
  if ((local_48 & 1) != 0) {
    uVar4 = uStack_40;
  }
  if (3 < uVar4) {
    puVar5 = (unsigned char *)((long)&local_48 + 1);
    if ((local_48 & 1) != 0) {
      puVar5 = local_38;
    }
    switch(*puVar5) {
    case 0:
      if (((puVar5[1] == '\0') && (puVar5[2] == -2)) && (puVar5[3] == -1)) {
        *(unsigned int *)(this + 0x50) = 4;
      }
      break;
    case 0xef:
      if ((puVar5[1] == -0x45) && (puVar5[2] == -0x41)) {
        *(unsigned int *)(this + 0x50) = 1;
      }
      break;
    case 0xfe:
      if (puVar5[1] == -1) {
        *(unsigned int *)(this + 0x50) = 2;
      }
      break;
    case 0xff:
      if (puVar5[1] == -2) {
        if ((puVar5[2] == '\0') && (puVar5[3] == '\0')) {
          *(unsigned int *)(this + 0x50) = 5;
        }
        else {
          *(unsigned int *)(this + 0x50) = 3;
        }
      }
    }
  }
  // std code
  uVar3 = processBuffer(this,&local_48,local_60);
  // std code
  // std code
  return uVar3;
}
}
