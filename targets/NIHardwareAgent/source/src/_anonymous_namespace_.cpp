#include <ni/controller_editor/_anonymous_namespace_.hpp>
namespace ni::system {

void (anonymous namespace)::resolve_current_dso_handle() {
unsigned long long uVar1;
  unsigned long long uVar2;
  size_t sVar3;
  unsigned char *puVar4;
  unsigned long uVar5;
  long lVar6;
  unsigned long long uVar7;
  size_t sVar8;
  unsigned char *puVar9;
  unsigned char *puVar10;
  long lVar11;
  unsigned long uVar12;
  unsigned long uVar13;
  unsigned long uVar14;
  unsigned char *puVar15;
  unsigned char *puVar16;
  char *pcVar17;
  char *local_b0 [4];
  unsigned long long local_90;
  size_t sStack_88;
  unsigned char *local_80;
  unsigned long long uStack_78;
  unsigned long uStack_70;
  unsigned char *puStack_68;
  unsigned long long uStack_60;
  unsigned long uStack_58;
  unsigned char *local_50;
  unsigned long long uStack_48;
  size_t sStack_40;
  unsigned char *local_38;
  
  _dladdr(resolve_current_dso_handle,local_b0);
  sVar3 = strlen(local_b0[0]);
  if (0xffffffffffffffef < sVar3) {
                    /* WARNING: Subroutine does not return */
    // std code
  }
  if (sVar3 < 0x17) {
    uStack_48 = 0(uStack_48._1_7_,(char)sVar3 * '\x02');
    puVar4 = (unsigned char *)((long)&uStack_48 + 1);
    if (sVar3 == 0) goto LAB_100303758;
  }
  else {
    uVar5 = sVar3 + 0x10 & 0xfffffffffffffff0;
    puVar4 = (unsigned char *)new(uVar5);
    uStack_48 = uVar5 | 1;
    sStack_40 = sVar3;
    local_38 = puVar4;
  }
  memcpy(puVar4,local_b0[0],sVar3);
LAB_100303758:
  puVar4[sVar3] = 0;
  puVar4 = local_38;
  sVar3 = sStack_40;
  if ((uStack_48 & 1) == 0) {
    puVar4 = (unsigned char *)((long)&uStack_48 + 1);
    sVar3 = uStack_48 >> 1 & 0x7f;
  }
  if (sVar3 == 0) {
LAB_100303dc4:
    uVar7 = 0;
    if ((uStack_48 & 1) != 0) {
LAB_100303da6:
      delete(local_38);
    }
    return uVar7;
  }
  puVar9 = puVar4 + sVar3;
  puVar15 = puVar4 + 0xe;
  pcVar17 = "Contents/MacOS" + sVar3;
  uVar7 = 0;
  puVar10 = puVar4;
LAB_1003037aa:
  sVar8 = 0;
  do {
    puVar16 = puVar15;
    if (sVar8 == 0xe) goto LAB_1003037ea;
    if (puVar10[sVar8] != "Contents/MacOS"[sVar8]) goto LAB_1003037cd;
    sVar8 = sVar8 + 1;
  } while (sVar3 != sVar8);
  puVar16 = puVar9;
  if (pcVar17 != "") goto LAB_1003037cd;
LAB_1003037ea:
  if (puVar10 == puVar16) goto LAB_100303dc4;
  uVar5 = // boost code
  if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
    // std code
  }
  if (uVar5 < 0x17) {
    uVar12 = 0;
    uStack_78 = 0(uStack_78._1_7_,(char)uVar5 * '\x02');
    puVar15 = (unsigned char *)((long)&uStack_78 + 1);
    if (uVar5 == 0) goto LAB_100303975;
  }
  else {
    uVar12 = uVar5 + 0x10 & 0xfffffffffffffff0;
    puVar15 = (unsigned char *)new(uVar12);
    puStack_68 = puVar15;
    uStack_78 = uVar12 | 1;
    uStack_70 = uVar5;
  }
  puVar9 = puVar4;
  if ((uVar5 < 0x20) || ((puVar15 < puVar4 + uVar5 && (puVar4 < puVar15 + uVar5))))
  goto LAB_100303960;
  uVar13 = uVar5 & 0xffffffffffffffe0;
  uVar12 = (uVar13 - 0x20 >> 5) + 1;
  uVar14 = (unsigned long)((uint)uVar12 & 3);
  if (uVar13 - 0x20 < 0x60) {
    lVar6 = 0;
  }
  else {
    lVar11 = -(uVar12 & 0xfffffffffffffffc);
    lVar6 = 0;
    do {
      uVar7 = *(unsigned long long *)((long)(puVar4 + lVar6) + 8);
      uVar1 = *(unsigned long long *)(puVar4 + lVar6 + 0x10);
      uVar2 = *(unsigned long long *)((long)(puVar4 + lVar6 + 0x10) + 8);
      *(unsigned long long *)(puVar15 + lVar6) = *(unsigned long long *)(puVar4 + lVar6);
      *(unsigned long long *)((long)(puVar15 + lVar6) + 8) = uVar7;
      *(unsigned long long *)(puVar15 + lVar6 + 0x10) = uVar1;
      *(unsigned long long *)((long)(puVar15 + lVar6 + 0x10) + 8) = uVar2;
      uVar7 = *(unsigned long long *)((long)(puVar4 + lVar6 + 0x20) + 8);
      uVar1 = *(unsigned long long *)(puVar4 + lVar6 + 0x30);
      uVar2 = *(unsigned long long *)((long)(puVar4 + lVar6 + 0x30) + 8);
      *(unsigned long long *)(puVar15 + lVar6 + 0x20) = *(unsigned long long *)(puVar4 + lVar6 + 0x20);
      *(unsigned long long *)((long)(puVar15 + lVar6 + 0x20) + 8) = uVar7;
      *(unsigned long long *)(puVar15 + lVar6 + 0x30) = uVar1;
      *(unsigned long long *)((long)(puVar15 + lVar6 + 0x30) + 8) = uVar2;
      uVar7 = *(unsigned long long *)((long)(puVar4 + lVar6 + 0x40) + 8);
      uVar1 = *(unsigned long long *)(puVar4 + lVar6 + 0x50);
      uVar2 = *(unsigned long long *)((long)(puVar4 + lVar6 + 0x50) + 8);
      *(unsigned long long *)(puVar15 + lVar6 + 0x40) = *(unsigned long long *)(puVar4 + lVar6 + 0x40);
      *(unsigned long long *)((long)(puVar15 + lVar6 + 0x40) + 8) = uVar7;
      *(unsigned long long *)(puVar15 + lVar6 + 0x50) = uVar1;
      *(unsigned long long *)((long)(puVar15 + lVar6 + 0x50) + 8) = uVar2;
      uVar7 = *(unsigned long long *)((long)(puVar4 + lVar6 + 0x60) + 8);
      uVar1 = *(unsigned long long *)(puVar4 + lVar6 + 0x70);
      uVar2 = *(unsigned long long *)((long)(puVar4 + lVar6 + 0x70) + 8);
      *(unsigned long long *)(puVar15 + lVar6 + 0x60) = *(unsigned long long *)(puVar4 + lVar6 + 0x60);
      *(unsigned long long *)((long)(puVar15 + lVar6 + 0x60) + 8) = uVar7;
      *(unsigned long long *)(puVar15 + lVar6 + 0x70) = uVar1;
      *(unsigned long long *)((long)(puVar15 + lVar6 + 0x70) + 8) = uVar2;
      lVar6 = lVar6 + 0x80;
      lVar11 = lVar11 + 4;
    } while (lVar11 != 0);
  }
  if (uVar14 != 0) {
    lVar11 = 0;
    do {
      uVar7 = *(unsigned long long *)((long)(puVar4 + lVar11 + lVar6) + 8);
      uVar1 = *(unsigned long long *)(puVar4 + lVar11 + lVar6 + 0x10);
      uVar2 = *(unsigned long long *)((long)(puVar4 + lVar11 + lVar6 + 0x10) + 8);
      *(unsigned long long *)(puVar15 + lVar11 + lVar6) = *(unsigned long long *)(puVar4 + lVar11 + lVar6);
      *(unsigned long long *)((long)(puVar15 + lVar11 + lVar6) + 8) = uVar7;
      *(unsigned long long *)(puVar15 + lVar11 + lVar6 + 0x10) = uVar1;
      *(unsigned long long *)((long)(puVar15 + lVar11 + lVar6 + 0x10) + 8) = uVar2;
      lVar11 = lVar11 + 0x20;
    } while (uVar14 << 5 != lVar11);
  }
  puVar15 = puVar15 + uVar13;
  if (uVar5 != uVar13) {
    puVar9 = puVar4 + uVar13;
LAB_100303960:
    do {
      *puVar15 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar15 = puVar15 + 1;
    } while (puVar4 + uVar5 != puVar9);
  }
  uVar12 = uStack_78 & 0xff;
LAB_100303975:
  *puVar15 = 0;
  puVar4 = puStack_68;
  if ((uVar12 & 1) == 0) {
    puVar4 = (unsigned char *)((long)&uStack_78 + 1);
  }
  uVar5 = // boost code
  if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
    // std code
  }
  puVar15 = puVar4;
  if (uVar5 < 0x17) {
    uVar12 = 0;
    uStack_60 = 0(uStack_60._1_7_,(char)uVar5 * '\x02');
    puVar9 = (unsigned char *)((long)&uStack_60 + 1);
    if (uVar5 != 0) {
      if (0x1f < uVar5) goto LAB_1003039f9;
      goto LAB_100303af0;
    }
  }
  else {
    uVar12 = uVar5 + 0x10 & 0xfffffffffffffff0;
    puVar9 = (unsigned char *)new(uVar12);
    local_50 = puVar9;
    uStack_60 = uVar12 | 1;
    uStack_58 = uVar5;
    if (uVar5 < 0x20) {
LAB_100303af0:
      do {
        *puVar9 = *puVar15;
        puVar15 = puVar15 + 1;
        puVar9 = puVar9 + 1;
      } while (puVar4 + uVar5 != puVar15);
    }
    else {
LAB_1003039f9:
      if ((puVar9 < puVar4 + uVar5) && (puVar4 < puVar9 + uVar5)) goto LAB_100303af0;
      uVar13 = uVar5 & 0xffffffffffffffe0;
      uVar12 = (uVar13 - 0x20 >> 5) + 1;
      uVar14 = (unsigned long)((uint)uVar12 & 3);
      if (uVar13 - 0x20 < 0x60) {
        lVar6 = 0;
      }
      else {
        lVar11 = -(uVar12 & 0xfffffffffffffffc);
        lVar6 = 0;
        do {
          uVar7 = *(unsigned long long *)((long)(puVar4 + lVar6) + 8);
          uVar1 = *(unsigned long long *)(puVar4 + lVar6 + 0x10);
          uVar2 = *(unsigned long long *)((long)(puVar4 + lVar6 + 0x10) + 8);
          *(unsigned long long *)(puVar9 + lVar6) = *(unsigned long long *)(puVar4 + lVar6);
          *(unsigned long long *)((long)(puVar9 + lVar6) + 8) = uVar7;
          *(unsigned long long *)(puVar9 + lVar6 + 0x10) = uVar1;
          *(unsigned long long *)((long)(puVar9 + lVar6 + 0x10) + 8) = uVar2;
          uVar7 = *(unsigned long long *)((long)(puVar4 + lVar6 + 0x20) + 8);
          uVar1 = *(unsigned long long *)(puVar4 + lVar6 + 0x30);
          uVar2 = *(unsigned long long *)((long)(puVar4 + lVar6 + 0x30) + 8);
          *(unsigned long long *)(puVar9 + lVar6 + 0x20) = *(unsigned long long *)(puVar4 + lVar6 + 0x20);
          *(unsigned long long *)((long)(puVar9 + lVar6 + 0x20) + 8) = uVar7;
          *(unsigned long long *)(puVar9 + lVar6 + 0x30) = uVar1;
          *(unsigned long long *)((long)(puVar9 + lVar6 + 0x30) + 8) = uVar2;
          uVar7 = *(unsigned long long *)((long)(puVar4 + lVar6 + 0x40) + 8);
          uVar1 = *(unsigned long long *)(puVar4 + lVar6 + 0x50);
          uVar2 = *(unsigned long long *)((long)(puVar4 + lVar6 + 0x50) + 8);
          *(unsigned long long *)(puVar9 + lVar6 + 0x40) = *(unsigned long long *)(puVar4 + lVar6 + 0x40);
          *(unsigned long long *)((long)(puVar9 + lVar6 + 0x40) + 8) = uVar7;
          *(unsigned long long *)(puVar9 + lVar6 + 0x50) = uVar1;
          *(unsigned long long *)((long)(puVar9 + lVar6 + 0x50) + 8) = uVar2;
          uVar7 = *(unsigned long long *)((long)(puVar4 + lVar6 + 0x60) + 8);
          uVar1 = *(unsigned long long *)(puVar4 + lVar6 + 0x70);
          uVar2 = *(unsigned long long *)((long)(puVar4 + lVar6 + 0x70) + 8);
          *(unsigned long long *)(puVar9 + lVar6 + 0x60) = *(unsigned long long *)(puVar4 + lVar6 + 0x60);
          *(unsigned long long *)((long)(puVar9 + lVar6 + 0x60) + 8) = uVar7;
          *(unsigned long long *)(puVar9 + lVar6 + 0x70) = uVar1;
          *(unsigned long long *)((long)(puVar9 + lVar6 + 0x70) + 8) = uVar2;
          lVar6 = lVar6 + 0x80;
          lVar11 = lVar11 + 4;
        } while (lVar11 != 0);
      }
      if (uVar14 != 0) {
        lVar11 = 0;
        do {
          uVar7 = *(unsigned long long *)((long)(puVar4 + lVar11 + lVar6) + 8);
          uVar1 = *(unsigned long long *)(puVar4 + lVar11 + lVar6 + 0x10);
          uVar2 = *(unsigned long long *)((long)(puVar4 + lVar11 + lVar6 + 0x10) + 8);
          *(unsigned long long *)(puVar9 + lVar11 + lVar6) = *(unsigned long long *)(puVar4 + lVar11 + lVar6);
          *(unsigned long long *)((long)(puVar9 + lVar11 + lVar6) + 8) = uVar7;
          *(unsigned long long *)(puVar9 + lVar11 + lVar6 + 0x10) = uVar1;
          *(unsigned long long *)((long)(puVar9 + lVar11 + lVar6 + 0x10) + 8) = uVar2;
          lVar11 = lVar11 + 0x20;
        } while (uVar14 << 5 != lVar11);
      }
      puVar9 = puVar9 + uVar13;
      if (uVar5 != uVar13) {
        puVar15 = puVar4 + uVar13;
        goto LAB_100303af0;
      }
    }
    uVar12 = uStack_60 & 0xff;
  }
  *puVar9 = 0;
  puVar4 = local_50;
  if ((uVar12 & 1) == 0) {
    puVar4 = (unsigned char *)((long)&uStack_60 + 1);
  }
  uVar5 = // boost code
  if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
    // std code
  }
  if (uVar5 < 0x17) {
    local_90 = 0(local_90._1_7_,(char)uVar5 * '\x02');
    puVar15 = (unsigned char *)((long)&local_90 + 1);
    if (uVar5 != 0) goto joined_r0x000100303b8c;
  }
  else {
    uVar12 = uVar5 + 0x10 & 0xfffffffffffffff0;
    puVar15 = (unsigned char *)new(uVar12);
    local_90 = uVar12 | 1;
    local_80 = puVar15;
    sStack_88 = uVar5;
joined_r0x000100303b8c:
    puVar9 = puVar4;
    if ((0x1f < uVar5) && ((puVar4 + uVar5 <= puVar15 || (puVar15 + uVar5 <= puVar4)))) {
      uVar13 = uVar5 & 0xffffffffffffffe0;
      uVar12 = (uVar13 - 0x20 >> 5) + 1;
      uVar14 = (unsigned long)((uint)uVar12 & 3);
      if (uVar13 - 0x20 < 0x60) {
        lVar6 = 0;
      }
      else {
        lVar11 = -(uVar12 & 0xfffffffffffffffc);
        lVar6 = 0;
        do {
          uVar7 = *(unsigned long long *)((long)(puVar4 + lVar6) + 8);
          uVar1 = *(unsigned long long *)(puVar4 + lVar6 + 0x10);
          uVar2 = *(unsigned long long *)((long)(puVar4 + lVar6 + 0x10) + 8);
          *(unsigned long long *)(puVar15 + lVar6) = *(unsigned long long *)(puVar4 + lVar6);
          *(unsigned long long *)((long)(puVar15 + lVar6) + 8) = uVar7;
          *(unsigned long long *)(puVar15 + lVar6 + 0x10) = uVar1;
          *(unsigned long long *)((long)(puVar15 + lVar6 + 0x10) + 8) = uVar2;
          uVar7 = *(unsigned long long *)((long)(puVar4 + lVar6 + 0x20) + 8);
          uVar1 = *(unsigned long long *)(puVar4 + lVar6 + 0x30);
          uVar2 = *(unsigned long long *)((long)(puVar4 + lVar6 + 0x30) + 8);
          *(unsigned long long *)(puVar15 + lVar6 + 0x20) = *(unsigned long long *)(puVar4 + lVar6 + 0x20);
          *(unsigned long long *)((long)(puVar15 + lVar6 + 0x20) + 8) = uVar7;
          *(unsigned long long *)(puVar15 + lVar6 + 0x30) = uVar1;
          *(unsigned long long *)((long)(puVar15 + lVar6 + 0x30) + 8) = uVar2;
          uVar7 = *(unsigned long long *)((long)(puVar4 + lVar6 + 0x40) + 8);
          uVar1 = *(unsigned long long *)(puVar4 + lVar6 + 0x50);
          uVar2 = *(unsigned long long *)((long)(puVar4 + lVar6 + 0x50) + 8);
          *(unsigned long long *)(puVar15 + lVar6 + 0x40) = *(unsigned long long *)(puVar4 + lVar6 + 0x40);
          *(unsigned long long *)((long)(puVar15 + lVar6 + 0x40) + 8) = uVar7;
          *(unsigned long long *)(puVar15 + lVar6 + 0x50) = uVar1;
          *(unsigned long long *)((long)(puVar15 + lVar6 + 0x50) + 8) = uVar2;
          uVar7 = *(unsigned long long *)((long)(puVar4 + lVar6 + 0x60) + 8);
          uVar1 = *(unsigned long long *)(puVar4 + lVar6 + 0x70);
          uVar2 = *(unsigned long long *)((long)(puVar4 + lVar6 + 0x70) + 8);
          *(unsigned long long *)(puVar15 + lVar6 + 0x60) = *(unsigned long long *)(puVar4 + lVar6 + 0x60);
          *(unsigned long long *)((long)(puVar15 + lVar6 + 0x60) + 8) = uVar7;
          *(unsigned long long *)(puVar15 + lVar6 + 0x70) = uVar1;
          *(unsigned long long *)((long)(puVar15 + lVar6 + 0x70) + 8) = uVar2;
          lVar6 = lVar6 + 0x80;
          lVar11 = lVar11 + 4;
        } while (lVar11 != 0);
      }
      if (uVar14 != 0) {
        lVar11 = 0;
        do {
          uVar7 = *(unsigned long long *)((long)(puVar4 + lVar11 + lVar6) + 8);
          uVar1 = *(unsigned long long *)(puVar4 + lVar11 + lVar6 + 0x10);
          uVar2 = *(unsigned long long *)((long)(puVar4 + lVar11 + lVar6 + 0x10) + 8);
          *(unsigned long long *)(puVar15 + lVar11 + lVar6) = *(unsigned long long *)(puVar4 + lVar11 + lVar6);
          *(unsigned long long *)((long)(puVar15 + lVar11 + lVar6) + 8) = uVar7;
          *(unsigned long long *)(puVar15 + lVar11 + lVar6 + 0x10) = uVar1;
          *(unsigned long long *)((long)(puVar15 + lVar11 + lVar6 + 0x10) + 8) = uVar2;
          lVar11 = lVar11 + 0x20;
        } while (uVar14 << 5 != lVar11);
      }
      puVar15 = puVar15 + uVar13;
      if (uVar5 == uVar13) goto LAB_100303ca2;
      puVar9 = puVar4 + uVar13;
    }
    do {
      *puVar15 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar15 = puVar15 + 1;
    } while (puVar4 + uVar5 != puVar9);
  }
