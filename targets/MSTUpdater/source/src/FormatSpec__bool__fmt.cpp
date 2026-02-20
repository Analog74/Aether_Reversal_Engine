#include <ni/controller_editor/FormatSpec__bool__fmt.hpp>
namespace void fmt::BasicWriter<char>::write_int<bool, fmt {

void FormatSpec>(bool, fmt::FormatSpec) {
char cVar1;
  uint in_EAX;
  uint uVar2;
  long lVar3;
  byte *pbVar4;
  unsigned char uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  unsigned long uVar10;
  unsigned long in_stack_00000010;
  unsigned long long in_stack_00000018;
  unsigned long long uStack_38;
  
  uStack_38 = (unsigned long)in_EAX;
  uVar10 = 0;
  if ((in_stack_00000010 & 0x100000000) != 0) {
    uVar5 = 0x2b;
    if ((in_stack_00000010 & 0x200000000) == 0) {
      uVar5 = 0x20;
    }
    uStack_38 = (unsigned long)CONCAT14(uVar5,in_EAX);
    uVar10 = 1;
  }
  uVar7 = (uint)param_2;
  uVar2 = (uint)uVar10;
  switch(in_stack_00000018._4_1_) {
  case 'B':
  case 'b':
    if ((in_stack_00000010 & 0x800000000) != 0) {
      *(unsigned char *)((long)&uStack_38 + uVar10 + 4) = 0x30;
      *(char *)((long)&uStack_38 + uVar10 + 5) = in_stack_00000018._4_1_;
      uVar10 = (unsigned long)(uVar2 | 2);
    }
    uVar8 = 0;
    uVar2 = uVar7;
    do {
      uVar8 = uVar8 + 1;
      uVar2 = uVar2 >> 1;
    } while (uVar2 != 0);
    pbVar4 = (byte *)prepare_int_buffer<fmt::FormatSpec>
                               (param_1,uVar8,(FormatSpec *)&stack0x00000008,
                                (char *)((long)&uStack_38 + 4),(uint)uVar10);
    do {
      *pbVar4 = (byte)uVar7 & 1 | 0x30;
      pbVar4 = pbVar4 + -1;
      uVar7 = uVar7 >> 1;
    } while (uVar7 != 0);
    break;
  case 'C':
  case 'D':
  case 'E':
  case 'F':
  case 'G':
  case 'H':
  case 'I':
  case 'J':
  case 'K':
  case 'L':
  case 'M':
  case 'N':
  case 'O':
  case 'P':
  case 'Q':
  case 'R':
  case 'S':
  case 'T':
  case 'U':
  case 'V':
  case 'W':
  case 'Y':
  case 'Z':
  case '[':
  case '\\':
  case ']':
  case '^':
  case '_':
  case '`':
  case 'a':
  case 'c':
  case 'e':
  case 'f':
  case 'g':
  case 'h':
  case 'i':
  case 'j':
  case 'k':
  case 'l':
  case 'm':
  case 'p':
  case 'q':
  case 'r':
  case 's':
  case 't':
  case 'u':
  case 'v':
  case 'w':
switchD_1001a8e9e_caseD_43:
    cVar1 = FormatSpec::flag((FormatSpec *)&stack0x00000008,0x10);
    pcVar9 = "integer";
    if (cVar1 != '\0') {
      pcVar9 = "char";
    }
                    /* WARNING: Subroutine does not return */
    internal::report_unknown_type(in_stack_00000018._4_1_,pcVar9);
  case 'X':
  case 'x':
    if ((in_stack_00000010 & 0x800000000) != 0) {
      *(unsigned char *)((long)&uStack_38 + uVar10 + 4) = 0x30;
      *(char *)((long)&uStack_38 + uVar10 + 5) = in_stack_00000018._4_1_;
      uVar10 = (unsigned long)(uVar2 | 2);
    }
    uVar8 = 0;
    uVar2 = uVar7;
    do {
      uVar8 = uVar8 + 1;
      uVar2 = uVar2 >> 4;
    } while (uVar2 != 0);
    pcVar9 = prepare_int_buffer<fmt::FormatSpec>
                       (param_1,uVar8,(FormatSpec *)&stack0x00000008,(char *)((long)&uStack_38 + 4),
                        (uint)uVar10);
    pcVar6 = "0123456789ABCDEF";
    if (in_stack_00000018._4_1_ == 'x') {
      pcVar6 = "0123456789abcdef";
    }
    do {
      *pcVar9 = pcVar6[uVar7 & 0xf];
      pcVar9 = pcVar9 + -1;
      uVar7 = uVar7 >> 4;
    } while (uVar7 != 0);
    break;
  case 'n':
    lVar3 = _localeconv();
    strlen(*(char **)(lVar3 + 8));
    goto LAB_1001a8fbc;
  case 'o':
    if ((in_stack_00000010 & 0x800000000) != 0) {
      *(unsigned char *)((long)&uStack_38 + uVar10 + 4) = 0x30;
      uVar10 = (unsigned long)(uVar2 + 1);
    }
    uVar8 = 0;
    uVar2 = uVar7;
    do {
      uVar8 = uVar8 + 1;
      uVar2 = uVar2 >> 3;
    } while (uVar2 != 0);
    pbVar4 = (byte *)prepare_int_buffer<fmt::FormatSpec>
                               (param_1,uVar8,(FormatSpec *)&stack0x00000008,
                                (char *)((long)&uStack_38 + 4),(uint)uVar10);
    do {
      *pbVar4 = (byte)uVar7 & 7 | 0x30;
      pbVar4 = pbVar4 + -1;
      uVar7 = uVar7 >> 3;
    } while (uVar7 != 0);
    break;
  default:
    if (in_stack_00000018._4_1_ != '\0') goto switchD_1001a8e9e_caseD_43;
  case 'd':
LAB_1001a8fbc:
    pbVar4 = (byte *)prepare_int_buffer<fmt::FormatSpec>
                               (param_1,1,(FormatSpec *)&stack0x00000008,
                                (char *)((long)&uStack_38 + 4),uVar2);
    *pbVar4 = param_2 | 0x30;
  }
  return;
}
}
