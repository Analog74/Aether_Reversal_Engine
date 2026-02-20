#include <ni/controller_editor/UIA.hpp>
namespace NI::NHL2::Display::DataDefs::saveScreenshotPicture(NI {

void UIA::Picture&, bool) {
code *pcVar1;
  uint uVar2;
  int iVar3;
  unsigned long uVar4;
  uint local_50 [2];
  unsigned long long uStack_48;
  void *local_40;
  unsigned long local_38;
  unsigned long long uStack_30;
  void *local_28;
  
  if ((s_fnScreenShotDirectory & 1) == 0) {
    if (s_fnScreenShotDirectory >> 1 != 0) goto LAB_1000a6cc4;
  }
  else if (0 != 0) {
LAB_1000a6cc4:
    // boost code
              ((detail *)&local_38,(path *)&s_fnScreenShotDirectory,(error_code *)0x0);
    if (1 < (uint)local_38) {
      uVar2 = saveScreenshotToDirectory((path *)&s_fnScreenShotDirectory,param_1,param_2);
      return (unsigned long)uVar2;
    }
  }
  ni::filesystem::user_desktop_dir((filesystem *)&local_38);
  // boost code
  if (local_50[0] < 2) {
    ni::filesystem::home_dir((filesystem *)local_50);
    if ((local_38 & 1) != 0) {
      delete(local_28);
    }
    local_28 = local_40;
    local_38 = (unsigned long)local_50[0];
    uStack_30 = uStack_48;
    // boost code
    // boost code
    if (local_50[0] < 2) {
      iVar3 = GP::Assertion::DoFail
                        ("/Volumes/build/jenkins-build/6314a5-2/sources/libs/hws-development-kit/Mapping/./DisplayDataDefs_NHL2.cpp"
                         ,0xde,"Couldn\'t get user desktop directory!!");
      if (iVar3 == 1) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      uVar4 = 0;
      goto joined_r0x0001000a6d80;
    }
  }
  uVar2 = saveScreenshotToDirectory((path *)&local_38,param_1,param_2);
  uVar4 = (unsigned long)uVar2;
joined_r0x0001000a6d80:
  if ((local_38 & 1) != 0) {
    delete(local_28);
  }
  return uVar4;
}
}
