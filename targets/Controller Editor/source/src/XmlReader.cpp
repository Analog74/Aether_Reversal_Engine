#include <ni/controller_editor/XmlReader.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace anyrpc {

void XmlReader::GetNextTag(bool param_1) {
}

void XmlReader::ParseArray() {
void *puVar1;
  void *puVar2;
  int iVar3;
  ostream *poVar4;
  unsigned int *puVar5;
  unsigned long long uVar6;
  long lVar7;
  char *pcVar8;
  void *local_178;
  void *local_170 [8];
  unsigned long long local_130;
  unsigned long long uStack_128;
  unsigned long long local_120;
  unsigned long long uStack_118;
  unsigned int local_110;
  void *local_108 [17];
  unsigned long long local_80;
  unsigned int local_78;
  byte local_70;
  char local_6f [7];
  unsigned long local_68;
  char *local_60;
  ostream *local_58;
  string local_50;
  char local_4f [7];
  unsigned long local_48;
  char *local_40;
  unsigned int local_34;
  
  iVar3 = GetNextTag(this,false);
  puVar2 = PTR_vtable_101ab45a8;
  if (iVar3 == 0x2c) {
    (**(code **)(**(long **)(this + 0x10) + 0xa8))();
    lVar7 = 0;
    while( true ) {
      while (iVar3 = GetNextTag(this,false), puVar2 = PTR_vtable_101ab45a8, iVar3 == 0) {
        if (lVar7 != 0) {
          (**(code **)(**(long **)(this + 0x10) + 0xb8))();
        }
        ParseValue(this,true);
        lVar7 = lVar7 + 1;
      }
      if (iVar3 != 2) break;
      (**(code **)(**(long **)(this + 0x10) + 0x40))(*(long **)(this + 0x10),"",0,this[0x41]);
      lVar7 = lVar7 + 1;
    }
    if (iVar3 != 0x2d) {
      puVar1 = (char*)PTR_vtable_101ab45a8 + 0x40;
      local_108[0] = (char*)PTR_construction_vtable_101ab4158 + 0x40;
      local_178 = puVar1;
      // std code
      local_80 = 0;
      local_78 = 0xffffffff;
      local_108[0] = puVar2 + 0x68;
      local_178 = puVar1;
      // std code
      local_170[0] = (char*)PTR_vtable_101ab4590 + 0x10;
      local_130 = 0;
      uStack_128 = 0;
      local_120 = 0;
      uStack_118 = 0;
      local_110 = 0x18;
      local_58 = // std code
                           ((ostream *)&local_178,"Parse error with xml tag ",0x19);
      TagToString((int)&local_50);
      pcVar8 = local_40;
      if (((byte)local_50 & 1) == 0) {
        local_48 = (unsigned long)((byte)local_50 >> 1);
        pcVar8 = local_4f;
      }
      // std code if(1 param_1, 1 param_1, ((bytelocal_50 & 1 != 0) {
        delete(local_40);
      }
      local_58 = (ostream *)___cxa_allocate_exception(0x28);
      uVar6 = // std code
      *(unsigned int *)local_58 = 0xffff8030;
      local_34 = (unsigned int)0((int7)((unsigned long)uVar6 >> 8),1);
      // std code
      *(unsigned long long *)((long)local_58 + 0x20) = 0;
      local_34 = 0;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(local_58,&AnyRpcException::typeinfo,AnyRpcException::~AnyRpcException);
    }
    (**(code **)(**(long **)(this + 0x10) + 0xc0))();
    iVar3 = GetNextTag(this,false);
    puVar2 = PTR_vtable_101ab45a8;
    if (iVar3 != 0x29) {
      puVar1 = (char*)PTR_vtable_101ab45a8 + 0x40;
      local_108[0] = (char*)PTR_construction_vtable_101ab4158 + 0x40;
      local_178 = puVar1;
      // std code
      local_80 = 0;
      local_78 = 0xffffffff;
      local_58 = (ostream *)(puVar2 + 0x18);
      local_108[0] = puVar2 + 0x68;
      local_178 = puVar1;
      // std code
      local_170[0] = (char*)PTR_vtable_101ab4590 + 0x10;
      local_130 = 0;
      uStack_128 = 0;
      local_120 = 0;
      uStack_118 = 0;
      local_110 = 0x18;
      poVar4 = // std code
                         ((ostream *)&local_178,"Parse error: found ",0x13);
      TagToString((int)&local_50);
      pcVar8 = local_40;
      if (((byte)local_50 & 1) == 0) {
        local_48 = (unsigned long)((byte)local_50 >> 1);
        pcVar8 = local_4f;
      }
      poVar4 = // std code
      poVar4 = // std code TagToString(1 param_1, (int&local_70);
      pcVar8 = local_60;
      if ((local_70 & 1) == 0) {
        local_68 = (unsigned long)(local_70 >> 1);
        pcVar8 = local_6f;
      }
      // std code if(1 param_1, 1 param_1, (local_70 & 1 != 0 {
        delete(local_60);
      }
      if (((byte)local_50 & 1) != 0) {
        delete(local_40);
      }
      puVar5 = (unsigned int *)___cxa_allocate_exception(0x28);
      uVar6 = // std code
      *puVar5 = 0xffff8030;
      local_34 = (unsigned int)0((int7)((unsigned long)uVar6 >> 8),1);
      // std code
      *(unsigned long long *)(puVar5 + 8) = 0;
      local_34 = 0;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(puVar5,&AnyRpcException::typeinfo,AnyRpcException::~AnyRpcException);
    }
  }
  else {
    if (iVar3 != 0x2e) {
      puVar1 = (char*)PTR_vtable_101ab45a8 + 0x40;
      local_108[0] = (char*)PTR_construction_vtable_101ab4158 + 0x40;
      local_178 = puVar1;
      // std code
      local_80 = 0;
      local_78 = 0xffffffff;
      local_58 = (ostream *)(puVar2 + 0x18);
      local_108[0] = puVar2 + 0x68;
      local_178 = puVar1;
      // std code
      local_170[0] = (char*)PTR_vtable_101ab4590 + 0x10;
      local_130 = 0;
      uStack_128 = 0;
      local_120 = 0;
      uStack_118 = 0;
      local_110 = 0x18;
      poVar4 = // std code
                         ((ostream *)&local_178,"Parse error: found ",0x13);
      TagToString((int)&local_50);
      pcVar8 = local_40;
      if (((byte)local_50 & 1) == 0) {
        local_48 = (unsigned long)((byte)local_50 >> 1);
        pcVar8 = local_4f;
      }
      poVar4 = // std code
      poVar4 = // std code TagToString(1 param_1, (int&local_70);
      pcVar8 = local_60;
      if ((local_70 & 1) == 0) {
        local_68 = (unsigned long)(local_70 >> 1);
        pcVar8 = local_6f;
      }
      // std code if(1 param_1, 1 param_1, (local_70 & 1 != 0 {
        delete(local_60);
      }
      if (((byte)local_50 & 1) != 0) {
        delete(local_40);
      }
      puVar5 = (unsigned int *)___cxa_allocate_exception(0x28);
      uVar6 = // std code
      *puVar5 = 0xffff8030;
      local_34 = (unsigned int)0((int7)((unsigned long)uVar6 >> 8),1);
      // std code
      *(unsigned long long *)(puVar5 + 8) = 0;
      local_34 = 0;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(puVar5,&AnyRpcException::typeinfo,AnyRpcException::~AnyRpcException);
    }
    (**(code **)(**(long **)(this + 0x10) + 0xa8))();
    (**(code **)(**(long **)(this + 0x10) + 0xc0))();
    iVar3 = GetNextTag(this,false);
    puVar2 = PTR_vtable_101ab45a8;
    if (iVar3 != 0x29) {
      puVar1 = (char*)PTR_vtable_101ab45a8 + 0x40;
      local_108[0] = (char*)PTR_construction_vtable_101ab4158 + 0x40;
      local_178 = puVar1;
      // std code
      local_80 = 0;
      local_78 = 0xffffffff;
      local_58 = (ostream *)(puVar2 + 0x18);
      local_108[0] = puVar2 + 0x68;
      local_178 = puVar1;
      // std code
      local_170[0] = (char*)PTR_vtable_101ab4590 + 0x10;
      local_130 = 0;
      uStack_128 = 0;
      local_120 = 0;
      uStack_118 = 0;
      local_110 = 0x18;
      poVar4 = // std code
                         ((ostream *)&local_178,"Parse error: found ",0x13);
      TagToString((int)&local_50);
      pcVar8 = local_40;
      if (((byte)local_50 & 1) == 0) {
        local_48 = (unsigned long)((byte)local_50 >> 1);
        pcVar8 = local_4f;
      }
      poVar4 = // std code
      poVar4 = // std code TagToString(1 param_1, (int&local_70);
      pcVar8 = local_60;
      if ((local_70 & 1) == 0) {
        local_68 = (unsigned long)(local_70 >> 1);
        pcVar8 = local_6f;
      }
      // std code if(1 param_1, 1 param_1, (local_70 & 1 != 0 {
        delete(local_60);
      }
      if (((byte)local_50 & 1) != 0) {
        delete(local_40);
      }
      puVar5 = (unsigned int *)___cxa_allocate_exception(0x28);
      uVar6 = // std code
      *puVar5 = 0xffff8030;
      local_34 = (unsigned int)0((int7)((unsigned long)uVar6 >> 8),1);
      // std code
      *(unsigned long long *)(puVar5 + 8) = 0;
      local_34 = 0;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(puVar5,&AnyRpcException::typeinfo,AnyRpcException::~AnyRpcException);
    }
  }
  return;
}

