#include <ni/controller_editor/FileListClipBoardFormat.hpp>
namespace NI::UIA {

void FileListClipBoardFormat::addRawData(unsigned char const*, long) {
unsigned long long uVar1;
  unsigned long long uVar2;
  unsigned long long uVar3;
  char cVar4;
  uchar *puVar5;
  uchar *puVar6;
  unsigned long uVar7;
  uint uVar8;
  long lVar9;
  uchar *puVar10;
  long lVar11;
  unsigned long long local_f8;
  unsigned long uStack_f0;
  uchar *local_e8;
  uchar *local_40;
  unsigned long local_38;
  long local_30;
  
  local_30 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = (uchar *)0x0;
  if (0xffffffffffffffef < (unsigned long)param_2) {
                    /* WARNING: Subroutine does not return */
    // std code
  }
  if ((unsigned long)param_2 < 0x17) {
    local_f8 = (unsigned long)(byte)((char)param_2 * '\x02');
    puVar5 = (uchar *)((long)&local_f8 + 1);
    if (param_2 == 0) goto LAB_1000899e3;
  }
  else {
    uVar7 = param_2 + 0x10U & 0xfffffffffffffff0;
    puVar5 = (uchar *)new(uVar7);
    local_f8 = uVar7 | 1;
    uStack_f0 = param_2;
    local_e8 = puVar5;
  }
  puVar10 = param_1;
  puVar6 = puVar5;
  if ((unsigned long)param_2 < 0x20) {
LAB_1000899cb:
    do {
      *puVar6 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar6 = puVar6 + 1;
    } while (param_1 + param_2 != puVar10);
  }
  else {
    uVar7 = param_2 & 0xffffffffffffffe0;
    if (uVar7 == 0) goto LAB_1000899cb;
    uVar8 = ((uint)(uVar7 - 0x20 >> 5) & 0x7ffffff) + 1;
    if ((uVar8 & 3) == 0) {
      lVar11 = 0;
    }
    else {
      lVar9 = -((unsigned long)uVar8 & 3);
      lVar11 = 0;
      do {
        uVar1 = *(unsigned long long *)(param_1 + lVar11 + 8);
        uVar2 = *(unsigned long long *)(param_1 + lVar11 + 0x10);
        uVar3 = *(unsigned long long *)(param_1 + lVar11 + 0x10 + 8);
        *(unsigned long long *)(puVar5 + lVar11) = *(unsigned long long *)(param_1 + lVar11);
        *(unsigned long long *)(puVar5 + lVar11 + 8) = uVar1;
        *(unsigned long long *)(puVar5 + lVar11 + 0x10) = uVar2;
        *(unsigned long long *)(puVar5 + lVar11 + 0x10 + 8) = uVar3;
        lVar11 = lVar11 + 0x20;
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0);
    }
    if (0x5f < uVar7 - 0x20) {
      lVar9 = uVar7 - lVar11;
      puVar10 = puVar5 + lVar11 + 0x70;
      puVar6 = param_1 + lVar11 + 0x70;
      do {
        uVar1 = *(unsigned long long *)(puVar6 + -0x68);
        uVar2 = *(unsigned long long *)(puVar6 + -0x60);
        uVar3 = *(unsigned long long *)(puVar6 + -0x58);
        *(unsigned long long *)(puVar10 + -0x70) = *(unsigned long long *)(puVar6 + -0x70);
        *(unsigned long long *)(puVar10 + -0x68) = uVar1;
        *(unsigned long long *)(puVar10 + -0x60) = uVar2;
        *(unsigned long long *)(puVar10 + -0x58) = uVar3;
        uVar1 = *(unsigned long long *)(puVar6 + -0x48);
        uVar2 = *(unsigned long long *)(puVar6 + -0x40);
        uVar3 = *(unsigned long long *)(puVar6 + -0x38);
        *(unsigned long long *)(puVar10 + -0x50) = *(unsigned long long *)(puVar6 + -0x50);
        *(unsigned long long *)(puVar10 + -0x48) = uVar1;
        *(unsigned long long *)(puVar10 + -0x40) = uVar2;
        *(unsigned long long *)(puVar10 + -0x38) = uVar3;
        uVar1 = *(unsigned long long *)(puVar6 + -0x28);
        uVar2 = *(unsigned long long *)(puVar6 + -0x20);
        uVar3 = *(unsigned long long *)(puVar6 + -0x18);
        *(unsigned long long *)(puVar10 + -0x30) = *(unsigned long long *)(puVar6 + -0x30);
        *(unsigned long long *)(puVar10 + -0x28) = uVar1;
        *(unsigned long long *)(puVar10 + -0x20) = uVar2;
        *(unsigned long long *)(puVar10 + -0x18) = uVar3;
        uVar1 = *(unsigned long long *)(puVar6 + -8);
        uVar2 = *(unsigned long long *)puVar6;
        uVar3 = *(unsigned long long *)(puVar6 + 8);
        *(unsigned long long *)(puVar10 + -0x10) = *(unsigned long long *)(puVar6 + -0x10);
        *(unsigned long long *)(puVar10 + -8) = uVar1;
        *(unsigned long long *)puVar10 = uVar2;
        *(unsigned long long *)(puVar10 + 8) = uVar3;
        puVar10 = puVar10 + 0x80;
        puVar6 = puVar6 + 0x80;
        lVar9 = lVar9 + -0x80;
      } while (lVar9 != 0);
    }
    if (uVar7 != param_2) {
      puVar10 = param_1 + (param_2 & 0xffffffffffffffe0U);
      puVar6 = puVar5 + (param_2 & 0xffffffffffffffe0U);
      goto LAB_1000899cb;
    }
  }
  puVar5 = puVar5 + param_2;
LAB_1000899e3:
  *puVar5 = '\0';
  local_40 = (uchar *)((long)&local_f8 + 1);
  if ((local_f8 & 1) != 0) {
    local_40 = local_e8;
  }
  local_38 = local_f8 >> 1 & 0x7f;
  if ((local_f8 & 1) != 0) {
    local_38 = uStack_f0;
  }
  cVar4 = GP::URI::createCanonicalLocation((URI *)&local_30,(CharSequence *)&local_40);
  // std code
  if (cVar4 != '\0') {
    GP::FileName::FileName((FileName *)&local_f8);
    cVar4 = GP::URI::getFileName((URI *)&local_30,(FileName *)&local_f8);
    if (cVar4 != '\0') {
      if (*(FileName **)(this + 0x18) == *(FileName **)(this + 0x20)) {
        // std code
        __push_back_slow_path<NI::GP::FileName_const&>
                  ((vector<NI::GP::FileName,// std code
                   (FileName *)&local_f8);
        lVar11 = *(long *)(this + 0x18);
      }
      else {
        GP::FileName::FileName(*(FileName **)(this + 0x18),(FileName *)&local_f8);
        lVar11 = *(long *)(this + 0x18) + 0xb0;
        *(long *)(this + 0x18) = lVar11;
      }
      GP::FileTypeManager::determineType((FileName *)(lVar11 + -0xb0));
    }
    GP::FileName::~FileName((FileName *)&local_f8);
  }
  if (local_30 != 0) {
    _CFRelease();
  }
  return 1;
}

void FileListClipBoardFormat::canHoldMultipleItems() const {
return 1;
}

FileListClipBoardFormat::~FileListClipBoardFormat() {
void *pvVar1;
  void *pvVar2;
  
  *(void ***)this = &PTR__FileListClipBoardFormat_100229578;
  pvVar2 = *(void **)(this + 0x10);
  if (pvVar2 != (void *)0x0) {
    pvVar1 = *(void **)(this + 0x18);
    if (pvVar1 != pvVar2) {
      do {
        *(FileName **)(this + 0x18) = (FileName *)((long)pvVar1 + -0xb0);
        GP::FileName::~FileName((FileName *)((long)pvVar1 + -0xb0));
        pvVar1 = *(void **)(this + 0x18);
      } while (pvVar1 != pvVar2);
      pvVar2 = *(void **)(this + 0x10);
    }
    delete(pvVar2);
  }
  delete(this);
  return;
}
}
