#include <ni/controller_editor/MultilineTextEditContentArea.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL::DETAIL {

void MultilineTextEditContentArea::copyToClipboard() const {
long *plVar1;
  unsigned long long uVar2;
  unsigned long long uVar3;
  unsigned long long uVar4;
  bool bVar5;
  MultilineTextEditContentArea *pMVar6;
  unsigned char *puVar7;
  unsigned char *puVar8;
  unsigned char *puVar9;
  long lVar10;
  unsigned long uVar11;
  long lVar12;
  unsigned long uVar13;
  unsigned long uVar14;
  unsigned long uVar15;
  unsigned long long local_48;
  unsigned long uStack_40;
  unsigned char *puStack_38;
  
  plVar1 = *(long **)(this + 0x138);
  if (plVar1 == (long *)0x0) {
    return;
  }
  uVar15 = *(unsigned long *)(this + 0x888);
  uVar14 = *(unsigned long *)(this + 0x8a0);
  if (uVar15 == uVar14) {
    lVar10 = *(long *)(this + 0x880);
    lVar12 = *(long *)(this + 0x898);
    if (lVar10 == lVar12) {
      return;
    }
  }
  else {
    lVar10 = *(long *)(this + 0x880);
    lVar12 = *(long *)(this + 0x898);
  }
  bVar5 = uVar14 < uVar15;
  if (uVar15 == uVar14) {
    bVar5 = lVar12 < lVar10;
  }
  pMVar6 = this + 0x880;
  if (bVar5) {
    pMVar6 = this + 0x898;
  }
  puVar7 = (unsigned char *)
           MultilineText::toIteratorInText(this,*(unsigned long long *)pMVar6,*(unsigned long long *)(pMVar6 + 8));
  bVar5 = *(unsigned long *)(this + 0x888) < *(unsigned long *)(this + 0x8a0);
  if (*(unsigned long *)(this + 0x888) == *(unsigned long *)(this + 0x8a0)) {
    bVar5 = *(long *)(this + 0x880) < *(long *)(this + 0x898);
  }
  pMVar6 = this + 0x880;
  if (bVar5) {
    pMVar6 = this + 0x898;
  }
  puVar8 = (unsigned char *)
           MultilineText::toIteratorInText(this,*(unsigned long long *)pMVar6,*(unsigned long long *)(pMVar6 + 8));
  uVar15 = (long)puVar8 - (long)puVar7;
  if (0xffffffffffffffef < uVar15) {
                    /* WARNING: Subroutine does not return */
    // std code
  }
  if (uVar15 < 0x17) {
    local_48 = 0(local_48._1_7_,(char)uVar15 * '\x02');
    puVar9 = (unsigned char *)((long)&local_48 + 1);
  }
  else {
    uVar14 = uVar15 + 0x10 & 0xfffffffffffffff0;
    puVar9 = (unsigned char *)new char[uVar14];
    local_48 = uVar14 | 1;
    uStack_40 = uVar15;
    puStack_38 = puVar9;
  }
  if (puVar7 != puVar8) {
    if ((0x1f < uVar15) &&
       ((puVar8 <= puVar9 || (puVar8 + ((long)puVar9 - (long)puVar7) <= puVar7)))) {
      uVar13 = uVar15 & 0xffffffffffffffe0;
      uVar11 = (uVar13 - 0x20 >> 5) + 1;
      uVar14 = (unsigned long)((uint)uVar11 & 3);
      if (uVar13 - 0x20 < 0x60) {
        lVar12 = 0;
      }
      else {
        lVar10 = -(uVar11 & 0xfffffffffffffffc);
        lVar12 = 0;
        do {
          uVar2 = *(unsigned long long *)((long)(puVar7 + lVar12) + 8);
          uVar3 = *(unsigned long long *)(puVar7 + lVar12 + 0x10);
          uVar4 = *(unsigned long long *)((long)(puVar7 + lVar12 + 0x10) + 8);
          *(unsigned long long *)(puVar9 + lVar12) = *(unsigned long long *)(puVar7 + lVar12);
          *(unsigned long long *)((long)(puVar9 + lVar12) + 8) = uVar2;
          *(unsigned long long *)(puVar9 + lVar12 + 0x10) = uVar3;
          *(unsigned long long *)((long)(puVar9 + lVar12 + 0x10) + 8) = uVar4;
          uVar2 = *(unsigned long long *)((long)(puVar7 + lVar12 + 0x20) + 8);
          uVar3 = *(unsigned long long *)(puVar7 + lVar12 + 0x30);
          uVar4 = *(unsigned long long *)((long)(puVar7 + lVar12 + 0x30) + 8);
          *(unsigned long long *)(puVar9 + lVar12 + 0x20) = *(unsigned long long *)(puVar7 + lVar12 + 0x20);
          *(unsigned long long *)((long)(puVar9 + lVar12 + 0x20) + 8) = uVar2;
          *(unsigned long long *)(puVar9 + lVar12 + 0x30) = uVar3;
          *(unsigned long long *)((long)(puVar9 + lVar12 + 0x30) + 8) = uVar4;
          uVar2 = *(unsigned long long *)((long)(puVar7 + lVar12 + 0x40) + 8);
          uVar3 = *(unsigned long long *)(puVar7 + lVar12 + 0x50);
          uVar4 = *(unsigned long long *)((long)(puVar7 + lVar12 + 0x50) + 8);
          *(unsigned long long *)(puVar9 + lVar12 + 0x40) = *(unsigned long long *)(puVar7 + lVar12 + 0x40);
          *(unsigned long long *)((long)(puVar9 + lVar12 + 0x40) + 8) = uVar2;
          *(unsigned long long *)(puVar9 + lVar12 + 0x50) = uVar3;
          *(unsigned long long *)((long)(puVar9 + lVar12 + 0x50) + 8) = uVar4;
          uVar2 = *(unsigned long long *)((long)(puVar7 + lVar12 + 0x60) + 8);
          uVar3 = *(unsigned long long *)(puVar7 + lVar12 + 0x70);
          uVar4 = *(unsigned long long *)((long)(puVar7 + lVar12 + 0x70) + 8);
          *(unsigned long long *)(puVar9 + lVar12 + 0x60) = *(unsigned long long *)(puVar7 + lVar12 + 0x60);
          *(unsigned long long *)((long)(puVar9 + lVar12 + 0x60) + 8) = uVar2;
          *(unsigned long long *)(puVar9 + lVar12 + 0x70) = uVar3;
          *(unsigned long long *)((long)(puVar9 + lVar12 + 0x70) + 8) = uVar4;
          lVar12 = lVar12 + 0x80;
          lVar10 = lVar10 + 4;
        } while (lVar10 != 0);
      }
      if (uVar14 != 0) {
        lVar10 = 0;
        do {
          uVar2 = *(unsigned long long *)((long)(puVar7 + lVar10 + lVar12) + 8);
          uVar3 = *(unsigned long long *)(puVar7 + lVar10 + lVar12 + 0x10);
          uVar4 = *(unsigned long long *)((long)(puVar7 + lVar10 + lVar12 + 0x10) + 8);
          *(unsigned long long *)(puVar9 + lVar10 + lVar12) = *(unsigned long long *)(puVar7 + lVar10 + lVar12);
          *(unsigned long long *)((long)(puVar9 + lVar10 + lVar12) + 8) = uVar2;
          *(unsigned long long *)(puVar9 + lVar10 + lVar12 + 0x10) = uVar3;
          *(unsigned long long *)((long)(puVar9 + lVar10 + lVar12 + 0x10) + 8) = uVar4;
          lVar10 = lVar10 + 0x20;
        } while (uVar14 << 5 != lVar10);
      }
      puVar9 = puVar9 + uVar13;
      if (uVar15 == uVar13) return;
      puVar7 = puVar7 + uVar13;
    }
    do {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    } while (puVar8 != puVar7);
  }
  *puVar9 = 0;
  (**(code **)(*plVar1 + 0x78))(plVar1,&local_48);
  if ((local_48 & 1) != 0) {
    delete(puStack_38);
  }
  return;
}

