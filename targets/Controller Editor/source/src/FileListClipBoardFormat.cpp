#include <ni/controller_editor/FileListClipBoardFormat.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA {

void FileListClipBoardFormat::addItemFromDataBytes(void const*, unsigned long) {
void *pvVar1;
  unsigned long *puVar2;
  byte bVar3;
  unsigned long *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  unsigned long long uVar9;
  unsigned long long uVar10;
  long lVar11;
  char *pcVar12;
  size_t sVar13;
  byte *pbVar14;
  long lVar15;
  void *pvVar16;
  void *pvVar17;
  unsigned long uVar18;
  unsigned long *puVar19;
  byte *pbVar20;
  unsigned char *puVar21;
  unsigned long uVar22;
  unsigned long long local_60;
  unsigned long local_58;
  unsigned char *local_50;
  unsigned long long local_48;
  size_t sStack_40;
  byte *local_38;
  
  if (0xffffffffffffffef < param_2) {
                    /* WARNING: Subroutine does not return */
    // std code
  }
  if (param_2 < 0x17) {
    local_60 = 0(local_60._1_7_,(char)param_2 * '\x02');
    puVar21 = (unsigned char *)((long)&local_60 + 1);
    if (param_2 != 0) return;
  }
  else {
    uVar18 = param_2 + 0x10 & 0xfffffffffffffff0;
    puVar21 = (unsigned char *)new char[uVar18];
    local_60 = uVar18 | 1;
    local_58 = param_2;
    local_50 = puVar21;
    memcpy(puVar21,param_1,param_2);
    puVar21 = puVar21 + param_2;
  }
  *puVar21 = 0;
  GP::util::decodeURI((util *)&local_48,(string *)&local_60);
  sVar13 = sStack_40;
  pbVar14 = local_38;
  if ((local_48 & 1) == 0) {
    sVar13 = local_48 >> 1 & 0x7f;
    pbVar14 = (byte *)((long)&local_48 + 1);
  }
  if (sVar13 != 0) {
    pbVar20 = pbVar14 + sVar13;
    do {
      bVar3 = *pbVar14;
      if ((char)bVar3 < '\0') {
        if ((bVar3 & 0xe0) == 0xc0) {
          lVar11 = 2;
          bVar6 = true;
          bVar8 = false;
          bVar7 = false;
          if (((pbVar14 + 1 != pbVar20) && ((pbVar14[1] & 0xc0) == 0x80)) &&
             ((bVar6 || (((pbVar14 + 2 != pbVar20 && ((pbVar14[2] & 0xc0) == 0x80)) &&
                         ((bVar7 || (((pbVar14 + 3 != pbVar20 && ((pbVar14[3] & 0xc0) == 0x80)) &&
                                     (bVar8)))))))))) return;
        }
        else {
          if ((bVar3 & 0xf0) == 0xe0) {
            lVar11 = 3;
            bVar7 = true;
            bVar8 = false;
            bVar6 = false;
            return;
          }
          bVar5 = false;
          if ((bVar3 & 0xf8) == 0xf0) {
            lVar11 = 4;
            bVar8 = true;
            return;
          }
        }
        bVar7 = false;
        bVar6 = false;
        goto joined_r0x0001005d456d;
      }
      lVar11 = 1;
      bVar5 = true;
      bVar8 = false;
      bVar6 = false;
      bVar7 = false;
      if (!bVar5) return;
      pbVar14 = pbVar14 + lVar11;
    } while (pbVar14 != pbVar20);
  }
  bVar7 = true;
  bVar6 = true;
joined_r0x0001005d456d:
  if ((local_48 & 1) != 0) {
    delete(local_38);
    bVar6 = bVar7;
  }
  if (!bVar6) return;
  uVar9 = _objc_autoreleasePoolPush();
  puVar21 = local_50;
  if ((local_60 & 1) == 0) {
    puVar21 = (unsigned char *)((long)&local_60 + 1);
  }
  uVar10 = (*(code *)PTR__objc_msgSend_101ab46d8)
                     (&_OBJC_CLASS___NSString,"stringWithUTF8String:",puVar21);
  lVar11 = (*(code *)PTR__objc_msgSend_101ab46d8)(&_OBJC_CLASS___NSURL,"URLWithString:",uVar10);
  if (lVar11 != 0) {
    pcVar12 = (char *)(*(code *)PTR__objc_msgSend_101ab46d8)(lVar11,"fileSystemRepresentation");
    sVar13 = strlen(pcVar12);
    if (0xffffffffffffffef < sVar13) {
                    /* WARNING: Subroutine does not return */
      // std code
    }
    if (sVar13 < 0x17) {
      local_48 = 0(local_48._1_7_,(char)sVar13 * '\x02');
      pbVar14 = (byte *)((long)&local_48 + 1);
      if (sVar13 != 0) return;
    }
    else {
      uVar18 = sVar13 + 0x10 & 0xfffffffffffffff0;
      pbVar14 = (byte *)new char[uVar18];
      local_48 = uVar18 | 1;
      sStack_40 = sVar13;
      local_38 = pbVar14;
      memcpy(pbVar14,pcVar12,sVar13);
    }
    pbVar14[sVar13] = 0;
    puVar19 = *(unsigned long **)(this + 0x18);
    if (puVar19 < *(unsigned long **)(this + 0x20)) {
      puVar19[2] = (unsigned long)local_38;
      *puVar19 = local_48;
      puVar19[1] = sStack_40;
      local_48 = 0;
      sStack_40 = 0;
      local_38 = (byte *)0x0;
      *(unsigned long **)(this + 0x18) = puVar19 + 3;
    }
    else {
      puVar4 = *(unsigned long **)(this + 0x10);
      lVar11 = (long)puVar19 - (long)puVar4 >> 3;
      uVar18 = lVar11 * -0x5555555555555555 + 1;
      if (0xaaaaaaaaaaaaaaa < uVar18) {
                    /* WARNING: Subroutine does not return */
        // std code
      }
      lVar15 = (long)*(unsigned long **)(this + 0x20) - (long)puVar4 >> 3;
      uVar22 = lVar15 * 0x5555555555555556;
      if (uVar22 < uVar18) {
        uVar22 = uVar18;
      }
      if (0x555555555555554 < (unsigned long)(lVar15 * -0x5555555555555555)) {
        uVar22 = 0xaaaaaaaaaaaaaaa;
      }
      if (uVar22 == 0) {
        pvVar16 = (void *)0x0;
      }
      else {
        if (0xaaaaaaaaaaaaaaa < uVar22) {
                    /* WARNING: Subroutine does not return */
          // std code
        }
        pvVar16 = new char[uVar22 * 0x18];
      }
      pvVar17 = (void *)((long)pvVar16 + lVar11 * 8);
      pvVar1 = (void *)((long)pvVar16 + uVar22 * 0x18);
      *(byte **)((long)pvVar16 + lVar11 * 8 + 0x10) = local_38;
      puVar2 = (unsigned long *)((long)pvVar16 + lVar11 * 8);
      *puVar2 = local_48;
      puVar2[1] = sStack_40;
      local_48 = 0;
      sStack_40 = 0;
      local_38 = (byte *)0x0;
      lVar11 = (long)pvVar16 + lVar11 * 8 + 0x18;
      if (puVar19 == puVar4) {
        *(void **)(this + 0x10) = pvVar17;
        *(long *)(this + 0x18) = lVar11;
        *(void **)(this + 0x20) = pvVar1;
      }
      else {
        do {
          *(unsigned long *)((long)pvVar17 + -8) = puVar19[-1];
          uVar18 = puVar19[-2];
          *(unsigned long *)((long)pvVar17 + -0x18) = puVar19[-3];
          *(unsigned long *)((long)pvVar17 + -0x10) = uVar18;
          pvVar17 = (void *)((long)pvVar17 + -0x18);
          puVar19[-3] = 0;
          puVar19[-2] = 0;
          puVar19[-1] = 0;
          puVar19 = puVar19 + -3;
        } while (puVar4 != puVar19);
        puVar19 = *(unsigned long **)(this + 0x10);
        puVar4 = *(unsigned long **)(this + 0x18);
        *(void **)(this + 0x10) = pvVar17;
        *(long *)(this + 0x18) = lVar11;
        *(void **)(this + 0x20) = pvVar1;
        while (puVar2 = puVar4, puVar2 != puVar19) {
          puVar4 = puVar2 + -3;
          if ((puVar2[-3] & 1) != 0) {
            delete((void *)puVar2[-1]);
          }
        }
      }
      if (puVar19 != (unsigned long *)0x0) {
        delete(puVar19);
      }
    }
    if ((local_48 & 1) != 0) {
      delete(local_38);
    }
  }
  _objc_autoreleasePoolPop(uVar9);
  if ((local_60 & 1) != 0) {
    delete(local_50);
  }
  return 1;
}