void XmlReader::ParseBase64() {
void *puVar1;
  void *puVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  unsigned long uVar6;
  ostream *poVar7;
  unsigned int *puVar8;
  unsigned long long uVar9;
  char *pcVar10;
  void *local_1a0;
  void *local_198 [8];
  unsigned long long local_158;
  unsigned long long uStack_150;
  unsigned long long local_148;
  unsigned long long uStack_140;
  unsigned int local_138;
  void *local_130 [17];
  unsigned long long local_a8;
  unsigned int local_a0;
  byte local_98;
  char local_97 [7];
  unsigned long local_90;
  char *local_88;
  void **local_80;
  unsigned long long local_78;
  unsigned long uStack_70;
  void *local_68;
  void *local_60;
  string local_58;
  char local_57 [7];
  unsigned long local_50;
  char *local_48;
  unsigned int *local_40;
  unsigned int local_34;
  
  local_80 = &PTR__WriteStringStream_101b83848;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = (void *)0x0;
  // std code if(1 param_1, 1 param_1, this[0x40] == (XmlReader0x0 {
    cVar3 = internal::Base64Decode((Stream *)&local_80,*(Stream **)(this + 8),'<');
    uVar6 = uStack_70;
    pvVar5 = local_68;
    if ((local_78 & 1) == 0) {
      if (cVar3 == '\0') return;
      uVar6 = local_78 >> 1 & 0x7f;
      pvVar5 = (void *)((long)&local_78 + 1);
      return;
    }
  }
  else {
    pvVar5 = (void *)(**(code **)(**(long **)(this + 8) + 0x50))();
    cVar3 = internal::Base64Decode(*(Stream **)(this + 8),*(Stream **)(this + 8),'<');
    uVar6 = (**(code **)(**(long **)(this + 8) + 0x78))();
  }
  if (cVar3 == '\0') {
    puVar2 = PTR_vtable_101ab45a8;
    puVar1 = (char*)PTR_vtable_101ab45a8 + 0x40;
    local_130[0] = (char*)PTR_construction_vtable_101ab4158 + 0x40;
    local_1a0 = puVar1;
    // std code
    local_a8 = 0;
    local_a0 = 0xffffffff;
    local_60 = puVar2 + 0x18;
    local_130[0] = puVar2 + 0x68;
    local_1a0 = puVar1;
    // std code
    local_198[0] = (char*)PTR_vtable_101ab4590 + 0x10;
    local_158 = 0;
    uStack_150 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0x18;
    // std code
              ((ostream *)&local_1a0,"Error during base64 decode",0x1a);
    local_40 = (unsigned int *)___cxa_allocate_exception(0x28);
    uVar9 = // std code
    *local_40 = 0xffff802c;
    local_34 = (unsigned int)0((int7)((unsigned long)uVar9 >> 8),1);
    // std code
    *(unsigned long long *)(local_40 + 8) = 0;
    local_34 = 0;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(local_40,&AnyRpcException::typeinfo,AnyRpcException::~AnyRpcException);
  }
  iVar4 = GetNextTag(this,false);
  puVar1 = PTR_vtable_101ab45a8;
  if (iVar4 != 0x21) {
    puVar2 = (char*)PTR_vtable_101ab45a8 + 0x40;
    local_130[0] = (char*)PTR_construction_vtable_101ab4158 + 0x40;
    local_1a0 = puVar2;
    // std code
    local_a8 = 0;
    local_a0 = 0xffffffff;
    local_60 = puVar1 + 0x18;
    local_130[0] = puVar1 + 0x68;
    local_1a0 = puVar2;
    // std code
    local_198[0] = (char*)PTR_vtable_101ab4590 + 0x10;
    local_158 = 0;
    uStack_150 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0x18;
    local_40 = (unsigned int *)local_198[0];
    poVar7 = // std code
                       ((ostream *)&local_1a0,"Parse error: found ",0x13);
    TagToString((int)&local_58);
    pcVar10 = local_48;
    if (((byte)local_58 & 1) == 0) {
      local_50 = (unsigned long)((byte)local_58 >> 1);
      pcVar10 = local_57;
    }
    poVar7 = // std code
    poVar7 = // std code TagToString(1 param_1, (int&local_98);
    pcVar10 = local_88;
    if ((local_98 & 1) == 0) {
      local_90 = (unsigned long)(local_98 >> 1);
      pcVar10 = local_97;
    }
    // std code if(1 param_1, 1 param_1, (local_98 & 1 != 0 {
      delete(local_88);
    }
    if (((byte)local_58 & 1) != 0) {
      delete(local_48);
    }
    puVar8 = (unsigned int *)___cxa_allocate_exception(0x28);
    uVar9 = // std code
    *puVar8 = 0xffff8030;
    local_34 = (unsigned int)0((int7)((unsigned long)uVar9 >> 8),1);
    // std code
    *(unsigned long long *)(puVar8 + 8) = 0;
    local_34 = 0;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar8,&AnyRpcException::typeinfo,AnyRpcException::~AnyRpcException);
  }
  (**(code **)(**(long **)(this + 0x10) + 0x48))(*(long **)(this + 0x10),pvVar5,uVar6,this[0x41]);
  local_80 = &PTR__WriteStringStream_101b83848;
  if ((local_78 & 1) != 0) {
    delete(local_68);
  }
  return;
}

