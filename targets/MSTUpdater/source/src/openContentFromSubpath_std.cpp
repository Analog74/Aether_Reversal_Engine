#include <ni/controller_editor/openContentFromSubpath_std.hpp>
namespace NI::GP::FileContainerStorage {

void openContentFromSubpath(std::string const&, unsigned int) {
code *pcVar1;
  long *plVar2;
  FileContainerParser *pFVar3;
  char cVar4;
  unsigned char uVar5;
  char *pcVar6;
  unsigned long uVar7;
  FileContainerParser *pFVar8;
  long lVar9;
  unsigned long uVar10;
  byte bVar11;
  FileContainerStorage *pFVar12;
  unsigned int local_178 [2];
  unsigned long long local_170;
  unsigned long long local_168;
  unsigned int local_160;
  unsigned long long local_158;
  unsigned long long local_150;
  unsigned long long local_148;
  
  unsigned long long local_128;
  unsigned longlong local_120;
  unsigned longlong local_118;
  unsigned int local_110;
  unsigned long long local_108;
  unsigned long long local_100;
  unsigned int local_f8;
  unsigned long long local_f0;
  unsigned longlong local_e8;
  unsigned longlong local_e0;
  unsigned longlong local_d8;
  long local_d0 [3];
  FileContainerParser *local_b8;
  uint local_b0 [2];
  string *local_a8;
  FileContainerStorage *local_a0;
  
  uint local_7c;
  string *local_78;
  void2 local_70;
  unsigned long local_68;
  char *local_60;
  FileContainerStorage *local_58;
  bool local_49;
  string *local_48;
  unsigned long local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1002272e0;
  local_7c = param_2;
  local_78 = param_1;
  // std code
  // std code
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  local_128 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_178[0] = 0;
  local_160 = 0;
  local_168 = 0;
  local_170 = 0;
  local_148 = 0;
  local_150 = 0;
  local_158 = 0;
  if (*(long **)(this + 0x130) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x130) + 8))();
  }
  *(unsigned long long *)(this + 0x130) = 0;
  local_a0 = this + 0x188;
  local_58 = this;
  if (((byte)this[0x188] & 1) == 0) {
    *(void2 *)local_a0 = 0;
  }
  else {
    **(unsigned char **)(this + 0x198) = 0;
    *(unsigned long long *)(this + 400) = 0;
  }
  uVar7 = (unsigned long)((byte)local_70._0_1_ >> 1);
  if ((local_70 & 1) != 0) {
    uVar7 = local_68;
  }
  if (uVar7 != 0) {
    local_a8 = local_78 + 1;
    pFVar12 = this + 0x60;
    do {
      this = (FileContainerStorage *)local_98;
      pcVar6 = local_60;
      if (((byte)local_70._0_1_ & 1) == 0) {
        pcVar6 = (char *)((long)&local_70 + 1);
      }
      if (*pcVar6 != '<') break;
      cVar4 = (char)(string *)&local_70;
      uVar7 = // std code
      if (uVar7 == 1) {
        lVar9 = // std code
        if (lVar9 != -1) {
          // std code
                              (allocator *)&local_70);
          local_d0[0] = 0;
          local_49 = false;
          DETAIL::LexicalCastHelper<unsigned_int>
                    ((string *)this,local_b0,&local_49,(unsigned long *)local_d0,0,false);
          if ((local_49 == false) || (local_d0[0] == -1)) {
            bVar11 = (byte)*local_78 & 1;
            local_40 = (unsigned long)((byte)*local_78 >> 1);
            if (bVar11 != 0) {
              local_40 = *(unsigned long *)(local_78 + 8);
            }
            local_48 = local_a8;
            if (bVar11 != 0) {
              local_48 = *(string **)(local_78 + 0x10);
            }
            fmt::format(local_d0,"Error: openContentFromSubpath failed (%1% - malformed/no id).",0xb
                        ,&local_48);
          }
          else {
            cVar4 = (**(code **)(*(long *)pFVar12 + 0x20))(pFVar12,local_b0[0],local_7c);
            if ((cVar4 != '\0') &&
               (cVar4 = (**(code **)(*(long *)local_58 + 0x108))(local_58,local_140,local_178),
               cVar4 != '\0')) {
              pFVar8 = (FileContainerParser *)new(0xe0);
              // std code
              ;
              FileContainerParser::FileContainerParser
                        (pFVar8,(IStorage *)local_58,(FileContainerParser *)pFVar12,local_140,
                         (string *)local_d0,local_d8,local_e8,local_e0,local_120,local_118,
                         (uint)local_128,(uint)((unsigned long)local_128 >> 0x20));
              // std code
              if (*(long **)((FileContainerParser *)pFVar12 + 0xd0) != (long *)0x0) {
                (**(code **)(**(long **)((FileContainerParser *)pFVar12 + 0xd0) + 8))();
              }
              *(FileContainerParser **)((FileContainerParser *)pFVar12 + 0xd0) = pFVar8;
              *(FileContainerStorage **)(pFVar8 + 200) = pFVar12;
              uVar7 = (unsigned long)((byte)local_70._0_1_ >> 1);
              if ((local_70 & 1) != 0) {
                uVar7 = local_68;
              }
              if (lVar9 + 1U < uVar7) {
                // std code
              }
              else if ((local_70 & 1) == 0) {
                local_70 = 0;
              }
              else {
                *local_60 = '\0';
                local_68 = 0;
              }
              // std code
              goto LAB_10018ff02;
            }
            bVar11 = (byte)*local_78 & 1;
            local_40 = (unsigned long)((byte)*local_78 >> 1);
            if (bVar11 != 0) {
              local_40 = *(unsigned long *)(local_78 + 8);
            }
            local_48 = local_a8;
            if (bVar11 != 0) {
              local_48 = *(string **)(local_78 + 0x10);
            }
            fmt::format(local_d0,"Error: openContentFromSubpath failed (%1% - error/id not found).",
                        0xb,&local_48);
          }
          // std code
          pFVar12 = local_58;
          if (*(long **)(local_58 + 0x130) != (long *)0x0) {
            (**(code **)(**(long **)(local_58 + 0x130) + 8))();
          }
          *(long *)(pFVar12 + 0x130) = 0;
          if (((byte)pFVar12[0x188] & 1) == 0) {
            *(void2 *)local_a0 = 0;
          }
          else {
            **(unsigned char **)(pFVar12 + 0x198) = 0;
            *(long *)(pFVar12 + 400) = 0;
          }
          goto LAB_1001902ff;
        }
        bVar11 = (byte)*local_78 & 1;
        local_40 = (unsigned long)((byte)*local_78 >> 1);
        if (bVar11 != 0) {
          local_40 = *(unsigned long *)(local_78 + 8);
        }
        local_48 = local_a8;
        if (bVar11 != 0) {
          local_48 = *(string **)(local_78 + 0x10);
        }
        fmt::format(local_98,"Error: openContentFromSubpath failed (%1% - malformed/no id sep).",0xb
                    ,&local_48);
LAB_1001901ff:
        // std code
        this = local_58;
LAB_10019020f:
        if (*(long **)(this + 0x130) != (long *)0x0) {
          (**(code **)(**(long **)(this + 0x130) + 8))();
        }
        *(long *)(this + 0x130) = 0;
        if (((byte)this[0x188] & 1) == 0) {
          *(void2 *)local_a0 = 0;
        }
        else {
          **(unsigned char **)(this + 0x198) = 0;
          *(long *)(this + 400) = 0;
        }
        goto LAB_10019030b;
      }
      if (uVar7 == 0xffffffffffffffff) {
        pcVar1 = *(code **)(*(long *)pFVar12 + 0x18);
        // std code
                           );
        cVar4 = (*pcVar1)(pFVar12,local_98,local_7c,local_140);
        this = local_58;
        if (cVar4 == '\0') {
          // std code
        }
        else {
          cVar4 = (**(code **)(*(long *)local_58 + 0x108))(local_58,local_140,local_178);
          // std code
          if (cVar4 != '\0') {
            pFVar8 = (FileContainerParser *)new(0xe0);
            FileContainerParser::FileContainerParser
                      (pFVar8,(IStorage *)this,(FileContainerParser *)pFVar12,local_140,
                       (string *)&local_70,local_d8,local_e8,local_e0,local_120,local_118,
                       (uint)local_128,(uint)((unsigned long)local_128 >> 0x20));
            if (*(long **)((FileContainerParser *)pFVar12 + 0xd0) != (long *)0x0) {
              (**(code **)(**(long **)((FileContainerParser *)pFVar12 + 0xd0) + 8))();
            }
            *(FileContainerParser **)((FileContainerParser *)pFVar12 + 0xd0) = pFVar8;
            *(FileContainerStorage **)(pFVar8 + 200) = pFVar12;
            break;
          }
        }
        bVar11 = (byte)*local_78 & 1;
        local_40 = (unsigned long)((byte)*local_78 >> 1);
        if (bVar11 != 0) {
          local_40 = *(unsigned long *)(local_78 + 8);
        }
        local_48 = local_a8;
        if (bVar11 != 0) {
          local_48 = *(string **)(local_78 + 0x10);
        }
        fmt::format(local_98,"Error: openContentFromSubpath failed (%1% - error/name not found).",
                    0xb,&local_48);
        // std code
        goto LAB_10019020f;
      }
      pcVar1 = *(code **)(*(long *)pFVar12 + 0x18);
      // std code
      local_b8 = (FileContainerParser *)pFVar12;
      cVar4 = (*pcVar1)(pFVar12,this,local_7c,local_140);
      if (cVar4 == '\0') {
        // std code
LAB_1001901b9:
        bVar11 = (byte)*local_78 & 1;
        local_40 = (unsigned long)((byte)*local_78 >> 1);
        if (bVar11 != 0) {
          local_40 = *(unsigned long *)(local_78 + 8);
        }
        local_48 = local_a8;
        if (bVar11 != 0) {
          local_48 = *(string **)(local_78 + 0x10);
        }
        fmt::format(local_98,"Error: openContentFromSubpath failed (%1% - error/name not found).",
                    0xb,&local_48);
        goto LAB_1001901ff;
      }
      cVar4 = (**(code **)(*(long *)local_58 + 0x108))(local_58,local_140,local_178);
      // std code
      if (cVar4 == '\0') goto LAB_1001901b9;
      pFVar8 = (FileContainerParser *)new(0xe0);
      // std code
      pFVar3 = local_b8;
      FileContainerParser::FileContainerParser
                (pFVar8,(IStorage *)local_58,local_b8,local_140,local_98,local_d8,local_e8,local_e0,
                 local_120,local_118,(uint)local_128,(uint)((unsigned long)local_128 >> 0x20));
      // std code
      if (*(long **)(pFVar3 + 0xd0) != (long *)0x0) {
        (**(code **)(**(long **)(pFVar3 + 0xd0) + 8))();
      }
      *(FileContainerParser **)(local_b8 + 0xd0) = pFVar8;
      *(FileContainerParser **)(pFVar8 + 200) = local_b8;
      uVar10 = (unsigned long)((byte)local_70._0_1_ >> 1);
      if ((local_70 & 1) != 0) {
        uVar10 = local_68;
      }
      if (uVar7 < uVar10) {
        if (uVar7 != 0) {
          // std code
        }
      }
      else if ((local_70 & 1) == 0) {
        local_70 = 0;
      }
      else {
        *local_60 = '\0';
        local_68 = 0;
      }
