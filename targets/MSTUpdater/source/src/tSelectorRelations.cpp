#include <ni/controller_editor/tSelectorRelations.hpp>
namespace NI::NWL {

tSelectorRelations::tSelectorRelations() {
char *pcVar1;
  unsigned char *puVar2;
  char *pcVar3;
  unsigned long long local_38;
  unsigned long long uStack_30;
  unsigned long long local_28;
  
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  // boost code
  symbols<char,bool,// boost code
            ((symbols<char,bool,// boost code
              *)this,(string *)&local_38);
  // std code
  pcVar3 = *(char **)(*(long *)(this + 8) + 0x18);
  while( true ) {
    pcVar1 = *(char **)pcVar3;
    if (pcVar1 == (char *)0x0) {
      pcVar1 = (char *)new(0x28);
      *pcVar1 = ':';
      pcVar1[0x20] = '\0';
      pcVar1[0x21] = '\0';
      pcVar1[0x22] = '\0';
      pcVar1[0x23] = '\0';
      pcVar1[0x24] = '\0';
      pcVar1[0x25] = '\0';
      pcVar1[0x26] = '\0';
      pcVar1[0x27] = '\0';
      pcVar1[0x18] = '\0';
      pcVar1[0x19] = '\0';
      pcVar1[0x1a] = '\0';
      pcVar1[0x1b] = '\0';
      pcVar1[0x1c] = '\0';
      pcVar1[0x1d] = '\0';
      pcVar1[0x1e] = '\0';
      pcVar1[0x1f] = '\0';
      pcVar1[0x10] = '\0';
      pcVar1[0x11] = '\0';
      pcVar1[0x12] = '\0';
      pcVar1[0x13] = '\0';
      pcVar1[0x14] = '\0';
      pcVar1[0x15] = '\0';
      pcVar1[0x16] = '\0';
      pcVar1[0x17] = '\0';
      pcVar1[8] = '\0';
      pcVar1[9] = '\0';
      pcVar1[10] = '\0';
      pcVar1[0xb] = '\0';
      pcVar1[0xc] = '\0';
      pcVar1[0xd] = '\0';
      pcVar1[0xe] = '\0';
      pcVar1[0xf] = '\0';
      *(char **)pcVar3 = pcVar1;
    }
    if (*pcVar1 == ':') break;
    pcVar3 = pcVar1 + 0x10;
    if (*pcVar1 < ';') {
      pcVar3 = pcVar1 + 0x20;
    }
  }
  pcVar3 = pcVar1 + 0x18;
  while( true ) {
    pcVar1 = *(char **)pcVar3;
    if (pcVar1 == (char *)0x0) {
      pcVar1 = (char *)new(0x28);
      *pcVar1 = ':';
      pcVar1[0x20] = '\0';
      pcVar1[0x21] = '\0';
      pcVar1[0x22] = '\0';
      pcVar1[0x23] = '\0';
      pcVar1[0x24] = '\0';
      pcVar1[0x25] = '\0';
      pcVar1[0x26] = '\0';
      pcVar1[0x27] = '\0';
      pcVar1[0x18] = '\0';
      pcVar1[0x19] = '\0';
      pcVar1[0x1a] = '\0';
      pcVar1[0x1b] = '\0';
      pcVar1[0x1c] = '\0';
      pcVar1[0x1d] = '\0';
      pcVar1[0x1e] = '\0';
      pcVar1[0x1f] = '\0';
      pcVar1[0x10] = '\0';
      pcVar1[0x11] = '\0';
      pcVar1[0x12] = '\0';
      pcVar1[0x13] = '\0';
      pcVar1[0x14] = '\0';
      pcVar1[0x15] = '\0';
      pcVar1[0x16] = '\0';
      pcVar1[0x17] = '\0';
      pcVar1[8] = '\0';
      pcVar1[9] = '\0';
      pcVar1[10] = '\0';
      pcVar1[0xb] = '\0';
      pcVar1[0xc] = '\0';
      pcVar1[0xd] = '\0';
      pcVar1[0xe] = '\0';
      pcVar1[0xf] = '\0';
      *(char **)pcVar3 = pcVar1;
    }
    if (*pcVar1 == ':') break;
    pcVar3 = pcVar1 + 0x10;
    if (*pcVar1 < ';') {
      pcVar3 = pcVar1 + 0x20;
    }
  }
  if (*(long *)(pcVar1 + 8) == 0) {
    puVar2 = (unsigned char *)new(1);
    *puVar2 = 1;
    *(unsigned char **)(pcVar1 + 8) = puVar2;
  }
  
}
}
