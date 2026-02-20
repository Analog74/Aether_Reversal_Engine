#include <ni/controller_editor/is_retrieval_request_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::http::client::details {

void is_retrieval_request(std::string) {
byte bVar1;
  byte *pbVar2;
  int iVar3;
  unsigned long uVar4;
  size_t sVar5;
  bool bVar6;
  
  uVar4 = (unsigned long)(methods::GET >> 1);
  if ((methods::GET & 1) != 0) {
    uVar4 = 0;
  }
  bVar1 = *param_1;
  if ((bVar1 & 1) == 0) {
    sVar5 = (size_t)(bVar1 >> 1);
  }
  else {
    sVar5 = *(size_t *)(param_1 + 8);
  }
  if (uVar4 == sVar5) {
    if ((bVar1 & 1) == 0) {
      pbVar2 = param_1 + 1;
    }
    else {
      pbVar2 = *(byte **)(param_1 + 0x10);
    }
    if ((methods::GET & 1) == 0) {
      if (uVar4 == 0) {
        return true;
      }
      uVar4 = 0;
      while ((&0)[uVar4] == pbVar2[uVar4]) {
        uVar4 = uVar4 + 1;
        if (methods::GET >> 1 == uVar4) {
          return true;
        }
      }
    }
    else {
      if (uVar4 == 0) {
        return true;
      }
      iVar3 = _memcmp(0,pbVar2,uVar4);
      if (iVar3 == 0) {
        return true;
      }
    }
  }
  uVar4 = (unsigned long)(methods::HEAD >> 1);
  if ((methods::HEAD & 1) != 0) {
    uVar4 = 0;
  }
  if (uVar4 == sVar5) {
    if ((bVar1 & 1) == 0) {
      param_1 = param_1 + 1;
    }
    else {
      param_1 = *(byte **)(param_1 + 0x10);
    }
    if ((methods::HEAD & 1) == 0) {
      if (sVar5 != 0) {
        uVar4 = 0;
        do {
          bVar6 = (&0)[uVar4] == param_1[uVar4];
          if (!bVar6) {
            return bVar6;
          }
          uVar4 = uVar4 + 1;
        } while (methods::HEAD >> 1 != uVar4);
        return bVar6;
      }
    }
    else if(1 param_1, 1 param_1, sVar5 != 0 {
      iVar3 = _memcmp(0,param_1,sVar5;
      return iVar3 == 0;
    }
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}
}
