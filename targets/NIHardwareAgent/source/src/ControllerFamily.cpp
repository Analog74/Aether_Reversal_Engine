#include <ni/controller_editor/ControllerFamily.hpp>
namespace NI::NHL2 {

void ControllerFamily::productIDs() {
long lVar1;
  __tree_node_base *p_Var2;
  int iVar3;
  __tree_node_base *p_Var4;
  __tree_node_base *p_Var5;
  __tree_node_base *p_Var6;
  __tree_node_base *p_Var7;
  __tree_node_base *p_Var8;
  __tree_node_base *p_Var9;
  __tree_node_base *p_Var10;
  uint uVar11;
  uint *local_88;
  uint local_78 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009cc2c8;
  if ((productIDs()::s_productIDs == '\0') &&
     (iVar3 = ___cxa_guard_acquire(&productIDs()::s_productIDs), iVar3 != 0)) {
    0 = (__tree_node_base *)0x0;
    0 = 0;
    productIDs()::s_productIDs = &0;
    ___cxa_atexit(// std code
                  map<unsigned_int,// std code
                  ::~map,&productIDs()::s_productIDs,0x100000000);
    ___cxa_guard_release(&productIDs()::s_productIDs);
  }
  if (0 != 0) {
LAB_1001c5337:
    if (*(long *)PTR____stack_chk_guard_1009cc2c8 == local_38) {
      return &productIDs()::s_productIDs;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  local_78[0] = 0x1350;
  local_78[1] = 0x1610;
  local_78[2] = 0x1730;
  local_78[3] = 0x1860;
  if (0 == (__tree_node_base *)0x0) {
    p_Var5 = (__tree_node_base *)&0;
    p_Var10 = p_Var5;
  }
  else {
    p_Var4 = 0;
    p_Var10 = (__tree_node_base *)&0;
    do {
      while (p_Var5 = p_Var4, *(uint *)(p_Var5 + 0x20) < 0xf002) {
        if (*(uint *)(p_Var5 + 0x20) == 0xf001) goto LAB_1001c53c8;
        p_Var4 = *(__tree_node_base **)(p_Var5 + 8);
        p_Var10 = p_Var5 + 8;
        if (*(__tree_node_base **)(p_Var5 + 8) == (__tree_node_base *)0x0) goto LAB_1001c53c8;
      }
      p_Var4 = *(__tree_node_base **)p_Var5;
      p_Var10 = p_Var5;
    } while (*(__tree_node_base **)p_Var5 != (__tree_node_base *)0x0);
  }
LAB_1001c53c8:
  p_Var4 = *(__tree_node_base **)p_Var10;
  if (p_Var4 == (__tree_node_base *)0x0) {
    p_Var4 = (__tree_node_base *)new(0x40);
    *(unsigned int *)(p_Var4 + 0x20) = 0xf001;
    *(unsigned long long *)(p_Var4 + 0x30) = 0;
    *(unsigned long long *)(p_Var4 + 0x38) = 0;
    *(__tree_node_base **)(p_Var4 + 0x28) = p_Var4 + 0x30;
    *(unsigned long long *)p_Var4 = 0;
    *(unsigned long long *)(p_Var4 + 8) = 0;
    *(__tree_node_base **)(p_Var4 + 0x10) = p_Var5;
    *(__tree_node_base **)p_Var10 = p_Var4;
    p_Var5 = p_Var4;
    if ((unsigned long long *)*productIDs()::s_productIDs != (unsigned long long *)0x0) {
      p_Var5 = *(__tree_node_base **)p_Var10;
      productIDs()::s_productIDs = (unsigned long long *)*productIDs()::s_productIDs;
    }
    // std code
    0 = 0 + 1;
  }
  // std code
  __assign_unique<unsigned_int_const*>
            ((__tree<unsigned_int,// std code
             (p_Var4 + 0x28),local_78,local_78 + 4);
  local_78[8] = 0x1600;
  local_78[9] = 0x1700;
  local_78[10] = 0x1820;
  local_78[0xb] = 0x1880;
  local_78[4] = 0x1300;
  local_78[5] = 0x1500;
  local_78[6] = 0x1510;
  local_78[7] = 0x1520;
  local_78[0] = 0x808;
  local_78[1] = 0x1110;
  local_78[2] = 0x1140;
  local_78[3] = 0x1200;
  if (0 == (__tree_node_base *)0x0) {
    p_Var5 = (__tree_node_base *)&0;
    p_Var10 = p_Var5;
  }
  else {
    p_Var4 = 0;
    p_Var10 = (__tree_node_base *)&0;
    do {
      while (p_Var5 = p_Var4, *(uint *)(p_Var5 + 0x20) < 0xf003) {
        if (*(uint *)(p_Var5 + 0x20) == 0xf002) goto LAB_1001c54b8;
        p_Var4 = *(__tree_node_base **)(p_Var5 + 8);
        p_Var10 = p_Var5 + 8;
        if (*(__tree_node_base **)(p_Var5 + 8) == (__tree_node_base *)0x0) goto LAB_1001c54b8;
      }
      p_Var4 = *(__tree_node_base **)p_Var5;
      p_Var10 = p_Var5;
    } while (*(__tree_node_base **)p_Var5 != (__tree_node_base *)0x0);
  }
LAB_1001c54b8:
  p_Var4 = *(__tree_node_base **)p_Var10;
  if (p_Var4 == (__tree_node_base *)0x0) {
    p_Var4 = (__tree_node_base *)new(0x40);
    *(unsigned int *)(p_Var4 + 0x20) = 0xf002;
    *(unsigned long long *)(p_Var4 + 0x30) = 0;
    *(unsigned long long *)(p_Var4 + 0x38) = 0;
    *(__tree_node_base **)(p_Var4 + 0x28) = p_Var4 + 0x30;
    *(unsigned long long *)p_Var4 = 0;
    *(unsigned long long *)(p_Var4 + 8) = 0;
    *(__tree_node_base **)(p_Var4 + 0x10) = p_Var5;
    *(__tree_node_base **)p_Var10 = p_Var4;
    p_Var5 = p_Var4;
    if ((unsigned long long *)*productIDs()::s_productIDs != (unsigned long long *)0x0) {
      p_Var5 = *(__tree_node_base **)p_Var10;
      productIDs()::s_productIDs = (unsigned long long *)*productIDs()::s_productIDs;
    }
    // std code
    0 = 0 + 1;
  }
  // std code
  __assign_unique<unsigned_int_const*>
            ((__tree<unsigned_int,// std code
             (p_Var4 + 0x28),local_78,local_78 + 0xc);
  local_78[0xc] = 0x1710;
  local_78[0xd] = 0x1720;
  local_78[0xe] = 0x1900;
  local_78[0xf] = 0x2200;
  local_78[8] = 0x1320;
  local_78[9] = 0x1370;
  local_78[10] = 0x1400;
  local_78[0xb] = 0x1420;
  local_78[4] = 0x1130;
  local_78[5] = 0x1210;
  local_78[6] = 0x1220;
  local_78[7] = 0x1310;
  local_78[0] = 0xbaff;
  local_78[1] = 0x2305;
  local_78[2] = 0x1100;
  local_78[3] = 0x1120;
  if (0 == (__tree_node_base *)0x0) {
    p_Var5 = (__tree_node_base *)&0;
    p_Var10 = p_Var5;
  }
  else {
    p_Var4 = 0;
    p_Var10 = (__tree_node_base *)&0;
    do {
      while (p_Var5 = p_Var4, *(uint *)(p_Var5 + 0x20) < 0xf005) {
        if (*(uint *)(p_Var5 + 0x20) == 0xf004) goto LAB_1001c55b8;
        p_Var4 = *(__tree_node_base **)(p_Var5 + 8);
        p_Var10 = p_Var5 + 8;
        if (*(__tree_node_base **)(p_Var5 + 8) == (__tree_node_base *)0x0) goto LAB_1001c55b8;
      }
      p_Var4 = *(__tree_node_base **)p_Var5;
      p_Var10 = p_Var5;
    } while (*(__tree_node_base **)p_Var5 != (__tree_node_base *)0x0);
  }
LAB_1001c55b8:
  p_Var4 = *(__tree_node_base **)p_Var10;
  if (p_Var4 == (__tree_node_base *)0x0) {
    p_Var4 = (__tree_node_base *)new(0x40);
    *(unsigned int *)(p_Var4 + 0x20) = 0xf004;
    *(unsigned long long *)(p_Var4 + 0x30) = 0;
    *(unsigned long long *)(p_Var4 + 0x38) = 0;
    *(__tree_node_base **)(p_Var4 + 0x28) = p_Var4 + 0x30;
    *(unsigned long long *)p_Var4 = 0;
    *(unsigned long long *)(p_Var4 + 8) = 0;
    *(__tree_node_base **)(p_Var4 + 0x10) = p_Var5;
    *(__tree_node_base **)p_Var10 = p_Var4;
    p_Var5 = p_Var4;
    if ((unsigned long long *)*productIDs()::s_productIDs != (unsigned long long *)0x0) {
      p_Var5 = *(__tree_node_base **)p_Var10;
      productIDs()::s_productIDs = (unsigned long long *)*productIDs()::s_productIDs;
    }
    // std code
    0 = 0 + 1;
  }
  // std code
  __assign_unique<unsigned_int_const*>
            ((__tree<unsigned_int,// std code
             (p_Var4 + 0x28),local_78,(uint *)&local_38);
  local_78[4] = 0x1940;
  local_78[0] = 0x815;
  local_78[1] = 0x4711;
  local_78[2] = 0x4712;
  local_78[3] = 0x1969;
  if (0 == (__tree_node_base *)0x0) {
    p_Var5 = (__tree_node_base *)&0;
    p_Var10 = p_Var5;
  }
  else {
    p_Var4 = 0;
    p_Var10 = (__tree_node_base *)&0;
    do {
      while (p_Var5 = p_Var4, *(uint *)(p_Var5 + 0x20) < 0xf009) {
        if (*(uint *)(p_Var5 + 0x20) == 0xf008) goto LAB_1001c5698;
        p_Var4 = *(__tree_node_base **)(p_Var5 + 8);
        p_Var10 = p_Var5 + 8;
        if (*(__tree_node_base **)(p_Var5 + 8) == (__tree_node_base *)0x0) goto LAB_1001c5698;
      }
      p_Var4 = *(__tree_node_base **)p_Var5;
      p_Var10 = p_Var5;
    } while (*(__tree_node_base **)p_Var5 != (__tree_node_base *)0x0);
  }
LAB_1001c5698:
  p_Var4 = *(__tree_node_base **)p_Var10;
  if (p_Var4 == (__tree_node_base *)0x0) {
    p_Var4 = (__tree_node_base *)new(0x40);
    *(unsigned int *)(p_Var4 + 0x20) = 0xf008;
    *(unsigned long long *)(p_Var4 + 0x30) = 0;
    *(unsigned long long *)(p_Var4 + 0x38) = 0;
    *(__tree_node_base **)(p_Var4 + 0x28) = p_Var4 + 0x30;
    *(unsigned long long *)p_Var4 = 0;
    *(unsigned long long *)(p_Var4 + 8) = 0;
    *(__tree_node_base **)(p_Var4 + 0x10) = p_Var5;
    *(__tree_node_base **)p_Var10 = p_Var4;
    p_Var5 = p_Var4;
    if ((unsigned long long *)*productIDs()::s_productIDs != (unsigned long long *)0x0) {
      p_Var5 = *(__tree_node_base **)p_Var10;
      productIDs()::s_productIDs = (unsigned long long *)*productIDs()::s_productIDs;
    }
    // std code
    0 = 0 + 1;
  }
  local_88 = local_78;
  // std code
  __assign_unique<unsigned_int_const*>
            ((__tree<unsigned_int,// std code
             (p_Var4 + 0x28),local_88,local_78 + 5);
  local_78[0] = 0xf001;
  local_78[1] = 0xf002;
  local_78[2] = 0xf004;
  local_78[3] = 0xf008;
  uVar11 = 0xf001;
  if (0 == (__tree_node_base *)0x0) goto LAB_1001c5780;
LAB_1001c5740:
  p_Var10 = 0;
  p_Var4 = (__tree_node_base *)&0;
  do {
    while (p_Var5 = p_Var10, uVar11 < *(uint *)(p_Var5 + 0x20)) {
      p_Var10 = *(__tree_node_base **)p_Var5;
      p_Var4 = p_Var5;
      if (*(__tree_node_base **)p_Var5 == (__tree_node_base *)0x0) {
        p_Var10 = *(__tree_node_base **)p_Var5;
        if (p_Var10 != (__tree_node_base *)0x0) goto LAB_1001c5793;
        goto LAB_1001c57bc;
      }
    }
    if (uVar11 <= *(uint *)(p_Var5 + 0x20)) break;
    p_Var4 = p_Var5 + 8;
    p_Var10 = *(__tree_node_base **)(p_Var5 + 8);
  } while (*(__tree_node_base **)(p_Var5 + 8) != (__tree_node_base *)0x0);
  do {
    p_Var10 = *(__tree_node_base **)p_Var4;
    if (p_Var10 == (__tree_node_base *)0x0) {
LAB_1001c57bc:
      p_Var10 = (__tree_node_base *)new(0x40);
      *(uint *)(p_Var10 + 0x20) = uVar11;
      *(unsigned long long *)(p_Var10 + 0x30) = 0;
      *(unsigned long long *)(p_Var10 + 0x38) = 0;
      *(__tree_node_base **)(p_Var10 + 0x28) = p_Var10 + 0x30;
      *(unsigned long long *)p_Var10 = 0;
      *(unsigned long long *)(p_Var10 + 8) = 0;
      *(__tree_node_base **)(p_Var10 + 0x10) = p_Var5;
      *(__tree_node_base **)p_Var4 = p_Var10;
      p_Var5 = p_Var10;
      if ((unsigned long long *)*productIDs()::s_productIDs != (unsigned long long *)0x0) {
        p_Var5 = *(__tree_node_base **)p_Var4;
        productIDs()::s_productIDs = (unsigned long long *)*productIDs()::s_productIDs;
      }
      // std code
      0 = 0 + 1;
      p_Var4 = (__tree_node_base *)&0;
      p_Var5 = 0;
      if (0 != (__tree_node_base *)0x0) goto LAB_1001c585e;
LAB_1001c5841:
      p_Var4 = (__tree_node_base *)&0;
      p_Var5 = 0;
      p_Var9 = p_Var4;
      if (0 == (__tree_node_base *)0x0) goto LAB_1001c58ab;
LAB_1001c5885:
      p_Var4 = *(__tree_node_base **)(p_Var10 + 0x28);
      p_Var10 = p_Var10 + 0x30;
      if (p_Var4 != p_Var10) goto LAB_1001c592b;
    }
    else {
LAB_1001c5793:
      p_Var4 = (__tree_node_base *)&0;
      p_Var5 = 0;
      if (0 == (__tree_node_base *)0x0) goto LAB_1001c5841;
LAB_1001c585e:
      do {
        p_Var9 = p_Var5;
        if (*(uint *)(p_Var9 + 0x20) < 0x10000) {
          if (*(uint *)(p_Var9 + 0x20) != 0xffff) {
            p_Var4 = p_Var9 + 8;
            p_Var5 = *(__tree_node_base **)(p_Var9 + 8);
            if (*(__tree_node_base **)(p_Var9 + 8) != (__tree_node_base *)0x0) goto LAB_1001c585e;
          }
          p_Var5 = *(__tree_node_base **)p_Var4;
          goto joined_r0x0001001c58a9;
        }
        p_Var4 = p_Var9;
        p_Var5 = *(__tree_node_base **)p_Var9;
      } while (*(__tree_node_base **)p_Var9 != (__tree_node_base *)0x0);
      p_Var5 = *(__tree_node_base **)p_Var9;
joined_r0x0001001c58a9:
      if (p_Var5 != (__tree_node_base *)0x0) goto LAB_1001c5885;
LAB_1001c58ab:
      p_Var5 = (__tree_node_base *)new(0x40);
      *(unsigned int *)(p_Var5 + 0x20) = 0xffff;
      *(unsigned long long *)(p_Var5 + 0x30) = 0;
      *(unsigned long long *)(p_Var5 + 0x38) = 0;
      *(__tree_node_base **)(p_Var5 + 0x28) = p_Var5 + 0x30;
      *(unsigned long long *)p_Var5 = 0;
      *(unsigned long long *)(p_Var5 + 8) = 0;
      *(__tree_node_base **)(p_Var5 + 0x10) = p_Var9;
      *(__tree_node_base **)p_Var4 = p_Var5;
      p_Var9 = p_Var5;
      if ((unsigned long long *)*productIDs()::s_productIDs != (unsigned long long *)0x0) {
        p_Var9 = *(__tree_node_base **)p_Var4;
        productIDs()::s_productIDs = (unsigned long long *)*productIDs()::s_productIDs;
      }
      // std code
      0 = 0 + 1;
      p_Var4 = *(__tree_node_base **)(p_Var10 + 0x28);
      p_Var10 = p_Var10 + 0x30;
      if (p_Var4 != p_Var10) {
LAB_1001c592b:
        p_Var9 = p_Var5 + 0x30;
        do {
          p_Var7 = *(__tree_node_base **)(p_Var5 + 0x30);
          p_Var8 = p_Var9;
          p_Var6 = p_Var9;
          if (*(__tree_node_base **)(p_Var5 + 0x28) == p_Var9) {
LAB_1001c599a:
            p_Var6 = p_Var8 + 8;
            if (p_Var7 == (__tree_node_base *)0x0) {
              p_Var6 = p_Var9;
              p_Var8 = p_Var9;
            }
          }
          else {
            p_Var2 = p_Var7;
            if (p_Var7 == (__tree_node_base *)0x0) {
              p_Var8 = p_Var5 + 0x40;
              if ((__tree_node_base *)**(unsigned long long **)(p_Var5 + 0x40) == p_Var9) {
                do {
                  lVar1 = *(long *)p_Var8;
                  p_Var8 = (__tree_node_base *)(lVar1 + 0x10);
                } while (**(long **)(lVar1 + 0x10) == lVar1);
              }
              p_Var8 = *(__tree_node_base **)p_Var8;
              uVar11 = *(uint *)(p_Var4 + 0x1c);
              if (*(uint *)(p_Var8 + 0x1c) < uVar11) goto LAB_1001c599a;
            }
            else {
              do {
                p_Var8 = p_Var2;
                p_Var2 = *(__tree_node_base **)(p_Var8 + 8);
              } while (*(__tree_node_base **)(p_Var8 + 8) != (__tree_node_base *)0x0);
              uVar11 = *(uint *)(p_Var4 + 0x1c);
              if (*(uint *)(p_Var8 + 0x1c) < uVar11) goto LAB_1001c599a;
            }
            while (p_Var8 = p_Var6, p_Var7 != (__tree_node_base *)0x0) {
              while (p_Var8 = p_Var7, *(uint *)(p_Var8 + 0x1c) <= uVar11) {
                if (uVar11 <= *(uint *)(p_Var8 + 0x1c)) goto LAB_1001c59a9;
                p_Var6 = p_Var8 + 8;
                p_Var7 = *(__tree_node_base **)(p_Var8 + 8);
                if (*(__tree_node_base **)(p_Var8 + 8) == (__tree_node_base *)0x0)
                goto LAB_1001c59a9;
              }
              p_Var6 = p_Var8;
              p_Var7 = *(__tree_node_base **)p_Var8;
            }
          }
LAB_1001c59a9:
          if (*(long *)p_Var6 == 0) {
            p_Var7 = (__tree_node_base *)new(0x20);
            *(unsigned int *)(p_Var7 + 0x1c) = *(unsigned int *)(p_Var4 + 0x1c);
            *(unsigned long long *)p_Var7 = 0;
            *(unsigned long long *)(p_Var7 + 8) = 0;
            *(__tree_node_base **)(p_Var7 + 0x10) = p_Var8;
            *(__tree_node_base **)p_Var6 = p_Var7;
            if (**(long **)(p_Var5 + 0x28) != 0) {
              *(long *)(p_Var5 + 0x28) = **(long **)(p_Var5 + 0x28);
              p_Var7 = *(__tree_node_base **)p_Var6;
            }
            // std code
                      (*(__tree_node_base **)(p_Var5 + 0x30),p_Var7);
            *(long *)(p_Var5 + 0x38) = *(long *)(p_Var5 + 0x38) + 1;
            p_Var8 = *(__tree_node_base **)(p_Var4 + 8);
            if (*(__tree_node_base **)(p_Var4 + 8) != (__tree_node_base *)0x0) goto LAB_1001c5a20;
LAB_1001c5a30:
            p_Var6 = *(__tree_node_base **)(p_Var4 + 0x10);
            if (*(__tree_node_base **)p_Var6 != p_Var4) {
              do {
                p_Var4 = *(__tree_node_base **)(p_Var4 + 0x10);
                p_Var6 = *(__tree_node_base **)(p_Var4 + 0x10);
              } while (*(__tree_node_base **)p_Var6 != p_Var4);
            }
          }
          else {
            p_Var8 = *(__tree_node_base **)(p_Var4 + 8);
            if (*(__tree_node_base **)(p_Var4 + 8) == (__tree_node_base *)0x0) goto LAB_1001c5a30;
LAB_1001c5a20:
            do {
              p_Var6 = p_Var8;
              p_Var8 = *(__tree_node_base **)p_Var6;
            } while (*(__tree_node_base **)p_Var6 != (__tree_node_base *)0x0);
          }
          p_Var4 = p_Var6;
        } while (p_Var6 != p_Var10);
      }
    }
    local_88 = local_88 + 1;
    if (local_88 == local_78 + 4) goto LAB_1001c5337;
    uVar11 = *local_88;
    if (0 != (__tree_node_base *)0x0) goto LAB_1001c5740;
LAB_1001c5780:
    p_Var4 = (__tree_node_base *)&0;
    p_Var5 = (__tree_node_base *)&0;
  } while( true );
}
}
