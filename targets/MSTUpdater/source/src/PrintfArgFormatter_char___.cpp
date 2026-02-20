#include <ni/controller_editor/PrintfArgFormatter_char___.hpp>
namespace fmt::PrintfFormatter<char, fmt {

void PrintfArgFormatter<char> >::get_arg(char const*, unsigned int) {
int iVar1;
  FormatError *pFVar2;
  int in_ECX;
  char *in_RDX;
  unsigned int in_register_00000034;
  char **ppcVar3;
  char *pcVar4;
  char *local_20;
  
  ppcVar3 = (char **)CONCAT44(in_register_00000034,param_2);
  local_20 = (char *)0x0;
  iVar1 = *(int *)(ppcVar3 + 2);
  if (in_ECX == -1) {
    if (-1 < iVar1) {
      *(int *)(ppcVar3 + 2) = iVar1 + 1;
      internal::FormatterBase::do_get_arg((uint)param_1,ppcVar3);
      goto LAB_1001ae497;
    }
    local_20 = "cannot switch from manual to automatic argument indexing";
  }
  else {
    if (iVar1 < 1) {
      *(unsigned int *)(ppcVar3 + 2) = 0xffffffff;
      internal::FormatterBase::do_get_arg((uint)param_1,ppcVar3);
      goto LAB_1001ae497;
    }
    local_20 = "cannot switch from automatic to manual argument indexing";
  }
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
LAB_1001ae497:
  if (local_20 == (char *)0x0) {
    return param_1;
  }
  pFVar2 = (FormatError *)___cxa_allocate_exception(0x10);
  pcVar4 = "invalid format string";
  if (*in_RDX != '\0') {
    pcVar4 = local_20;
  }
  FormatError::FormatError(pFVar2,pcVar4);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(pFVar2,&FormatError::typeinfo,FormatError::~FormatError);
}
}
