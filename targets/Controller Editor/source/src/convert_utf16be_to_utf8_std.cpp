#include <ni/controller_editor/convert_utf16be_to_utf8_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::http::(anonymous namespace) {

void convert_utf16be_to_utf8(1 param_1, std::u16string, bool {
u16
  void *local_40;
  unsigned long local_38;
  unsigned long uStack_30;
  void *local_28;
  
  local_28 = (void *)param_2[2];
  local_38 = *param_2;
  uStack_30 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  big_endian_to_little_endian((_anonymous_namespace_ *)local_50,&local_38);
  utility::conversions::utf16_to_utf8(param_1,local_50);
  if (((byte)local_50[0] & 1) != 0) {
    delete(local_40);
  }
  if ((local_38 & 1) != 0) {
    delete(local_28);
  }
  return;
}
}