void XmlReader::ParseBoolean() {
void *puVar1;
  void *puVar2;
  char cVar3;
  string sVar4;
  int iVar5;
  ostream *poVar6;
  unsigned int *puVar7;
  unsigned long long uVar8;
  char *pcVar9;
  void *local_178;
  void *local_170 [8];
  unsigned long long local_130;
  unsigned long long uStack_128;
  unsigned long long local_120;
  unsigned long long uStack_118;
  unsigned int local_110;
  void *local_108 [17];
  unsigned long long local_80;
  unsigned int local_78;
  byte local_70;
  char local_6f [7];
  unsigned long local_68;
  char *local_60;
  string local_58;
  char local_57 [7];
  unsigned long local_50;
  char *local_48;
  unsigned int *local_40;
  unsigned int local_34;
  
  cVar3 = (**(code **)(**(long **)(this + 8) + 0x20))();
  puVar2 = PTR_vtable_101ab45a8;
  if (cVar3 != '\0') {
    puVar1 = (char*)PTR_vtable_101ab45a8 + 0x40;
    local_108[0] = (char*)PTR_construction_vtable_101ab4158 + 0x40;
    local_178 = puVar1;
    // std code
    local_80 = 0;
    local_78 = 0xffffffff;
    local_108[0] = puVar2 + 0x68;
    local_178 = puVar1;
    // std code
    local_170[0] = (char*)PTR_vtable_101ab4590 + 0x10;
    local_130 = 0;
    uStack_128 = 0;
    local_120 = 0;
    uStack_118 = 0;
    local_110 = 0x18;
    // std code
              ((ostream *)&local_178,"Parsing was terminated: expected 0 or 1 found EOF",0x31);
    local_40 = (unsigned int *)___cxa_allocate_exception(0x28);
    uVar8 = // std code
    *local_40 = 0xffff8032;
    local_34 = (unsigned int)0((int7)((unsigned long)uVar8 >> 8),1);
    // std code
    *(unsigned long long *)(local_40 + 8) = 0;
    local_34 = 0;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(local_40,&AnyRpcException::typeinfo,AnyRpcException::~AnyRpcException);
  }
  sVar4 = (string)(**(code **)(**(long **)(this + 8) + 0x30))();
  puVar2 = PTR_vtable_101ab45a8;
  if (sVar4 == (string)0x31) {
    (**(code **)(**(long **)(this + 0x10) + 0x28))();
  }
  else {
    if (sVar4 != (string)0x30) {
      puVar1 = (char*)PTR_vtable_101ab45a8 + 0x40;
      local_108[0] = (char*)PTR_construction_vtable_101ab4158 + 0x40;
      local_178 = puVar1;
      // std code
      local_80 = 0;
      local_78 = 0xffffffff;
      local_108[0] = puVar2 + 0x68;
      local_178 = puVar1;
      // std code
      local_170[0] = (char*)PTR_vtable_101ab4590 + 0x10;
      local_130 = 0;
      uStack_128 = 0;
      local_120 = 0;
      uStack_118 = 0;
      local_110 = 0x18;
      poVar6 = // std code
                         ((ostream *)&local_178,"Parsing was terminated: expected 0 or 1 found ",
                          0x2e);
      local_58 = sVar4;
      // std code
      local_40 = (unsigned int *)___cxa_allocate_exception(0x28);
      uVar8 = // std code
      *local_40 = 0xffff8032;
      local_34 = (unsigned int)0((int7)((unsigned long)uVar8 >> 8),1);
      // std code
      *(unsigned long long *)(local_40 + 8) = 0;
      local_34 = 0;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(local_40,&AnyRpcException::typeinfo,AnyRpcException::~AnyRpcException);
    }
    (**(code **)(**(long **)(this + 0x10) + 0x30))();
  }
  iVar5 = GetNextTag(this,false);
  puVar2 = PTR_vtable_101ab45a8;
  if (iVar5 != 5) {
    puVar1 = (char*)PTR_vtable_101ab45a8 + 0x40;
    local_108[0] = (char*)PTR_construction_vtable_101ab4158 + 0x40;
    local_178 = puVar1;
    // std code
    local_80 = 0;
    local_78 = 0xffffffff;
    local_40 = (unsigned int *)(puVar2 + 0x18);
    local_108[0] = puVar2 + 0x68;
    local_178 = puVar1;
    // std code
    local_170[0] = (char*)PTR_vtable_101ab4590 + 0x10;
    local_130 = 0;
    uStack_128 = 0;
    local_120 = 0;
    uStack_118 = 0;
    local_110 = 0x18;
    poVar6 = // std code
                       ((ostream *)&local_178,"Parse error: found ",0x13);
    TagToString((int)&local_58);
    pcVar9 = local_48;
    if (((byte)local_58 & 1) == 0) {
      local_50 = (unsigned long)((byte)local_58 >> 1);
      pcVar9 = local_57;
    }
    poVar6 = // std code
    poVar6 = // std code TagToString(1 param_1, (int&local_70);
    pcVar9 = local_60;
    if ((local_70 & 1) == 0) {
      local_68 = (unsigned long)(local_70 >> 1);
      pcVar9 = local_6f;
    }
    // std code if(1 param_1, 1 param_1, (local_70 & 1 != 0 {
      delete(local_60);
    }
    if (((byte)local_58 & 1) != 0) {
      delete(local_48);
    }
    puVar7 = (unsigned int *)___cxa_allocate_exception(0x28);
    uVar8 = // std code
    *puVar7 = 0xffff8030;
    local_34 = (unsigned int)0((int7)((unsigned long)uVar8 >> 8),1);
    // std code
    *(unsigned long long *)(puVar7 + 8) = 0;
    local_34 = 0;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar7,&AnyRpcException::typeinfo,AnyRpcException::~AnyRpcException);
  }
  return;
}

