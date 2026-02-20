#include <ni/controller_editor/Base64Encode_anyrpc.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace anyrpc::internal {

void Base64Encode(2 param_2, 2 param_2, anyrpc::Stream&, unsigned char const*, unsigned long {
uint uVar1;
  uint uVar2;
  char local_34;
  char local_33;
  void2 local_32;
  
  if (param_3 < 3 {
    if (param_3 == 1) {
      local_34 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[*param_2 >> 2];
      local_33 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                 [(*param_2 & 3) << 4];
      local_32 = 0x3d3d;
    }
    else {
      if (param_3 != 2) {
        return;
      }
      local_34 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[*param_2 >> 2];
      local_33 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                 [(unsigned long)(param_2[1] >> 4) | (unsigned long)((*param_2 & 3) << 4)];
      local_32 = CONCAT11(0x3d,"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                               [(unsigned long)(param_2[1] & 0xf) * 4]);
    }
    (**(code **)(*(long *)param_1 + 0x70))(param_1,&local_34,4);
    return;
  }
  param_3 = param_3 - 3;
  param_2 = param_2 + 3;
  uVar2 = 0;
  do {
    local_34 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[param_2[-3] >> 2];
    local_33 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
               [(unsigned long)(param_2[-2] >> 4) | (unsigned long)((param_2[-3] & 3) << 4)];
    local_32 = CONCAT11("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                        [param_2[-1] & 0x3f],
                        "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                        [(unsigned long)(param_2[-1] >> 6) + (unsigned long)(param_2[-2] & 0xf) * 4]);
    (**(code **)(*(long *)param_1 + 0x70))(param_1,&local_34,4);
    uVar1 = uVar2 + 1;
    if ((param_3 < 3) || (0xe < uVar2)) {
      if ((param_3 != 0) && (uVar1 == 0x10)) {
        (**(code **)(*(long *)param_1 + 0x58))(param_1,10);
      }
      uVar1 = 0;
      if (param_3 < 3) return;
    }
    param_3 = param_3 - 3;
    param_2 = param_2 + 3;
    uVar2 = uVar1;
  } while( true );
}
}
