#include <ni/controller_editor/tAttributeOPs.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL {

tAttributeOPs::tAttributeOPs() {
char cVar1;
  tst *ptVar2;
  char *pcVar3;
  unsigned int *puVar4;
  char *pcVar5;
  char cVar6;
  char *pcVar7;
  string local_50;
  unsigned int local_4f;
  void3 uStack_4b;
  unsigned char local_48;
  void *local_40;
  tAttributeOPs *local_38;
  
  local_50 = (string)0xe;
  local_4f = 0x626d7973;
  uStack_4b = 0x736c6f;
  local_48 = 0;
  *(tAttributeOPs **)this = this;
  *(tAttributeOPs **)(this + 8) = this;
  *(tAttributeOPs **)(this + 0x10) = this;
  ptVar2 = (tst *)new char[8];
  *(unsigned long long *)ptVar2 = 0;
  // boost code
  shared_ptr<// boost code
            ((shared_ptr<// boost code
             (this + 0x18),ptVar2);
  local_38 = this;
  // std code
  if (((byte)local_50 & 1) != 0) {
    delete(local_40);
  }
  pcVar5 = *(char **)(*(long *)(local_38 + 8) + 0x18);
  pcVar3 = *(char **)pcVar5;
  while( true ) {
    if (pcVar3 == (char *)0x0) {
      pcVar3 = (char *)new char[0x28];
      *pcVar3 = '=';
      pcVar3[8] = '\0';
      pcVar3[9] = '\0';
      pcVar3[10] = '\0';
      pcVar3[0xb] = '\0';
      pcVar3[0xc] = '\0';
      pcVar3[0xd] = '\0';
      pcVar3[0xe] = '\0';
      pcVar3[0xf] = '\0';
      pcVar3[0x10] = '\0';
      pcVar3[0x11] = '\0';
      pcVar3[0x12] = '\0';
      pcVar3[0x13] = '\0';
      pcVar3[0x14] = '\0';
      pcVar3[0x15] = '\0';
      pcVar3[0x16] = '\0';
      pcVar3[0x17] = '\0';
      pcVar3[0x18] = '\0';
      pcVar3[0x19] = '\0';
      pcVar3[0x1a] = '\0';
      pcVar3[0x1b] = '\0';
      pcVar3[0x1c] = '\0';
      pcVar3[0x1d] = '\0';
      pcVar3[0x1e] = '\0';
      pcVar3[0x1f] = '\0';
      pcVar3[0x20] = '\0';
      pcVar3[0x21] = '\0';
      pcVar3[0x22] = '\0';
      pcVar3[0x23] = '\0';
      pcVar3[0x24] = '\0';
      pcVar3[0x25] = '\0';
      pcVar3[0x26] = '\0';
      pcVar3[0x27] = '\0';
      *(char **)pcVar5 = pcVar3;
    }
    if (*pcVar3 == '=') break;
    pcVar5 = pcVar3 + 0x20;
    if ('=' < *pcVar3) {
      pcVar5 = pcVar3 + 0x10;
    }
    pcVar3 = *(char **)pcVar5;
  }
  if (*(long *)(pcVar3 + 8) == 0) {
    puVar4 = (unsigned int *)new char[4];
    *puVar4 = 2;
    *(unsigned int **)(pcVar3 + 8) = puVar4;
  }
  pcVar5 = *(char **)(*(long *)(local_38 + 8) + 0x18);
  pcVar7 = "^=";
  cVar6 = '^';
  pcVar3 = *(char **)pcVar5;
  if (pcVar3 != (char *)0x0) return;
  pcVar3 = (char *)new char[0x28];
  *pcVar3 = cVar6;
  pcVar3[8] = '\0';
  pcVar3[9] = '\0';
  pcVar3[10] = '\0';
  pcVar3[0xb] = '\0';
  pcVar3[0xc] = '\0';
  pcVar3[0xd] = '\0';
  pcVar3[0xe] = '\0';
  pcVar3[0xf] = '\0';
  pcVar3[0x10] = '\0';
  pcVar3[0x11] = '\0';
  pcVar3[0x12] = '\0';
  pcVar3[0x13] = '\0';
  pcVar3[0x14] = '\0';
  pcVar3[0x15] = '\0';
  pcVar3[0x16] = '\0';
  pcVar3[0x17] = '\0';
  pcVar3[0x18] = '\0';
  pcVar3[0x19] = '\0';
  pcVar3[0x1a] = '\0';
  pcVar3[0x1b] = '\0';
  pcVar3[0x1c] = '\0';
  pcVar3[0x1d] = '\0';
  pcVar3[0x1e] = '\0';
  pcVar3[0x1f] = '\0';
  pcVar3[0x20] = '\0';
  pcVar3[0x21] = '\0';
  pcVar3[0x22] = '\0';
  pcVar3[0x23] = '\0';
  pcVar3[0x24] = '\0';
  pcVar3[0x25] = '\0';
  pcVar3[0x26] = '\0';
  pcVar3[0x27] = '\0';
  *(char **)pcVar5 = pcVar3;
  cVar1 = *pcVar3;
  if (cVar6 != cVar1) return;
  do {
    pcVar7 = pcVar7 + 1;
    if (pcVar7 == "") {
      if (*(long *)(pcVar3 + 8) == 0) {
        puVar4 = (unsigned int *)new char[4];
        *puVar4 = 3;
        *(unsigned int **)(pcVar3 + 8) = puVar4;
      }
      pcVar5 = *(char **)(*(long *)(local_38 + 8) + 0x18);
      pcVar7 = "$=";
      cVar6 = '$';
      pcVar3 = *(char **)pcVar5;
      do {
        if (pcVar3 == (char *)0x0) {
          pcVar3 = (char *)new char[0x28];
          *pcVar3 = cVar6;
          pcVar3[8] = '\0';
          pcVar3[9] = '\0';
          pcVar3[10] = '\0';
          pcVar3[0xb] = '\0';
          pcVar3[0xc] = '\0';
          pcVar3[0xd] = '\0';
          pcVar3[0xe] = '\0';
          pcVar3[0xf] = '\0';
          pcVar3[0x10] = '\0';
          pcVar3[0x11] = '\0';
          pcVar3[0x12] = '\0';
          pcVar3[0x13] = '\0';
          pcVar3[0x14] = '\0';
          pcVar3[0x15] = '\0';
          pcVar3[0x16] = '\0';
          pcVar3[0x17] = '\0';
          pcVar3[0x18] = '\0';
          pcVar3[0x19] = '\0';
          pcVar3[0x1a] = '\0';
          pcVar3[0x1b] = '\0';
          pcVar3[0x1c] = '\0';
          pcVar3[0x1d] = '\0';
          pcVar3[0x1e] = '\0';
          pcVar3[0x1f] = '\0';
          pcVar3[0x20] = '\0';
          pcVar3[0x21] = '\0';
          pcVar3[0x22] = '\0';
          pcVar3[0x23] = '\0';
          pcVar3[0x24] = '\0';
          pcVar3[0x25] = '\0';
          pcVar3[0x26] = '\0';
          pcVar3[0x27] = '\0';
          *(char **)pcVar5 = pcVar3;
        }
        if (cVar6 == *pcVar3) {
          pcVar7 = pcVar7 + 1;
          if (pcVar7 == "") {
            if (*(long *)(pcVar3 + 8) == 0) {
              puVar4 = (unsigned int *)new char[4];
              *puVar4 = 4;
              *(unsigned int **)(pcVar3 + 8) = puVar4;
            }
            pcVar5 = *(char **)(*(long *)(local_38 + 8) + 0x18);
            pcVar7 = "*=";
            cVar6 = '*';
            pcVar3 = *(char **)pcVar5;
            do {
              if (pcVar3 == (char *)0x0) {
                pcVar3 = (char *)new char[0x28];
                *pcVar3 = cVar6;
                pcVar3[8] = '\0';
                pcVar3[9] = '\0';
                pcVar3[10] = '\0';
                pcVar3[0xb] = '\0';
                pcVar3[0xc] = '\0';
                pcVar3[0xd] = '\0';
                pcVar3[0xe] = '\0';
                pcVar3[0xf] = '\0';
                pcVar3[0x10] = '\0';
                pcVar3[0x11] = '\0';
                pcVar3[0x12] = '\0';
                pcVar3[0x13] = '\0';
                pcVar3[0x14] = '\0';
                pcVar3[0x15] = '\0';
                pcVar3[0x16] = '\0';
                pcVar3[0x17] = '\0';
                pcVar3[0x18] = '\0';
                pcVar3[0x19] = '\0';
                pcVar3[0x1a] = '\0';
                pcVar3[0x1b] = '\0';
                pcVar3[0x1c] = '\0';
                pcVar3[0x1d] = '\0';
                pcVar3[0x1e] = '\0';
                pcVar3[0x1f] = '\0';
                pcVar3[0x20] = '\0';
                pcVar3[0x21] = '\0';
                pcVar3[0x22] = '\0';
                pcVar3[0x23] = '\0';
                pcVar3[0x24] = '\0';
                pcVar3[0x25] = '\0';
                pcVar3[0x26] = '\0';
                pcVar3[0x27] = '\0';
                *(char **)pcVar5 = pcVar3;
              }
              if (cVar6 == *pcVar3) {
                pcVar7 = pcVar7 + 1;
                if (pcVar7 == "") {
                  if (*(long *)(pcVar3 + 8) == 0) {
                    puVar4 = (unsigned int *)new char[4];
                    *puVar4 = 5;
                    *(unsigned int **)(pcVar3 + 8) = puVar4;
                  }
                  pcVar5 = *(char **)(*(long *)(local_38 + 8) + 0x18);
                  pcVar7 = "!=";
                  cVar6 = '!';
                  pcVar3 = *(char **)pcVar5;
                  do {
                    if (pcVar3 == (char *)0x0) {
                      pcVar3 = (char *)new char[0x28];
                      *pcVar3 = cVar6;
                      pcVar3[8] = '\0';
                      pcVar3[9] = '\0';
                      pcVar3[10] = '\0';
                      pcVar3[0xb] = '\0';
                      pcVar3[0xc] = '\0';
                      pcVar3[0xd] = '\0';
                      pcVar3[0xe] = '\0';
                      pcVar3[0xf] = '\0';
                      pcVar3[0x10] = '\0';
                      pcVar3[0x11] = '\0';
                      pcVar3[0x12] = '\0';
                      pcVar3[0x13] = '\0';
                      pcVar3[0x14] = '\0';
                      pcVar3[0x15] = '\0';
                      pcVar3[0x16] = '\0';
                      pcVar3[0x17] = '\0';
                      pcVar3[0x18] = '\0';
                      pcVar3[0x19] = '\0';
                      pcVar3[0x1a] = '\0';
                      pcVar3[0x1b] = '\0';
                      pcVar3[0x1c] = '\0';
                      pcVar3[0x1d] = '\0';
                      pcVar3[0x1e] = '\0';
                      pcVar3[0x1f] = '\0';
                      pcVar3[0x20] = '\0';
                      pcVar3[0x21] = '\0';
                      pcVar3[0x22] = '\0';
                      pcVar3[0x23] = '\0';
                      pcVar3[0x24] = '\0';
                      pcVar3[0x25] = '\0';
                      pcVar3[0x26] = '\0';
                      pcVar3[0x27] = '\0';
                      *(char **)pcVar5 = pcVar3;
                    }
                    if (cVar6 == *pcVar3) {
                      pcVar7 = pcVar7 + 1;
                      if (pcVar7 == "") {
                        if (*(long *)(pcVar3 + 8) == 0) {
                          puVar4 = (unsigned int *)new char[4];
                          *puVar4 = 6;
                          *(unsigned int **)(pcVar3 + 8) = puVar4;
                        }
                        
                      }
                      pcVar5 = pcVar3 + 0x18;
                    }
                    else {
                      pcVar5 = pcVar3 + 0x20;
                      if (cVar6 < *pcVar3) {
                        pcVar5 = pcVar3 + 0x10;
                      }
                    }
                    cVar6 = *pcVar7;
                    pcVar3 = *(char **)pcVar5;
                  } while( true );
                }
                pcVar5 = pcVar3 + 0x18;
              }
              else {
                pcVar5 = pcVar3 + 0x20;
                if (cVar6 < *pcVar3) {
                  pcVar5 = pcVar3 + 0x10;
                }
              }
              cVar6 = *pcVar7;
              pcVar3 = *(char **)pcVar5;
            } while( true );
          }
          pcVar5 = pcVar3 + 0x18;
        }
        else {
          pcVar5 = pcVar3 + 0x20;
          if (cVar6 < *pcVar3) {
            pcVar5 = pcVar3 + 0x10;
          }
        }
        cVar6 = *pcVar7;
        pcVar3 = *(char **)pcVar5;
      } while( true );
    }
    pcVar5 = pcVar3 + 0x18;
    while( true ) {
      cVar6 = *pcVar7;
      pcVar3 = *(char **)pcVar5;
      if (pcVar3 == (char *)0x0) return;
      cVar1 = *pcVar3;
      if (cVar6 == cVar1) break;
      pcVar5 = pcVar3 + 0x20;
      if (cVar6 < cVar1) {
        pcVar5 = pcVar3 + 0x10;
      }
    }
  } while( true );
}
}
