#include <ni/controller_editor/append_path_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::uri_builder {

void append_path(1 param_1, std::string const&, bool {
string *psVar1;
  string sVar2;
  string sVar3;
  uri_builder uVar4;
  string sVar5;
  byte bVar6;
  int iVar7;
  uri_builder *puVar8;
  unsigned long uVar9;
  unsigned long uVar10;
  size_t sVar11;
  string *psVar12;
  unsigned char *puVar13;
  unsigned long uVar14;
  size_t sVar15;
  string local_48;
  unsigned char local_47 [15];
  unsigned char *local_38;
  
  bVar6 = oneSlash;
  sVar2 = *param_1;
  sVar11 = (unsigned long)((byte)sVar2 >> 1);
  if (((byte)sVar2 & 1) != 0) {
    sVar11 = *(size_t *)(param_1 + 8);
  }
  if (sVar11 == 0) {
    return this;
  }
  if ((oneSlash & 1) == 0) {
    sVar15 = (size_t)(oneSlash >> 1);
    if (sVar11 == sVar15) return;
  }
  else {
    sVar15 = 0;
    if (sVar11 == 0) {
      puVar13 = 0;
      if ((oneSlash & 1) == 0) {
        puVar13 = &0;
      }
      if (((byte)sVar2 & 1) == 0) {
        uVar10 = 0;
        while (param_1[uVar10 + 1] == *(string *)(puVar13 + uVar10)) {
          uVar10 = uVar10 + 1;
          if ((byte)sVar2 >> 1 == uVar10) {
            return this;
          }
        }
      }
      else {
        iVar7 = _memcmp(*(void **)(param_1 + 0x10),puVar13,sVar11);
        if (iVar7 == 0) {
          return this;
        }
      }
    }
  }
  psVar1 = (string *)(this + 0x48);
  if (psVar1 == param_1) {
    // std code
    puVar8 = (uri_builder *)append_path(this,&local_48,param_2);
    if (((byte)local_48 & 1) != 0) {
      delete(local_38);
      return puVar8;
    }
    return puVar8;
  }
  sVar3 = *psVar1;
  if (((byte)sVar3 & 1) == 0) {
    if ((byte)sVar3 >> 1 == 0) return;
    uVar14 = (unsigned long)((byte)sVar3 >> 1);
    uVar10 = *(unsigned long *)(this + 0x50);
    uVar9 = uVar10;
    if (((byte)sVar3 & 1) == 0) {
      uVar9 = uVar14;
    }
    if (uVar9 == sVar15) {
      puVar8 = *(uri_builder **)(this + 0x58);
      if ((bVar6 & 1) == 0) {
        puVar13 = &0;
        if (((byte)sVar3 & 1) == 0) return;
        if ((sVar15 != 0) && (iVar7 = _memcmp(puVar8,puVar13,sVar15), uVar9 = uVar10, iVar7 != 0))
        return;
        return;
      }
      puVar13 = 0;
      if (((byte)sVar3 & 1) != 0) return;
      if (sVar15 != 0) {
        uVar9 = 0;
        do {
          if (this[uVar9 + 0x49] != *(uri_builder *)(puVar13 + uVar9)) return;
          uVar9 = uVar9 + 1;
        } while (uVar14 != uVar9);
        return;
      }
      return;
    }
    if (((byte)sVar3 & 1) == 0) {
      puVar8 = this + 0x49;
      uVar9 = uVar14;
      uVar4 = puVar8[uVar9 - 1];
    }
    else {
      uVar4 = *(uri_builder *)(*(long *)(this + 0x58) + -1 + uVar10);
    }
    if (uVar4 == (uri_builder)0x2f) {
      if (((byte)sVar2 & 1) == 0) {
        sVar5 = param_1[1];
      }
      else {
        sVar5 = **(string **)(param_1 + 0x10);
      }
      if (sVar5 == (string)0x2f) {
        if (((byte)sVar3 & 1) == 0) {
          *psVar1 = (string)((((byte)sVar3 >> 1) - 1) * '\x02');
          psVar1[uVar14] = (string)0x0;
        }
        else {
          *(unsigned long *)(this + 0x50) = uVar10 - 1;
          *(unsigned char *)(*(long *)(this + 0x58) + -1 + uVar10) = 0;
        }
        return;
      }
    }
    if (((byte)sVar3 & 1) == 0) {
      sVar3 = psVar1[uVar14];
    }
    else {
      sVar3 = *(string *)(*(long *)(this + 0x58) + -1 + uVar10);
    }
    if (sVar3 == (string)0x2f) return;
joined_r0x00010053ba86:
    if (((byte)sVar2 & 1) != 0) return;
    sVar2 = param_1[1];
  }
  else {
    if (*(long *)(this + 0x50) != 0) return;
    if (((byte)sVar3 & 1) != 0) {
      puVar8 = *(uri_builder **)(this + 0x58);
      *puVar8 = (uri_builder)0x0;
      *(unsigned long long *)(this + 0x50) = 0;
      sVar2 = *param_1;
      goto joined_r0x00010053ba86;
    }
    this[0x49] = (uri_builder)0x0;
    *psVar1 = (string)0x0;
    if (((byte)*param_1 & 1) == 0) return;
    sVar2 = **(string **)(param_1 + 0x10);
  }
  if (sVar2 != (string)0x2f) {
    // std code
  }
  if (param_2 param_1) {
  }
  else {
    if (((byte)*param_1 & 1) == 0) {
      psVar12 = param_1 + 1;
    }
    else {
      psVar12 = *(string **)(param_1 + 0x10);
    }
    // std code
  }
  return this;
}
}
