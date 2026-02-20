#include <ni/controller_editor/processImport_unsigned_int__std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL::StyleParser2 {

void processImport(2 param_2, unsigned int, std::string const& {
unsigned long long *puVar1;
  __tree_node_base *p_Var2;
  unsigned long long uVar3;
  unsigned long long uVar4;
  unsigned long long uVar5;
  void *pvVar6;
  __tree<// std code
  filesystem fVar7;
  StyleParser2 SVar8;
  long *plVar9;
  char cVar10;
  void5 *puVar11;
  string *psVar12;
  size_t sVar13;
  byte *pbVar14;
  __tree_node_base *p_Var15;
  long *plVar16;
  StyleParser2 *pSVar17;
  unsigned long extraout_RDX;
  long extraout_RDX_00;
  long lVar18;
  unsigned int uVar19;
  StyleParser2 *pSVar20;
  StyleParser2 *pSVar21;
  long lVar22;
  unsigned long uVar23;
  unsigned long uVar24;
  unsigned long uVar25;
  unsigned long uVar26;
  path *this_01;
  
  void *local_2c0;
  unsigned long local_2b8 [3];
  string local_2a0;
  StyleParser2 local_29f [15];
  StyleParser2 *local_290;
  path *local_288;
  __tree<// std code
  uint local_278;
  unsigned int local_274;
  string local_270;
  void5 uStack_26f;
  void2 uStack_26a;
  void6 local_268;
  void2 uStack_262;
  void5 *local_260;
  filesystem local_258;
  StyleParser2 SStack_257;
  void6 uStack_256;
  void2 uStack_250;
  void6 uStack_24e;
  StyleParser2 *local_248;
  unsigned int uStack_240;
  unsigned int uStack_23c;
  unsigned char local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101ab4610;
  this_01 = (path *)(this + 0x58);
  local_278 = param_1;
  // std code
  uVar19 = *(unsigned int *)(this + 0x50);
  ni::filesystem::from_utf8_string(&local_258,param_2);
  if (((byte)*this_01 & 1) != 0) {
    delete(*(void **)(this + 0x68));
  }
  *(StyleParser2 **)(this + 0x68) = local_248;
  *(unsigned long *)this_01 = CONCAT62(uStack_256,CONCAT11(SStack_257,local_258));
  *(unsigned long *)(this + 0x60) = CONCAT62(uStack_24e,uStack_250);
  // std code
  local_280 = (__tree<// std code
              (this + 0x70);
  // std code
  __emplace_unique_key_args<// std code
  local_274 = uVar19;
  if ((extraout_RDX & 1) == 0) {
    local_2b8[0] = (unsigned long)local_278;
    local_258 = (filesystem)0x90;
    SStack_257 = (StyleParser2)0x6c;
    uStack_256 = 0x101b1;
    uStack_250 = SUB82(local_238,0);
    uStack_24e = (void6)((unsigned long)local_238 >> 0x10);
    local_248 = (StyleParser2 *)0x0;
    uStack_240 = 500;
    uStack_23c = 0;
    local_288 = this_01;
    local_280 = (__tree<// std code
    fmt::v9::detail::vprintf<char,fmt::v9::basic_printf_context<fmt::v9::appender,char>>
              (&local_258,"PARSER ERROR at line %d: recursive import of stylesheet ",0x38,2,
               local_2b8);
    pSVar20 = local_248;
    pvVar6 = (void *)CONCAT62(uStack_24e,uStack_250);
    if (local_248 < (StyleParser2 *)0x17) {
      local_270 = (string)((char)local_248 * '\x02');
      puVar11 = &uStack_26f;
      if (local_248 != (StyleParser2 *)0x0) return;
    }
    else {
      uVar26 = (unsigned long)(local_248 + 0x10) & 0xfffffffffffffff0;
      puVar11 = (void5 *)new char[uVar26];
      local_270 = (string)((byte)uVar26 | 1);
      uStack_26f = (void5)(uVar26 >> 8);
      uStack_26a = (void2)(uVar26 >> 0x30);
      local_268 = SUB86(pSVar20,0);
      uStack_262 = (void2)((unsigned long)pSVar20 >> 0x30);
      local_260 = puVar11;
      memcpy(puVar11,pvVar6,(size_t)pSVar20);
    }
    *(StyleParser2 *)((long)puVar11 + (long)pSVar20) = (StyleParser2)0x0;
    local_258 = (filesystem)0x90;
    SStack_257 = (StyleParser2)0x6c;
    uStack_256 = 0x101b1;
    if ((unsigned char *)CONCAT62(uStack_24e,uStack_250) != local_238) {
      delete((unsigned char *)CONCAT62(uStack_24e,uStack_250));
    }
    uVar19 = local_274;
    this = (StyleParser2 *)local_280;
    this_01 = local_288;
    if (((byte)*param_2 & 1) == 0) {
      psVar12 = param_2 + 1;
    }
    else {
      psVar12 = *(string **)(param_2 + 0x10);
    }
    // std code
    psVar12 = (string *)ni::filesystem::to_utf8_string((path *)&local_2a0);
    addErrorMessage(this,psVar12,local_278,&local_270);
    if (((byte)local_270 & 1) != 0) {
      delete(local_260);
    }
  }
  else {
    // boost code
    if (extraout_RDX_00 == 0) {
      puVar1 = *(unsigned long long **)this;
      if (puVar1 == (unsigned long long *)0x0) {
        pSVar20 = local_290;
        if (((byte)local_2a0 & 1) == 0) {
          pSVar20 = local_29f;
        }
        uVar26 = // boost code
        if (0xffffffffffffffef < uVar26) {
                    /* WARNING: Subroutine does not return */
          // std code
        }
        if (uVar26 < 0x17) {
          local_258 = (filesystem)((char)uVar26 * '\x02');
          pSVar17 = &SStack_257;
          if (uVar26 != 0) goto joined_r0x0001004dbbbf;
        }
        else {
          uVar23 = uVar26 + 0x10 & 0xfffffffffffffff0;
          pSVar17 = (StyleParser2 *)new char[uVar23];
          local_248 = pSVar17;
          local_258 = (filesystem)((byte)uVar23 | 1);
          SStack_257 = SUB81(uVar23 >> 8,0);
          uStack_256 = (void6)(uVar23 >> 0x10);
          uStack_250 = (void2)uVar26;
          uStack_24e = (void6)(uVar26 >> 0x10);
joined_r0x0001004dbbbf:
          pSVar21 = pSVar20;
          if ((0x1f < uVar26) && ((pSVar20 + uVar26 <= pSVar17 || (pSVar17 + uVar26 <= pSVar20)))) {
            uVar24 = uVar26 & 0xffffffffffffffe0;
            uVar23 = (uVar24 - 0x20 >> 5) + 1;
            uVar25 = (unsigned long)((uint)uVar23 & 3);
            if (uVar24 - 0x20 < 0x60) {
              lVar18 = 0;
            }
            else {
              lVar22 = -(uVar23 & 0xfffffffffffffffc);
              lVar18 = 0;
              do {
                uVar3 = *(unsigned long long *)(pSVar20 + lVar18 + 8);
                uVar4 = *(unsigned long long *)(pSVar20 + lVar18 + 0x10);
                uVar5 = *(unsigned long long *)(pSVar20 + lVar18 + 0x10 + 8);
                *(unsigned long long *)(pSVar17 + lVar18) = *(unsigned long long *)(pSVar20 + lVar18);
                *(unsigned long long *)(pSVar17 + lVar18 + 8) = uVar3;
                *(unsigned long long *)(pSVar17 + lVar18 + 0x10) = uVar4;
                *(unsigned long long *)(pSVar17 + lVar18 + 0x10 + 8) = uVar5;
                uVar3 = *(unsigned long long *)(pSVar20 + lVar18 + 0x20 + 8);
                uVar4 = *(unsigned long long *)(pSVar20 + lVar18 + 0x30);
                uVar5 = *(unsigned long long *)(pSVar20 + lVar18 + 0x30 + 8);
                *(unsigned long long *)(pSVar17 + lVar18 + 0x20) = *(unsigned long long *)(pSVar20 + lVar18 + 0x20);
                *(unsigned long long *)(pSVar17 + lVar18 + 0x20 + 8) = uVar3;
                *(unsigned long long *)(pSVar17 + lVar18 + 0x30) = uVar4;
                *(unsigned long long *)(pSVar17 + lVar18 + 0x30 + 8) = uVar5;
                uVar3 = *(unsigned long long *)(pSVar20 + lVar18 + 0x40 + 8);
                uVar4 = *(unsigned long long *)(pSVar20 + lVar18 + 0x50);
                uVar5 = *(unsigned long long *)(pSVar20 + lVar18 + 0x50 + 8);
                *(unsigned long long *)(pSVar17 + lVar18 + 0x40) = *(unsigned long long *)(pSVar20 + lVar18 + 0x40);
                *(unsigned long long *)(pSVar17 + lVar18 + 0x40 + 8) = uVar3;
                *(unsigned long long *)(pSVar17 + lVar18 + 0x50) = uVar4;
                *(unsigned long long *)(pSVar17 + lVar18 + 0x50 + 8) = uVar5;
                uVar3 = *(unsigned long long *)(pSVar20 + lVar18 + 0x60 + 8);
                uVar4 = *(unsigned long long *)(pSVar20 + lVar18 + 0x70);
                uVar5 = *(unsigned long long *)(pSVar20 + lVar18 + 0x70 + 8);
                *(unsigned long long *)(pSVar17 + lVar18 + 0x60) = *(unsigned long long *)(pSVar20 + lVar18 + 0x60);
                *(unsigned long long *)(pSVar17 + lVar18 + 0x60 + 8) = uVar3;
                *(unsigned long long *)(pSVar17 + lVar18 + 0x70) = uVar4;
                *(unsigned long long *)(pSVar17 + lVar18 + 0x70 + 8) = uVar5;
                lVar18 = lVar18 + 0x80;
                lVar22 = lVar22 + 4;
              } while (lVar22 != 0);
            }
            if (uVar25 != 0) {
              lVar22 = 0;
              do {
                uVar3 = *(unsigned long long *)(pSVar20 + lVar22 + lVar18 + 8);
                uVar4 = *(unsigned long long *)(pSVar20 + lVar22 + lVar18 + 0x10);
                uVar5 = *(unsigned long long *)(pSVar20 + lVar22 + lVar18 + 0x10 + 8);
                *(unsigned long long *)(pSVar17 + lVar22 + lVar18) =
                     *(unsigned long long *)(pSVar20 + lVar22 + lVar18);
                *(unsigned long long *)(pSVar17 + lVar22 + lVar18 + 8) = uVar3;
                *(unsigned long long *)(pSVar17 + lVar22 + lVar18 + 0x10) = uVar4;
                *(unsigned long long *)(pSVar17 + lVar22 + lVar18 + 0x10 + 8) = uVar5;
                lVar22 = lVar22 + 0x20;
              } while (uVar25 << 5 != lVar22);
            }
            pSVar17 = pSVar17 + uVar24;
            if (uVar26 == uVar24) return;
            pSVar21 = pSVar20 + uVar24;
          }
          do {
            *pSVar17 = *pSVar21;
            pSVar21 = pSVar21 + 1;
            pSVar17 = pSVar17 + 1;
          } while (pSVar20 + uVar26 != pSVar21);
        }
        *pSVar17 = (StyleParser2)0x0;
        // boost code
        pSVar20 = local_248;
        SVar8 = SStack_257;
        fVar7 = local_258;
        local_270 = SUB61(uStack_256,0);
        uStack_26f = (void5)((uint6)uStack_256 >> 8);
        uStack_26a = uStack_250;
        local_268 = uStack_24e;
        local_258 = (filesystem)0x0;
        SStack_257 = (StyleParser2)0x0;
        uStack_256 = 0;
        uStack_250 = 0;
        uStack_24e = 0;
        local_248 = (StyleParser2 *)0x0;
        if (((byte)*this_01 & 1) != 0) {
          delete(*(void **)(this + 0x68));
        }
        this[0x58] = (StyleParser2)fVar7;
        this[0x59] = SVar8;
        *(unsigned long *)(this + 0x5a) = CONCAT26(uStack_26a,CONCAT51(uStack_26f,local_270));
        *(unsigned long *)(this + 0x60) = CONCAT62(local_268,uStack_26a);
        *(StyleParser2 **)(this + 0x68) = pSVar20;
        if (((byte)local_258 & 1) != 0) {
          delete(local_248);
        }
        cVar10 = processFile(this,this_01);
        uVar19 = local_274;
      }
      else {
        if (((byte)*param_2 & 1) == 0) {
          psVar12 = param_2 + 1;
        }
        else {
          psVar12 = *(string **)(param_2 + 0x10);
        }
        local_270 = SUB81(psVar12,0);
        uStack_26f = (void5)((unsigned long)psVar12 >> 8);
        uStack_26a = (void2)((unsigned long)psVar12 >> 0x30);
        sVar13 = strlen((char *)psVar12);
        local_268 = (void6)sVar13;
        uStack_262 = (void2)(sVar13 >> 0x30);
        ManagerContainer::getResourceStream(&local_258,*puVar1,&local_270,1,1);
        cVar10 = processStream((Stream *)this,
                               (string *)CONCAT62(uStack_256,CONCAT11(SStack_257,local_258)));
        plVar9 = (long *)CONCAT62(uStack_24e,uStack_250);
        uVar19 = local_274;
        if (plVar9 != (long *)0x0) {
          LOCK();
          plVar16 = plVar9 + 1;
          lVar18 = *plVar16;
          *plVar16 = *plVar16 + -1;
          UNLOCK();
          if (lVar18 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            // std code
            uVar19 = local_274;
          }
        }
      }
    }
    else {
      cVar10 = processFile(this,this_01);
    }
    if (cVar10 == '\0') {
      local_2b8[0] = (unsigned long)local_278;
      local_258 = (filesystem)0x90;
      SStack_257 = (StyleParser2)0x6c;
      uStack_256 = 0x101b1;
      uStack_250 = SUB82(local_238,0);
      uStack_24e = (void6)((unsigned long)local_238 >> 0x10);
      local_248 = (StyleParser2 *)0x0;
      uStack_240 = 500;
      uStack_23c = 0;
      local_288 = this_01;
      fmt::v9::detail::vprintf<char,fmt::v9::basic_printf_context<fmt::v9::appender,char>>
                (&local_258,"PARSER ERROR at line %d: Failed to import stylesheet ",0x35,2,local_2b8
                );
      pSVar20 = local_248;
      pvVar6 = (void *)CONCAT62(uStack_24e,uStack_250);
      if (local_248 < (StyleParser2 *)0x17) {
        local_270 = (string)((char)local_248 * '\x02');
        puVar11 = &uStack_26f;
        if (local_248 != (StyleParser2 *)0x0) return;
      }
      else {
        uVar26 = (unsigned long)(local_248 + 0x10) & 0xfffffffffffffff0;
        puVar11 = (void5 *)new char[uVar26];
        local_270 = (string)((byte)uVar26 | 1);
        uStack_26f = (void5)(uVar26 >> 8);
        uStack_26a = (void2)(uVar26 >> 0x30);
        local_268 = SUB86(pSVar20,0);
        uStack_262 = (void2)((unsigned long)pSVar20 >> 0x30);
        local_260 = puVar11;
        memcpy(puVar11,pvVar6,(size_t)pSVar20);
      }
      *(StyleParser2 *)((long)puVar11 + (long)pSVar20) = (StyleParser2)0x0;
      local_258 = (filesystem)0x90;
      SStack_257 = (StyleParser2)0x6c;
      uStack_256 = 0x101b1;
      if ((unsigned char *)CONCAT62(uStack_24e,uStack_250) != local_238) {
        delete((unsigned char *)CONCAT62(uStack_24e,uStack_250));
      }
      this_01 = local_288;
      pbVar14 = (byte *)ni::filesystem::to_utf8_string(local_288);
      this_00 = local_280;
      if ((*pbVar14 & 1) == 0) {
        pbVar14 = pbVar14 + 1;
      }
      else {
        pbVar14 = *(byte **)(pbVar14 + 0x10);
      }
      // std code
      psVar12 = (string *)ni::filesystem::to_utf8_string((path *)&local_2a0);
      addErrorMessage(this,psVar12,local_278,&local_270);
      psVar12 = (string *)ni::filesystem::to_utf8_string(this_01);
      p_Var15 = (__tree_node_base *)
                // std code
                find<// std code
      if (p_Var15 != (__tree_node_base *)(this + 0x78)) {
        plVar9 = *(long **)(p_Var15 + 8);
        if (*(long **)(p_Var15 + 8) == (long *)0x0) {
          plVar16 = *(long **)(p_Var15 + 0x10);
          p_Var2 = p_Var15;
          if ((__tree_node_base *)*plVar16 != p_Var15) {
            do {
              p_Var2 = *(__tree_node_base **)(p_Var2 + 0x10);
              plVar16 = *(long **)(p_Var2 + 0x10);
            } while ((__tree_node_base *)*plVar16 != p_Var2);
          }
        }
        else {
          do {
            plVar16 = plVar9;
            plVar9 = (long *)*plVar16;
          } while ((long *)*plVar16 != (long *)0x0);
        }
        if (*(__tree_node_base **)this_00 == p_Var15) {
          *(long **)this_00 = plVar16;
        }
        *(long *)(this + 0x80) = *(long *)(this + 0x80) + -1;
        // std code
                  (*(__tree_node_base **)(this + 0x78),p_Var15);
        if (((byte)p_Var15[0x20] & 1) != 0) {
          delete(*(void **)(p_Var15 + 0x30));
        }
        delete(p_Var15);
      }
      uVar19 = local_274;
      if (((byte)local_270 & 1) != 0) {
        delete(local_260);
        uVar19 = local_274;
      }
    }
  }
  // std code
  *(unsigned int *)(this + 0x50) = uVar19;
  if (((byte)local_2d0[0] & 1) != 0) {
    delete(local_2c0);
  }
  if (((byte)local_2a0 & 1) == 0) {
    if (*(long *)PTR____stack_chk_guard_101ab4610 != local_38) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
  }
  else {
    delete(local_290);
    if (*(long *)PTR____stack_chk_guard_101ab4610 != local_38) return;
  }
  return;
}
}
