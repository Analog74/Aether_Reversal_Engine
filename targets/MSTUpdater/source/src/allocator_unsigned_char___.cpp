#include <ni/controller_editor/allocator_unsigned_char___.hpp>
namespace std::vector<unsigned char, std {

void allocator<unsigned char> >::__append(unsigned long) {
void *pvVar1;
  void *pvVar2;
  size_t sVar3;
  unsigned char *puVar4;
  unsigned char *puVar5;
  unsigned long uVar6;
  long lVar7;
  unsigned char *puVar8;
  
  puVar4 = *(unsigned char **)(this + 8);
  if (param_1 <= (unsigned long)(*(long *)(this + 0x10) - (long)puVar4)) {
    uVar6 = param_1 - 1;
    if ((param_1 & 3) != 0) {
      lVar7 = -(param_1 & 3);
      do {
        *puVar4 = 0;
        puVar4 = (unsigned char *)(*(long *)(this + 8) + 1);
        *(unsigned char **)(this + 8) = puVar4;
        param_1 = param_1 - 1;
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0);
    }
    if (uVar6 < 3) {
      return;
    }
    do {
      *puVar4 = 0;
      lVar7 = *(long *)(this + 8);
      *(long *)(this + 8) = lVar7 + 1;
      *(unsigned char *)(lVar7 + 1) = 0;
      lVar7 = *(long *)(this + 8);
      *(long *)(this + 8) = lVar7 + 1;
      *(unsigned char *)(lVar7 + 1) = 0;
      lVar7 = *(long *)(this + 8);
      *(long *)(this + 8) = lVar7 + 1;
      *(unsigned char *)(lVar7 + 1) = 0;
      puVar4 = (unsigned char *)(*(long *)(this + 8) + 1);
      *(unsigned char **)(this + 8) = puVar4;
      param_1 = param_1 - 4;
    } while (param_1 != 0);
    return;
  }
  lVar7 = *(long *)this;
  puVar4 = puVar4 + (param_1 - lVar7);
  if ((long)puVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    // std code
  }
  uVar6 = *(long *)(this + 0x10) - lVar7;
  if (uVar6 < 0x3fffffffffffffff) {
    puVar5 = (unsigned char *)(uVar6 * 2);
    if (puVar5 < puVar4) {
      puVar5 = puVar4;
    }
    lVar7 = *(long *)(this + 8) - lVar7;
    puVar4 = (unsigned char *)0x0;
    pvVar2 = (void *)0x0;
    if (puVar5 == (unsigned char *)0x0) goto LAB_1001b15e5;
  }
  else {
    lVar7 = *(long *)(this + 8) - lVar7;
    puVar5 = (unsigned char *)0x7fffffffffffffff;
  }
  puVar4 = puVar5;
  pvVar2 = new((unsigned long)puVar4);
LAB_1001b15e5:
  puVar8 = (unsigned char *)(lVar7 + (long)pvVar2);
  uVar6 = param_1 - 1;
  puVar5 = puVar8;
  if ((param_1 & 7) != 0) {
    lVar7 = -(param_1 & 7);
    do {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
      param_1 = param_1 - 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0);
  }
  if (6 < uVar6) {
    do {
      *puVar5 = 0;
      *(unsigned int *)(puVar5 + 1) = 0;
      *(void2 *)(puVar5 + 5) = 0;
      puVar5[7] = 0;
      puVar5 = puVar5 + 8;
      param_1 = param_1 - 8;
    } while (param_1 != 0);
  }
  pvVar1 = *(void **)this;
  sVar3 = *(long *)(this + 8) - (long)pvVar1;
  if (0 < (long)sVar3) {
    memcpy(puVar8 + -sVar3,pvVar1,sVar3);
  }
  *(unsigned char **)this = puVar8 + -sVar3;
  *(unsigned char **)(this + 8) = puVar5;
  *(unsigned char **)(this + 0x10) = (unsigned char *)((long)pvVar2 + (long)puVar4);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  delete(pvVar1);
  return;
}
}
