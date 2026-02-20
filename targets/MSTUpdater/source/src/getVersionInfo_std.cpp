#include <ni/controller_editor/getVersionInfo_std.hpp>
namespace NI::UIA::AppModule {

void getVersionInfo(std::string&) {
long lVar1;
  unsigned long long uVar2;
  __CFString *p_Var3;
  long lVar4;
  unsigned long uVar5;
  StringCF local_38 [24];
  
  lVar1 = GP::getCurrentDSOHandle();
  if (lVar1 != 0) {
    uVar2 = GP::getCurrentDSOHandle();
    p_Var3 = (__CFString *)
             _CFBundleGetValueForInfoDictionaryKey(uVar2,&cf_CFBundleShortVersionString);
    if (p_Var3 == (__CFString *)0x0) {
      uVar2 = GP::getCurrentDSOHandle();
      p_Var3 = (__CFString *)
               _CFBundleGetValueForInfoDictionaryKey
                         (uVar2,*(unsigned long long *)PTR__kCFBundleVersionKey_100227310);
      if (p_Var3 == (__CFString *)0x0) goto LAB_10009ec9c;
    }
    lVar1 = _CFGetTypeID(p_Var3);
    lVar4 = _CFStringGetTypeID();
    if (lVar1 == lVar4) {
      GP::StringCF::StringCF(local_38,p_Var3);
      // std code
      uVar5 = // std code
      if (uVar5 != 0xffffffffffffffff) {
        // std code
      }
      // std code
      return 1;
    }
  }
LAB_10009ec9c:
  // std code
  return 0;
}
}
