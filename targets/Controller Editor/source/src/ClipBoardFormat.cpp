#include <ni/controller_editor/ClipBoardFormat.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA::FileListClipBoardFormat::writeToContext(NI::UIA {

void ClipBoardFormat::IOContext&) const {
long lVar1;
  byte *pbVar2;
  unsigned long long uVar3;
  unsigned long long *puVar4;
  unsigned long long uVar5;
  unsigned long long uVar6;
  long lVar7;
  char *pcVar8;
  size_t sVar9;
  void *pvVar10;
  void *pvVar11;
  byte *pbVar12;
  byte *pbVar13;
  unsigned long uVar14;
  long lVar15;
  unsigned long uVar16;
  code *pcVar17;
  unsigned long long local_48;
  size_t local_40;
  void *local_38;
  
  lVar1 = *(long *)param_1;
  if (lVar1 != 0) {
    pbVar13 = *(byte **)(this + 0x10);
    pbVar2 = *(byte **)(this + 0x18);
    if (pbVar13 != pbVar2) {
      uVar3 = *(unsigned long long *)PTR__kCFAllocatorDefault_101ab4648;
      pcVar17 = (code *)PTR__objc_msgSend_101ab46d8;
      do {
        uVar5 = _objc_autoreleasePoolPush();
        if ((*pbVar13 & 1) == 0) {
          pbVar12 = pbVar13 + 1;
        }
        else {
          pbVar12 = *(byte **)(pbVar13 + 0x10);
        }
        uVar6 = (*pcVar17)(&_OBJC_CLASS___NSString,"stringWithUTF8String:",pbVar12);
        lVar7 = (*pcVar17)(&_OBJC_CLASS___NSURL,"fileURLWithPath:",uVar6);
        if (lVar7 != 0) {
          uVar6 = (*pcVar17)(lVar7,"absoluteString");
          pcVar8 = (char *)(*pcVar17)(uVar6,"UTF8String");
          sVar9 = strlen(pcVar8);
          if (0xffffffffffffffef < sVar9) {
                    /* WARNING: Subroutine does not return */
            // std code
          }
          if (sVar9 < 0x17) {
            local_48 = 0(local_48._1_7_,(char)sVar9 * '\x02');
            pvVar10 = (void *)((long)&local_48 + 1);
            if (sVar9 != 0) return;
          }
          else {
            uVar14 = sVar9 + 0x10 & 0xfffffffffffffff0;
            pvVar10 = new char[uVar14];
            local_48 = uVar14 | 1;
            local_40 = sVar9;
            local_38 = pvVar10;
            memcpy(pvVar10,pcVar8,sVar9);
          }
          *(unsigned char *)((long)pvVar10 + sVar9) = 0;
          pcVar8 = *(char **)param_1;
          uVar14 = local_40;
          pvVar10 = local_38;
          if ((local_48 & 1) == 0) {
            uVar14 = local_48 >> 1 & 0x7f;
            pvVar10 = (void *)((long)&local_48 + 1);
          }
          uVar6 = _CFDataCreate(uVar3,pvVar10,uVar14);
          puVar4 = *(unsigned long long **)(pcVar8 + 8);
          if (puVar4 < *(unsigned long long **)(pcVar8 + 0x10)) {
            *puVar4 = uVar6;
            *(unsigned long long **)(pcVar8 + 8) = puVar4 + 1;
          }
          else {
            pvVar10 = *(void **)pcVar8;
            sVar9 = (long)puVar4 - (long)pvVar10;
            lVar7 = (long)sVar9 >> 3;
            uVar14 = lVar7 + 1;
            if (0x1fffffffffffffff < uVar14) {
                    /* WARNING: Subroutine does not return */
              // std code
            }
            lVar15 = (long)*(unsigned long long **)(pcVar8 + 0x10) - (long)pvVar10;
            uVar16 = lVar15 >> 2;
            if (uVar16 < uVar14) {
              uVar16 = uVar14;
            }
            if (0xffffffffffffffe < (unsigned long)(lVar15 >> 3)) {
              uVar16 = 0x1fffffffffffffff;
            }
            if (uVar16 == 0) {
              pvVar11 = (void *)0x0;
              *(unsigned long long *)(lVar7 * 8) = uVar6;
            }
            else {
              if (0x1fffffffffffffff < uVar16) {
                    /* WARNING: Subroutine does not return */
                // std code
              }
              pvVar11 = new char[uVar16 * 8];
              *(unsigned long long *)((long)pvVar11 + lVar7 * 8) = uVar6;
            }
            if (0 < (long)sVar9) {
              memcpy(pvVar11,pvVar10,sVar9);
            }
            *(void **)pcVar8 = pvVar11;
            *(long *)(pcVar8 + 8) = (long)pvVar11 + lVar7 * 8 + 8;
            *(void **)(pcVar8 + 0x10) = (void *)(uVar16 * 8 + (long)pvVar11);
            if (pvVar10 != (void *)0x0) {
              delete(pvVar10);
            }
          }
          pcVar17 = (code *)PTR__objc_msgSend_101ab46d8;
          if ((local_48 & 1) != 0) {
            delete(local_38);
          }
        }
        _objc_autoreleasePoolPop(uVar5);
        pbVar13 = pbVar13 + 0x18;
      } while (pbVar2 != pbVar13);
    }
  }
  return lVar1 != 0;
}
}