void MultilineTextEditContentArea::deleteSelectedTextNoSignalChange() {
long lVar1;
  unsigned long *puVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  bool bVar6;
  MultilineTextEditContentArea *pMVar7;
  int iVar8;
  MultilineTextEditContentArea *pMVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  unsigned long *puVar13;
  MultilineTextEditContentArea *pMVar14;
  MultilineTextEditContentArea *local_60;
  unsigned int local_58;
  MultilineTextEditContentArea *local_50;
  MultilineTextEditContentArea *local_48;
  long local_40;
  MultilineTextEditContentArea *local_38;
  
  local_50 = this + 0x880;
  local_48 = this + 0x898;
  bVar6 = *(unsigned long *)(this + 0x8a0) < *(unsigned long *)(this + 0x888);
  if (*(unsigned long *)(this + 0x8a0) == *(unsigned long *)(this + 0x888)) {
    bVar6 = *(long *)(this + 0x898) < *(long *)(this + 0x880);
  }
  pMVar14 = local_50;
  if (bVar6) {
    pMVar14 = local_48;
  }
  local_40 = MultilineText::toIteratorInText
                       (this,*(unsigned long long *)pMVar14,*(unsigned long long *)(pMVar14 + 8));
  pMVar7 = local_48;
  pMVar14 = local_50;
  if (((byte)this[0x3a8] & 1) == 0) {
    local_38 = this + 0x3a9;
  }
  else {
    local_38 = *(MultilineTextEditContentArea **)(this + 0x3b8);
  }
  bVar6 = *(unsigned long *)(this + 0x8a0) < *(unsigned long *)(this + 0x888);
  if (*(unsigned long *)(this + 0x8a0) == *(unsigned long *)(this + 0x888)) {
    bVar6 = *(long *)(this + 0x898) < *(long *)(this + 0x880);
  }
  pMVar9 = local_50;
  if (bVar6) {
    pMVar9 = local_48;
  }
  lVar10 = MultilineText::toIteratorInText(this,*(unsigned long long *)pMVar9,*(unsigned long long *)(pMVar9 + 8));
  bVar6 = *(unsigned long *)(this + 0x888) < *(unsigned long *)(this + 0x8a0);
  if (*(unsigned long *)(this + 0x888) == *(unsigned long *)(this + 0x8a0)) {
    bVar6 = *(long *)(this + 0x880) < *(long *)(this + 0x898);
  }
  if (bVar6) {
    pMVar14 = pMVar7;
  }
  MultilineText::toIteratorInText(this,*(unsigned long long *)pMVar14,*(unsigned long long *)(pMVar14 + 8));
  if (((byte)this[0x3a8] & 1) == 0) {
    pMVar14 = this + 0x3a9;
  }
  else {
    pMVar14 = *(MultilineTextEditContentArea **)(this + 0x3b8);
  }
  lVar12 = local_40 - (long)local_38;
  // std code
  (**(code **)(*(long *)this + 0xd8))(this);
  (**(code **)(*(long *)this + 0xd8))(this);
  if (((byte)this[0x3a8] & 1) == 0) {
    pMVar14 = this + 0x3a9;
  }
  else {
    pMVar14 = *(MultilineTextEditContentArea **)(this + 0x3b8);
  }
  pMVar14 = pMVar14 + lVar12;
  puVar2 = *(unsigned long **)(this + 0x3c0);
  lVar10 = *(long *)(this + 0x3c8) - (long)puVar2 >> 4;
  if (*(long *)(this + 0x3c8) - (long)puVar2 != 0) {
    lVar11 = 1;
    puVar13 = puVar2;
    lVar12 = 1;
    if (lVar10 != 0) {
      lVar12 = lVar10;
    }
    do {
      if (pMVar14 < (MultilineTextEditContentArea *)*puVar13) {
        lVar10 = -lVar11;
        return;
      }
      lVar1 = lVar12 + lVar11;
      lVar11 = lVar11 + -1;
      puVar13 = puVar13 + 2;
    } while (lVar1 != 2);
  }
  lVar10 = lVar10 + -2;
  local_60 = (MultilineTextEditContentArea *)puVar2[lVar10 * 2];
  local_58 = (unsigned int)puVar2[lVar10 * 2 + 1];
  lVar12 = 0;
  if (local_60 != pMVar14) {
    do {
      lVar12 = lVar12 + 1;
      // boost code
                ((u8_to_u32_iterator<// std code
    } while (local_60 != pMVar14);
  }
  *(long *)(this + 0x880) = lVar12;
  *(long *)(this + 0x888) = lVar10;
  *(long *)(this + 0x890) = lVar12;
  uVar3 = *(unsigned int *)(local_50 + 4);
  uVar4 = *(unsigned int *)(local_50 + 8);
  uVar5 = *(unsigned int *)(local_50 + 0xc);
  *(unsigned int *)local_48 = *(unsigned int *)local_50;
  *(unsigned int *)(local_48 + 4) = uVar3;
  *(unsigned int *)(local_48 + 8) = uVar4;
  *(unsigned int *)(local_48 + 0xc) = uVar5;
  if (*(Pane **)(this + 0x138) != (Pane *)0x0) {
    iVar8 = Pane::getCommonTimeInterval(*(Pane **)(this + 0x138),3);
    Widget::setTimer((Widget *)this,iVar8);
  }
  this[0x87c] = (MultilineTextEditContentArea)0x1;
  Widget::setInvalid((Widget *)this,0);
  nod::signal_type<nod::multithread_policy,void()>::operator()
            ((signal_type<nod::multithread_policy,void()> *)(this + 0x7a0));
  Widget::setInvalid((Widget *)this,0);
  return;
}

void MultilineTextEditContentArea::getCursRectInPixel() const {
Font *this_00;
  int iVar1;
  float fVar2;
  
  MultilineText::toPositionInPixel((MultilineText *)this,(LineColPosition *)(this + 0x880));
  this_00 = (Font *)PanelDrawer::getFont((PanelDrawer *)(this + 0x2f0),(Widget *)this);
  iVar1 = UIA::Font::getCharHeight(this_00);
  fVar2 = (float)Widget::getBackingScaleFactor((Widget *)this);
  _lroundf((float)iVar1 / fVar2);
  MultilineText::toPositionInPixel((MultilineText *)this,(LineColPosition *)(this + 0x880));
  return;
}

void MultilineTextEditContentArea::moveCursorHorizontally(int, bool) {
long lVar1;
  MultilineTextEditContentArea MVar2;
  byte bVar3;
  unsigned long *puVar4;
  code *pcVar5;
  unsigned char auVar6 [12];
  unsigned char auVar7 [12];
  unsigned long long uVar8;
  int iVar9;
  MultilineTextEditContentArea *pMVar10;
  unsigned long uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  unsigned long *puVar16;
  uint uVar17;
  MultilineTextEditContentArea *pMVar18;
  long lVar19;
  bool bVar20;
  unsigned char local_50 [12];
  unsigned char local_40 [12];
  
  local_50 = MultilineText::toIteratorInText
                       (this,*(unsigned long long *)(this + 0x880),*(unsigned long long *)(this + 0x888));
  pMVar10 = local_50._0_8_;
  MVar2 = this[0x3a8];
  if (param_1 < 0) {
    if (((byte)MVar2 & 1) == 0) {
      local_40._0_8_ = this + 0x3a9;
    }
    else {
      local_40._0_8_ = *(unsigned long long *)(this + 0x3b8);
    }
    local_40._8_4_ = 0xffffffff;
    lVar14 = 0;
    if ((MultilineTextEditContentArea *)local_40._0_8_ != pMVar10) {
      do {
        lVar14 = lVar14 + 1;
        // boost code
                  ((u8_to_u32_iterator<// std code
      } while ((MultilineTextEditContentArea *)local_40._0_8_ != pMVar10);
    }
    if (-param_1 <= lVar14) {
      lVar14 = (long)param_1;
      auVar7 = local_50;
      if (param_1 < 0) {
        do {
          local_50._8_4_ = auVar7._8_4_;
          local_50._0_8_ = auVar7._0_8_;
          uVar12 = 0;
          do {
            local_50._0_8_ = local_50._0_8_ + -1;
            bVar3 = *(byte *)local_50._0_8_;
            uVar12 = uVar12 + 1;
          } while ((bVar3 & 0xc0) == 0x80);
          if ((char)bVar3 < '\0') {
            uVar17 = 0x80;
            uVar15 = 0;
            do {
              uVar15 = uVar15 + 1;
              uVar17 = uVar17 >> 1;
            } while ((uVar17 & bVar3) != 0);
            uVar17 = 4;
            if (uVar15 < 4) {
              uVar17 = uVar15;
            }
            if (uVar15 == 0) return;
          }
          else {
            uVar17 = 1;
          }
          if (uVar17 != uVar12) {
            // std code
                      ((logic_error *)local_40,
                       "Invalid UTF-8 sequence encountered while trying to encode UTF-32 character")
            ;
            local_40._0_8_ = (char*)PTR_vtable_101ab45e0 + 0x10;
            // boost code
            return;
          }
          auVar7._8_4_ = 0xffffffff;
          auVar7._0_8_ = local_50._0_8_;
          local_50._8_4_ = 0xffffffff;
          lVar14 = lVar14 + 1;
        } while (lVar14 != 0);
      }
      else {
        lVar14 = lVar14 + 1;
        do {
          // boost code
                    ((u8_to_u32_iterator<// std code
          lVar14 = lVar14 + -1;
        } while (1 < lVar14);
      }
      return;
    }
    if (((byte)this[0x3a8] & 1) == 0) {
      local_50._0_8_ = this + 0x3a9;
    }
    else {
      local_50._0_8_ = *(unsigned long long *)(this + 0x3b8);
    }
  }
  else {
    if (((byte)MVar2 & 1) == 0) {
      pMVar18 = this + 0x3a9;
      uVar11 = (unsigned long)((byte)MVar2 >> 1);
    }
    else {
      uVar11 = *(unsigned long *)(this + 0x3b0);
      pMVar18 = *(MultilineTextEditContentArea **)(this + 0x3b8);
    }
    lVar14 = 0;
    local_40 = local_50;
    if (pMVar10 != pMVar18 + uVar11) {
      do {
        lVar14 = lVar14 + 1;
        // boost code
                  ((u8_to_u32_iterator<// std code
        bVar20 = (MultilineTextEditContentArea *)local_40._0_8_ != pMVar18 + uVar11;
      } while (bVar20);
    }
    lVar19 = (long)param_1;
    if (lVar19 <= lVar14) {
      auVar6 = local_50;
      if (param_1 < 0) {
        do {
          local_50._8_4_ = auVar6._8_4_;
          local_50._0_8_ = auVar6._0_8_;
          uVar12 = 0;
          do {
            local_50._0_8_ = local_50._0_8_ + -1;
            bVar3 = *(byte *)local_50._0_8_;
            uVar12 = uVar12 + 1;
          } while ((bVar3 & 0xc0) == 0x80);
          if ((char)bVar3 < '\0') {
            uVar17 = 0x80;
            uVar15 = 0;
            do {
              uVar15 = uVar15 + 1;
              uVar17 = uVar17 >> 1;
            } while ((uVar17 & bVar3) != 0);
            uVar17 = 4;
            if (uVar15 < 4) {
              uVar17 = uVar15;
            }
            if (uVar15 == 0) return;
          }
          else {
            uVar17 = 1;
          }
          if (uVar17 != uVar12) {
            // std code
                      ((logic_error *)local_40,
                       "Invalid UTF-8 sequence encountered while trying to encode UTF-32 character")
            ;
            local_40._0_8_ = (char*)PTR_vtable_101ab45e0 + 0x10;
            // boost code
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          auVar6._8_4_ = 0xffffffff;
          auVar6._0_8_ = local_50._0_8_;
          local_50._8_4_ = 0xffffffff;
          lVar19 = lVar19 + 1;
        } while (lVar19 != 0);
      }
      else if(1 param_1, 1 param_1, 1 param_1, 1 param_1, param_1 != 0 {
        lVar19 = lVar19 + 1;
        do {
          // boost code
                    ((u8_to_u32_iterator<// std code
          lVar19 = lVar19 + -1;
        } while (1 < lVar19;
      }
      return;
    }
    MVar2 = this[0x3a8];
    if (((byteMVar2 & 1 == 0) {
      local_50._0_8_ = this + 0x3a9;
      uVar11 = (unsigned long)((byte)MVar2 >> 1);
    }
    else {
      uVar11 = *(unsigned long *)(this + 0x3b0);
      local_50._0_8_ = *(unsigned long long *)(this + 0x3b8);
    }
    local_50._0_8_ = local_50._0_8_ + uVar11;
  }
  local_50._8_4_ = 0xffffffff;
  uVar8 = local_50._0_8_;
  puVar4 = *(unsigned long **)(this + 0x3c0);
  lVar14 = *(long *)(this + 0x3c8) - (long)puVar4 >> 4;
  if (*(long *)(this + 0x3c8) - (long)puVar4 != 0) {
    lVar13 = 1;
    puVar16 = puVar4;
    lVar19 = 1;
    if (lVar14 != 0) {
      lVar19 = lVar14;
    }
    do {
      if ((unsigned long)local_50._0_8_ < *puVar16) {
        lVar14 = -lVar13;
        return;
      }
      lVar1 = lVar19 + lVar13;
      lVar13 = lVar13 + -1;
      puVar16 = puVar16 + 2;
    } while (lVar1 != 2);
  }
  lVar14 = lVar14 + -2;
  local_40._0_8_ = puVar4[lVar14 * 2];
  local_40._8_4_ = (unsigned int)puVar4[lVar14 * 2 + 1];
  lVar19 = 0;
  if (local_40._0_8_ != local_50._0_8_) {
    do {
      lVar19 = lVar19 + 1;
      // boost code
                ((u8_to_u32_iterator<// std code
    } while (local_40._0_8_ != uVar8);
  }
  *(long *)(this + 0x880) = lVar19;
  *(long *)(this + 0x888) = lVar14;
  *(long *)(this + 0x890) = lVar19;
  if (!param_2) {
    *(unsigned long long *)(this + 0x898) = *(unsigned long long *)(this + 0x880);
    *(unsigned long long *)(this + 0x8a0) = *(unsigned long long *)(this + 0x888);
  }
  if (*(Pane **)(this + 0x138) != (Pane *)0x0) {
    iVar9 = Pane::getCommonTimeInterval(*(Pane **)(this + 0x138),3);
    Widget::setTimer((Widget *)this,iVar9);
  }
  this[0x87c] = (MultilineTextEditContentArea)0x1;
  Widget::setInvalid((Widget *)this,0);
  nod::signal_type<nod::multithread_policy,void()>::operator()
            ((signal_type<nod::multithread_policy,void()> *)(this + 0x7a0));
  Widget::setInvalid((Widget *)this,0);
  return;
}

void MultilineTextEditContentArea::moveCursorVertically(int, bool) {
int iVar1;
  long lVar2;
  long lVar3;
  void3 in_register_00000011;
  unsigned long uVar4;
  long local_60;
  unsigned int local_58;
  unsigned long local_50;
  long local_48;
  unsigned long local_40;
  unsigned int local_34;
  
  local_34 = CONCAT31(in_register_00000011,param_2);
  if ((param_1 < 0) && (*(unsigned long *)(this + 0x888) < (unsigned long)(long)-param_1)) {
    *(unsigned long long *)(this + 0x888) = 0;
    local_50 = 0;
  }
  else {
    local_50 = *(unsigned long *)(this + 0x888) + (long)param_1;
    *(unsigned long *)(this + 0x888) = local_50;
  }
  local_48 = *(long *)(this + 0x890);
  *(long *)(this + 0x880) = local_48;
  lVar2 = *(long *)(this + 0x3c0);
  uVar4 = (*(long *)(this + 0x3c8) - lVar2 >> 4) - 2;
  local_40 = local_50;
  if (uVar4 < local_50) {
    local_40 = uVar4;
  }
  lVar3 = local_40 * 0x10;
  local_60 = *(long *)(lVar2 + lVar3);
  local_58 = *(unsigned int *)(lVar2 + 8 + lVar3);
  lVar2 = *(long *)(lVar2 + 0x10 + lVar3);
  if (local_60 == lVar2) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    do {
      lVar3 = lVar3 + 1;
      // boost code
                ((u8_to_u32_iterator<// std code
    } while (local_60 != lVar2);
  }
  lVar3 = lVar3 - (unsigned long)(local_50 < uVar4);
  if (local_48 <= lVar3) {
    lVar3 = local_48;
  }
  lVar2 = 0;
  if (-1 < lVar3) {
    lVar2 = lVar3;
  }
  *(long *)(this + 0x880) = lVar2;
  *(unsigned long *)(this + 0x888) = local_40;
  if ((char)local_34 == '\0') {
    *(unsigned long long *)(this + 0x898) = *(unsigned long long *)(this + 0x880);
    *(unsigned long long *)(this + 0x8a0) = *(unsigned long long *)(this + 0x888);
  }
  if (*(Pane **)(this + 0x138) != (Pane *)0x0) {
    iVar1 = Pane::getCommonTimeInterval(*(Pane **)(this + 0x138),3);
    Widget::setTimer((Widget *)this,iVar1);
  }
  this[0x87c] = (MultilineTextEditContentArea)0x1;
  Widget::setInvalid((Widget *)this,0);
  nod::signal_type<nod::multithread_policy,void()>::operator()
            ((signal_type<nod::multithread_policy,void()> *)(this + 0x7a0));
  Widget::setInvalid((Widget *)this,0);
  return;
}

MultilineTextEditContentArea::MultilineTextEditContentArea() {
MultilineTextEditContentArea(this);
  
}

void MultilineTextEditContentArea::registerDragDropIntegration() [clone .cold.3] {
if (this != (MultilineTextEditContentArea *)0x0) {
    (**(code **)(*(long *)this + 0x28))();
  }
  return;
}

void MultilineTextEditContentArea::updateLineBreaks() {
MultilineText::updateLineBreaks((MultilineText *)this);
  nod::signal_type<nod::multithread_policy,void()>::operator()
            ((signal_type<nod::multithread_policy,void()> *)(this + 0x6e0));
  return;
}
}