void XmlReader::ParseDateTime() {
void *puVar1;
  void *puVar2;
  long *plVar3;
  int iVar4;
  time_t tVar5;
  unsigned long long uVar6;
  ostream *poVar7;
  unsigned int *puVar8;
  unsigned long uVar9;
  char *pcVar10;
  void *local_1c0;
  void *local_1b8 [8];
  unsigned long long local_178;
  unsigned long long uStack_170;
  unsigned long long local_168;
  unsigned long long uStack_160;
  unsigned int local_158;
  void *local_150 [17];
  unsigned long long local_c8;
  unsigned int local_c0;
  tm local_b8;
  void **local_80;
  unsigned long long local_78;
  unsigned long uStack_70;
  char *local_68;
  void *local_60;
  string local_58;
  char local_57 [7];
  unsigned long local_50;
  char *local_48;
  unsigned int *local_40;
  unsigned int local_34;
  
  local_80 = &PTR__WriteStringStream_101b83848;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = (char *)0x0;
  // std code
  ParseStringToStream(this,(Stream *)&local_80);
  uVar9 = uStack_70;
  pcVar10 = local_68;
  if ((local_78 & 1) == 0) {
    uVar9 = local_78 >> 1 & 0x7f;
    pcVar10 = (char *)((long)&local_78 + 1);
  }
  iVar4 = GetNextTag(this,false);
  puVar1 = PTR_vtable_101ab45a8;
  if (iVar4 != 0x1d) {
    puVar2 = (char*)PTR_vtable_101ab45a8 + 0x40;
    local_150[0] = (char*)PTR_construction_vtable_101ab4158 + 0x40;
    local_1c0 = puVar2;
    // std code
    local_c8 = 0;
    local_c0 = 0xffffffff;
    local_60 = puVar1 + 0x18;
    local_150[0] = puVar1 + 0x68;
    local_1c0 = puVar2;
    // std code
    local_1b8[0] = (char*)PTR_vtable_101ab4590 + 0x10;
    local_178 = 0;
    uStack_170 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0x18;
    local_40 = (unsigned int *)local_1b8[0];
    poVar7 = // std code
                       ((ostream *)&local_1c0,"Parse error: found ",0x13);
    TagToString((int)&local_b8);
    if (((byte)local_b8.tm_sec & 1) == 0) {
      local_b8._8_8_ = ZEXT18((byte)local_b8.tm_sec >> 1);
      pcVar10 = (char *)((long)&local_b8.tm_sec + 1);
    }
    else {
      pcVar10 = (char *)CONCAT44(local_b8.tm_year,local_b8.tm_mon);
    }
    poVar7 = // std code
                       (poVar7,pcVar10,local_b8._8_8_);
    poVar7 = // std code TagToString(1 param_1, (int&local_58);
    pcVar10 = local_48;
    if (((byte)local_58 & 1) == 0) {
      local_50 = (unsigned long)((byte)local_58 >> 1);
      pcVar10 = local_57;
    }
    // std code if(1 param_1, 1 param_1, ((bytelocal_58 & 1 != 0) {
      delete(local_48);
    }
    if (((byte)local_b8.tm_sec & 1) != 0) {
      delete((void *)CONCAT44(local_b8.tm_year,local_b8.tm_mon));
    }
    puVar8 = (unsigned int *)___cxa_allocate_exception(0x28);
    uVar6 = // std code
    *puVar8 = 0xffff8030;
    local_34 = (unsigned int)0((int7)((unsigned long)uVar6 >> 8),1);
    // std code
    *(unsigned long long *)(puVar8 + 8) = 0;
    local_34 = 0;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar8,&AnyRpcException::typeinfo,AnyRpcException::~AnyRpcException);
  }
  if ((uVar9 == 0x11) &&
     (iVar4 = _sscanf(pcVar10,"%4d%2d%2dT%2d:%2d:%2d",&local_b8.tm_year,&local_b8.tm_mon,
                      &local_b8.tm_mday,&local_b8.tm_hour,&local_b8.tm_min,&local_b8), iVar4 == 6))
  {
    local_b8.tm_year = local_b8.tm_year + -0x76c;
    local_b8.tm_mon = local_b8.tm_mon + -1;
    local_b8.tm_isdst = -1;
    plVar3 = *(long **)(this + 0x10);
    tVar5 = _mktime(&local_b8);
    (**(code **)(*plVar3 + 0x38))(plVar3,tVar5);
    local_80 = &PTR__WriteStringStream_101b83848;
    if ((local_78 & 1) != 0) {
      delete(local_68);
    }
    return;
  }
  puVar2 = PTR_vtable_101ab45a8;
  puVar1 = (char*)PTR_vtable_101ab45a8 + 0x40;
  local_150[0] = (char*)PTR_construction_vtable_101ab4158 + 0x40;
  local_1c0 = puVar1;
  // std code
  local_c8 = 0;
  local_c0 = 0xffffffff;
  local_60 = puVar2 + 0x18;
  local_150[0] = puVar2 + 0x68;
  local_1c0 = puVar1;
  // std code
  local_1b8[0] = (char*)PTR_vtable_101ab4590 + 0x10;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0x18;
  // std code
            ((ostream *)&local_1c0,"Parsing was terminated: failed to convert string to datetime",
             0x3c);
  local_40 = (unsigned int *)___cxa_allocate_exception(0x28);
  uVar6 = // std code
  *local_40 = 0xffff8032;
  local_34 = (unsigned int)0((int7)((unsigned long)uVar6 >> 8),1);
  // std code
  *(unsigned long long *)(local_40 + 8) = 0;
  local_34 = 0;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(local_40,&AnyRpcException::typeinfo,AnyRpcException::~AnyRpcException);
}

