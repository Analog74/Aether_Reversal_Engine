#include <ni/controller_editor/ArgFormatter_char___.hpp>
namespace fmt::BasicFormatter<char, fmt {

void ArgFormatter<char> >::parse_arg_index(char const*&) {
char *pcVar1;
  FormatError *pFVar2;
  uint uVar3;
  unsigned long long *in_RDX;
  char cVar4;
  char **in_RSI;
  char *local_28;
  
  local_28 = (char *)0x0;
  pcVar1 = (char *)*in_RDX;
  cVar4 = *pcVar1;
  if ((byte)(cVar4 - 0x30U) < 10) {
    uVar3 = 0;
    do {
      pcVar1 = pcVar1 + 1;
      if (0xccccccc < uVar3) goto LAB_1001a4789;
      uVar3 = cVar4 + -0x30 + uVar3 * 10;
      *in_RDX = pcVar1;
      cVar4 = *pcVar1;
    } while ((byte)(cVar4 - 0x30U) < 10);
    if ((int)uVar3 < 0) {
LAB_1001a4789:
      pFVar2 = (FormatError *)___cxa_allocate_exception(0x10);
      FormatError::FormatError(pFVar2,"number is too big");
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(pFVar2,&FormatError::typeinfo,FormatError::~FormatError);
    }
    if (0 < *(int *)(in_RSI + 2)) {
      local_28 = "cannot switch from automatic to manual argument indexing";
      goto LAB_1001a474f;
    }
    *(unsigned int *)(in_RSI + 2) = 0xffffffff;
  }
  else {
    if (*(int *)(in_RSI + 2) < 0) {
      local_28 = "cannot switch from manual to automatic argument indexing";
LAB_1001a474f:
      param_1[2] = (char *)0x0;
      param_1[3] = (char *)0x0;
      *param_1 = (char *)0x0;
      param_1[1] = (char *)0x0;
      goto LAB_1001a4774;
    }
    *(int *)(in_RSI + 2) = *(int *)(in_RSI + 2) + 1;
  }
  internal::FormatterBase::do_get_arg((uint)param_1,in_RSI);
LAB_1001a4774:
  if (local_28 != (char *)0x0) {
    pFVar2 = (FormatError *)___cxa_allocate_exception(0x10);
    if ((*(char *)*in_RDX != '}') && (*(char *)*in_RDX != ':')) {
      local_28 = "invalid format string";
    }
    FormatError::FormatError(pFVar2,local_28);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(pFVar2,&FormatError::typeinfo,FormatError::~FormatError);
  }
  return param_1;
}

void ArgFormatter<char> >::parse_arg_name(char const*&) {
char cVar1;
  char *pcVar2;
  unsigned long long *puVar3;
  unsigned long uVar4;
  char *pcVar5;
  int iVar6;
  FormatError *pFVar7;
  unsigned long long *in_RDX;
  unsigned long uVar8;
  unsigned long long *puVar9;
  ArgList *in_RSI;
  char *pcVar10;
  unsigned long uVar11;
  char *local_38;
  
  pcVar2 = (char *)*in_RDX;
  pcVar10 = pcVar2;
  do {
    do {
      pcVar10 = pcVar10 + 1;
      *in_RDX = pcVar10;
      cVar1 = *pcVar10;
    } while ((byte)(cVar1 + 0x9fU) < 0x1a);
  } while ((((byte)(cVar1 - 0x30U) < 10) || (cVar1 == '_')) || ((byte)(cVar1 + 0xbfU) < 0x1a));
  if (*(int *)(in_RSI + 0x10) < 1) {
    *(unsigned int *)(in_RSI + 0x10) = 0xffffffff;
    internal::ArgMap<char>::init((ArgMap<char> *)(in_RSI + 0x20),in_RSI);
    puVar9 = *(unsigned long long **)(in_RSI + 0x20);
    puVar3 = *(unsigned long long **)(in_RSI + 0x28);
    local_38 = "argument not found";
    if (puVar9 != puVar3) {
      uVar11 = (long)pcVar10 - (long)pcVar2;
      do {
        uVar4 = puVar9[1];
        uVar8 = uVar11;
        if (uVar4 < uVar11) {
          uVar8 = uVar4;
        }
        if (uVar8 == 0) {
          if (uVar4 == uVar11) goto LAB_1001a468b;
        }
        else {
          iVar6 = _memcmp((void *)*puVar9,pcVar2,uVar8);
          if ((uVar4 == uVar11) && (iVar6 == 0)) {
LAB_1001a468b:
            pcVar2 = (char *)puVar9[2];
            pcVar10 = (char *)puVar9[3];
            pcVar5 = (char *)puVar9[5];
            param_1[2] = (char *)puVar9[4];
            param_1[3] = pcVar5;
            *param_1 = pcVar2;
            param_1[1] = pcVar10;
            return;
          }
        }
        puVar9 = puVar9 + 6;
      } while (puVar3 != puVar9);
    }
  }
  else {
    local_38 = "cannot switch from automatic to manual argument indexing";
  }
  param_1[2] = (char *)0x0;
  param_1[3] = (char *)0x0;
  *param_1 = (char *)0x0;
  param_1[1] = (char *)0x0;
  pFVar7 = (FormatError *)___cxa_allocate_exception(0x10);
  FormatError::FormatError(pFVar7,local_38);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(pFVar7,&FormatError::typeinfo,FormatError::~FormatError);
}
}
