#include <ni/controller_editor/AsyncHttpResult.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace ni::uret {

void AsyncHttpResult::waitForResult(unsigned int) {
unsigned long uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  AsyncHttpResult *local_38;
  char local_30;
  
  uVar1 = (unsigned long)param_1;
  local_38 = this + 0x20;
  local_30 = '\x01';
  // std code
  if (param_1 != 0) {
    lVar2 = // std code
    lVar3 = // std code
    if (lVar3 == 0) {
      lVar4 = 0;
      lVar5 = lVar4 + uVar1 * 1000000;
    }
    else {
      lVar5 = 0x7fffffffffffffff;
      if (lVar3 < 1) {
        if (-0x20c49ba5e353f8 < lVar3) return;
        lVar4 = -0x8000000000000000;
        return;
      }
      lVar4 = 0x7fffffffffffffff;
      if (lVar3 < 0x20c49ba5e353f8) {
        lVar4 = lVar3 * 1000;
      }
      if (lVar4 <= (long)(uVar1 * 1000000 ^ 0x7fffffffffffffff)) return;
    }
    // std code
    lVar3 = // std code
    if (lVar3 - lVar2 < (long)(uVar1 * 1000000)) return;
  }
  *this = (AsyncHttpResult)0x0;
  // std code
  if (local_30 != '\0') {
    // std code
  }
  return;
}
}
