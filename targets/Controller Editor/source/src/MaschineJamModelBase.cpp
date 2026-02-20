#include <ni/controller_editor/MaschineJamModelBase.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

void MaschineJamModelBase::getDefaultPageClassName(unsigned int) const {
char *pcVar1;
  unsigned char *puVar2;
  int in_EDX;
  unsigned int in_register_0000003c;
  
  puVar2 = (unsigned char *)CONCAT44(in_register_0000003c,param_1);
  if (in_EDX == 2) {
    *puVar2 = 0x20;
    pcVar1 = puVar2 + 1;
    pcVar1[0] = 'T';
    pcVar1[1] = 'o';
    pcVar1[2] = 'u';
    pcVar1[3] = 'c';
    pcVar1[4] = 'h';
    pcVar1[5] = ' ';
    pcVar1[6] = 'S';
    pcVar1[7] = 't';
    pcVar1 = puVar2 + 9;
    pcVar1[0] = 'r';
    pcVar1[1] = 'i';
    pcVar1[2] = 'p';
    pcVar1[3] = ' ';
    pcVar1[4] = 'P';
    pcVar1[5] = 'a';
    pcVar1[6] = 'g';
    pcVar1[7] = 'e';
    puVar2[0x11] = 0;
    return;
  }
  if (in_EDX != 1) {
    if (in_EDX == 0) {
      *puVar2 = 0x16;
      *(unsigned long long *)(puVar2 + 1) = 0x502078697274614d;
      *(unsigned int *)(puVar2 + 8) = 0x65676150;
      puVar2[0xc] = 0;
      return;
    }
    *puVar2 = 8;
    *(unsigned int *)(puVar2 + 1) = 0x65676150;
    puVar2[5] = 0;
    return;
  }
  *puVar2 = 0x24;
  pcVar1 = puVar2 + 1;
  pcVar1[0] = 'I';
  pcVar1[1] = '/';
  pcVar1[2] = 'O';
  pcVar1[3] = ' ';
  pcVar1[4] = 'a';
  pcVar1[5] = 'n';
  pcVar1[6] = 'd';
  pcVar1[7] = ' ';
  pcVar1 = puVar2 + 9;
  pcVar1[0] = 'L';
  pcVar1[1] = 'e';
  pcVar1[2] = 'v';
  pcVar1[3] = 'e';
  pcVar1[4] = 'l';
  pcVar1[5] = ' ';
  pcVar1[6] = 'P';
  pcVar1[7] = 'a';
  *(void2 *)(puVar2 + 0x11) = 0x6567;
  puVar2[0x13] = 0;
  return;
}

void MaschineJamModelBase::getDefaultPageName(unsigned int, unsigned long) const {
long in_RCX;
  int in_EDX;
  unsigned int in_register_0000003c;
  FormatApply<char> *pFVar1;
  byte local_108 [16];
  void *local_f8;
  long local_f0;
  basic_format<char,// std code
  long local_20;
  
  pFVar1 = (FormatApply<char> *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)PTR____stack_chk_guard_101ab4610;
  if (in_EDX == 2) {
    local_f0._0_2_ = (ushort)(byte)((char)in_RCX + 0x41);
    (**(code **)(*(long *)param_2 + 0xf0))(local_108,param_2,2);
    // boost code
              (local_e8,"%1% %2%");
    GP::DETAIL::FormatApply<char>::apply<// std code
  }
  else {
    (**(code **)(*(long *)param_2 + 0xf0))(local_108);
    local_f0 = in_RCX + 1;
    // boost code
              (local_e8,"%1% %2%");
    GP::DETAIL::FormatApply<char>::apply<// std code
              (pFVar1,local_e8,local_108,&local_f0);
  }
  // boost code if(2 param_2, 2 param_2, (local_108[0] & 1 != 0 {
    delete(local_f8);
  }
  if (*(long *)PTR____stack_chk_guard_101ab4610 == local_20) {
    return pFVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}
}
