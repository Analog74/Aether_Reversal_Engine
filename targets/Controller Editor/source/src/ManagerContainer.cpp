#include <ni/controller_editor/ManagerContainer.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL {

void ManagerContainer::getDefaultFontData() const [clone .cold.1] {
delete(0);
  return;
}

void ManagerContainer::getResourcesLocation() const {
size_t sVar1;
  string *psVar2;
  long in_RSI;
  char *pcVar3;
  string *in_RDI;
  unsigned long uVar4;
  
  if (*(int *)(in_RSI + 8) == 2) {
    psVar2 = (string *)ni::filesystem::to_utf8_string((path *)(in_RSI + 0x10));
    // std code
  }
  else {
    uVar4 = (unsigned long)*(byte *)(in_RSI + 0x28);
    pcVar3 = "(compiled resources)";
    if (uVar4 == 0) {
      pcVar3 = "(app bundle)";
    }
    sVar1 = uVar4 * 8 + 0xc;
    *in_RDI = (string)((char)sVar1 * '\x02');
    memcpy(in_RDI + 1,pcVar3,sVar1);
    in_RDI[uVar4 * 8 + 0xd] = (string)0x0;
  }
  return;
}

void ManagerContainer::getStyleSheetManager() {
return *(unsigned long long *)this;
}

ManagerContainer::ManagerContainer() {
StyleSheetManager *this_00;
  
  this_00 = (StyleSheetManager *)new char[0x38];
  StyleSheetManager::StyleSheetManager(this_00,this);
  *(StyleSheetManager **)this = this_00;
  *(unsigned int *)(this + 8) = 0;
  *(unsigned long long *)(this + 0x38) = 0;
  *(unsigned long long *)(this + 0x40) = 0;
  *(unsigned long long *)(this + 0x10) = 0;
  *(unsigned long long *)(this + 0x18) = 0;
  *(unsigned long long *)(this + 0x19) = 0;
  *(unsigned long long *)(this + 0x21) = 0;
  *(ManagerContainer **)(this + 0x30) = this + 0x38;
  *(unsigned long long *)(this + 0x50) = 0;
  *(unsigned long long *)(this + 0x58) = 0;
  *(ManagerContainer **)(this + 0x48) = this + 0x50;
  
}

void ManagerContainer::reloadPictures(float param_1) {
}

ManagerContainer::~ManagerContainer() {
~ManagerContainer(this);
  return;
}
}
