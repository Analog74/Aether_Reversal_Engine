#include <ni/controller_editor/EncodeUtf8_anyrpc.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace anyrpc::XmlReader {

void EncodeUtf8(2 param_2, 2 param_2, anyrpc::Stream&, unsigned int {
byte bVar1;
  
  if (0x7f < param_2 {
    if (param_2 < 0x800) {
      bVar1 = (byte)(param_2 >> 6) | 0xc0;
    }
    else {
      if (param_2 < 0x10000) {
        bVar1 = (byte)(param_2 >> 0xc) | 0xe0;
      }
      else {
        (**(code **)(*(long *)param_1 + 0x58))(param_1,(int)(char)((byte)(param_2 >> 0x12) | 0xf0));
        bVar1 = (byte)(param_2 >> 0xc) & 0x3f | 0x80;
      }
      (**(code **)(*(long *)param_1 + 0x58))(param_1,(int)(char)bVar1);
      bVar1 = (byte)(param_2 >> 6) & 0x3f | 0x80;
    }
    (**(code **)(*(long *)param_1 + 0x58))(param_1,(int)(char)bVar1);
    param_2 = (uint)((byte)param_2 & 0x3f | 0x80);
  }
                    /* WARNING: Could not recover jumptable at 0x00010094f173. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x58))(param_1,(int)(char)param_2);
  return;
}
}