void XmlReader::ParseKey() {
void *puVar1;
  void *puVar2;
  int iVar3;
  ostream *poVar4;
  unsigned int *puVar5;
  char *pcVar6;
  void *local_178;
  void *local_170 [8];
  unsigned long long local_130;
  unsigned long long uStack_128;
  unsigned long long local_120;
  unsigned long long uStack_118;
  unsigned int local_110;
  void *local_108 [17];
  unsigned long long local_80;
  unsigned int local_78;
  void *local_70;
  void *local_68;
  byte local_60;
  char local_5f [7];
  unsigned long local_58;
  char *local_50;
  string local_48;
  char local_47 [7];
  unsigned long local_40;
  char *local_38;
  
  iVar3 = GetNextTag(this,false);
  puVar2 = PTR_vtable_101ab45a8;
  if (iVar3 != 0x38) {
    puVar1 = (char*)PTR_vtable_101ab45a8 + 0x40;
    local_108[0] = (char*)PTR_construction_vtable_101ab4158 + 0x40;
    local_178 = puVar1;
    // std code
    local_80 = 0;
    local_78 = 0xffffffff;
    local_70 = puVar2 + 0x18;
    local_108[0] = puVar2 + 0x68;
    local_178 = puVar1;
    // std code
    local_170[0] = (char*)PTR_vtable_101ab4590 + 0x10;
    local_130 = 0;
    uStack_128 = 0;
    local_120 = 0;
    uStack_118 = 0;
    local_110 = 0x18;
    local_68 = local_170[0];
    poVar4 = // std code
                       ((ostream *)&local_178,"Parse error: found ",0x13);
    TagToString((int)&local_48);
    pcVar6 = local_38;
    if (((byte)local_48 & 1) == 0) {
      local_40 = (unsigned long)((byte)local_48 >> 1);
      pcVar6 = local_47;
    }
    poVar4 = // std code
    poVar4 = // std code TagToString(1 param_1, (int&local_60);
    pcVar6 = local_50;
    if ((local_60 & 1) == 0) {
      local_58 = (unsigned long)(local_60 >> 1);
      pcVar6 = local_5f;
    }
    // std code if(1 param_1, 1 param_1, (local_60 & 1 != 0 {
      delete(local_50);
    }
    if (((byte)local_48 & 1) != 0) {
      delete(local_38);
    }
    puVar5 = (unsigned int *)___cxa_allocate_exception(0x28);
    // std code
    *puVar5 = 0xffff8030;
    // std code
    *(unsigned long long *)(puVar5 + 8) = 0;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar5,&AnyRpcException::typeinfo,AnyRpcException::~AnyRpcException);
  }
  ParseString(this,0x38);
  return;
}

