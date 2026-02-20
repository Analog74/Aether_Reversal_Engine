#include <ni/controller_editor/allocator_char16_t___.hpp>
namespace std::deque<char16_t, std {

void allocator<char16_t> >::__add_back_capacity(unsigned long) {
long *plVar1;
  unsigned long uVar2;
  long *plVar3;
  void *pvVar4;
  unsigned long uVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  unsigned long long *puVar9;
  long *plVar10;
  deque<char16_t,// std code
  long *plVar12;
  unsigned long long *puVar13;
  unsigned long long *puVar14;
  unsigned long long *puVar15;
  unsigned long long *puVar16;
  unsigned long long *puVar17;
  size_t sVar18;
  long lVar19;
  unsigned long uVar20;
  long *plVar21;
  unsigned long long *puVar22;
  wchar16 *local_60;
  void *local_58;
  long *local_50;
  unsigned long long *local_48;
  deque<char16_t,// std code
  unsigned long long *local_38;
  
  plVar3 = *(long **)(this + 8);
  plVar21 = *(long **)(this + 0x10);
  uVar2 = ((long)plVar21 - (long)plVar3 == 0) + param_1;
  puVar14 = (unsigned long long *)(((uVar2 >> 0xb) + 1) - (unsigned long)((uVar2 & 0x7ff) == 0));
  puVar9 = (unsigned long long *)(*(unsigned long *)(this + 0x20) >> 0xb);
  puVar15 = puVar9;
  if (puVar14 < puVar9) {
    puVar15 = puVar14;
  }
  uVar2 = (long)puVar14 - (long)puVar15;
  local_40 = this;
  if (uVar2 == 0) {
    *(unsigned long *)(this + 0x20) = *(unsigned long *)(this + 0x20) + (long)puVar15 * -0x800;
    if (puVar15 != (unsigned long long *)0x0) {
      while( true ) {
        puVar14 = (unsigned long long *)*plVar3;
        plVar8 = plVar3 + 1;
        *(long **)(this + 8) = plVar8;
        plVar10 = plVar21;
        if (plVar21 == *(long **)(this + 0x18)) {
          plVar10 = *(long **)this;
          local_48 = puVar15;
          if (plVar8 < plVar10 || (long)plVar8 - (long)plVar10 == 0) {
            uVar2 = (long)*(long **)(this + 0x18) - (long)plVar10 >> 2;
            if (uVar2 == 0) {
              uVar2 = 1;
            }
            local_50 = plVar10;
            local_38 = puVar14;
            pvVar4 = new(uVar2 * 8);
            puVar15 = local_48;
            plVar1 = (long *)((long)pvVar4 + (uVar2 & 0x7ffffffffffffffc) * 2);
            plVar10 = plVar1;
            plVar12 = local_50;
            if (plVar8 != plVar21) {
              uVar20 = (long)plVar21 + (-0x10 - (long)plVar3);
              uVar6 = ((uint)(uVar20 >> 3) & 0x1fffffff) + 1;
              if ((uVar6 & 7) != 0) {
                lVar7 = -((unsigned long)uVar6 & 7);
                do {
                  *plVar10 = *plVar8;
                  plVar10 = plVar10 + 1;
                  plVar8 = plVar8 + 1;
                  lVar7 = lVar7 + 1;
                } while (lVar7 != 0);
              }
              if (0x37 < uVar20) {
                do {
                  *plVar10 = *plVar8;
                  plVar10[1] = plVar8[1];
                  plVar10[2] = plVar8[2];
                  plVar10[3] = plVar8[3];
                  plVar10[4] = plVar8[4];
                  plVar10[5] = plVar8[5];
                  plVar10[6] = plVar8[6];
                  plVar10[7] = plVar8[7];
                  plVar10 = plVar10 + 8;
                  plVar8 = plVar8 + 8;
                } while (plVar8 != plVar21);
              }
              plVar12 = *(long **)local_40;
            }
            *(void **)local_40 = pvVar4;
            *(long **)(local_40 + 8) = plVar1;
            *(long **)(local_40 + 0x10) = plVar10;
            *(void **)(local_40 + 0x18) = (void *)((long)pvVar4 + uVar2 * 8);
            puVar14 = local_38;
            this = local_40;
            if (plVar12 != (long *)0x0) {
              delete(plVar12);
              plVar10 = *(long **)(local_40 + 0x10);
              puVar14 = local_38;
              this = local_40;
            }
          }
          else {
            lVar7 = (long)plVar8 - (long)plVar10 >> 3;
            lVar7 = (lVar7 + 1) - (lVar7 + 1 >> 0x3f) >> 1;
            plVar10 = plVar8 + -lVar7;
            lVar19 = (long)plVar21 - (long)plVar8 >> 3;
            if (lVar19 != 0) {
              _memmove(plVar10,plVar8,(long)plVar21 - (long)plVar8);
              plVar8 = *(long **)(local_40 + 8);
              this = local_40;
            }
            plVar10 = plVar10 + lVar19;
            *(long **)(this + 0x10) = plVar10;
            *(long **)(this + 8) = plVar8 + -lVar7;
            puVar15 = local_48;
          }
        }
        *plVar10 = (long)puVar14;
        plVar21 = (long *)(*(long *)(this + 0x10) + 8);
        *(long **)(this + 0x10) = plVar21;
        puVar15 = (unsigned long long *)((long)puVar15 + -1);
        if (puVar15 == (unsigned long long *)0x0) break;
        plVar3 = *(long **)(this + 8);
      }
    }
  }
  else {
    lVar19 = (long)*(long **)(this + 0x18) - *(long *)this;
    lVar7 = (long)plVar21 - (long)plVar3 >> 3;
    local_48 = puVar15;
    if ((unsigned long)((lVar19 >> 3) - lVar7) < uVar2) {
      uVar20 = lVar19 >> 2;
      if (uVar20 < lVar7 + uVar2) {
        uVar20 = lVar7 + uVar2;
      }
      if (uVar20 == 0) {
        plVar3 = (unsigned long long *)0x0;
      }
      else {
        plVar3 = (long *)new(uVar20 * 8);
      }
      puVar14 = plVar3 + (lVar7 - (long)puVar15);
      puVar9 = puVar14;
      puVar13 = plVar3 + uVar20;
      do {
        local_50 = plVar3;
        pvVar4 = new(0x1000);
        plVar3 = local_50;
        if (puVar9 == puVar13) {
          if (puVar14 < local_50 || (long)puVar14 - (long)local_50 == 0) {
            uVar20 = (long)puVar13 - (long)local_50 >> 2;
            if (uVar20 == 0) {
              uVar20 = 1;
            }
            local_58 = pvVar4;
            plVar3 = (long *)new(uVar20 * 8);
            puVar13 = (unsigned long long *)((long)plVar3 + (uVar20 & 0x7ffffffffffffffc) * 2);
            puVar22 = puVar13;
            if (puVar14 != puVar9) {
              uVar5 = (long)puVar9 + (-8 - (long)puVar14);
              uVar6 = ((uint)(uVar5 >> 3) & 0x1fffffff) + 1;
              if ((uVar6 & 7) != 0) {
                lVar7 = -((unsigned long)uVar6 & 7);
                do {
                  *puVar22 = *puVar14;
                  puVar22 = puVar22 + 1;
                  puVar14 = puVar14 + 1;
                  lVar7 = lVar7 + 1;
                } while (lVar7 != 0);
              }
              if (0x37 < uVar5) {
                do {
                  *puVar22 = *puVar14;
                  puVar22[1] = puVar14[1];
                  puVar22[2] = puVar14[2];
                  puVar22[3] = puVar14[3];
                  puVar22[4] = puVar14[4];
                  puVar22[5] = puVar14[5];
                  puVar22[6] = puVar14[6];
                  puVar22[7] = puVar14[7];
                  puVar22 = puVar22 + 8;
                  puVar14 = puVar14 + 8;
                } while (puVar14 != puVar9);
              }
            }
            local_38 = plVar3 + uVar20;
            puVar14 = puVar13;
            pvVar4 = local_58;
            puVar9 = puVar22;
            puVar13 = local_38;
            if (local_50 != (unsigned long long *)0x0) {
              delete(local_50);
              pvVar4 = local_58;
              puVar13 = local_38;
            }
          }
          else {
            lVar7 = (long)puVar14 - (long)local_50 >> 3;
            puVar22 = (unsigned long long *)
                      ((long)puVar14 +
                      ((lVar7 + 1) - (lVar7 + 1 >> 0x3f) & 0x3ffffffffffffffeU) * -4);
            lVar7 = (long)puVar9 - (long)puVar14 >> 3;
            local_38 = puVar13;
            if (lVar7 != 0) {
              local_58 = pvVar4;
              _memmove(puVar22,puVar14,(long)puVar9 - (long)puVar14);
              pvVar4 = local_58;
            }
            puVar14 = puVar22;
            plVar3 = local_50;
            puVar9 = puVar22 + lVar7;
            puVar13 = local_38;
          }
        }
        local_38 = puVar13;
        *puVar9 = pvVar4;
        puVar9 = puVar9 + 1;
        uVar2 = uVar2 - 1;
        puVar13 = local_38;
      } while (uVar2 != 0);
      pdVar11 = local_40;
      if (local_48 == (unsigned long long *)0x0) {
        puVar22 = *(unsigned long long **)(local_40 + 8);
      }
      else {
        puVar22 = *(unsigned long long **)(local_40 + 8);
        do {
          if (puVar9 == puVar13) {
            if (puVar14 < plVar3 || (long)puVar14 - (long)plVar3 == 0) {
              uVar2 = (long)puVar13 - (long)plVar3 >> 2;
              if (uVar2 == 0) {
                uVar2 = 1;
              }
              local_50 = plVar3;
              plVar3 = (long *)new(uVar2 * 8);
              puVar16 = (unsigned long long *)((long)plVar3 + (uVar2 & 0x7ffffffffffffffc) * 2);
              puVar17 = puVar16;
              if (puVar14 != puVar9) {
                uVar20 = (long)puVar9 + (-8 - (long)puVar14);
                uVar6 = ((uint)(uVar20 >> 3) & 0x1fffffff) + 1;
                if ((uVar6 & 7) != 0) {
                  lVar7 = -((unsigned long)uVar6 & 7);
                  do {
                    *puVar17 = *puVar14;
                    puVar17 = puVar17 + 1;
                    puVar14 = puVar14 + 1;
                    lVar7 = lVar7 + 1;
                  } while (lVar7 != 0);
                }
                if (0x37 < uVar20) {
                  do {
                    *puVar17 = *puVar14;
                    puVar17[1] = puVar14[1];
                    puVar17[2] = puVar14[2];
                    puVar17[3] = puVar14[3];
                    puVar17[4] = puVar14[4];
                    puVar17[5] = puVar14[5];
                    puVar17[6] = puVar14[6];
                    puVar17[7] = puVar14[7];
                    puVar17 = puVar17 + 8;
                    puVar14 = puVar14 + 8;
                  } while (puVar14 != puVar9);
                }
              }
              puVar13 = plVar3 + uVar2;
              puVar14 = puVar16;
              pdVar11 = local_40;
              puVar9 = puVar17;
              local_38 = puVar13;
              if (local_50 != (unsigned long long *)0x0) {
                delete(local_50);
                pdVar11 = local_40;
                puVar13 = local_38;
              }
            }
            else {
              lVar7 = (long)puVar14 - (long)plVar3 >> 3;
              puVar16 = (unsigned long long *)
                        ((long)puVar14 +
                        ((lVar7 + 1) - (lVar7 + 1 >> 0x3f) & 0x3ffffffffffffffeU) * -4);
              lVar7 = (long)puVar9 - (long)puVar14 >> 3;
              local_38 = puVar13;
              if (lVar7 != 0) {
                _memmove(puVar16,puVar14,(long)puVar9 - (long)puVar14);
                pdVar11 = local_40;
              }
              puVar14 = puVar16;
              puVar9 = puVar16 + lVar7;
              puVar13 = local_38;
            }
          }
          *puVar9 = *puVar22;
          puVar9 = puVar9 + 1;
          puVar22 = (unsigned long long *)(*(long *)(pdVar11 + 8) + 8);
          *(unsigned long long **)(pdVar11 + 8) = puVar22;
          local_48 = (unsigned long long *)((long)local_48 + -1);
        } while (local_48 != (unsigned long long *)0x0);
        local_48 = (unsigned long long *)0x0;
      }
      puVar16 = *(unsigned long long **)(pdVar11 + 0x10);
      if (puVar16 != puVar22) {
        do {
          puVar22 = puVar14;
          if (puVar14 == plVar3) {
            if (puVar9 < puVar13) {
              lVar7 = (long)puVar13 - (long)puVar9 >> 3;
              puVar22 = (unsigned long long *)
                        ((long)puVar9 +
                        ((lVar7 + 1) - (lVar7 + 1 >> 0x3f) & 0x3ffffffffffffffeU) * 4);
              sVar18 = (long)puVar9 - (long)puVar14;
              lVar7 = (long)sVar18 >> 3;
              puVar9 = puVar22;
              if (lVar7 != 0) {
                local_48 = puVar22 + -lVar7;
                _memmove(local_48,puVar14,sVar18);
                pdVar11 = local_40;
                puVar22 = local_48;
              }
            }
            else {
              lVar7 = (long)puVar13 - (long)plVar3 >> 2;
              if (lVar7 == 0) {
                lVar7 = 1;
              }
              plVar3 = (long *)new(lVar7 * 8);
              puVar22 = (unsigned long long *)((lVar7 * 2 + 6U & 0xfffffffffffffff8) + (long)plVar3);
              puVar17 = puVar22;
              if (puVar14 != puVar9) {
                uVar2 = (long)puVar9 + (-8 - (long)puVar14);
                uVar6 = ((uint)(uVar2 >> 3) & 0x1fffffff) + 1;
                puVar13 = puVar14;
                if ((uVar6 & 7) != 0) {
                  lVar19 = -((unsigned long)uVar6 & 7);
                  do {
                    *puVar17 = *puVar13;
                    puVar17 = puVar17 + 1;
                    puVar13 = puVar13 + 1;
                    lVar19 = lVar19 + 1;
                  } while (lVar19 != 0);
                }
                if (0x37 < uVar2) {
                  do {
                    *puVar17 = *puVar13;
                    puVar17[1] = puVar13[1];
                    puVar17[2] = puVar13[2];
                    puVar17[3] = puVar13[3];
                    puVar17[4] = puVar13[4];
                    puVar17[5] = puVar13[5];
                    puVar17[6] = puVar13[6];
                    puVar17[7] = puVar13[7];
                    puVar17 = puVar17 + 8;
                    puVar13 = puVar13 + 8;
                  } while (puVar13 != puVar9);
                }
              }
              puVar13 = plVar3 + lVar7;
              pdVar11 = local_40;
              puVar9 = puVar17;
              if (puVar14 != (unsigned long long *)0x0) {
                local_48 = plVar3;
                delete(puVar14);
                pdVar11 = local_40;
                plVar3 = local_48;
              }
            }
          }
          puVar16 = puVar16 + -1;
          puVar22[-1] = *puVar16;
          puVar14 = puVar22 + -1;
        } while (puVar16 != *(unsigned long long **)(pdVar11 + 8));
      }
      pvVar4 = *(void **)pdVar11;
      *(long **)pdVar11 = plVar3;
      *(unsigned long long **)(pdVar11 + 8) = puVar14;
      *(unsigned long long **)(pdVar11 + 0x10) = puVar9;
      *(unsigned long long **)(pdVar11 + 0x18) = puVar13;
      *(long *)(pdVar11 + 0x20) = *(long *)(pdVar11 + 0x20) + (long)puVar15 * -0x800;
      if (pvVar4 != (void *)0x0) {
        delete(pvVar4);
        return;
      }
    }
    else {
      local_38 = puVar9;
      if (*(long **)(this + 0x18) != plVar21) {
        do {
          local_60 = (wchar16 *)new(0x1000);
          __split_buffer<char16_t*,// std code
                    ((__split_buffer<char16_t*,// std code
          if (uVar2 == 1) {
            lVar7 = *(long *)(this + 0x20);
            goto LAB_10008efba;
          }
          uVar2 = uVar2 - 1;
        } while (*(long *)(this + 0x18) != *(long *)(this + 0x10));
      }
      if (local_38 < puVar14) {
        puVar14 = local_38;
      }
      uVar20 = uVar2;
      do {
        local_60 = (wchar16 *)new(0x1000);
        __split_buffer<char16_t*,// std code
                  ((__split_buffer<char16_t*,// std code
        lVar7 = 0;
        if (*(long *)(local_40 + 0x10) - *(long *)(local_40 + 8) == 8) {
          lVar7 = -1;
        }
        uVar20 = uVar20 - 1;
        lVar7 = *(long *)(local_40 + 0x20) + 0x800 + lVar7;
        *(long *)(local_40 + 0x20) = lVar7;
      } while (uVar20 != 0);
      local_48 = (unsigned long long *)((uVar2 - 1) - ~(unsigned long)puVar14);
      this = local_40;
LAB_10008efba:
      *(long *)(this + 0x20) = lVar7 + (long)local_48 * -0x800;
      if (local_48 != (unsigned long long *)0x0) {
        plVar3 = *(long **)(this + 0x10);
        do {
          plVar10 = *(long **)(this + 8);
          puVar15 = (unsigned long long *)*plVar10;
          plVar21 = plVar10 + 1;
          *(long **)(this + 8) = plVar21;
          puVar14 = local_48;
          plVar8 = plVar3;
          if (plVar3 == *(long **)(this + 0x18)) {
            plVar8 = *(long **)this;
            if (plVar21 < plVar8 || (long)plVar21 - (long)plVar8 == 0) {
              uVar2 = (long)*(long **)(this + 0x18) - (long)plVar8 >> 2;
              if (uVar2 == 0) {
                uVar2 = 1;
              }
              local_50 = plVar8;
              local_38 = puVar15;
              pvVar4 = new(uVar2 * 8);
              puVar14 = local_48;
              plVar1 = (long *)((long)pvVar4 + (uVar2 & 0x7ffffffffffffffc) * 2);
              plVar8 = plVar1;
              plVar12 = local_50;
              if (plVar21 != plVar3) {
                uVar20 = (long)plVar3 + (-0x10 - (long)plVar10);
                uVar6 = ((uint)(uVar20 >> 3) & 0x1fffffff) + 1;
                if ((uVar6 & 7) != 0) {
                  lVar7 = -((unsigned long)uVar6 & 7);
                  do {
                    *plVar8 = *plVar21;
                    plVar8 = plVar8 + 1;
                    plVar21 = plVar21 + 1;
                    lVar7 = lVar7 + 1;
                  } while (lVar7 != 0);
                }
                if (0x37 < uVar20) {
                  do {
                    *plVar8 = *plVar21;
                    plVar8[1] = plVar21[1];
                    plVar8[2] = plVar21[2];
                    plVar8[3] = plVar21[3];
                    plVar8[4] = plVar21[4];
                    plVar8[5] = plVar21[5];
                    plVar8[6] = plVar21[6];
                    plVar8[7] = plVar21[7];
                    plVar8 = plVar8 + 8;
                    plVar21 = plVar21 + 8;
                  } while (plVar21 != plVar3);
                }
                plVar12 = *(long **)local_40;
              }
              *(void **)local_40 = pvVar4;
              *(long **)(local_40 + 8) = plVar1;
              *(long **)(local_40 + 0x10) = plVar8;
              *(void **)(local_40 + 0x18) = (void *)((long)pvVar4 + uVar2 * 8);
              puVar15 = local_38;
              this = local_40;
              if (plVar12 != (long *)0x0) {
                delete(plVar12);
                plVar8 = *(long **)(local_40 + 0x10);
                puVar15 = local_38;
                this = local_40;
              }
            }
            else {
              lVar7 = (long)plVar21 - (long)plVar8 >> 3;
              lVar7 = (lVar7 + 1) - (lVar7 + 1 >> 0x3f) >> 1;
              plVar8 = plVar21 + -lVar7;
              lVar19 = (long)plVar3 - (long)plVar21 >> 3;
              if (lVar19 != 0) {
                _memmove(plVar8,plVar21,(long)plVar3 - (long)plVar21);
                plVar21 = *(long **)(local_40 + 8);
                this = local_40;
              }
              plVar8 = plVar8 + lVar19;
              *(long **)(this + 0x10) = plVar8;
              *(long **)(this + 8) = plVar21 + -lVar7;
              puVar14 = local_48;
            }
          }
          *plVar8 = (long)puVar15;
          plVar3 = (long *)(*(long *)(this + 0x10) + 8);
          *(long **)(this + 0x10) = plVar3;
          local_48 = (unsigned long long *)((long)puVar14 + -1);
        } while (local_48 != (unsigned long long *)0x0);
      }
    }
  }
  return;
}

void allocator<char16_t> >::__add_front_capacity(unsigned long) {
long lVar1;
  void *pvVar2;
  unsigned long long *puVar3;
  unsigned long long *puVar4;
  long lVar5;
  unsigned long long *puVar6;
  uint uVar7;
  long lVar8;
  unsigned long uVar9;
  long lVar10;
  unsigned long uVar11;
  unsigned long uVar12;
  unsigned long long *puVar13;
  unsigned long long *puVar14;
  unsigned long long *puVar15;
  unsigned long long *puVar16;
  unsigned long long *puVar17;
  unsigned long long *puVar18;
  unsigned long long *puVar19;
  unsigned long long *puVar20;
  wchar16 *local_48;
  unsigned long long *local_40;
  unsigned long long *local_38;
  
  lVar5 = *(long *)(this + 8);
  lVar1 = *(long *)(this + 0x10);
  lVar10 = lVar1 - lVar5;
  lVar8 = 0;
  if (lVar10 != 0) {
    lVar8 = (lVar1 - lVar5) * 0x100 + -1;
  }
  uVar12 = (lVar10 == 0) + param_1;
  puVar15 = (unsigned long long *)(((uVar12 >> 0xb) + 1) - (unsigned long)((uVar12 & 0x7ff) == 0));
  puVar19 = (unsigned long long *)
            ((unsigned long)(lVar8 - (*(long *)(this + 0x28) + *(long *)(this + 0x20))) >> 0xb);
  puVar17 = puVar19;
  if (puVar15 < puVar19) {
    puVar17 = puVar15;
  }
  uVar12 = (long)puVar15 - (long)puVar17;
  if (uVar12 == 0) {
    *(long *)(this + 0x20) = (long)puVar17 * 0x800 + *(long *)(this + 0x20);
    if (puVar17 != (unsigned long long *)0x0) {
      local_48 = *(wchar16 **)(lVar1 + -8);
      *(long *)(this + 0x10) = lVar1 + -8;
      __split_buffer<char16_t*,// std code
                ((__split_buffer<char16_t*,// std code
      if (puVar17 != (unsigned long long *)0x1) {
        uVar12 = ~(unsigned long)puVar15;
        if (~(unsigned long)puVar15 < ~(unsigned long)puVar19) {
          uVar12 = ~(unsigned long)puVar19;
        }
        lVar5 = uVar12 + 2;
        do {
          local_48 = *(wchar16 **)(*(long *)(this + 0x10) + -8);
          *(long *)(this + 0x10) = *(long *)(this + 0x10) + -8;
          __split_buffer<char16_t*,// std code
                    ((__split_buffer<char16_t*,// std code
          lVar5 = lVar5 + 1;
        } while (lVar5 != 0);
      }
    }
  }
  else {
    lVar8 = *(long *)(this + 0x18) - *(long *)this;
    if ((unsigned long)((lVar8 >> 3) - (lVar10 >> 3)) < uVar12) {
      puVar19 = (unsigned long long *)0x0;
      puVar18 = (unsigned long long *)0xffffffffffffffff;
      if (lVar1 != lVar5) {
        puVar18 = puVar19;
      }
      uVar9 = lVar8 >> 2;
      uVar11 = (lVar10 >> 3) + uVar12;
      if (uVar11 <= uVar9) {
        uVar11 = uVar9;
      }
      local_40 = puVar17;
      if (uVar11 != 0) {
        puVar19 = (unsigned long long *)new(uVar11 * 8);
      }
      puVar17 = puVar19 + uVar11;
      puVar20 = puVar19;
      puVar14 = puVar19;
      do {
        puVar3 = (unsigned long long *)new(0x1000);
        puVar6 = puVar20;
        if (puVar14 == puVar17) {
          if (puVar19 < puVar20 || (long)puVar19 - (long)puVar20 == 0) {
            uVar11 = (long)puVar17 - (long)puVar20 >> 2;
            if (uVar11 == 0) {
              uVar11 = 1;
            }
            local_38 = puVar3;
            puVar6 = (unsigned long long *)new(uVar11 * 8);
            puVar3 = (unsigned long long *)((long)puVar6 + (uVar11 & 0x7ffffffffffffffc) * 2);
            puVar4 = puVar3;
            if (puVar19 != puVar14) {
              uVar9 = (long)puVar14 + (-8 - (long)puVar19);
              uVar7 = ((uint)(uVar9 >> 3) & 0x1fffffff) + 1;
              if ((uVar7 & 7) != 0) {
                lVar5 = -((unsigned long)uVar7 & 7);
                do {
                  *puVar4 = *puVar19;
                  puVar4 = puVar4 + 1;
                  puVar19 = puVar19 + 1;
                  lVar5 = lVar5 + 1;
                } while (lVar5 != 0);
              }
              if (0x37 < uVar9) {
                do {
                  *puVar4 = *puVar19;
                  puVar4[1] = puVar19[1];
                  puVar4[2] = puVar19[2];
                  puVar4[3] = puVar19[3];
                  puVar4[4] = puVar19[4];
                  puVar4[5] = puVar19[5];
                  puVar4[6] = puVar19[6];
                  puVar4[7] = puVar19[7];
                  puVar4 = puVar4 + 8;
                  puVar19 = puVar19 + 8;
                } while (puVar19 != puVar14);
              }
            }
            puVar17 = puVar6 + uVar11;
            puVar19 = puVar3;
            puVar3 = local_38;
            puVar14 = puVar4;
            if (puVar20 != (unsigned long long *)0x0) {
              delete(puVar20);
              puVar3 = local_38;
            }
          }
          else {
            lVar5 = (long)puVar19 - (long)puVar20 >> 3;
            puVar20 = (unsigned long long *)
                      ((long)puVar19 +
                      ((lVar5 + 1) - (lVar5 + 1 >> 0x3f) & 0x3ffffffffffffffeU) * -4);
            lVar5 = (long)puVar14 - (long)puVar19 >> 3;
            if (lVar5 != 0) {
              local_38 = puVar20;
              _memmove(puVar20,puVar19,(long)puVar14 - (long)puVar19);
              puVar20 = local_38;
            }
            puVar19 = puVar20;
            puVar14 = puVar20 + lVar5;
          }
        }
        *puVar14 = puVar3;
        puVar14 = puVar14 + 1;
        uVar12 = uVar12 - 1;
        puVar20 = puVar6;
      } while (uVar12 != 0);
      puVar20 = *(unsigned long long **)(this + 0x10);
      for (puVar3 = local_40; puVar3 != (unsigned long long *)0x0;
          puVar3 = (unsigned long long *)((long)puVar3 + -1)) {
        puVar4 = puVar6;
        if (puVar14 == puVar17) {
          local_40 = puVar3;
          if (puVar19 < puVar6 || (long)puVar19 - (long)puVar6 == 0) {
            uVar12 = (long)puVar17 - (long)puVar6 >> 2;
            if (uVar12 == 0) {
              uVar12 = 1;
            }
            puVar4 = (unsigned long long *)new(uVar12 * 8);
            puVar3 = local_40;
            puVar16 = (unsigned long long *)((long)puVar4 + (uVar12 & 0x7ffffffffffffffc) * 2);
            puVar13 = puVar16;
            if (puVar19 != puVar14) {
              uVar11 = (long)puVar14 + (-8 - (long)puVar19);
              uVar7 = ((uint)(uVar11 >> 3) & 0x1fffffff) + 1;
              if ((uVar7 & 7) != 0) {
                lVar5 = -((unsigned long)uVar7 & 7);
                do {
                  *puVar13 = *puVar19;
                  puVar13 = puVar13 + 1;
                  puVar19 = puVar19 + 1;
                  lVar5 = lVar5 + 1;
                } while (lVar5 != 0);
              }
              if (0x37 < uVar11) {
                do {
                  *puVar13 = *puVar19;
                  puVar13[1] = puVar19[1];
                  puVar13[2] = puVar19[2];
                  puVar13[3] = puVar19[3];
                  puVar13[4] = puVar19[4];
                  puVar13[5] = puVar19[5];
                  puVar13[6] = puVar19[6];
                  puVar13[7] = puVar19[7];
                  puVar13 = puVar13 + 8;
                  puVar19 = puVar19 + 8;
                } while (puVar19 != puVar14);
              }
            }
            puVar17 = puVar4 + uVar12;
            puVar19 = puVar16;
            puVar14 = puVar13;
            if (puVar6 != (unsigned long long *)0x0) {
              local_38 = puVar4;
              delete(puVar6);
              puVar4 = local_38;
            }
          }
          else {
            lVar5 = (long)puVar19 - (long)puVar6 >> 3;
            puVar3 = (unsigned long long *)
                     ((long)puVar19 + ((lVar5 + 1) - (lVar5 + 1 >> 0x3f) & 0x3ffffffffffffffeU) * -4
                     );
            lVar5 = (long)puVar14 - (long)puVar19 >> 3;
            if (lVar5 != 0) {
              local_38 = puVar6;
              _memmove(puVar3,puVar19,(long)puVar14 - (long)puVar19);
              puVar6 = local_38;
            }
            puVar19 = puVar3;
            puVar4 = puVar6;
            puVar14 = puVar3 + lVar5;
            puVar3 = local_40;
          }
        }
        *puVar14 = puVar20[-1];
        puVar14 = puVar14 + 1;
        puVar20 = (unsigned long long *)(*(long *)(this + 0x10) + -8);
        *(unsigned long long **)(this + 0x10) = puVar20;
        puVar6 = puVar4;
      }
      puVar3 = *(unsigned long long **)(this + 8);
      puVar4 = puVar6;
      if (puVar3 != puVar20) {
        do {
          puVar6 = puVar4;
          if (puVar14 == puVar17) {
            if (puVar19 < puVar4 || (long)puVar19 - (long)puVar4 == 0) {
              uVar12 = (long)puVar17 - (long)puVar4 >> 2;
              if (uVar12 == 0) {
                uVar12 = 1;
              }
              local_40 = puVar3;
              puVar6 = (unsigned long long *)new(uVar12 * 8);
              puVar20 = (unsigned long long *)((long)puVar6 + (uVar12 & 0x7ffffffffffffffc) * 2);
              puVar16 = puVar20;
              if (puVar19 != puVar14) {
                uVar11 = (long)puVar14 + (-8 - (long)puVar19);
                uVar7 = ((uint)(uVar11 >> 3) & 0x1fffffff) + 1;
                if ((uVar7 & 7) != 0) {
                  lVar5 = -((unsigned long)uVar7 & 7);
                  do {
                    *puVar16 = *puVar19;
                    puVar16 = puVar16 + 1;
                    puVar19 = puVar19 + 1;
                    lVar5 = lVar5 + 1;
                  } while (lVar5 != 0);
                }
                if (0x37 < uVar11) {
                  do {
                    *puVar16 = *puVar19;
                    puVar16[1] = puVar19[1];
                    puVar16[2] = puVar19[2];
                    puVar16[3] = puVar19[3];
                    puVar16[4] = puVar19[4];
                    puVar16[5] = puVar19[5];
                    puVar16[6] = puVar19[6];
                    puVar16[7] = puVar19[7];
                    puVar16 = puVar16 + 8;
                    puVar19 = puVar19 + 8;
                  } while (puVar19 != puVar14);
                }
              }
              puVar17 = puVar6 + uVar12;
              puVar19 = puVar20;
              puVar3 = local_40;
              puVar14 = puVar16;
              if (puVar4 != (unsigned long long *)0x0) {
                delete(puVar4);
                puVar3 = local_40;
              }
            }
            else {
              lVar5 = (long)puVar19 - (long)puVar4 >> 3;
              puVar20 = (unsigned long long *)
                        ((long)puVar19 +
                        ((lVar5 + 1) - (lVar5 + 1 >> 0x3f) & 0x3ffffffffffffffeU) * -4);
              lVar5 = (long)puVar14 - (long)puVar19 >> 3;
              if (lVar5 != 0) {
                local_38 = puVar4;
                _memmove(puVar20,puVar19,(long)puVar14 - (long)puVar19);
                puVar4 = local_38;
              }
              puVar19 = puVar20;
              puVar6 = puVar4;
              puVar14 = puVar20 + lVar5;
            }
          }
          *puVar14 = *puVar3;
          puVar14 = puVar14 + 1;
          puVar3 = puVar3 + 1;
          puVar4 = puVar6;
        } while (puVar3 != *(unsigned long long **)(this + 0x10));
      }
      pvVar2 = *(void **)this;
      *(unsigned long long **)this = puVar6;
      *(unsigned long long **)(this + 8) = puVar19;
      *(unsigned long long **)(this + 0x10) = puVar14;
      *(unsigned long long **)(this + 0x18) = puVar17;
      *(long *)(this + 0x20) = (long)puVar18 + *(long *)(this + 0x20) + (long)puVar15 * 0x800;
      if (pvVar2 != (void *)0x0) {
        delete(pvVar2);
        return;
      }
    }
    else {
      if (lVar5 != *(long *)this) {
        local_40 = puVar17;
        do {
          local_48 = (wchar16 *)new(0x1000);
          __split_buffer<char16_t*,// std code
                    ((__split_buffer<char16_t*,// std code
          lVar5 = 0;
          if (*(long *)(this + 0x10) - *(long *)(this + 8) == 8) {
            lVar5 = -1;
          }
          lVar5 = *(long *)(this + 0x20) + 0x800 + lVar5;
          *(long *)(this + 0x20) = lVar5;
          puVar17 = local_40;
          if (uVar12 == 1) goto LAB_10008e5bf;
          uVar12 = uVar12 - 1;
        } while (*(long *)(this + 8) != *(long *)this);
      }
      if (puVar19 < puVar15) {
        puVar15 = puVar19;
      }
      uVar11 = uVar12;
      do {
        local_48 = (wchar16 *)new(0x1000);
        __split_buffer<char16_t*,// std code
                  ((__split_buffer<char16_t*,// std code
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
      lVar5 = *(long *)(this + 0x20);
      puVar17 = (unsigned long long *)((uVar12 - 1) - ~(unsigned long)puVar15);
LAB_10008e5bf:
      *(long *)(this + 0x20) = (long)puVar17 * 0x800 + lVar5;
      if (puVar17 != (unsigned long long *)0x0) {
        do {
          local_48 = *(wchar16 **)(*(long *)(this + 0x10) + -8);
          *(long *)(this + 0x10) = *(long *)(this + 0x10) + -8;
          __split_buffer<char16_t*,// std code
                    ((__split_buffer<char16_t*,// std code
          puVar17 = (unsigned long long *)((long)puVar17 + -1);
        } while (puVar17 != (unsigned long long *)0x0);
      }
    }
  }
  return;
}

void allocator<char16_t> >::~deque() {
unsigned long long *puVar1;
  unsigned long uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  unsigned long long *puVar6;
  long lVar7;
  
  puVar6 = *(unsigned long long **)(this + 8);
  puVar1 = *(unsigned long long **)(this + 0x10);
  uVar2 = *(unsigned long *)(this + 0x20);
  plVar4 = puVar6 + (uVar2 >> 0xb);
  lVar3 = (long)puVar1 - (long)puVar6;
  if (lVar3 == 0) {
    lVar7 = 0;
    lVar5 = 0;
  }
  else {
    lVar7 = (unsigned long)((uint)uVar2 & 0x7ff) * 2 + *plVar4;
    lVar5 = (unsigned long)((uint)(uVar2 + *(long *)(this + 0x28)) & 0x7ff) * 2 +
            puVar6[uVar2 + *(long *)(this + 0x28) >> 0xb];
  }
  while (lVar7 != lVar5) {
    lVar7 = lVar7 + 2;
    if (lVar7 - *plVar4 == 0x1000) {
      lVar7 = plVar4[1];
      plVar4 = plVar4 + 1;
    }
  }
  *(unsigned long long *)(this + 0x28) = 0;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    delete((void *)*puVar6);
    puVar6 = (unsigned long long *)(*(long *)(this + 8) + 8);
    *(unsigned long long **)(this + 8) = puVar6;
    puVar1 = *(unsigned long long **)(this + 0x10);
    lVar3 = (long)puVar1 - (long)puVar6;
  }
  if (uVar2 == 2) {
    *(unsigned long long *)(this + 0x20) = 0x800;
  }
  else if (uVar2 == 1) {
    *(unsigned long long *)(this + 0x20) = 0x400;
  }
  if (puVar6 != puVar1) {
    do {
      delete((void *)*puVar6);
      puVar6 = puVar6 + 1;
    } while (puVar1 != puVar6);
    lVar3 = *(long *)(this + 0x10);
    if (lVar3 != *(long *)(this + 8)) {
      *(unsigned long *)(this + 0x10) =
           (~((lVar3 + -8) - *(long *)(this + 8)) & 0xfffffffffffffff8U) + lVar3;
    }
  }
  if (*(void **)this != (void *)0x0) {
    delete(*(void **)this);
    return;
  }
  return;
}
}
