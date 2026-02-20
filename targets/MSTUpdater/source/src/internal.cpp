#include <ni/controller_editor/internal.hpp>
namespace fmt::ArgVisitor<fmt::internal::WidthHandler, unsigned int>::visit(fmt {

void internal::Arg const&) {
double dVar1;
  uint uVar2;
  unsigned char *puVar3;
  unsigned long uVar4;
  FormatError *pFVar5;
  unsigned char *puVar6;
  unsigned char *puVar7;
  Arg *pAVar8;
  unsigned char auStackY_38 [8];
  unsigned long long uStackY_30;
  
  puVar6 = &stack0xffffffffffffffd8;
  puVar7 = &stack0xffffffffffffffd8;
  uVar4 = 0;
  puVar3 = &stack0xffffffffffffffd8;
  pAVar8 = param_1;
  switch(*(unsigned int *)(param_1 + 0x10)) {
  case 2:
    uVar2 = *(uint *)param_1;
    uVar4 = (unsigned long)uVar2;
    if ((int)uVar2 < 0) {
      *(unsigned int *)(*(long *)this + 8) = 1;
      uVar4 = (unsigned long)-uVar2;
      if (0 < (int)uVar2) {
        uStackY_30 = 0x1001af092;
        pFVar5 = (FormatError *)___cxa_allocate_exception(0x10);
        uStackY_30 = 0x1001af0a4;
        FormatError::FormatError(pFVar5,"number is too big");
        goto LAB_1001af1d8;
      }
    }
    break;
  case 3:
    if (-1 < (int)*(uint *)param_1) {
      return (unsigned long)*(uint *)param_1;
    }
    uStackY_30 = 0x1001af134;
    pFVar5 = (FormatError *)___cxa_allocate_exception(0x10);
    uStackY_30 = 0x1001af146;
    FormatError::FormatError(pFVar5,"number is too big");
    puVar7 = &stack0xffffffffffffffd8;
    goto LAB_1001af1d8;
  case 4:
    uVar4 = *(unsigned long *)param_1;
    if ((long)uVar4 < 0) {
      *(unsigned int *)(*(long *)this + 8) = 1;
      uVar4 = -uVar4;
    }
    if ((uVar4 & 0xffffffff80000000) != 0) {
      uStackY_30 = 0x1001af0e1;
      pFVar5 = (FormatError *)___cxa_allocate_exception(0x10);
      uStackY_30 = 0x1001af0f3;
      FormatError::FormatError(pFVar5,"number is too big");
      puVar7 = &stack0xffffffffffffffd8;
      goto LAB_1001af1d8;
    }
    break;
  case 5:
    uVar4 = *(unsigned long *)param_1;
    if ((uVar4 & 0xffffffff80000000) != 0) {
      uStackY_30 = 0x1001af10d;
      pFVar5 = (FormatError *)___cxa_allocate_exception(0x10);
      uStackY_30 = 0x1001af11f;
      FormatError::FormatError(pFVar5,"number is too big");
      puVar7 = &stack0xffffffffffffffd8;
      goto LAB_1001af1d8;
    }
    break;
  case 6:
    uVar4 = (unsigned long)(*(int *)param_1 != 0);
    break;
  case 7:
    uVar2 = *(uint *)param_1;
    if (-1 < (int)uVar2) {
      return (unsigned long)uVar2;
    }
    *(unsigned int *)(*(long *)this + 8) = 1;
    if ((int)uVar2 < 1) {
      return (unsigned long)-uVar2;
    }
    goto LAB_1001af1bc;
  case 8:
    goto switchD_1001af06a_caseD_8;
  case 9:
    goto switchD_1001af06a_caseD_9;
  case 10:
    goto switchD_1001af06a_caseD_a;
  case 0xb:
    goto switchD_1001af06a_caseD_b;
  case 0xc:
    goto switchD_1001af06a_caseD_c;
  case 0xe:
    pAVar8 = *(Arg **)param_1;
    uStackY_30 = 0x1001af177;
    visit_custom(this,pAVar8,*(unsigned long long *)(param_1 + 8));
  case 0xd:
    param_1 = *(Arg **)pAVar8;
    uStackY_30 = 0x1001af17f;
    visit_pointer(this);
    goto switchD_1001af06a_caseD_c;
  }
  return uVar4;
switchD_1001af06a_caseD_c:
  param_1 = *(Arg **)param_1;
  uStackY_30 = 0x1001af18e;
  visit_wstring();
switchD_1001af06a_caseD_b:
  param_1 = *(Arg **)param_1;
  uStackY_30 = 0x1001af19d;
  visit_string();
switchD_1001af06a_caseD_a:
  param_1 = *(Arg **)param_1;
  uStackY_30 = 0x1001af1a5;
  visit_cstring((char *)this);
switchD_1001af06a_caseD_9:
  uStackY_30 = 0x1001af1af;
  visit_long_double(*(longdouble *)param_1);
  puVar3 = auStackY_38;
switchD_1001af06a_caseD_8:
  puVar6 = puVar3;
  dVar1 = *(double *)param_1;
  *(unsigned long long *)(puVar6 + -8) = 0x1001af1bc;
  visit_double(dVar1);
LAB_1001af1bc:
  *(unsigned long long *)(puVar6 + -8) = 0x1001af1c6;
  pFVar5 = (FormatError *)___cxa_allocate_exception(0x10);
  *(unsigned long long *)(puVar6 + -8) = 0x1001af1d8;
  FormatError::FormatError(pFVar5,"number is too big");
  puVar7 = puVar6;
LAB_1001af1d8:
                    /* WARNING: Subroutine does not return */
  *(void **)(puVar7 + -8) = &UNK_1001af1ee;
  ___cxa_throw(pFVar5,&FormatError::typeinfo,FormatError::~FormatError);
}
}
