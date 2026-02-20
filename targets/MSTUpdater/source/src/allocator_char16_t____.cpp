#include <ni/controller_editor/allocator_char16_t____.hpp>
namespace std::__split_buffer<char16_t*, std {

void allocator<char16_t*> >::push_back(char16_t*&&) {
unsigned long long *puVar1;
  unsigned long long *puVar2;
  unsigned long uVar3;
  void *pvVar4;
  long lVar5;
  unsigned long long *puVar6;
  unsigned long long *puVar7;
  uint uVar8;
  unsigned long long *puVar9;
  long lVar10;
  unsigned long uVar11;
  
  puVar2 = *(unsigned long long **)(this + 0x10);
  puVar7 = puVar2;
  if (puVar2 == *(unsigned long long **)(this + 0x18)) {
    puVar9 = *(unsigned long long **)this;
    puVar6 = *(unsigned long long **)(this + 8);
    if (puVar6 < puVar9 || (long)puVar6 - (long)puVar9 == 0) {
      uVar3 = (long)*(unsigned long long **)(this + 0x18) - (long)puVar9 >> 2;
      uVar11 = 1;
      if (uVar3 != 0) {
        uVar11 = uVar3;
      }
      pvVar4 = new(uVar11 * 8);
      puVar1 = (unsigned long long *)((long)pvVar4 + (uVar11 & 0x7ffffffffffffffc) * 2);
      puVar7 = puVar1;
      if (puVar6 != puVar2) {
        uVar3 = (long)puVar2 + (-8 - (long)puVar6);
        uVar8 = ((uint)(uVar3 >> 3) & 0x1fffffff) + 1;
        if ((uVar8 & 7) != 0) {
          lVar5 = -((unsigned long)uVar8 & 7);
          do {
            *puVar7 = *puVar6;
            puVar7 = puVar7 + 1;
            puVar6 = puVar6 + 1;
            lVar5 = lVar5 + 1;
          } while (lVar5 != 0);
        }
        if (0x37 < uVar3) {
          do {
            *puVar7 = *puVar6;
            puVar7[1] = puVar6[1];
            puVar7[2] = puVar6[2];
            puVar7[3] = puVar6[3];
            puVar7[4] = puVar6[4];
            puVar7[5] = puVar6[5];
            puVar7[6] = puVar6[6];
            puVar7[7] = puVar6[7];
            puVar7 = puVar7 + 8;
            puVar6 = puVar6 + 8;
          } while (puVar6 != puVar2);
        }
        puVar9 = *(unsigned long long **)this;
      }
      *(void **)this = pvVar4;
      *(unsigned long long **)(this + 8) = puVar1;
      *(unsigned long long **)(this + 0x10) = puVar7;
      *(void **)(this + 0x18) = (void *)((long)pvVar4 + uVar11 * 8);
      if (puVar9 != (unsigned long long *)0x0) {
        delete(puVar9);
        puVar7 = *(unsigned long long **)(this + 0x10);
      }
    }
    else {
      lVar5 = (long)puVar6 - (long)puVar9 >> 3;
      lVar5 = (lVar5 + 1) - (lVar5 + 1 >> 0x3f) >> 1;
      puVar7 = puVar6 + -lVar5;
      lVar10 = (long)puVar2 - (long)puVar6 >> 3;
      if (lVar10 != 0) {
        _memmove(puVar7,puVar6,(long)puVar2 - (long)puVar6);
        puVar6 = *(unsigned long long **)(this + 8);
      }
      puVar7 = puVar7 + lVar10;
      *(unsigned long long **)(this + 0x10) = puVar7;
      *(unsigned long long **)(this + 8) = puVar6 + -lVar5;
    }
  }
  *puVar7 = *param_1;
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
  return;
}

void allocator<char16_t*> >::push_front(char16_t* const&) {
long lVar1;
  void *pvVar2;
  unsigned long long *puVar3;
  unsigned long long *puVar4;
  unsigned long uVar5;
  uint uVar6;
  unsigned long long *puVar7;
  unsigned long long *puVar8;
  long lVar9;
  
  puVar4 = *(unsigned long long **)(this + 8);
  puVar7 = puVar4;
  if (puVar4 == *(unsigned long long **)this) {
    puVar8 = *(unsigned long long **)(this + 0x10);
    puVar7 = *(unsigned long long **)(this + 0x18);
    if (puVar8 < puVar7) {
      lVar1 = (long)puVar7 - (long)puVar8 >> 3;
      lVar9 = (lVar1 + 1) - (lVar1 + 1 >> 0x3f) >> 1;
      puVar7 = puVar8 + lVar9;
      lVar1 = (long)puVar8 - (long)puVar4 >> 3;
      if (lVar1 != 0) {
        puVar7 = puVar7 + -lVar1;
        _memmove(puVar7,puVar4,(long)puVar8 - (long)puVar4);
        puVar8 = *(unsigned long long **)(this + 0x10);
      }
      *(unsigned long long **)(this + 8) = puVar7;
      *(unsigned long long **)(this + 0x10) = puVar8 + lVar9;
    }
    else {
      lVar9 = (long)puVar7 - (long)*(unsigned long long **)this >> 2;
      lVar1 = 1;
      if (lVar9 != 0) {
        lVar1 = lVar9;
      }
      pvVar2 = new(lVar1 * 8);
      puVar7 = (unsigned long long *)((lVar1 * 2 + 6U & 0xfffffffffffffff8) + (long)pvVar2);
      puVar3 = puVar7;
      if (puVar4 != puVar8) {
        uVar5 = (long)puVar8 + (-8 - (long)puVar4);
        uVar6 = ((uint)(uVar5 >> 3) & 0x1fffffff) + 1;
        if ((uVar6 & 7) != 0) {
          lVar9 = -((unsigned long)uVar6 & 7);
          do {
            *puVar3 = *puVar4;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
            lVar9 = lVar9 + 1;
          } while (lVar9 != 0);
        }
        if (0x37 < uVar5) {
          do {
            *puVar3 = *puVar4;
            puVar3[1] = puVar4[1];
            puVar3[2] = puVar4[2];
            puVar3[3] = puVar4[3];
            puVar3[4] = puVar4[4];
            puVar3[5] = puVar4[5];
            puVar3[6] = puVar4[6];
            puVar3[7] = puVar4[7];
            puVar3 = puVar3 + 8;
            puVar4 = puVar4 + 8;
          } while (puVar4 != puVar8);
        }
        puVar4 = *(unsigned long long **)this;
      }
      *(void **)this = pvVar2;
      *(unsigned long long **)(this + 8) = puVar7;
      *(unsigned long long **)(this + 0x10) = puVar3;
      *(void **)(this + 0x18) = (void *)((long)pvVar2 + lVar1 * 8);
      if (puVar4 != (unsigned long long *)0x0) {
        delete(puVar4);
        puVar7 = *(unsigned long long **)(this + 8);
      }
    }
  }
  puVar7[-1] = *param_1;
  *(long *)(this + 8) = *(long *)(this + 8) + -8;
  return;
}
}
