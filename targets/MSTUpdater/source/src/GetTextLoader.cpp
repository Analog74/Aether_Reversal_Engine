#include <ni/controller_editor/GetTextLoader.hpp>
namespace NI::GP {

void GetTextLoader::loadLocaleDomain(char const*, char const*) {
char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  FILE *pFVar7;
  void **local_1188;
  void ***local_1180;
  unsigned int local_1178;
  void **local_1170;
  unsigned int local_1168;
  unsigned int local_1164;
  unsigned int local_1160;
  unsigned char local_1158 [160];
  unsigned long long local_10b8;
  void2 local_10b0;
  FILE *local_10a8;
  unsigned long long local_10a0;
  unsigned long long local_1098;
  unsigned char local_1090;
  void **local_1088;
  unsigned long long local_1080;
  unsigned int local_1078;
  long *local_1070;
  char local_1068;
  unsigned long long local_1060;
  unsigned long long local_1058;
  long *local_1050;
  unsigned char local_1048;
  GetTextLoader *local_1040;
  unsigned long long local_1038;
  unsigned long long uStack_1030;
  long local_1028;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1002272e0;
  if ((getCurrentDSOHandleStorage()::handle == '\0') &&
     (iVar2 = ___cxa_guard_acquire(&getCurrentDSOHandleStorage()::handle), iVar2 != 0)) {
    getCurrentDSOHandleStorage()::handle = 0;
    ___cxa_guard_release(&getCurrentDSOHandleStorage()::handle);
  }
  if (getCurrentDSOHandleStorage()::handle == 0) {
    getCurrentDSOHandleStorage()::handle = resolveCurrentDSOHandle();
  }
  lVar5 = getCurrentDSOHandleStorage()::handle;
  lVar4 = 0;
  lVar3 = _CFStringCreateWithCStringNoCopy
                    (0,param_1,0,*(unsigned long long *)PTR__kCFAllocatorNull_100227300);
  if (param_2 != (char *)0x0) {
    local_1038 = 0;
    uStack_1030 = 0;
    local_1028 = 0;
    strlen(param_2);
    // std code
    // std code
    lVar4 = (long)&local_1038 + 1;
    if ((local_1038 & 1) != 0) {
      lVar4 = local_1028;
    }
    lVar4 = _CFStringCreateWithCString(0,lVar4,0);
    // std code
  }
  lVar5 = _CFBundleCopyResourceURL(lVar5,lVar3,&cf_mo,lVar4);
  if (lVar5 == 0) goto LAB_100185184;
  local_1040 = this;
  lVar6 = _CFURLCopyFileSystemPath(lVar5,0);
  cVar1 = _CFStringGetCString(lVar6,&local_1038,0x1000,0x8000100);
  if ((cVar1 != '\0') && (pFVar7 = _fopen((char *)&local_1038,"rb"), pFVar7 != (FILE *)0x0)) {
    local_1180 = &local_1170;
    local_1178 = 1;
    local_1160 = 0;
    local_1170 = &PTR__FileStorage_100230e68;
    local_10b8 = 0;
    local_10b0 = 0;
    ___bzero(local_1158,0x9c);
    local_1090 = 0;
    local_1098 = 0;
    local_10a0 = 0;
    local_1168 = 1;
    local_1164 = 1;
    local_1080 = 0;
    local_1078 = 0;
    local_1070 = (long *)0x0;
    local_1068 = '\0';
    local_1058 = 0;
    local_1060 = 0;
    local_1088 = &PTR__FileContainerItemStorage_10023b6e8;
    local_1050 = (long *)0x0;
    local_1048 = 0;
    local_1188 = &PTR__FileStream_100230ec0;
    local_10a8 = pFVar7;
    loadDomain(local_1040,(Stream *)&local_1188);
    cVar1 = (*(code *)local_1088[2])(&local_1088);
    if (cVar1 == '\0') {
      FileStorage::close((FileStorage *)&local_1170);
    }
    else if (local_1050 != (long *)0x0) {
      if ((local_1068 == '\0') || (local_1070 == (long *)0x0)) {
LAB_10018514b:
        local_1070 = (long *)0x0;
        local_1080 = 0;
        (**(code **)(*local_1050 + 8))();
      }
      else {
        (**(code **)(*local_1070 + 8))(local_1070);
        local_1070 = (long *)0x0;
        local_1080 = 0;
        if (local_1050 != (long *)0x0) goto LAB_10018514b;
      }
      local_1050 = (long *)0x0;
      local_1048 = 0;
    }
    FileStreamBase<NI::GP::Stream>::~FileStreamBase((FileStreamBase<NI::GP::Stream> *)&local_1188);
  }
  if (lVar6 != 0) {
    _CFRelease(lVar6);
  }
  _CFRelease(lVar5);
LAB_100185184:
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
  if (*(long *)PTR____stack_chk_guard_1002272e0 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}
}
