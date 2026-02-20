#include <ni/controller_editor/verify_uri_web.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::http::client {

void verify_uri(1 param_1, web::uri const& {
int iVar1;
  unsigned long uVar2;
  unsigned long uVar3;
  invalid_argument *this;
  byte bVar4;
  unsigned long uVar5;
  
  uVar2 = (unsigned long)((byte)param_1[0x18] >> 1);
  bVar4 = (byte)param_1[0x18] & 1;
  uVar3 = *(unsigned long *)(param_1 + 0x20);
  uVar5 = uVar3;
  if (bVar4 == 0) {
    uVar5 = uVar2;
  }
  if (uVar5 == 4) {
    iVar1 = // std code if(1 param_1, 1 param_1, iVar1 != 0 {
      uVar3 = *(unsigned long *(param_1 + 0x20);
      bVar4 = (byte)param_1[0x18] & 1;
      uVar2 = (unsigned long)((byte)param_1[0x18] >> 1);
      return;
    }
    if (((byte)param_1[0x30] & 1) == 0) {
      uVar3 = (unsigned long)((byte)param_1[0x30] >> 1);
    }
    else {
      uVar3 = *(unsigned long *)(param_1 + 0x38);
    }
    if (uVar3 != 0) {
      return;
    }
    this = (invalid_argument *)___cxa_allocate_exception(0x10);
    // std code
  }
  else {
    if (bVar4 != 0) {
      uVar2 = uVar3;
    }
    if (uVar2 == 5) {
      iVar1 = // std code
      ;
      if (iVar1 == 0) return;
    }
    this = (invalid_argument *)___cxa_allocate_exception(0x10);
    // std code
  }
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(this,PTR_typeinfo_101ab4318,PTR__invalid_argument_101ab40c8);
}
}
