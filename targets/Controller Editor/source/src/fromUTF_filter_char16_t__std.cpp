#include <ni/controller_editor/fromUTF_filter_char16_t__std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace std::string NI::GP::StringUtil {

void fromUTF_filter<char16_t>(std::u16string const&) {
unsigned char *puVar1;
  utf_to_utf<char,char16_t,true> local_30;
  unsigned char local_2f [7];
  unsigned long local_28;
  unsigned char *local_20;
  
  GP::details::utf_to_utf<char,char16_t,true>::apply(&local_30,param_1);
  *(unsigned long long *)this = 0;
  *(unsigned long long *)(this + 8) = 0;
  *(unsigned long long *)(this + 0x10) = 0;
  puVar1 = local_20;
  if (((byte)local_30 & 1) == 0) {
    local_28 = (unsigned long)((byte)local_30 >> 1);
    puVar1 = local_2f;
  }
  // std code
            ((string *)this,puVar1,puVar1 + local_28);
  if (((byte)local_30 & 1) != 0) {
    delete(local_20);
  }
  return this;
}
}
