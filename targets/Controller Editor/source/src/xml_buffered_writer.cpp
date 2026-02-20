#include <ni/controller_editor/xml_buffered_writer.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace pugi::impl::(anonymous namespace) {

void xml_buffered_writer::write_string(char const*) {
xml_buffered_writer xVar1;
  unsigned long uVar2;
  bool bVar3;
  char *pcVar4;
  size_t sVar5;
  unsigned long uVar6;
  unsigned long uVar7;
  long lVar8;
  bool bVar9;
  
  uVar2 = *(unsigned long *)(this + 0x2808);
  bVar9 = uVar2 < 0x800;
  if (uVar2 < 0x800) {
    xVar1 = (xml_buffered_writer)*param_1;
    pcVar4 = param_1;
    while (param_1 = pcVar4, xVar1 != (xml_buffered_writer)0x0) {
      this[uVar2] = xVar1;
      bVar9 = uVar2 < 0x7ff;
      uVar7 = uVar2 + 1;
      bVar3 = 0x7fe < uVar2;
      uVar2 = uVar7;
      param_1 = pcVar4 + 1;
      if (bVar3) break;
      xVar1 = *(xml_buffered_writer *)(pcVar4 + 1);
      pcVar4 = pcVar4 + 1;
    }
  }
  if (bVar9) {
    *(unsigned long *)(this + 0x2808) = uVar2;
    return;
  }
  uVar7 = uVar2 - *(long *)(this + 0x2808);
  if (uVar7 < 5) {
    uVar6 = 0;
  }
  else if ((param_1[-1] & 0xc0U) == 0x80) {
    if ((param_1[-2] & 0xc0U) == 0x80) {
      if ((param_1[-3] & 0xc0U) == 0x80) {
        uVar6 = uVar7 - 4;
        if ((param_1[-4] & 0xc0U) == 0x80) {
          uVar6 = uVar7;
        }
      }
      else {
        uVar6 = uVar7 - 3;
      }
    }
    else {
      uVar6 = uVar7 - 2;
    }
  }
  else {
    uVar6 = uVar7 - 1;
  }
  lVar8 = uVar7 - uVar6;
  *(unsigned long *)(this + 0x2808) = uVar2 - lVar8;
  sVar5 = strlen(param_1);
  write_direct(this,param_1 + -lVar8,lVar8 + sVar5);
  return;
}
}