void XmlReader::ParseMap() {
void *puVar1;
  void *puVar2;
  int iVar3;
  ostream *poVar4;
  unsigned int *puVar5;
  unsigned long long uVar6;
  char *pcVar7;
  long lVar8;
  void *local_178;
  void *local_170 [8];
  unsigned long long local_130;
  unsigned long long uStack_128;
  unsigned long long local_120;
  unsigned long long uStack_118;
  unsigned int local_110;
  void *local_108 [17];
  unsigned long long local_80;
  unsigned int local_78;
  byte local_70;
  char local_6f [7];
  unsigned long local_68;
  char *local_60;
  void *local_58;
  string local_50;
  char local_4f [7];
  unsigned long local_48;
  char *local_40;
  unsigned int local_34;
  
  (**(code **)(**(long **)(this + 0x10) + 0x80))();
  lVar8 = 0;
  while( true ) {
  }
  puVar1 = (char*)PTR_vtable_101ab45a8 + 0x40;
  local_108[0] = (char*)PTR_construction_vtable_101ab4158 + 0x40;
  local_178 = puVar1;
  // std code
  local_80 = 0;
  local_78 = 0xffffffff;
  local_58 = puVar2 + 0x18;
  local_108[0] = puVar2 + 0x68;
  local_178 = puVar1;
  // std code
  local_170[0] = (char*)PTR_vtable_101ab4590 + 0x10;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0x18;
  poVar4 = // std code
                     ((ostream *)&local_178,"Parse error: found ",0x13);
  TagToString((int)&local_50);
  pcVar7 = local_40;
  if (((byte)local_50 & 1) == 0) {
    local_48 = (unsigned long)((byte)local_50 >> 1);
    pcVar7 = local_4f;
  }
  poVar4 = // std code
  poVar4 = // std code TagToString(1 param_1, (int&local_70);
  pcVar7 = local_60;
  if ((local_70 & 1) == 0) {
    local_68 = (unsigned long)(local_70 >> 1);
    pcVar7 = local_6f;
  }
  // std code if(1 param_1, 1 param_1, (local_70 & 1 != 0 {
    delete(local_60);
  }
  if (((byte)local_50 & 1) != 0) {
    delete(local_40);
  }
  puVar5 = (unsigned int *)___cxa_allocate_exception(0x28);
  uVar6 = // std code
  *puVar5 = 0xffff8030;
  local_34 = (unsigned int)0((int7)((unsigned long)uVar6 >> 8),1);
  // std code
  *(unsigned long long *)(puVar5 + 8) = 0;
  local_34 = 0;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar5,&AnyRpcException::typeinfo,AnyRpcException::~AnyRpcException);
}

