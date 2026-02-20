#include <ni/controller_editor/ManagerContainer.hpp>
namespace NI::NWL {

void ManagerContainer::checkResourcesLocation() {
char cVar1;
  path *ppVar2;
  unsigned long long *puVar3;
  unsigned long uVar4;
  unsigned char *puVar5;
  FileName local_1b0 [24];
  byte local_198;
  unsigned char local_197 [7];
  unsigned long local_190;
  unsigned char *local_188;
  byte local_180;
  unsigned char auStack_17f [15];
  unsigned char *local_170;
  FileName local_100 [24];
  byte local_e8;
  unsigned char local_e7 [7];
  unsigned long local_e0;
  unsigned char *local_d8;
  byte local_d0;
  unsigned char auStack_cf [15];
  unsigned char *local_c0;
  unsigned long long local_50;
  unsigned long long local_48;
  unsigned long long local_40;
  unsigned long long local_38;
  unsigned long long uStack_30;
  unsigned long long local_28;
  
  GP::FileName::FileName(local_100);
  if (Lib::(anonymous_namespace)::s_searchSkinDirectory != '\0') {
    ppVar2 = (path *)GP::getCurrentBundlePath();
    GP::FileName::FileName(local_1b0,ppVar2);
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    uVar4 = (unsigned long)(local_198 >> 1);
    if ((local_198 & 1) != 0) {
      uVar4 = local_190;
    }
    puVar5 = local_197;
    if ((local_198 & 1) != 0) {
      puVar5 = local_188;
    }
    // std code
    puVar5 = auStack_17f;
    if ((local_180 & 1) != 0) {
      puVar5 = local_170;
    }
    // std code
    puVar3 = (unsigned long long *)// std code
    local_40 = puVar3[2];
    local_50 = *puVar3;
    local_48 = puVar3[1];
    puVar3[2] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    GP::FileName::setPath(local_100,&local_50,1);
    // std code
    // std code
    GP::FileName::~FileName(local_1b0);
    cVar1 = GP::FileManager::existsDir(local_100);
    if (cVar1 != '\0') {
      *(unsigned int *)(this + 8) = 2;
      GP::FileName::operator=((FileName *)(this + 0x10),local_100);
      goto LAB_10002f9cf;
    }
    cVar1 = GP::FileManager::getCurDir(local_100);
    if (cVar1 != '\0') {
      local_38 = 0;
      uStack_30 = 0;
      local_28 = 0;
      uVar4 = (unsigned long)(local_e8 >> 1);
      if ((local_e8 & 1) != 0) {
        uVar4 = local_e0;
      }
      puVar5 = local_e7;
      if ((local_e8 & 1) != 0) {
        puVar5 = local_d8;
      }
      // std code
      puVar5 = auStack_cf;
      if ((local_d0 & 1) != 0) {
        puVar5 = local_c0;
      }
      // std code
      puVar3 = (unsigned long long *)// std code
      local_40 = puVar3[2];
      local_50 = *puVar3;
      local_48 = puVar3[1];
      puVar3[2] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
      GP::FileName::setPath(local_100,&local_50,1);
      // std code
      // std code
      cVar1 = GP::FileManager::existsDir(local_100);
      if (cVar1 != '\0') {
        *(unsigned int *)(this + 8) = 2;
        GP::FileName::operator=((FileName *)(this + 0x10),local_100);
        goto LAB_10002f9cf;
      }
    }
  }
  *(unsigned int *)(this + 8) = 1;
LAB_10002f9cf:
  GP::FileName::~FileName(local_100);
  return;
}

ManagerContainer::ManagerContainer() {
StyleSheetManager *this_00;
  
  this_00 = (StyleSheetManager *)new(0x38);
  StyleSheetManager::StyleSheetManager(this_00,this);
  *(StyleSheetManager **)this = this_00;
  *(unsigned int *)(this + 8) = 0;
  GP::FileName::FileName((FileName *)(this + 0x10));
  *(unsigned long long *)(this + 0xd0) = 0;
  *(unsigned long long *)(this + 200) = 0;
  *(ManagerContainer **)(this + 0xc0) = this + 200;
  *(unsigned long long *)(this + 0xe8) = 0;
  *(unsigned long long *)(this + 0xe0) = 0;
  *(ManagerContainer **)(this + 0xd8) = this + 0xe0;
  
}
}
