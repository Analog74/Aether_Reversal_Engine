#include <ni/controller_editor/StringUtil.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace std::string NI::GP {

void StringUtil::fromUTF<char16_t>(char16_t const*, unsigned long) {
char *pcVar1;
  GP local_38 [8];
  byte local_30;
  char local_2f [7];
  unsigned long local_28;
  char *local_20;
  
  utf_to_utf_chseqref<char,char16_t>(local_38,param_1,param_1 + param_2);
  *(unsigned long long *)this = 0;
  *(unsigned long long *)(this + 8) = 0;
  *(unsigned long long *)(this + 0x10) = 0;
  pcVar1 = local_20;
  if ((local_30 & 1) == 0) {
    local_28 = (unsigned long)(local_30 >> 1);
    pcVar1 = local_2f;
  }
  // std code
  if ((local_30 & 1) != 0) {
    delete(local_20);
  }
  return this;
}
}
