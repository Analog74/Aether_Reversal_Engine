#include <ni/controller_editor/setValue_std.hpp>
namespace NI::UIA::TextClipBoardFormat {

void setValue(std::string const&) {
u16string *this_00;
  unsigned long long local_30;
  unsigned long long local_28;
  unsigned long long local_20;
  
  this_00 = (u16string *)(this + 0x10);
  GP::details::utf_to_utf<char16_t,char,true>::apply
            ((utf_to_utf<char16_t,char,true> *)&local_30,param_1);
  if (((byte)this[0x10] & 1) == 0) {
    *(void2 *)(this + 0x12) = 0;
    *this_00 = (u16string)0x0;
  }
  else {
    **(void2 **)(this + 0x20) = 0;
    *(unsigned long long *)(this + 0x18) = 0;
  }
  // std code
  *(unsigned long long *)(this + 0x20) = local_20;
  *(unsigned long long *)(this + 0x18) = local_28;
  *(unsigned long long *)this_00 = local_30;
  return;
}
}
