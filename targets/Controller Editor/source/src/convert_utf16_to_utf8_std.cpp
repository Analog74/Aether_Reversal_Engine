#include <ni/controller_editor/convert_utf16_to_utf8_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::http::(anonymous namespace) {

void convert_utf16_to_utf8(2 param_2, std::u16string {
byte *pbVar1;
  unsigned long long *puVar2;
  unsigned long long *puVar3;
  byte bVar4;
  unsigned long long uVar5;
  unsigned long long uVar6;
  unsigned long long uVar7;
  unsigned long long uVar8;
  unsigned long long uVar9;
  unsigned long long uVar10;
  unsigned long long uVar11;
  long lVar12;
  long lVar13;
  void *pvVar14;
  unsigned long uVar15;
  unsigned long uVar16;
  unsigned long uVar17;
  unsigned long uVar18;
  void *pvVar19;
  unsigned long uVar20;
  unsigned long local_68;
  unsigned long uStack_60;
  void *local_58;
  unsigned long local_48;
  unsigned long uStack_40;
  void *local_38;
  unsigned long long local_28;
  unsigned long uStack_20;
  void *local_18;
  
  if (((byte)*param_2 & 1) == 0) {
    if ((byte)*param_2 < 2) return;
    pbVar1 = (byte *)((long)param_2 + 2);
    bVar4 = *pbVar1;
  }
  else {
    if (param_2[1] == 0) return;
    pbVar1 = (byte *)param_2[2];
    bVar4 = *pbVar1;
  }
  if (bVar4 == 0xfe) {
    if (pbVar1[1] == 0xff) {
      local_58 = (void *)param_2[2];
      local_68 = *param_2;
      uStack_60 = param_2[1];
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      convert_utf16be_to_utf8(this,&local_68,1);
      if ((local_68 & 1) != 0) {
        delete(local_58);
        return;
      }
      return;
    }
    local_38 = (void *)param_2[2];
    local_48 = *param_2;
    uStack_40 = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    convert_utf16be_to_utf8(this,&local_48,0);
    if ((local_48 & 1) != 0) {
      delete(local_38);
      return;
    }
    return;
  }
  if ((bVar4 != 0xff) || (pbVar1[1] != 0xfe)) return;
  pvVar19 = (void *)param_2[2];
  local_18 = pvVar19;
  local_28 = *param_2;
  uVar20 = param_2[1];
  uStack_20 = uVar20;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if ((local_28 & 1) == 0) {
    if ((byte)local_28._0_1_ < 2) return;
    uVar20 = (unsigned long)((byte)local_28._0_1_ >> 1);
    pvVar19 = (void *)((long)&local_28 + 2);
  }
  else if(2 param_2, 2 param_2, uVar20 == 0 return;
  uVar15 = uVar20 - 1;
  if (uVar15 != 0 {
    uVar16 = uVar15;
    pvVar14 = pvVar19;
    if (0xf < uVar15) {
      uVar18 = uVar15 & 0xfffffffffffffff0;
      uVar16 = (uVar18 - 0x10 >> 4) + 1;
      uVar17 = (unsigned long)((uint)uVar16 & 3);
      if (uVar18 - 0x10 < 0x30) {
        lVar12 = 0;
      }
      else {
        lVar13 = -(uVar16 & 0xfffffffffffffffc);
        lVar12 = 0;
        do {
          puVar2 = (unsigned long long *)((long)pvVar19 + lVar12 * 2 + 2);
          uVar5 = puVar2[1];
          puVar3 = (unsigned long long *)((long)pvVar19 + lVar12 * 2 + 0x12);
          uVar6 = *puVar3;
          uVar7 = puVar3[1];
          puVar3 = (unsigned long long *)((long)pvVar19 + lVar12 * 2 + 0x22);
          uVar8 = *puVar3;
          uVar9 = puVar3[1];
          puVar3 = (unsigned long long *)((long)pvVar19 + lVar12 * 2 + 0x32);
          uVar10 = *puVar3;
          uVar11 = puVar3[1];
          puVar3 = (unsigned long long *)((long)pvVar19 + lVar12 * 2);
          *puVar3 = *puVar2;
          puVar3[1] = uVar5;
          puVar2 = (unsigned long long *)((long)pvVar19 + lVar12 * 2 + 0x10);
          *puVar2 = uVar6;
          puVar2[1] = uVar7;
          puVar2 = (unsigned long long *)((long)pvVar19 + lVar12 * 2 + 0x20);
          *puVar2 = uVar8;
          puVar2[1] = uVar9;
          puVar2 = (unsigned long long *)((long)pvVar19 + lVar12 * 2 + 0x30);
          *puVar2 = uVar10;
          puVar2[1] = uVar11;
          puVar2 = (unsigned long long *)((long)pvVar19 + lVar12 * 2 + 0x42);
          uVar5 = puVar2[1];
          puVar3 = (unsigned long long *)((long)pvVar19 + lVar12 * 2 + 0x52);
          uVar6 = *puVar3;
          uVar7 = puVar3[1];
          puVar3 = (unsigned long long *)((long)pvVar19 + lVar12 * 2 + 0x40);
          *puVar3 = *puVar2;
          puVar3[1] = uVar5;
          puVar2 = (unsigned long long *)((long)pvVar19 + lVar12 * 2 + 0x50);
          *puVar2 = uVar6;
          puVar2[1] = uVar7;
          puVar3 = (unsigned long long *)((long)pvVar19 + lVar12 * 2 + 0x62);
          uVar5 = puVar3[1];
          puVar2 = (unsigned long long *)((long)pvVar19 + lVar12 * 2 + 0x72);
          uVar6 = *puVar2;
          uVar7 = puVar2[1];
          puVar2 = (unsigned long long *)((long)pvVar19 + lVar12 * 2 + 0x60);
          *puVar2 = *puVar3;
          puVar2[1] = uVar5;
          puVar2 = (unsigned long long *)((long)pvVar19 + lVar12 * 2 + 0x70);
          *puVar2 = uVar6;
          puVar2[1] = uVar7;
          lVar12 = lVar12 + 0x40;
          lVar13 = lVar13 + 4;
        } while (lVar13 != 0);
      }
      if (uVar17 != 0) {
        lVar13 = 0;
        do {
          puVar3 = (unsigned long long *)((long)pvVar19 + lVar13 + lVar12 * 2 + 2);
          uVar5 = puVar3[1];
          puVar2 = (unsigned long long *)((long)pvVar19 + lVar13 + lVar12 * 2 + 0x12);
          uVar6 = *puVar2;
          uVar7 = puVar2[1];
          puVar2 = (unsigned long long *)((long)pvVar19 + lVar13 + lVar12 * 2);
          *puVar2 = *puVar3;
          puVar2[1] = uVar5;
          puVar2 = (unsigned long long *)((long)pvVar19 + lVar13 + lVar12 * 2 + 0x10);
          *puVar2 = uVar6;
          puVar2[1] = uVar7;
          lVar13 = lVar13 + 0x20;
        } while (uVar17 << 5 != lVar13);
      }
      if (uVar15 == uVar18) return;
      uVar16 = (unsigned long)((uint)uVar15 & 0xf);
      pvVar14 = (void *)((long)pvVar19 + uVar18 * 2);
    }
    uVar17 = 0;
    do {
      *(void2 *)((long)pvVar14 + uVar17 * 2) = *(void2 *)((long)pvVar14 + uVar17 * 2 + 2);
      uVar17 = uVar17 + 1;
    } while (uVar16 != uVar17);
  }
  if ((local_28 & 1) == 0) {
    uVar16 = local_28 >> 8;
    local_28 = 0((int7)uVar16,(char)uVar15 * '\x02');
    uVar15 = uStack_20;
  }
  uStack_20 = uVar15;
  *(void2 *)((long)pvVar19 + uVar20 * 2 + -2) = 0;
  utility::conversions::utf16_to_utf8((conversions *)this,(u16string *)&local_28);
  if ((local_28 & 1) != 0) {
    delete(local_18);
    return;
  }
  return;
}
}
