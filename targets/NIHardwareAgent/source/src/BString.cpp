#include <ni/controller_editor/BString.hpp>
namespace Bome {

BString::BString(char const*, int, int) {
unsigned long long uVar1;
  int iVar2;
  
  iVar2 = bstrlen(param_1,param_2);
  uVar1 = BStringContainer::create((uchar *)param_1,iVar2,param_3);
  *(unsigned long long *)this = uVar1;
  
}

void BString::createEmpty(int param_1) {
}

void BString::equals(char const*) const {
int iVar1;
  
  iVar1 = bstrcmp((char *)(*(long *)this + 0x14),param_1);
  return iVar1 == 0;
}

void BString::format(char const*, ...) {
char in_AL;
  unsigned long long in_RCX;
  unsigned long long in_RDX;
  char *in_RSI;
  unsigned long long in_R8;
  unsigned long long in_R9;
  unsigned long long in_XMM0_Qa;
  unsigned long long in_XMM1_Qa;
  unsigned long long in_XMM2_Qa;
  unsigned long long in_XMM3_Qa;
  unsigned long long in_XMM4_Qa;
  unsigned long long in_XMM5_Qa;
  unsigned long long in_XMM6_Qa;
  unsigned long long in_XMM7_Qa;
  unsigned char local_e8 [16];
  unsigned long long local_d8;
  unsigned long long local_d0;
  unsigned long long local_c8;
  unsigned long long local_c0;
  unsigned long long local_b8;
  unsigned long long local_a8;
  unsigned long long local_98;
  unsigned long long local_88;
  unsigned long long local_78;
  unsigned long long local_68;
  unsigned long long local_58;
  unsigned long long local_48;
  unsigned long long local_38;
  unsigned char *local_30;
  unsigned char *local_28;
  long local_18;
  
  local_28 = local_e8;
  if (in_AL != '\0') {
    local_b8 = in_XMM0_Qa;
    local_a8 = in_XMM1_Qa;
    local_98 = in_XMM2_Qa;
    local_88 = in_XMM3_Qa;
    local_78 = in_XMM4_Qa;
    local_68 = in_XMM5_Qa;
    local_58 = in_XMM6_Qa;
    local_48 = in_XMM7_Qa;
  }
  local_18 = *(long *)PTR____stack_chk_guard_1009cc2c8;
  local_30 = &stack0x00000008;
  local_38 = 0x3000000010;
  local_d8 = in_RDX;
  local_d0 = in_RCX;
  local_c8 = in_R8;
  local_c0 = in_R9;
  BString_format((Bome *)param_1,in_RSI,(__va_list_tag *)&local_38);
  if (*(long *)PTR____stack_chk_guard_1009cc2c8 == local_18) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

void BString::isEmpty() const {
return *(char *)(*(long *)this + 0x14) == '\0';
}

void BString::isNotEmpty() const {
return *(char *)(*(long *)this + 0x14) != '\0';
}

void BString::setCapacity(int) const {
void *pvVar1;
  BStringOtherRepresentations *this_00;
  int iVar2;
  long lVar3;
  unsigned long long uVar4;
  
  lVar3 = *(long *)this;
  iVar2 = *(int *)(lVar3 + 0x10);
  if (param_1 <= iVar2) {
    iVar2 = _OSAtomicAdd32(0,lVar3);
    if (iVar2 < 2) {
      return this;
    }
    lVar3 = *(long *)this;
    iVar2 = *(int *)(lVar3 + 0x10);
  }
  uVar4 = BStringContainer::create((uchar *)(lVar3 + 0x14),iVar2,param_1);
  pvVar1 = *(void **)this;
  iVar2 = _OSAtomicAdd32(0xffffffff,pvVar1);
  if (iVar2 == 0) {
    this_00 = *(BStringOtherRepresentations **)((long)pvVar1 + 8);
    if (this_00 != (BStringOtherRepresentations *)0x0) {
      BStringOtherRepresentations::~BStringOtherRepresentations(this_00);
      delete(this_00);
      *(unsigned long long *)((long)pvVar1 + 8) = 0;
    }
    _free(pvVar1);
  }
  *(unsigned long long *)this = uVar4;
  return this;
}

void BString::startsWith(char const*, int) const {
long lVar1;
  int iVar2;
  bool bVar3;
  
  if (*param_1 == '\0') {
    bVar3 = false;
  }
  else {
    lVar1 = *(long *)this;
    iVar2 = bstrlen(param_1);
    iVar2 = BString_compare((uchar *)(lVar1 + 0x14),(uchar *)param_1,param_2,iVar2);
    bVar3 = iVar2 == 0;
  }
  return bVar3;
}

void BString::substr(int, int) const {
uchar *puVar1;
  unsigned long long uVar2;
  int in_ECX;
  int in_EDX;
  int iVar3;
  uchar *puVar4;
  unsigned int in_register_00000034;
  BString *pBVar5;
  unsigned int in_register_0000003c;
  BString *this;
  
  this = (BString *)CONCAT44(in_register_0000003c,param_1);
  pBVar5 = (BString *)CONCAT44(in_register_00000034,param_2);
  if ((in_ECX != -1) || (in_ECX = 0x7fffffff, in_EDX != 0)) {
    if ((in_ECX != 0) && (-1 < in_EDX)) {
      puVar4 = (uchar *)(*(long *)pBVar5 + 0x14);
      puVar1 = puVar4;
      if (0 < in_EDX) {
        puVar1 = (uchar *)(*(long *)pBVar5 + (unsigned long)(in_EDX - 1) + 0x15);
        iVar3 = in_EDX + 1;
        do {
          if (*puVar4 == '\0') goto LAB_1001fea99;
          puVar4 = puVar4 + 1;
          iVar3 = iVar3 + -1;
        } while (1 < iVar3);
      }
      iVar3 = bstrlen((char *)puVar1,in_ECX);
      uVar2 = BStringContainer::create(puVar1,iVar3,-1);
      *(unsigned long long *)this = uVar2;
      return this;
    }
LAB_1001fea99:
    pBVar5 = (BString *)&empty;
  }
  BString(this,pBVar5);
  return this;
}

void BString::toCFString() const {
_CFStringCreateWithCString(0,*(long *)this + 0x14,0x8000100);
  return;
}

void BString::toUTF8() const {
return *(long *)this + 0x14;
}

BString::~BString() {
void *pvVar1;
  BStringOtherRepresentations *this_00;
  int iVar2;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    iVar2 = _OSAtomicAdd32(0xffffffff,pvVar1);
    if (iVar2 == 0) {
      this_00 = *(BStringOtherRepresentations **)((long)pvVar1 + 8);
      if (this_00 != (BStringOtherRepresentations *)0x0) {
        BStringOtherRepresentations::~BStringOtherRepresentations(this_00);
        delete(this_00);
        *(unsigned long long *)((long)pvVar1 + 8) = 0;
      }
      _free(pvVar1);
      return;
    }
  }
  return;
}
}
