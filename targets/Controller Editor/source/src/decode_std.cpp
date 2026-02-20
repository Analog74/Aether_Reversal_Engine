#include <ni/controller_editor/decode_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::uri {

void decode(1 param_1, std::string const& {
string *psVar1;
  string sVar2;
  string *psVar3;
  int iVar4;
  unsigned long uVar5;
  unsigned long long *puVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  unsigned long uVar10;
  string *psVar11;
  string *psVar12;
  bool bVar13;
  
  sVar2 = *param_1;
  bVar13 = ((byte)sVar2 & 1) == 0;
  uVar5 = *(unsigned long *)(param_1 + 8);
  uVar10 = (unsigned long)((byte)sVar2 >> 1);
  if (!bVar13) {
    uVar10 = uVar5;
  }
  if (uVar10 != 0) {
    psVar1 = param_1 + 1;
    psVar12 = *(string **)(param_1 + 0x10);
    psVar11 = psVar12;
    if (((byte)sVar2 & 1) == 0) {
      psVar11 = psVar1;
    }
    do {
      if (*psVar11 == (string)0x25) {
        if (bVar13) {
          uVar5 = (unsigned long)((byte)sVar2 >> 1);
          psVar12 = psVar1;
        }
        if (psVar11 + 1 == psVar12 + uVar5) {
          puVar6 = (unsigned long long *)___cxa_allocate_exception(0x20);
          pcVar7 = (char *)new char[0x40];
          builtin_strncpy(pcVar7,"Invalid URI string, two hexadecimal digits must follow \'%\'",0x3b
                         );
          *puVar6 = &PTR__uri_exception_101b1d480;
          *(unsigned int *)(puVar6 + 1) = 0x41;
          *(unsigned int *)((long)puVar6 + 0xc) = 0;
          *(unsigned int *)(puVar6 + 2) = 0x3a;
          *(unsigned int *)((long)puVar6 + 0x14) = 0;
          puVar6[3] = pcVar7;
                    /* WARNING: Subroutine does not return */
          ___cxa_throw(puVar6,&uri_exception::typeinfo,uri_exception::~uri_exception);
        }
        uVar9 = (uint)(char)psVar11[1];
        uVar8 = uVar9 - 0x30;
        if (9 < uVar9 - 0x30) {
          if (uVar9 - 0x41 < 6) {
            uVar9 = uVar9 - 0x37;
            uVar8 = uVar9;
          }
          else {
            if (5 < uVar9 - 0x61) {
              puVar6 = (unsigned long long *)___cxa_allocate_exception(0x20);
              pcVar7 = (char *)new char[0x20];
              builtin_strncpy(pcVar7,"Invalid hexadecimal digit",0x1a);
              *puVar6 = &PTR__uri_exception_101b1d480;
              *(unsigned int *)(puVar6 + 1) = 0x21;
              *(unsigned int *)((long)puVar6 + 0xc) = 0;
              *(unsigned int *)(puVar6 + 2) = 0x19;
              *(unsigned int *)((long)puVar6 + 0x14) = 0;
              puVar6[3] = pcVar7;
                    /* WARNING: Subroutine does not return */
              ___cxa_throw(puVar6,&uri_exception::typeinfo,uri_exception::~uri_exception);
            }
            uVar9 = uVar9 - 0x57;
            uVar8 = uVar9;
          }
        }
        psVar11 = psVar11 + 2;
        if (psVar11 == psVar12 + uVar5) {
          puVar6 = (unsigned long long *)___cxa_allocate_exception(0x20,psVar12,uVar9,uVar8);
          pcVar7 = (char *)new char[0x40];
          builtin_strncpy(pcVar7,"Invalid URI string, two hexadecimal digits must follow \'%\'",0x3b
                         );
          *puVar6 = &PTR__uri_exception_101b1d480;
          *(unsigned int *)(puVar6 + 1) = 0x41;
          *(unsigned int *)((long)puVar6 + 0xc) = 0;
          *(unsigned int *)(puVar6 + 2) = 0x3a;
          *(unsigned int *)((long)puVar6 + 0x14) = 0;
          puVar6[3] = pcVar7;
                    /* WARNING: Subroutine does not return */
          ___cxa_throw(puVar6,&uri_exception::typeinfo,uri_exception::~uri_exception);
        }
        iVar4 = (int)(char)*psVar11;
        if (((9 < iVar4 - 0x30U) && (5 < iVar4 - 0x41U)) && (5 < iVar4 - 0x61U)) {
          puVar6 = (unsigned long long *)___cxa_allocate_exception(0x20,psVar12,iVar4 - 0x61U,uVar8);
          pcVar7 = (char *)new char[0x20];
          builtin_strncpy(pcVar7,"Invalid hexadecimal digit",0x1a);
          *puVar6 = &PTR__uri_exception_101b1d480;
          *(unsigned int *)(puVar6 + 1) = 0x21;
          *(unsigned int *)((long)puVar6 + 0xc) = 0;
          *(unsigned int *)(puVar6 + 2) = 0x19;
          *(unsigned int *)((long)puVar6 + 0x14) = 0;
          puVar6[3] = pcVar7;
                    /* WARNING: Subroutine does not return */
          ___cxa_throw(puVar6,&uri_exception::typeinfo,uri_exception::~uri_exception);
        }
        // std code
      }
      else {
        if ((char)*psVar11 < '\0') {
          puVar6 = (unsigned long long *)___cxa_allocate_exception(0x20);
          pcVar7 = (char *)new char[0x40];
          builtin_strncpy(pcVar7,"Invalid encoded URI string, must be entirely ascii",0x33);
          *puVar6 = &PTR__uri_exception_101b1d480;
          *(unsigned int *)(puVar6 + 1) = 0x41;
          *(unsigned int *)((long)puVar6 + 0xc) = 0;
          *(unsigned int *)(puVar6 + 2) = 0x32;
          *(unsigned int *)((long)puVar6 + 0x14) = 0;
          puVar6[3] = pcVar7;
                    /* WARNING: Subroutine does not return */
          ___cxa_throw(puVar6,&uri_exception::typeinfo,uri_exception::~uri_exception);
        }
        // std code
      }
      psVar11 = psVar11 + 1;
      sVar2 = *param_1;
      uVar10 = (unsigned long)((byte)sVar2 >> 1);
      bVar13 = ((byte)sVar2 & 1) == 0;
      uVar5 = *(unsigned long *)(param_1 + 8);
      psVar12 = *(string **)(param_1 + 0x10);
      psVar3 = psVar1;
      if (!bVar13) {
        uVar10 = uVar5;
        psVar3 = psVar12;
      }
    } while (psVar11 != psVar3 + uVar10);
  }
  *(unsigned long long *)(this + 0x10) = 0;
  *(unsigned long long *)this = 0;
  *(unsigned long long *)(this + 8) = 0;
  return this;
}
}
