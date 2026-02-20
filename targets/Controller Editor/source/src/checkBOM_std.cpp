#include <ni/controller_editor/checkBOM_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL::StyleParser2 {

void checkBOM(1 param_1, std::string& {
string *psVar1;
  string sVar2;
  
  *(unsigned int *)(this + 0x50) = 0;
  if (((byte)*param_1 & 1) == 0) {
    if ((byte)*param_1 < 8) {
      return;
    }
    psVar1 = param_1 + 1;
    if (param_1[1] == (string)0xef) {
      sVar2 = param_1[2];
joined_r0x0001004da1a2:
      if (sVar2 != (string)0xbb) {
        return;
      }
      if (psVar1[2] != (string)0xbf) {
        return;
      }
      *(unsigned int *)(this + 0x50) = 1;
      return;
    }
    if ((param_1[1] == (string)0xfe) && (param_1[2] == (string)0xff)) {
      *(unsigned int *)(this + 0x50) = 2;
      return;
    }
    if (*psVar1 == (string)0xff) {
      if (param_1[2] != (string)0xfe) {
        return;
      }
      sVar2 = param_1[3];
      goto joined_r0x0001004da1d4;
    }
    if (*psVar1 != (string)0x0) {
      return;
    }
    if (param_1[2] != (string)0x0) {
      return;
    }
    sVar2 = param_1[3];
  }
  else {
    if (*(unsigned long *)(param_1 + 8) < 4) {
      return;
    }
    psVar1 = *(string **)(param_1 + 0x10);
    sVar2 = *psVar1;
    if (sVar2 == (string)0xef) {
      sVar2 = psVar1[1];
      goto joined_r0x0001004da1a2;
    }
    if (sVar2 == (string)0xfe) {
      if (psVar1[1] == (string)0xff) return;
      psVar1 = *(string **)(param_1 + 0x10);
      sVar2 = *psVar1;
    }
    if (sVar2 == (string)0xff) {
      if (psVar1[1] != (string)0xfe) {
        return;
      }
      sVar2 = psVar1[2];
joined_r0x0001004da1d4:
      if ((sVar2 == (string)0x0) && (psVar1[3] == (string)0x0)) {
        *(unsigned int *)(this + 0x50) = 5;
        return;
      }
      *(unsigned int *)(this + 0x50) = 3;
      return;
    }
    if (sVar2 != (string)0x0) {
      return;
    }
    if (psVar1[1] != (string)0x0) {
      return;
    }
    sVar2 = psVar1[2];
  }
  if ((sVar2 == (string)0xfe) && (psVar1[3] == (string)0xff)) {
    *(unsigned int *)(this + 0x50) = 4;
    return;
  }
  return;
}
}
