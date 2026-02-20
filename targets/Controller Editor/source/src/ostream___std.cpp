#include <ni/controller_editor/ostream___std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL::ManagerContainer::getResourceYAML(std {

void ostream&, std::ostream&) {
long *plVar1;
  long *plVar2;
  ManagerContainer *pMVar3;
  __tree_node **pp_Var4;
  long *plVar5;
  ostream *poVar6;
  ManagerContainer *pMVar7;
  __tree_node *p_Var8;
  __tree_node *p_Var9;
  unsigned long uVar10;
  ManagerContainer *pMVar11;
  char *pcVar12;
  __tree_node *p_Var13;
  long lVar14;
  long lVar15;
  long lVar16;
  byte local_100;
  char local_ff [7];
  unsigned long local_f8;
  char *local_f0;
  __tree_node **local_e8;
  __tree_node *local_e0;
  unsigned long long uStack_d8;
  __tree_node *local_d0;
  __tree_node *local_c8;
  unsigned long long uStack_c0;
  __tree_node *local_b8 [2];
  void *local_a8;
  void *local_98;
  long local_88;
  ostream *local_78;
  ostream *local_70;
  long local_68;
  string local_60;
  char local_5f [7];
  unsigned long local_58;
  char *local_50;
  unsigned long long local_48;
  __tree_node *local_40;
  char *pcStack_38;
  
  local_e8 = &local_e0;
  local_e0 = (__tree_node *)0x0;
  uStack_d8 = 0;
  local_d0 = (__tree_node *)&local_c8;
  local_c8 = (__tree_node *)0x0;
  uStack_c0 = 0;
  lVar15 = *(long *)(*(long *)this + 0x10);
  lVar16 = *(long *)this + 8;
  local_78 = param_2;
  local_70 = param_1;
  if (lVar15 != lVar16) {
    lVar14 = 1;
    do {
      p_Var13 = (__tree_node *)(lVar15 + 0x11);
      local_b8[0] = p_Var13;
      if ((*(byte *)(lVar15 + 0x10) & 1) != 0) {
        local_b8[0] = *(__tree_node **)(lVar15 + 0x20);
      }
      local_a8 = PTR_s_STYLESHEET_101b87558;
      local_98 = PTR_s_stylesheets_101b87538;
      local_88 = lVar14;
      local_68 = lVar15;
      fmt::v9::vformat((string *)&local_48,"{0}:\n  file: {2}/{0}\n  type: {1}\n  index: {3}",0x2d,
                       0x4ccc,local_b8);
      pp_Var4 = (__tree_node **)
                // std code
                find<// std code
                                   *)&local_e8,(string *)&local_48);
      lVar14 = lVar14 + 1;
      if (pp_Var4 == &local_e0) {
        // std code
        __emplace_unique_key_args<// std code
                  ((__tree<// std code
                   &local_e8,(string *)&local_48,(string *)&local_48);
        p_Var9 = local_40;
        pcVar12 = pcStack_38;
        if (((unsigned long)local_48 & 1) == 0) {
          p_Var9 = (__tree_node *)((unsigned long)local_48 >> 1 & 0x7f);
          pcVar12 = (char *)((long)&local_48 + 1);
        }
        poVar6 = // std code
                           (local_70,pcVar12,(unsigned long)p_Var9);
        // std code
        if ((*(byte *)(local_68 + 0x10) & 1) != 0) {
          p_Var13 = *(__tree_node **)(local_68 + 0x20);
        }
        local_a8 = PTR_s_stylesheets_101b87538;
        local_b8[0] = p_Var13;
        fmt::v9::vformat(&local_60,"copy \"{1}\\{0}\" \"skin_copy\\{1}\\{0}\"",0x22,0xcc,local_b8);
        lVar15 = local_68;
        uVar10 = local_58;
        pcVar12 = local_50;
        if (((byte)local_60 & 1) == 0) {
          uVar10 = (unsigned long)((byte)local_60 >> 1);
          pcVar12 = local_5f;
        }
        poVar6 = // std code
        ;
        // std code
        if (((byte)local_60 & 1) != 0) {
          delete(local_50);
        }
        plVar1 = *(long **)(lVar15 + 0x60);
        while (plVar1 != (long *)(lVar15 + 0x68)) {
          p_Var13 = (__tree_node *)((long)plVar1 + 0x21);
          local_b8[0] = p_Var13;
          if ((*(byte *)(plVar1 + 4) & 1) != 0) {
            local_b8[0] = (__tree_node *)plVar1[6];
          }
          local_a8 = PTR_s_STYLESHEET_101b87558;
          local_98 = PTR_s_stylesheets_101b87538;
          local_88 = lVar14;
          fmt::v9::vformat(&local_60,"{0}:\n  file: {2}/{0}\n  type: {1}\n  index: {3}",0x2d,0x4ccc,
                           local_b8);
          pp_Var4 = (__tree_node **)
                    // std code
                    find<// std code
                                       *)&local_e8,&local_60);
          if (pp_Var4 == &local_e0) {
            // std code
            __emplace_unique_key_args<// std code
                      ((__tree<// std code
                       &local_e8,&local_60,&local_60);
            uVar10 = local_58;
            pcVar12 = local_50;
            if (((byte)local_60 & 1) == 0) {
              uVar10 = (unsigned long)((byte)local_60 >> 1);
              pcVar12 = local_5f;
            }
            poVar6 = // std code
                               (local_70,pcVar12,uVar10);
            // std code
            if ((*(byte *)(plVar1 + 4) & 1) != 0) {
              p_Var13 = (__tree_node *)plVar1[6];
            }
            local_a8 = PTR_s_stylesheets_101b87538;
            local_b8[0] = p_Var13;
            fmt::v9::vformat(&local_100,"copy \"{1}\\{0}\" \"skin_copy\\{1}\\{0}\"",0x22,0xcc,
                             local_b8);
            uVar10 = local_f8;
            pcVar12 = local_f0;
            if ((local_100 & 1) == 0) {
              uVar10 = (unsigned long)(local_100 >> 1);
              pcVar12 = local_ff;
            }
            poVar6 = // std code
                               (local_78,pcVar12,uVar10);
            // std code
            if ((local_100 & 1) != 0) {
              delete(local_f0);
            }
          }
          if (((byte)local_60 & 1) != 0) {
            delete(local_50);
          }
          plVar2 = (long *)plVar1[1];
          if ((long *)plVar1[1] == (long *)0x0) {
            plVar5 = (long *)plVar1[2];
            if ((long *)*plVar5 != plVar1) {
              do {
                plVar1 = (long *)plVar1[2];
                plVar5 = (long *)plVar1[2];
              } while ((long *)*plVar5 != plVar1);
            }
          }
          else {
            do {
              plVar5 = plVar2;
              plVar2 = (long *)*plVar5;
            } while ((long *)*plVar5 != (long *)0x0);
          }
          lVar14 = lVar14 + 1;
          plVar1 = plVar5;
        }
        appendPictureUrls();
      }
      if (((unsigned long)local_48 & 1) != 0) {
        delete(pcStack_38);
      }
      lVar15 = *(long *)(local_68 + 8);
    } while (lVar15 != lVar16);
  }
  // std code
  if (local_d0 != (__tree_node *)&local_c8) {
    lVar15 = 1;
    p_Var13 = local_d0;
    do {
      p_Var9 = p_Var13 + 0x21;
      local_b8[0] = p_Var9;
      if (((byte)p_Var13[0x20] & 1) != 0) {
        local_b8[0] = *(__tree_node **)(p_Var13 + 0x30);
      }
      local_a8 = s_pResTypes;
      local_98 = s_pResTypePath;
      local_88 = lVar15;
      fmt::v9::vformat(&local_48,"{0}:\n  file: {2}/{0}\n  type: {1}\n  index: {3}",0x2d,0x4ccc,
                       local_b8);
      p_Var8 = local_40;
      pcVar12 = pcStack_38;
      if (((unsigned long)local_48 & 1) == 0) {
        p_Var8 = (__tree_node *)((unsigned long)local_48 >> 1 & 0x7f);
        pcVar12 = (char *)((long)&local_48 + 1);
      }
      poVar6 = // std code
                         (local_70,pcVar12,(unsigned long)p_Var8);
      // std code
      if (((unsigned long)local_48 & 1) != 0) {
        delete(pcStack_38);
      }
      if (((byte)p_Var13[0x20] & 1) != 0) {
        p_Var9 = *(__tree_node **)(p_Var13 + 0x30);
      }
      local_a8 = s_pResTypePath;
      local_b8[0] = p_Var9;
      fmt::v9::vformat(&local_48,"copy \"{1}\\{0}\" \"skin_copy\\{1}\\{0}\"",0x22,0xcc,local_b8);
      p_Var9 = local_40;
      pcVar12 = pcStack_38;
      if (((unsigned long)local_48 & 1) == 0) {
        p_Var9 = (__tree_node *)((unsigned long)local_48 >> 1 & 0x7f);
        pcVar12 = (char *)((long)&local_48 + 1);
      }
      poVar6 = // std code
                         (local_78,pcVar12,(unsigned long)p_Var9);
      // std code
      if (((unsigned long)local_48 & 1) != 0) {
        delete(pcStack_38);
      }
      p_Var9 = *(__tree_node **)(p_Var13 + 8);
      if (*(__tree_node **)(p_Var13 + 8) == (__tree_node *)0x0) {
        p_Var8 = *(__tree_node **)(p_Var13 + 0x10);
        if (*(__tree_node **)p_Var8 != p_Var13) {
          do {
            p_Var13 = *(__tree_node **)(p_Var13 + 0x10);
            p_Var8 = *(__tree_node **)(p_Var13 + 0x10);
          } while (*(__tree_node **)p_Var8 != p_Var13);
        }
      }
      else {
        do {
          p_Var8 = p_Var9;
          p_Var9 = *(__tree_node **)p_Var8;
        } while (*(__tree_node **)p_Var8 != (__tree_node *)0x0);
      }
      lVar15 = lVar15 + 1;
      p_Var13 = p_Var8;
    } while (p_Var8 != (__tree_node *)&local_c8);
  }
  // std code
  local_48 = (__tree_node *)&local_40;
  local_40 = (__tree_node *)0x0;
  pcStack_38 = (char *)0x0;
  if (*(ManagerContainer **)(this + 0x30) != this + 0x38) {
    pMVar11 = *(ManagerContainer **)(this + 0x30);
    do {
      if ((*(uint *)(pMVar11 + 0x40) & 8) == 0 && *(int *)(pMVar11 + 0x38) == 0) {
        // std code
        __emplace_unique_key_args<// std code
                  ((__tree<// std code
                   &local_48,(string *)(pMVar11 + 0x20),(string *)(pMVar11 + 0x20));
      }
      pMVar3 = *(ManagerContainer **)(pMVar11 + 8);
      if (*(ManagerContainer **)(pMVar11 + 8) == (ManagerContainer *)0x0) {
        pMVar7 = *(ManagerContainer **)(pMVar11 + 0x10);
        if (*(ManagerContainer **)pMVar7 != pMVar11) {
          do {
            pMVar11 = *(ManagerContainer **)(pMVar11 + 0x10);
            pMVar7 = *(ManagerContainer **)(pMVar11 + 0x10);
          } while (*(ManagerContainer **)pMVar7 != pMVar11);
        }
      }
      else {
        do {
          pMVar7 = pMVar3;
          pMVar3 = *(ManagerContainer **)pMVar7;
        } while (*(ManagerContainer **)pMVar7 != (ManagerContainer *)0x0);
      }
      pMVar11 = pMVar7;
    } while (pMVar7 != this + 0x38);
    if (local_48 != (__tree_node *)&local_40) {
      lVar15 = 1;
      p_Var13 = local_48;
      do {
        p_Var9 = p_Var13 + 0x21;
        local_b8[0] = p_Var9;
        if (((byte)p_Var13[0x20] & 1) != 0) {
          local_b8[0] = *(__tree_node **)(p_Var13 + 0x30);
        }
        local_a8 = PTR_s_TTFd_101b87560;
        local_98 = PTR_s_fonts_101b87540;
        local_88 = lVar15;
        fmt::v9::vformat(&local_60,"{0}:\n  file: {2}/{0}\n  type: {1}\n  index: {3}",0x2d,0x4ccc,
                         local_b8);
        uVar10 = local_58;
        pcVar12 = local_50;
        if (((byte)local_60 & 1) == 0) {
          uVar10 = (unsigned long)((byte)local_60 >> 1);
          pcVar12 = local_5f;
        }
        poVar6 = // std code
        ;
        // std code
        if (((byte)local_60 & 1) != 0) {
          delete(local_50);
        }
        if (((byte)p_Var13[0x20] & 1) != 0) {
          p_Var9 = *(__tree_node **)(p_Var13 + 0x30);
        }
        local_a8 = PTR_s_fonts_101b87540;
        local_b8[0] = p_Var9;
        fmt::v9::vformat(&local_60,"copy \"{1}\\{0}\" \"skin_copy\\{1}\\{0}\"",0x22,0xcc,local_b8);
        uVar10 = local_58;
        pcVar12 = local_50;
        if (((byte)local_60 & 1) == 0) {
          uVar10 = (unsigned long)((byte)local_60 >> 1);
          pcVar12 = local_5f;
        }
        poVar6 = // std code
        ;
        // std code
        if (((byte)local_60 & 1) != 0) {
          delete(local_50);
        }
        p_Var9 = *(__tree_node **)(p_Var13 + 8);
        if (*(__tree_node **)(p_Var13 + 8) == (__tree_node *)0x0) {
          p_Var8 = *(__tree_node **)(p_Var13 + 0x10);
          if (*(__tree_node **)p_Var8 != p_Var13) {
            do {
              p_Var13 = *(__tree_node **)(p_Var13 + 0x10);
              p_Var8 = *(__tree_node **)(p_Var13 + 0x10);
            } while (*(__tree_node **)p_Var8 != p_Var13);
          }
        }
        else {
          do {
            p_Var8 = p_Var9;
            p_Var9 = *(__tree_node **)p_Var8;
          } while (*(__tree_node **)p_Var8 != (__tree_node *)0x0);
        }
        lVar15 = lVar15 + 1;
        p_Var13 = p_Var8;
      } while (p_Var8 != (__tree_node *)&local_40);
    }
  }
  // std code
            ((__tree<// std code
             local_40);
  // std code
            ((__tree<// std code
             local_c8);
  // std code
            ((__tree<// std code
             local_e0);
  return;
}
}
