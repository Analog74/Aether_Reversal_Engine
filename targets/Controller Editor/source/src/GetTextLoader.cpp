#include <ni/controller_editor/GetTextLoader.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP {

void GetTextLoader::getLoadedText(char const*) {
size_t sVar1;
  void *pvVar2;
  GetTextLoader *pGVar3;
  unsigned long uVar4;
  unsigned char auVar5 [16];
  unsigned long long local_48;
  size_t local_40;
  void *local_38;
  
  sVar1 = strlen(param_1);
  if (0xffffffffffffffef < sVar1) {
                    /* WARNING: Subroutine does not return */
    // std code
  }
  if (sVar1 < 0x17) {
    local_48 = 0(local_48._1_7_,(char)sVar1 * '\x02');
    pvVar2 = (void *)((long)&local_48 + 1);
    if (sVar1 == 0) return;
  }
  else {
    uVar4 = sVar1 + 0x10 & 0xfffffffffffffff0;
    pvVar2 = new char[uVar4];
    local_48 = uVar4 | 1;
    local_40 = sVar1;
    local_38 = pvVar2;
  }
  memcpy(pvVar2,param_1,sVar1);
  *(unsigned char *)((long)pvVar2 + sVar1) = 0;
  pGVar3 = (GetTextLoader *)
           // std code
           __tree<// std code
           ::find<// std code
                                *)this,(string *)&local_48);
  if ((local_48 & 1) != 0) {
    delete(local_38);
  }
  if (pGVar3 == this + 8) {
    sVar1 = strlen(param_1);
  }
  else if(1 param_1, 1 param_1, 1 param_1, 1 param_1, 1 param_1, ((bytepGVar3[0x38] & 1 == 0 {
    param_1 = (char *(pGVar3 + 0x39;
    sVar1 = (size_t)((byte)pGVar3[0x38] >> 1);
  }
  else {
    param_1 = *(char **)(pGVar3 + 0x48);
    sVar1 = *(size_t *)(pGVar3 + 0x40);
  }
  auVar5._8_8_ = sVar1;
  auVar5._0_8_ = param_1;
  return auVar5;
}

void GetTextLoader::getLocale() {
unsigned char *puVar1;
  
  puVar1 = (unsigned char *)0x0;
  if (s_Locale != '\x01') {
    puVar1 = &s_Locale;
  }
  return puVar1;
}

void GetTextLoader::initLocale(char const*) {
long lVar1;
  long lVar2;
  long lVar3;
  __CFString *p_Var4;
  long lVar5;
  unsigned char *puVar6;
  char *pcVar7;
  StringCF local_48;
  char local_47 [15];
  char *local_38;
  
  lVar1 = ni::system::get_current_dso_handle();
  if (lVar1 == 0) {
    if (param_1 != (char *)0x0) return;
  }
  else {
    if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
      lVar1 = _CFBundleCopyBundleLocalizations(lVar1);
      if (lVar1 != 0) {
        lVar2 = _CFBundleCopyPreferredLocalizationsFromArray(lVar1);
        if (lVar2 == 0) {
          pcVar7 = "ENG";
        }
        else {
          lVar3 = _CFArrayGetCount(lVar2);
          pcVar7 = "ENG";
          if (0 < lVar3) {
            p_Var4 = (__CFString *)_CFArrayGetValueAtIndex(lVar2,0);
            if (p_Var4 != (__CFString *)0x0) {
              lVar3 = _CFGetTypeID(p_Var4);
              lVar5 = _CFStringGetTypeID();
              if (lVar3 == lVar5) {
                StringCF::StringCF(&local_48,p_Var4);
                pcVar7 = local_47;
                if (((byte)local_48 & 1) != 0) {
                  pcVar7 = local_38;
                }
                pcVar7 = (char *)GP::(anonymous_namespace)::getLocaleIdentifier(pcVar7);
                if (((byte)local_48 & 1) != 0) {
                  delete(local_38);
                }
              }
            }
          }
          _CFRelease(lVar2);
        }
        _CFRelease(lVar1);
        return;
      }
      pcVar7 = "ENG";
    }
    else {
      pcVar7 = (char *)GP::(anonymous_namespace)::getLocaleIdentifier(param_1);
      if (pcVar7 == (char *)0x0) return;
    }
    if (*pcVar7 != '\0') {
      _strncpy(&s_Locale,pcVar7,0xf);
      puVar6 = &0;
      return;
    }
  }
  s_Locale = 1;
  puVar6 = &0;
  *puVar6 = 0;
  return;
}

void GetTextLoader::loadLocaleDomain(char const*, char const*) {
unsigned long long uVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  char cVar5;
  unsigned long long uVar6;
  long lVar7;
  size_t sVar8;
  void *pvVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  FILE *pFVar13;
  char *pcVar14;
  unsigned long uVar15;
  long *plVar16;
  long *plVar17;
  unsigned char auVar18 [16];
  void **local_10b0;
  void ***local_10a8;
  unsigned int local_10a0;
  void **local_1098;
  unsigned long long local_1090;
  unsigned int local_1088;
  unsigned long local_1080;
  unsigned long long uStack_1078;
  void *local_1070;
  FILE *local_1068;
  unsigned long long local_1060;
  unsigned long long uStack_1058;
  unsigned char local_1050;
  long *local_1048;
  long local_1040;
  unsigned long long local_1038;
  size_t local_1030;
  void *local_1028;
  unsigned long long uStack_40;
  long local_38;
  
  uStack_40 = 0x10071d8c8;
  auVar18 = ____chkstk_darwin();
  pcVar14 = auVar18._8_8_;
  lVar4 = -auVar18._0_8_;
  local_38 = *(long *)PTR____stack_chk_guard_101ab4610;
  *(unsigned long long *)((long)&local_38 + lVar4) = 0x10071d8ec;
  uVar6 = ni::system::get_current_dso_handle();
  uVar1 = *(unsigned long long *)PTR__kCFAllocatorNull_101ab4650;
  lVar10 = 0;
  *(unsigned long long *)((long)&local_38 + lVar4) = 0x10071d908;
  lVar7 = _CFStringCreateWithCStringNoCopy(0,param_2,0,uVar1);
  if (pcVar14 == (char *)0x0) return;
  *(unsigned long long *)((long)&local_38 + lVar4) = 0x10071d923;
  local_1040 = lVar7;
  sVar8 = strlen(pcVar14);
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    *(void **)((long)&local_38 + lVar4) = &UNK_10071dc5f;
    // std code
  }
  if (sVar8 < 0x17) {
    local_1038 = 0(local_1038._1_7_,(char)sVar8 * '\x02');
    pvVar9 = (void *)((long)&local_1038 + 1);
    if (sVar8 != 0) return;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    *(unsigned long long *)((long)&local_38 + lVar4) = 0x10071d961;
    pvVar9 = new char[uVar15];
    local_1038 = uVar15 | 1;
    local_1030 = sVar8;
    local_1028 = pvVar9;
    *(unsigned long long *)((long)&local_38 + lVar4) = 0x10071d98b;
    memcpy(pvVar9,pcVar14,sVar8);
  }
  *(unsigned char *)((long)pvVar9 + sVar8) = 0;
  *(unsigned long long *)((long)&local_38 + lVar4) = 0x10071d9a4;
  // std code
  lVar7 = local_1040;
  pvVar9 = local_1028;
  if ((local_1038 & 1) == 0) {
    pvVar9 = (void *)((long)&local_1038 + 1);
  }
  *(unsigned long long *)((long)&local_38 + lVar4) = 0x10071d9cd;
  lVar10 = _CFStringCreateWithCString(0,pvVar9,0);
  if ((local_1038 & 1) != 0) {
    *(unsigned long long *)((long)&local_38 + lVar4) = 0x10071d9e5;
    delete(local_1028);
  }
  *(unsigned long long *)((long)&local_38 + lVar4) = 0x10071d9fa;
  lVar11 = _CFBundleCopyResourceURL(uVar6,lVar7,&cf_mo,lVar10);
  if (lVar11 != 0) {
    *(unsigned long long *)((long)&local_38 + lVar4) = 0x10071da10;
    lVar12 = _CFURLCopyFileSystemPath(lVar11,0);
    *(unsigned long long *)((long)&local_38 + lVar4) = 0x10071da2c;
    cVar5 = _CFStringGetCString(lVar12,&local_1038,0x1000,0x8000100);
    if (cVar5 != '\0') {
      *(unsigned long long *)((long)&local_38 + lVar4) = 0x10071da47;
      pFVar13 = _fopen((char *)&local_1038,"rb");
      if (pFVar13 != (FILE *)0x0) {
        local_10a8 = &local_1098;
        local_10a0 = 1;
        local_1088 = 0;
        local_1098 = &PTR__FileStorage_101b31738;
        local_1080 = 0;
        uStack_1078 = 0;
        local_1070 = (void *)0x0;
        local_1060 = 0;
        uStack_1058 = 0;
        local_1050 = 0;
        local_1090 = 0x100000001;
        local_1048 = (long *)0x0;
        local_10b0 = &PTR__FileStream_101ad5068;
        *(unsigned long long *)((long)&local_38 + lVar4) = 0x10071daee;
        local_1068 = pFVar13;
        local_1040 = lVar7;
        loadDomain((GetTextLoader *)param_1,(Stream *)&local_10b0);
        if (local_1048 != (long *)0x0) {
          pcVar2 = *(code **)(*local_1048 + 0x10);
          *(unsigned long long *)((long)&local_38 + lVar4) = 0x10071db00;
          cVar5 = (*pcVar2)();
          plVar16 = local_1048;
          if (cVar5 != '\0') {
            plVar17 = (long *)local_1048[7];
            if (plVar17 != (long *)0x0) {
              if (((char)local_1048[4] != '\0') &&
                 (plVar3 = (long *)local_1048[3], plVar3 != (long *)0x0)) {
                pcVar2 = *(code **)(*plVar3 + 8);
                *(unsigned long long *)((long)&local_38 + lVar4) = 0x10071db2c;
                (*pcVar2)(plVar3);
                plVar17 = (long *)plVar16[7];
              }
              plVar16[3] = 0;
              plVar16[1] = 0;
              if (plVar17 != (long *)0x0) {
                pcVar2 = *(code **)(*plVar17 + 8);
                *(unsigned long long *)((long)&local_38 + lVar4) = 0x10071db4b;
                (*pcVar2)();
              }
              plVar16[7] = 0;
              *(unsigned char *)(plVar16 + 8) = 0;
              plVar16 = local_1048;
            }
            local_1048 = (long *)0x0;
            if (plVar16 != (long *)0x0) {
              pcVar2 = *(code **)(*plVar16 + 8);
              *(unsigned long long *)((long)&local_38 + lVar4) = 0x10071db77;
              (*pcVar2)(plVar16);
            }
          }
        }
        if (local_1090._4_4_ != 0) {
          *(unsigned long long *)((long)&local_38 + lVar4) = 0x10071db8c;
          FileStorage::close((FileStorage *)&local_1098);
        }
        plVar16 = local_1048;
        local_10a8 = &local_1098;
        local_10b0 = &PTR__FileStreamBase_101ad50b8;
        local_1048 = (long *)0x0;
        if (plVar16 != (long *)0x0) {
          pcVar2 = *(code **)(*plVar16 + 8);
          *(unsigned long long *)((long)&local_38 + lVar4) = 0x10071dbc5;
          (*pcVar2)();
        }
        local_1098 = &PTR__FileStorage_101b31738;
        if (local_1090._4_4_ != 0) {
          *(unsigned long long *)((long)&local_38 + lVar4) = 0x10071dbe1;
          FileStorage::close((FileStorage *)&local_1098);
        }
        lVar7 = local_1040;
        if ((local_1080 & 1) != 0) {
          *(unsigned long long *)((long)&local_38 + lVar4) = 0x10071dbfd;
          delete(local_1070);
        }
      }
    }
    if (lVar12 != 0) {
      *(unsigned long long *)((long)&local_38 + lVar4) = 0x10071dc0a;
      _CFRelease(lVar12);
    }
    *(unsigned long long *)((long)&local_38 + lVar4) = 0x10071dc12;
    _CFRelease(lVar11);
  }
  if (lVar10 != 0) {
    *(unsigned long long *)((long)&local_38 + lVar4) = 0x10071dc1f;
    _CFRelease(lVar10);
  }
  if (lVar7 != 0) {
    *(unsigned long long *)((long)&local_38 + lVar4) = 0x10071dc2c;
    _CFRelease(lVar7);
  }
  if (*(long *)PTR____stack_chk_guard_101ab4610 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(unsigned long long *)((long)&local_38 + lVar4) = 0x10071dc53;
    ___stack_chk_fail();
  }
  return;
}
}