void FileListClipBoardFormat::canAddItemsFromDataBytes() const {
return 1;
}

FileListClipBoardFormat::FileListClipBoardFormat() {
*(unsigned char **)(this + 8) = &s_FileListClipboardFormat_UIA;
  *(void ***)this = &PTR__FileListClipBoardFormat_101b24210;
  *(unsigned long long *)(this + 0x10) = 0;
  *(unsigned long long *)(this + 0x18) = 0;
  *(unsigned long long *)(this + 0x20) = 0;
  
}

void FileListClipBoardFormat::reserveItems(unsigned long) {
// std code
            ((vector<// boost code
             (this + 0x10),param_1);
  return;
}

void FileListClipBoardFormat::supportsMultipleItems() const {
return 1;
}

FileListClipBoardFormat::~FileListClipBoardFormat() {
void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  *(void ***)this = &PTR__FileListClipBoardFormat_101b24210;
  pvVar1 = *(void **)(this + 0x10);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(this + 0x18);
    pvVar3 = pvVar1;
    if (*(void **)(this + 0x18) != pvVar1) {
      do {
        pvVar3 = (void *)((long)pvVar2 + -0x18);
        if ((*(byte *)((long)pvVar2 + -0x18) & 1) != 0) {
          delete(*(void **)((long)pvVar2 + -8));
        }
        pvVar2 = pvVar3;
      } while (pvVar1 != pvVar3);
      pvVar3 = *(void **)(this + 0x10);
    }
    *(void **)(this + 0x18) = pvVar1;
    delete(pvVar3);
  }
  delete(this);
  return;
}
}
