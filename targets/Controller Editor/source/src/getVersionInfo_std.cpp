#include <ni/controller_editor/getVersionInfo_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA::AppModule {

void getVersionInfo(std::string&) {
long lVar1;
  unsigned long long uVar2;
  __CFString *p_Var3;
  long lVar4;
  unsigned long uVar5;
  unsigned char *puVar6;
  StringCF local_38;
  unsigned char local_37 [15];
  unsigned char *local_28;
  
  lVar1 = GP::getCurrentDSOHandle();
  if (lVar1 != 0) {
    uVar2 = GP::getCurrentDSOHandle();
    p_Var3 = (__CFString *)
             _CFBundleGetValueForInfoDictionaryKey(uVar2,&cf_CFBundleShortVersionString);
    if (p_Var3 == (__CFString *)0x0) {
      uVar2 = GP::getCurrentDSOHandle();
      p_Var3 = (__CFString *)
               _CFBundleGetValueForInfoDictionaryKey
                         (uVar2,*(unsigned long long *)PTR__kCFBundleVersionKey_101ab4658);
      if (p_Var3 == (__CFString *)0x0) return;
    }
    lVar1 = _CFGetTypeID(p_Var3);
    lVar4 = _CFStringGetTypeID();
    if (lVar1 == lVar4) {
      GP::StringCF::StringCF(&local_38,p_Var3);
      puVar6 = local_28;
      if (((byte)local_38 & 1) == 0) {
        puVar6 = local_37;
      }
      // std code
      uVar5 = // std code
      if (uVar5 != 0xffffffffffffffff) {
        // std code
      }
      if (((byte)local_38 & 1) != 0) {
        delete(local_28);
      }
      return 1;
    }
  }
  // std code
  return 0;
}
}
