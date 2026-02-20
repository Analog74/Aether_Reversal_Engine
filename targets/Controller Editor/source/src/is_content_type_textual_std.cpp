#include <ni/controller_editor/is_content_type_textual_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::http {

void is_content_type_textual(std::string const&) {
char cVar1;
  string sVar2;
  int iVar3;
  unsigned char *puVar4;
  string sVar5;
  char cVar6;
  unsigned long uVar7;
  string sVar8;
  char *pcVar9;
  unsigned long uVar10;
  string *psVar11;
  bool bVar12;
  string local_58;
  char local_57 [7];
  long local_50;
  char *local_48;
  unsigned char local_40;
  unsigned char local_3f;
  unsigned char uStack_3e;
  unsigned char uStack_3d;
  unsigned char uStack_3c;
  unsigned char local_3b;
  
  if ((is_content_type_textual(// std code
     (iVar3 = ___cxa_guard_acquire(&is_content_type_textual(// std code
     iVar3 != 0)) {
    // std code
                        (string *)&details::mime_types::message_http);
    // std code
    // std code
    // std code
                        (string *)&details::mime_types::application_atom_xml);
    // std code
    // std code
                        (string *)&details::mime_types::application_x_www_form_urlencoded);
    ___cxa_atexit(___cxx_global_array_dtor_405,0,0x100000000);
    ___cxa_guard_release(&is_content_type_textual(// std code
  }
  if (((byte)*param_1 & 1) == 0) {
    if ((byte)*param_1 >> 1 < 4) return;
  }
  else if (*(unsigned long *)(param_1 + 8) < 4) return;
  bVar12 = false;
  // std code
  local_40 = 8;
  local_3f = 0x74;
  uStack_3e = 0x65;
  uStack_3d = 0x78;
  uStack_3c = 0x74;
  local_3b = 0;
  if (((byte)local_58 & 1) == 0) {
    bVar12 = false;
    if ((byte)local_58 >> 1 == 4) return;
  }
  else if (local_50 == 4) {
    pcVar9 = local_48;
    if (((byte)local_58 & 1) == 0) {
      pcVar9 = local_57;
    }
    cVar1 = *pcVar9;
    cVar6 = cVar1 + ' ';
    if (0x19 < (byte)(cVar1 + 0xbfU)) {
      cVar6 = cVar1;
    }
    if (cVar6 == 't') {
      cVar1 = pcVar9[1];
      cVar6 = cVar1 + ' ';
      if (0x19 < (byte)(cVar1 + 0xbfU)) {
        cVar6 = cVar1;
      }
      if (cVar6 == 'e') {
        cVar1 = pcVar9[2];
        cVar6 = cVar1 + ' ';
        if (0x19 < (byte)(cVar1 + 0xbfU)) {
          cVar6 = cVar1;
        }
        if (cVar6 == 'x') {
          cVar1 = pcVar9[3];
          cVar6 = cVar1 + ' ';
          if (0x19 < (byte)(cVar1 + 0xbfU)) {
            cVar6 = cVar1;
          }
          bVar12 = cVar6 == 't';
          return;
        }
      }
    }
    bVar12 = false;
  }
  if (((byte)local_58 & 1) != 0) {
    delete(local_48);
  }
  if (bVar12) {
    return true;
  }
  if (((byte)*param_1 & 1) == 0) {
    uVar10 = (unsigned long)((byte)*param_1 >> 1);
    psVar11 = param_1 + 1;
  }
  else {
    uVar10 = *(unsigned long *)(param_1 + 8);
    psVar11 = *(string **)(param_1 + 0x10);
  }
  uVar7 = 0;
  if ((is_content_type_textual(// std code
    uVar7 = (unsigned long)(is_content_type_textual(// std code
  }
  if (uVar10 == 0) {
    bVar12 = true;
    if (uVar7 != 0) {
      if ((0 & 1) == 0) {
        if (0 >> 1 == 0) {
          return true;
        }
      }
      else if (0 == 0) {
        return true;
      }
      if ((0 & 1) == 0) {
        if (0 >> 1 == 0) {
          return true;
        }
      }
      else if (0 == 0) {
        return true;
      }
      if ((0 & 1) == 0) {
        if (0 >> 1 == 0) {
          return true;
        }
      }
      else if (0 == 0) {
        return true;
      }
      uVar10 = 0;
      if ((0 & 1) == 0) {
        uVar10 = (unsigned long)(0 >> 1);
      }
      if (uVar10 != 0) {
        uVar10 = 0;
        if ((0 & 1) == 0) {
          uVar10 = (unsigned long)(0 >> 1);
        }
        bVar12 = uVar10 == 0;
      }
    }
  }
  else {
    if (uVar7 == uVar10) {
      puVar4 = 0;
      if ((is_content_type_textual(// std code
        puVar4 = &0;
      }
      uVar7 = 0;
      do {
        sVar2 = *(string *)(puVar4 + uVar7);
        sVar8 = (string)((char)sVar2 + ' ');
        if (0x19 < (byte)((char)sVar2 + 0xbfU)) {
          sVar8 = sVar2;
        }
        sVar2 = psVar11[uVar7];
        sVar5 = (string)((char)sVar2 + ' ');
        if (0x19 < (byte)((char)sVar2 + 0xbfU)) {
          sVar5 = sVar2;
        }
        if (sVar8 != sVar5) return;
        uVar7 = uVar7 + 1;
      } while (uVar10 != uVar7);
    }
    else {
      uVar7 = 0;
      if ((0 & 1) == 0) {
        uVar7 = (unsigned long)(0 >> 1);
      }
      if (uVar7 == uVar10) {
        puVar4 = 0;
        if ((0 & 1) == 0) {
          puVar4 = &0;
        }
        uVar7 = 0;
        do {
          sVar2 = *(string *)(puVar4 + uVar7);
          sVar8 = (string)((char)sVar2 + ' ');
          if (0x19 < (byte)((char)sVar2 + 0xbfU)) {
            sVar8 = sVar2;
          }
          sVar2 = psVar11[uVar7];
          sVar5 = (string)((char)sVar2 + ' ');
          if (0x19 < (byte)((char)sVar2 + 0xbfU)) {
            sVar5 = sVar2;
          }
          if (sVar8 != sVar5) return;
          uVar7 = uVar7 + 1;
        } while (uVar10 != uVar7);
      }
      else {
        uVar7 = 0;
        if ((0 & 1) == 0) {
          uVar7 = (unsigned long)(0 >> 1);
        }
        if (uVar7 == uVar10) {
          puVar4 = 0;
          if ((0 & 1) == 0) {
            puVar4 = &0;
          }
          uVar7 = 0;
          do {
            sVar2 = *(string *)(puVar4 + uVar7);
            sVar8 = (string)((char)sVar2 + ' ');
            if (0x19 < (byte)((char)sVar2 + 0xbfU)) {
              sVar8 = sVar2;
            }
            sVar2 = psVar11[uVar7];
            sVar5 = (string)((char)sVar2 + ' ');
            if (0x19 < (byte)((char)sVar2 + 0xbfU)) {
              sVar5 = sVar2;
            }
            if (sVar8 != sVar5) return;
            uVar7 = uVar7 + 1;
          } while (uVar10 != uVar7);
        }
        else {
          uVar7 = 0;
          if ((0 & 1) == 0) {
            uVar7 = (unsigned long)(0 >> 1);
          }
          if (uVar7 == uVar10) {
            puVar4 = 0;
            if ((0 & 1) == 0) {
              puVar4 = &0;
            }
            uVar7 = 0;
            do {
              sVar2 = *(string *)(puVar4 + uVar7);
              sVar8 = (string)((char)sVar2 + ' ');
              if (0x19 < (byte)((char)sVar2 + 0xbfU)) {
                sVar8 = sVar2;
              }
              sVar2 = psVar11[uVar7];
              sVar5 = (string)((char)sVar2 + ' ');
              if (0x19 < (byte)((char)sVar2 + 0xbfU)) {
                sVar5 = sVar2;
              }
              if (sVar8 != sVar5) return;
              uVar7 = uVar7 + 1;
            } while (uVar10 != uVar7);
          }
          else {
            uVar7 = 0;
            if ((0 & 1) == 0) {
              uVar7 = (unsigned long)(0 >> 1);
            }
            if (uVar7 != uVar10) {
              uVar7 = 0;
              if ((0 & 1) == 0) {
                uVar7 = (unsigned long)(0 >> 1);
              }
              if (uVar7 != uVar10) {
                return false;
              }
              puVar4 = 0;
              if ((0 & 1) == 0) {
                puVar4 = &0;
              }
              uVar7 = 0;
              while( true ) {
                sVar2 = *(string *)(puVar4 + uVar7);
                sVar8 = psVar11[uVar7];
                sVar5 = (string)((char)sVar2 + ' ');
                if (0x19 < (byte)((char)sVar2 + 0xbfU)) {
                  sVar5 = sVar2;
                }
                sVar2 = (string)((char)sVar8 + ' ');
                if (0x19 < (byte)((char)sVar8 + 0xbfU)) {
                  sVar2 = sVar8;
                }
                bVar12 = sVar5 == sVar2;
                if (!bVar12) break;
                uVar7 = uVar7 + 1;
                if (uVar10 == uVar7) {
                  return bVar12;
                }
              }
              return bVar12;
            }
            puVar4 = 0;
            if ((0 & 1) == 0) {
              puVar4 = &0;
            }
            uVar7 = 0;
            do {
              sVar2 = *(string *)(puVar4 + uVar7);
              sVar8 = (string)((char)sVar2 + ' ');
              if (0x19 < (byte)((char)sVar2 + 0xbfU)) {
                sVar8 = sVar2;
              }
              sVar2 = psVar11[uVar7];
              sVar5 = (string)((char)sVar2 + ' ');
              if (0x19 < (byte)((char)sVar2 + 0xbfU)) {
                sVar5 = sVar2;
              }
              if (sVar8 != sVar5) return;
              uVar7 = uVar7 + 1;
            } while (uVar10 != uVar7);
          }
        }
      }
    }
    bVar12 = true;
  }
  return bVar12;
}
}