LAB_100303ca2:
  *puVar15 = 0;
  if ((uStack_48 & 1) != 0) {
    delete(local_38);
  }
  local_38 = local_80;
  uStack_48 = local_90;
  sStack_40 = sStack_88;
  local_90 = local_90 & 0xffffffffffff0000;
  if ((uStack_60 & 1) != 0) {
    delete(local_50);
  }
  if ((uStack_78 & 1) != 0) {
    delete(puStack_68);
  }
  // boost code
  // boost code
            ((detail *)&local_90,(path *)&uStack_48,(path *)&uStack_60,(error_code *)0x0);
  if ((uStack_48 & 1) != 0) {
    delete(local_38);
  }
  local_38 = local_80;
  uStack_48 = local_90;
  sStack_40 = sStack_88;
  local_90 = local_90 & 0xffffffffffff0000;
  if ((uStack_60 & 1) != 0) {
    delete(local_50);
  }
  puVar4 = (unsigned char *)((long)&uStack_48 + 1);
  if ((uStack_48 & 1) != 0) {
    puVar4 = local_38;
  }
  lVar6 = _CFStringCreateWithCString(0,puVar4,0x8000100);
  lVar11 = _CFURLCreateWithFileSystemPath(0,lVar6,0,1);
  if (lVar6 != 0) {
    _CFRelease(lVar6);
  }
  if (lVar11 == 0) goto LAB_100303dc4;
  uVar7 = _CFBundleCreate(0,lVar11);
  _CFRelease(lVar11);
LAB_100303da0:
  if ((uStack_48 & 1) == 0) {
    return uVar7;
  }
  goto LAB_100303da6;
LAB_1003037cd:
  puVar10 = puVar10 + 1;
  puVar15 = puVar15 + 1;
  pcVar17 = pcVar17 + -1;
  sVar3 = sVar3 - 1;
  if (puVar10 == puVar9) goto LAB_100303da0;
  goto LAB_1003037aa;
}
}