void XmlReader::ParseMethodName() {
void *puVar1;
  void *puVar2;
  int iVar3;
  unsigned long uVar4;
  ostream *poVar5;
  unsigned long long uVar6;
  unsigned int *puVar7;
  XmlReader *in_RSI;
  char *pcVar8;
  string *in_RDI;
  void *local_1a0;
  void *local_198 [8];
  unsigned long long local_158;
  unsigned long long uStack_150;
  unsigned long long local_148;
  unsigned long long uStack_140;
  unsigned int local_138;
  void *local_130 [17];
  unsigned long long local_a8;
  unsigned int local_a0;
  byte local_98;
  char local_97 [7];
  unsigned long local_90;
  char *local_88;
  void **local_80;
  unsigned long local_78;
  unsigned long uStack_70;
  void *local_68;
  void *local_60;
  string local_58;
  char local_57 [7];
  unsigned long local_50;
  char *local_48;
  unsigned int *local_40;
  unsigned int local_34;
  
  local_80 = &PTR__WriteStringStream_101b83848;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = (void *)0x0;
  // std code
  ParseStringToStream(in_RSI,(Stream *)&local_80);
  iVar3 = GetNextTag(in_RSI,false);
  puVar2 = PTR_vtable_101ab45a8;
  if (iVar3 != 0x41) {
    puVar1 = (char*)PTR_vtable_101ab45a8 + 0x40;
    local_130[0] = (char*)PTR_construction_vtable_101ab4158 + 0x40;
    local_1a0 = puVar1;
    // std code
    local_a8 = 0;
    local_a0 = 0xffffffff;
    local_60 = puVar2 + 0x18;
    local_130[0] = puVar2 + 0x68;
    local_1a0 = puVar1;
    // std code
    local_198[0] = (char*)PTR_vtable_101ab4590 + 0x10;
    local_158 = 0;
    uStack_150 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0x18;
    local_40 = (unsigned int *)local_198[0];
    poVar5 = // std code
                       ((ostream *)&local_1a0,"Parse error: found ",0x13);
    TagToString((int)&local_58);
    pcVar8 = local_48;
    if (((byte)local_58 & 1) == 0) {
      local_50 = (unsigned long)((byte)local_58 >> 1);
      pcVar8 = local_57;
    }
    poVar5 = // std code
    poVar5 = // std code TagToString(1 param_1, (int&local_98);
    pcVar8 = local_88;
    if ((local_98 & 1) == 0) {
      local_90 = (unsigned long)(local_98 >> 1);
      pcVar8 = local_97;
    }
    // std code if(1 param_1, 1 param_1, (local_98 & 1 != 0 {
      delete(local_88);
    }
    if (((byte)local_58 & 1) != 0) {
      delete(local_48);
    }
    puVar7 = (unsigned int *)___cxa_allocate_exception(0x28);
    uVar6 = // std code
    *puVar7 = 0xffff8030;
    local_34 = (unsigned int)0((int7)((unsigned long)uVar6 >> 8),1);
    // std code
    *(unsigned long long *)(puVar7 + 8) = 0;
    local_34 = 0;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar7,&AnyRpcException::typeinfo,AnyRpcException::~AnyRpcException);
  }
  uVar4 = uStack_70;
  if ((local_78 & 1) == 0) {
    uVar4 = local_78 >> 1 & 0x7f;
  }
  if (uVar4 == 0) {
    puVar1 = (char*)PTR_vtable_101ab45a8 + 0x40;
    local_130[0] = (char*)PTR_construction_vtable_101ab4158 + 0x40;
    local_1a0 = puVar1;
    // std code
    local_a8 = 0;
    local_a0 = 0xffffffff;
    local_60 = puVar2 + 0x18;
    local_130[0] = puVar2 + 0x68;
    local_1a0 = puVar1;
    // std code
    local_198[0] = (char*)PTR_vtable_101ab4590 + 0x10;
    local_158 = 0;
    uStack_150 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0x18;
    // std code
              ((ostream *)&local_1a0,"Parse error with xml tag: method name must be defined",0x35);
    local_40 = (unsigned int *)___cxa_allocate_exception(0x28);
    uVar6 = // std code
    *local_40 = 0xffff8030;
    local_34 = (unsigned int)0((int7)((unsigned long)uVar6 >> 8),1);
    // std code
    *(unsigned long long *)(local_40 + 8) = 0;
    local_34 = 0;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(local_40,&AnyRpcException::typeinfo,AnyRpcException::~AnyRpcException);
  }
  // std code
  local_80 = &PTR__WriteStringStream_101b83848;
  if ((local_78 & 1) != 0) {
    delete(local_68);
  }
  return;
}

