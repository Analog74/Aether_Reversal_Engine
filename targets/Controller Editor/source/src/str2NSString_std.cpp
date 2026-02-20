#include <ni/controller_editor/str2NSString_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP::NSStringRef {

void str2NSString(1 param_1, std::string const&, bool {
unsigned long long uVar1;
  unsigned char *puVar2;
  GP local_30 [8];
  byte local_28;
  unsigned char local_26 [6];
  unsigned long local_20;
  unsigned char *local_18;
  
  if (((byte)*param_1 & 1) == 0) {
    if ((byte)*param_1 >> 1 == 0) return;
  }
  else if (*(long *)(param_1 + 8) == 0) {
    if (!param_2) {
      return 0;
    }
    uVar1 = _objc_alloc_init(&_OBJC_CLASS___NSString);
    return uVar1;
  }
  utf_to_utf_chseqref<unsigned_short,char>(local_30,param_1);
  uVar1 = _objc_alloc(&_OBJC_CLASS___NSString);
  puVar2 = local_18;
  if ((local_28 & 1) == 0) {
    local_20 = (unsigned long)(local_28 >> 1);
    puVar2 = local_26;
  }
  uVar1 = (*(code *)PTR__objc_msgSend_101ab46d8)(uVar1,"initWithCharacters:length:",puVar2,local_20)
  ;
  if ((local_28 & 1) != 0) {
    delete(local_18);
  }
  return uVar1;
}
}
