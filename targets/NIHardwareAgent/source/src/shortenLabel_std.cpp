#include <ni/controller_editor/shortenLabel_std.hpp>
namespace NI::NHL2::Assignment {

void shortenLabel(std::string&, unsigned long) {
unsigned long long local_50;
  unsigned long long uStack_48;
  unsigned long long local_40;
  utf_to_utf<char16_t,char,true> local_38 [16];
  void *local_28;
  
  GP::details::utf_to_utf<char16_t,char,true>::apply(local_38,param_1);
  shortenLabel((u16string *)local_38,param_2);
  GP::details::utf_to_utf<char,char16_t,true>::apply
            ((utf_to_utf<char,char16_t,true> *)&local_50,(u16string *)local_38);
  if (((byte)*param_1 & 1) != 0) {
    delete(*(void **)(param_1 + 0x10));
  }
  *(unsigned long long *)(param_1 + 0x10) = local_40;
  *(unsigned long long *)param_1 = local_50;
  *(unsigned long long *)(param_1 + 8) = uStack_48;
  if (((byte)local_38[0] & 1) != 0) {
    delete(local_28);
  }
  return;
}
}