void XmlReader::ParseNumber(int param_1) {
}

void XmlReader::ParseParams() {
void *puVar1;
  void *puVar2;
  int iVar3;
  ostream *poVar4;
  unsigned int *puVar5;
  unsigned long long uVar6;
  char *pcVar7;
  long lVar8;
  void *local_178;
  void *local_170 [8];
  unsigned long long local_130;
  unsigned long long uStack_128;
  unsigned long long local_120;
  unsigned long long uStack_118;
  unsigned int local_110;
  void *local_108 [17];
  unsigned long long local_80;
  unsigned int local_78;
  byte local_70;
  char local_6f [7];
  unsigned long local_68;
  char *local_60;
  ostream *local_58;
  string local_50;
  char local_4f [7];
  unsigned long local_48;
  char *local_40;
  unsigned int local_34;
  
  (**(code **)(**(long **)(this + 0x10) + 0xa8))();
  lVar8 = 0;
  while( true ) {
  }
  puVar1 = (char*)PTR_vtable_101ab45a8 + 0x40;
  local_108[0] = (char*)PTR_construction_vtable_101ab4158 + 0x40;
  local_178 = puVar1;
  // std code
  local_80 = 0;
  local_78 = 0xffffffff;
  local_58 = (ostream *)(puVar2 + 0x18);
  local_108[0] = puVar2 + 0x68;
  local_178 = puVar1;
  // std code
  local_170[0] = (char*)PTR_vtable_101ab4590 + 0x10;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0x18;
  poVar4 = // std code
                     ((ostream *)&local_178,"Parse error: found ",0x13);
  TagToString((int)&local_50);
  pcVar7 = local_40;
  if (((byte)local_50 & 1) == 0) {
    local_48 = (unsigned long)((byte)local_50 >> 1);
    pcVar7 = local_4f;
  }
  poVar4 = // std code
  poVar4 = // std code TagToString(1 param_1, (int&local_70);
  pcVar7 = local_60;
  if ((local_70 & 1) == 0) {
    local_68 = (unsigned long)(local_70 >> 1);
    pcVar7 = local_6f;
  }
  // std code if(1 param_1, 1 param_1, (local_70 & 1 != 0 {
    delete(local_60);
  }
  if (((byte)local_50 & 1) != 0) {
    delete(local_40);
  }
  puVar5 = (unsigned int *)___cxa_allocate_exception(0x28);
  uVar6 = // std code
  *puVar5 = 0xffff8030;
  local_34 = (unsigned int)0((int7)((unsigned long)uVar6 >> 8),1);
  // std code
  *(unsigned long long *)(puVar5 + 8) = 0;
  local_34 = 0;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar5,&AnyRpcException::typeinfo,AnyRpcException::~AnyRpcException);
}

void XmlReader::ParseString(int param_1) {
}

void XmlReader::ParseValue(bool param_1) {
}

void XmlReader::TagToString(int param_1) {
}

XmlReader::~XmlReader() {
*(void ***)this = &PTR__Reader_101b83818;
  if (((byte)this[0x20] & 1) != 0) {
    delete(*(void **)(this + 0x30));
  }
  delete(this);
  return;
}
}
