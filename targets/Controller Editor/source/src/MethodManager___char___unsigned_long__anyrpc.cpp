#include <ni/controller_editor/MethodManager___char___unsigned_long__anyrpc.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace anyrpc::XmlRpcHandler(anyrpc {

void MethodManager*, char*, unsigned long, anyrpc::Stream&) {
unsigned int uVar1;
  unsigned int uVar2;
  unsigned char uVar3;
  unsigned char uVar4;
  void2 uVar5;
  void2 uVar6;
  unsigned char uVar7;
  unsigned char uVar8;
  char cVar9;
  int iVar10;
  long lVar11;
  unsigned long uVar12;
  Value *pVVar13;
  size_t sVar14;
  void7 *puVar15;
  Value *pVVar16;
  char *pcVar17;
  unsigned long uVar18;
  void **local_1d8;
  char *local_1d0;
  char *local_1c8;
  unsigned long long local_1c0;
  unsigned long long uStack_1b8;
  char *local_1b0;
  void2 local_1a8;
  void **local_1a0;
  void ***local_198;
  unsigned long long local_190;
  int local_188;
  unsigned long local_180;
  unsigned long long uStack_178;
  void *local_170;
  unsigned long long uStack_168;
  void2 local_160;
  unsigned char local_15e;
  void **local_158;
  unsigned long long local_150;
  unsigned long long uStack_148;
  unsigned int local_140;
  void *local_138;
  void *pvStack_130;
  unsigned long long local_128;
  unsigned char local_120;
  Handler local_118 [8];
  long local_110;
  void *local_108;
  long local_f8;
  unsigned long long uStack_f0;
  unsigned int local_e8;
  unsigned long long local_d8;
  unsigned long long uStack_d0;
  unsigned int local_c8;
  unsigned long long local_b8;
  unsigned long long uStack_b0;
  unsigned int local_a8;
  string local_98;
  void7 uStack_97;
  char cStack_90;
  void7 uStack_8f;
  unsigned char uStack_88;
  unsigned char uStack_87;
  void6 uStack_86;
  Value *local_80;
  unsigned long local_78;
  unsigned long long uStack_70;
  int local_68;
  char *local_60;
  string local_58;
  void7 uStack_57;
  unsigned int uStack_50;
  unsigned char uStack_4c;
  void2 uStack_4b;
  unsigned char uStack_49;
  unsigned char local_48;
  unsigned char uStack_47;
  void2 uStack_46;
  unsigned int uStack_44;
  unsigned int uStack_40;
  
  local_1d8 = &PTR__InSituStringStream_101b82ff0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1a8 = 1;
  local_1b0 = param_2 + param_3;
  local_198 = &local_1d8;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_170 = (void *)0x0;
  uStack_168 = 0;
  local_160 = 1;
  local_1a0 = &PTR__XmlReader_101b83508;
  local_15e = 0;
  local_158 = &PTR__Document_101b830a8;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  local_138 = (void *)0x0;
  pvStack_130 = (void *)0x0;
  local_128 = 0;
  local_120 = 1;
  local_1d0 = param_2;
  local_1c8 = param_2;
  XmlReader::ParseRequest(local_118);
  if (local_188 != 0) {
    local_58 = (string)0x16;
    uStack_57 = 0x65206573726150;
    uStack_50 = 0x726f7272;
    uStack_4c = 0;
    XmlGenerateFaultResponse(-0x7fbc,&local_58,param_4);
    goto joined_r0x00010094fa1a;
  }
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  Value::Destroy((Value *)&local_d8);
  uVar7 = uStack_49;
  uVar5 = uStack_4b;
  uVar3 = uStack_4c;
  uVar1 = uStack_50;
  local_d8 = local_150;
  uStack_d0 = uStack_148;
  local_c8 = local_140;
  local_140 = 1;
  uStack_4c = (unsigned char)((unsigned long)param_4 >> 0x20);
  uVar4 = uStack_4c;
  uStack_49 = (unsigned char)((unsigned long)param_4 >> 0x38);
  uVar8 = uStack_49;
  uStack_4b = (void2)((unsigned long)param_4 >> 0x28);
  uVar6 = uStack_4b;
  uStack_50 = SUB84(param_4,0);
  uVar2 = uStack_50;
  if (((byte)local_118[0] & 1) == 0) {
    if ((byte)local_118[0] >> 1 == 0x10) return;
    cVar9 = MethodManager::ExecuteMethod
                      (param_1,(string *)local_118,(Value *)&local_d8,(Value *)&local_78);
    if (cVar9 == '\0') {
      local_58 = (string)0x20;
      uStack_57 = 0x20646f6874654d;
      uStack_50 = 0x20746f6e;
      uStack_4c = 0x66;
      uStack_4b = 0x756f;
      uStack_49 = 0x6e;
      local_48 = 100;
      uStack_47 = 0;
      XmlGenerateFaultResponse(-0x7f59,&local_58,param_4);
    }
    else {
      if (local_68 == 0) {
        Value::Destroy((Value *)&local_78);
        local_68 = 0x700006;
        uStack_70 = CONCAT17(0xf,(void7)uStack_70);
        local_78 = local_78 & 0xffffffffffffff00;
      }
      (**(code **)(*(long *)param_4 + 0x60))
                (param_4,
                 "<?xml version=\"1.0\" encoding=\"utf-8\" ?>\r\n<methodResponse><params><param>");
      local_58 = (string)0x18;
      uStack_57 = 0x101b834;
      local_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_50 = uVar2;
      uStack_4c = uVar4;
      uStack_4b = uVar6;
      uStack_49 = uVar8;
      Value::TraverseInternal((Value *)&local_78,(Handler *)&local_58);
      (**(code **)(*(long *)param_4 + 0x60))(param_4,"</param></params></methodResponse>\r\n");
    }
  }
  else {
    if (local_110 != 0x10) return;
    uStack_50 = uVar1;
    uStack_4c = uVar3;
    uStack_4b = uVar5;
    uStack_49 = uVar7;
    iVar10 = // std code if(4 param_4, 4 param_4, iVar10 != 0 return;
    if ((((charlocal_c8 == '\x05') && (lVar11 = Value::Size((Value *)&local_d8), lVar11 == 1)) &&
       (lVar11 = Value::operator[]((Value *)&local_d8,0), *(char *)(lVar11 + 0x10) == '\x05')) {
      local_80 = (Value *)Value::operator[]((Value *)&local_d8,0);
      uVar12 = Value::Size(local_80);
      Value::SetSize((Value *)&local_78,uVar12);
      iVar10 = Value::Size(local_80);
      if (0 < iVar10) {
        uVar12 = 0;
        do {
          local_b8 = 0;
          uStack_b0 = 0;
          local_a8 = 0;
          pVVar13 = (Value *)Value::operator[](local_80,uVar12);
          if ((Value *)&local_b8 != pVVar13) {
            Value::Destroy((Value *)&local_b8);
            local_b8 = *(unsigned long long *)pVVar13;
            uStack_b0 = *(unsigned long long *)(pVVar13 + 8);
            local_a8 = *(unsigned int *)(pVVar13 + 0x10);
            *(unsigned int *)(pVVar13 + 0x10) = 1;
          }
          if ((char)local_a8 == '\x04') {
            local_48 = 6;
            uStack_47 = 0;
            uStack_46 = 0x10;
            local_58 = (string)0x7d;
            uStack_57 = 0x100a04f;
            uStack_50 = 10;
            uStack_4c = 0;
            uStack_4b = 0;
            uStack_49 = 0;
            Value::FindMember((Value *)&local_f8);
            Value::Destroy((Value *)&local_58);
            Value::MemberEnd();
            if ((local_f8 == 0(uStack_57,local_58)) ||
               (lVar11 = Value::operator[]((Value *)&local_b8,"methodName"),
               (*(byte *)(lVar11 + 0x12) & 0x10) == 0)) return;
            local_48 = 6;
            uStack_47 = 0;
            uStack_46 = 0x10;
            local_58 = (string)0x97;
            uStack_57 = 0x100a04f;
            uStack_50 = 6;
            uStack_4c = 0;
            uStack_4b = 0;
            uStack_49 = 0;
            Value::FindMember((Value *)&local_f8);
            Value::Destroy((Value *)&local_58);
            Value::MemberEnd();
            if (local_f8 == 0(uStack_57,local_58)) return;
            local_58 = (string)0x0;
            uStack_57 = 0;
            uStack_50 = 0;
            uStack_4c = 0;
            uStack_4b = 0;
            uStack_49 = 0;
            local_48 = 0;
            uStack_47 = 0;
            uStack_46 = 0;
            pVVar13 = (Value *)Value::operator[]((Value *)&local_b8,"methodName");
            local_f8 = 0;
            uStack_f0 = 0;
            local_e8 = 0;
            Value::CopyInternal((Value *)&local_f8,pVVar13);
            local_60 = (char *)Value::GetString((Value *)&local_f8);
            sVar14 = strlen(local_60);
            if (0xffffffffffffffef < sVar14) {
                    /* WARNING: Subroutine does not return */
              // std code
            }
            if (sVar14 < 0x17) {
              local_98 = (string)((char)sVar14 * '\x02');
              puVar15 = &uStack_97;
              if (sVar14 != 0) return;
            }
            else {
              uVar18 = sVar14 + 0x10 & 0xfffffffffffffff0;
              puVar15 = (void7 *)new char[uVar18];
              uStack_88 = SUB81(puVar15,0);
              uStack_87 = (unsigned char)((unsigned long)puVar15 >> 8);
              uStack_86 = (void6)((unsigned long)puVar15 >> 0x10);
              local_98 = (string)((byte)uVar18 | 1);
              uStack_97 = (void7)(uVar18 >> 8);
              uStack_8f = (void7)(sVar14 >> 8);
              cStack_90 = (char)sVar14;
              memcpy(puVar15,local_60,sVar14);
            }
            *(unsigned char *)((long)puVar15 + sVar14) = 0;
            pVVar13 = (Value *)Value::operator[]((Value *)&local_b8,"params");
            cVar9 = MethodManager::ExecuteMethod(param_1,&local_98,pVVar13,(Value *)&local_58);
            if (((byte)local_98 & 1) != 0) {
              delete((void *)CONCAT62(uStack_86,CONCAT11(uStack_87,uStack_88)));
            }
            if (cVar9 == '\0') {
              local_98 = (string)0x20;
              uStack_97 = 0x20646f6874654d;
              cStack_90 = 'n';
              uStack_8f = 0x6e756f6620746f;
              uStack_88 = 100;
              uStack_87 = 0;
              pVVar13 = (Value *)Value::operator[]((Value *)&local_78,uVar12);
              pVVar16 = (Value *)Value::operator[](pVVar13,"faultCode");
              Value::Destroy(pVVar16);
              *(unsigned int *)(pVVar16 + 0x10) = 0x1607;
              *(unsigned long long *)pVVar16 = 0xffffffffffff80a7;
              pVVar13 = (Value *)Value::operator[](pVVar13,"faultString");
              Value::Destroy(pVVar13);
              *(unsigned int *)(pVVar13 + 0x10) = 0x100006;
              Value::CopyString(pVVar13,(char *)&uStack_97,0x10);
            }
            else {
              if (CONCAT22(uStack_46,CONCAT11(uStack_47,local_48)) == 0) {
                Value::Destroy((Value *)&local_58);
                local_48 = 6;
                uStack_47 = 0;
                uStack_46 = 0x70;
                uStack_49 = 0xf;
                local_58 = (string)0x0;
              }
              pVVar13 = (Value *)Value::operator[]((Value *)&local_78,uVar12);
              pVVar13 = (Value *)Value::operator[](pVVar13,0);
              Value::operator=(pVVar13,(Value *)&local_58);
            }
            Value::Destroy((Value *)&local_f8);
            Value::Destroy((Value *)&local_58);
          }
          else {
            pVVar13 = (Value *)Value::operator[]((Value *)&local_78,uVar12);
            pVVar16 = (Value *)Value::operator[](pVVar13,"faultCode");
            Value::Destroy(pVVar16);
            *(unsigned int *)(pVVar16 + 0x10) = 0x1607;
            *(unsigned long long *)pVVar16 = 0xffffffffffff80a8;
            pVVar13 = (Value *)Value::operator[](pVVar13,"faultString");
            Value::Destroy(pVVar13);
            *(unsigned int *)(pVVar13 + 0x10) = 0x700006;
            *(unsigned long long *)pVVar13 = 0x2064696c61766e49;
            *(unsigned long long *)(pVVar13 + 7) = 0x7473657571657220;
            pVVar13[0xf] = (Value)0x0;
          }
          Value::Destroy((Value *)&local_b8);
          iVar10 = Value::Size(local_80);
          uVar12 = uVar12 + 1;
        } while ((long)uVar12 < (long)iVar10);
      }
      if (local_68 == 0) {
        Value::Destroy((Value *)&local_78);
        local_68 = 0x700006;
        uStack_70 = CONCAT17(0xf,(void7)uStack_70);
        local_78 = local_78 & 0xffffffffffffff00;
      }
      (**(code **)(*(long *)param_4 + 0x60))
                (param_4,
                 "<?xml version=\"1.0\" encoding=\"utf-8\" ?>\r\n<methodResponse><params><param>");
      local_58 = (string)0x18;
      uStack_57 = 0x101b834;
      local_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_50 = uVar2;
      uStack_4c = uVar4;
      uStack_4b = uVar6;
      uStack_49 = uVar8;
      Value::TraverseInternal((Value *)&local_78,(Handler *)&local_58);
      (**(code **)(*(long *)param_4 + 0x60))(param_4,"</param></params></methodResponse>\r\n");
    }
    else {
      pcVar17 = (char *)new char[0x20];
      local_48 = SUB81(pcVar17,0);
      uStack_47 = (unsigned char)((unsigned long)pcVar17 >> 8);
      uStack_46 = (void2)((unsigned long)pcVar17 >> 0x10);
      uStack_44 = (unsigned int)((unsigned long)pcVar17 >> 0x20);
      local_58 = (string)0x21;
      uStack_57 = 0;
      uStack_50 = 0x19;
      uStack_4c = 0;
      uStack_4b = 0;
      uStack_49 = 0;
      builtin_strncpy(pcVar17,"Invalid method parameters",0x1a);
      XmlGenerateFaultResponse(-0x7f5a,&local_58,param_4);
      delete(pcVar17);
    }
  }
  Value::Destroy((Value *)&local_78);
  Value::Destroy((Value *)&local_d8);
joined_r0x00010094fa1a:
  if (((byte)local_118[0] & 1) != 0) {
    delete(local_108);
  }
  local_158 = &PTR__Document_101b830a8;
  if (local_138 != (void *)0x0) {
    pvStack_130 = local_138;
    delete(local_138);
  }
  Value::Destroy((Value *)&local_150);
  local_1a0 = &PTR__Reader_101b83818;
  if ((local_180 & 1) != 0) {
    delete(local_170);
  }
  return 1;
}
}
