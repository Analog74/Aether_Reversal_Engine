#include <ni/controller_editor/sanitize_OT.hpp>
namespace OT::OpenTypeFontFile {

void sanitize(OT::hb_sanitize_context_t*) const {
OpenTypeFontFile *pOVar1;
  uint uVar2;
  unsigned long uVar3;
  unsigned long uVar4;
  OpenTypeFontFile *pOVar5;
  uint uVar6;
  uint uVar7;
  OpenTypeFontFile *pOVar8;
  int iVar9;
  OpenTypeFontFile *pOVar10;
  OpenTypeFontFile *pOVar11;
  bool bVar12;
  
  pOVar11 = *(OpenTypeFontFile **)(param_1 + 8);
  if (this < pOVar11) {
    return 0;
  }
  pOVar10 = *(OpenTypeFontFile **)(param_1 + 0x10);
  if (pOVar10 < this) {
    return 0;
  }
  iVar9 = (int)pOVar10;
  uVar6 = iVar9 - (int)this;
  if (uVar6 < 4) {
    return 0;
  }
  uVar7 = (uint)(byte)this[2] << 8 | (uint)(byte)this[1] << 0x10 | (uint)(byte)*this << 0x18;
  uVar2 = (byte)this[3] | uVar7;
  if ((int)uVar2 < 0x74727565) {
    if (uVar2 == 0x10000) goto LAB_1001521f1;
    bVar12 = uVar2 == 0x4f54544f;
  }
  else {
    if (uVar2 == 0x74797031) goto LAB_1001521f1;
    if (uVar2 == 0x74746366) {
      pOVar8 = this + 4;
      if (pOVar8 < pOVar11) {
        return 0;
      }
      if (pOVar10 < pOVar8) {
        return 0;
      }
      if ((uint)(iVar9 - (int)pOVar8) < 4) {
        return 0;
      }
      uVar6 = (uint)(byte)this[4] * 0x100 + -1 + (uint)(byte)this[5];
      if (1 < uVar6) {
        return 0((uint7)(uint3)(uVar6 >> 8),1);
      }
      pOVar8 = this + 8;
      if (pOVar8 < pOVar11) {
        return 0;
      }
      if (pOVar10 < pOVar8) {
        return 0;
      }
      if ((uint)(iVar9 - (int)pOVar8) < 4) {
        return 0;
      }
      uVar6 = (uint)(byte)this[0xb] |
              (uint)(byte)this[10] << 8 | (uint)(byte)this[9] << 0x10 | (uint)(byte)this[8] << 0x18;
      if (uVar6 < 0x3fffffff) {
        pOVar8 = this + 0xc;
        if (pOVar8 < pOVar11) {
          return 0;
        }
        if (pOVar10 < pOVar8) {
          return 0;
        }
        if ((uint)(iVar9 - (int)pOVar8) < uVar6 * 4) {
          return 0;
        }
        if (uVar6 != 0) {
          if (pOVar8 < pOVar11) {
            return 0;
          }
          if (pOVar10 < pOVar8) {
            return 0;
          }
          uVar2 = 1;
          uVar3 = 0;
          while( true ) {
          }
          return 0;
        }
        return 0((uint7)(uint3)(uVar6 * 4 >> 8),1);
      }
      return 0;
    }
    bVar12 = uVar2 == 0x74727565;
  }
  if (!bVar12) {
    return 0((uint7)(uint3)(uVar7 >> 8),1);
  }
LAB_1001521f1:
  if (uVar6 < 0xc) {
    uVar3 = 0;
  }
  else {
    pOVar8 = this + 0xc;
    uVar3 = 0;
    if ((pOVar11 <= pOVar8) && (uVar3 = 0, pOVar8 <= pOVar10)) {
      uVar3 = (unsigned long)CONCAT11(this[4],(uint)CONCAT11(this[4],this[5]) << 4 <=
                                      (uint)(iVar9 - (int)pOVar8));
    }
  }
  return uVar3;
}
}