LAB_10018ff02:
      uVar7 = (unsigned long)((byte)local_70._0_1_ >> 1);
      if ((local_70 & 1) != 0) {
        uVar7 = local_68;
      }
      this = (FileContainerStorage *)local_98;
      pFVar12 = (FileContainerStorage *)pFVar8;
    } while (uVar7 != 0);
  }
  plVar2 = *(long **)(local_58 + 0x130);
  if (plVar2 == (long *)0x0) {
    bVar11 = (byte)*local_78 & 1;
    local_48 = local_78 + 1;
    if (bVar11 != 0) {
      local_48 = *(string **)(local_78 + 0x10);
    }
    local_40 = (unsigned long)((byte)*local_78 >> 1);
    if (bVar11 != 0) {
      local_40 = *(unsigned long *)(local_78 + 8);
    }
    fmt::format(local_98,"Error: openContentFromSubpath failed (%1% - error/no valid subpath).",0xb,
                &local_48);
LAB_1001902ff:
    // std code
LAB_10019030b:
    uVar7 = 0;
  }
  else {
    uVar5 = (**(code **)(*plVar2 + 0x40))(plVar2,local_a0);
    uVar7 = 0((int7)((unsigned long)this >> 8),uVar5);
  }
  // std code
  // std code
  if (*(long *)PTR____stack_chk_guard_1002272e0 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7 & 0xffffffff;
}
}
