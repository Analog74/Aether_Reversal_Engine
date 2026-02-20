#include <ni/controller_editor/str2NSString_std.hpp>
namespace NI::GP::NSStringRef {

void str2NSString(std::string const&, bool) {
void *puVar1;
  unsigned long long uVar2;
  unsigned long uVar3;
  unsigned char *puVar4;
  utf_to_utf_chseqref<unsigned_short,char,true> local_30 [8];
  byte local_28;
  unsigned char local_26 [6];
  unsigned long local_20;
  unsigned char *local_18;
  
  puVar1 = PTR__objc_msgSend_100227360;
  uVar3 = (unsigned long)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar3 = *(unsigned long *)(param_1 + 8);
  }
  if (uVar3 == 0) {
    if (param_2) {
      uVar2 = (*(code *)PTR__objc_msgSend_100227360)(&_OBJC_CLASS___NSString,"alloc");
      uVar2 = (*(code *)puVar1)(uVar2,"init");
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    details::utf_to_utf_chseqref<unsigned_short,char,true>::create(local_30,param_1);
    uVar2 = (*(code *)PTR__objc_msgSend_100227360)(&_OBJC_CLASS___NSString,"alloc");
    puVar4 = local_26;
    if ((local_28 & 1) != 0) {
      puVar4 = local_18;
    }
    uVar3 = (unsigned long)(local_28 >> 1);
    if ((local_28 & 1) != 0) {
      uVar3 = local_20;
    }
    uVar2 = (*(code *)PTR__objc_msgSend_100227360)(uVar2,"initWithCharacters:length:",puVar4,uVar3);
    if ((local_28 & 1) != 0) {
      delete(local_18);
    }
  }
  return uVar2;
}
}
