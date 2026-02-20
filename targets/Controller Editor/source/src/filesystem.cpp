#include <ni/controller_editor/filesystem.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2::ControllerMap::writeToFile(boost {

void filesystem::path const&) const {
path pVar1;
  codecvt *pcVar2;
  unsigned long uVar3;
  void *pvVar4;
  path *ppVar5;
  unsigned long long local_120;
  unsigned long long local_118;
  unsigned long long uStack_110;
  void *local_108;
  xml_document local_f8 [208];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101ab4610;
  pugi::xml_document::xml_document(local_f8);
  pugi::xml_node::append_child((xml_node *)local_f8,"ni-controller-midi-map");
  pugi::xml_node::xml_node((xml_node *)&local_120);
  local_120 = pugi::xml_document::document_element(local_f8);
  local_118 = pugi::xml_node::append_attribute((xml_node *)&local_120,"version");
  pugi::xml_attribute::set_value((xml_attribute *)&local_118,1);
  writeMap(this,(xml_node *)&local_120,false);
  local_118 = 0;
  uStack_110 = 0;
  local_108 = (void *)0x0;
  pVar1 = *param_1;
  if (((byte)pVar1 & 1) == 0) {
    if (1 < (byte)pVar1) {
      ppVar5 = param_1 + 1;
      uVar3 = (unsigned long)((byte)pVar1 >> 1);
      pcVar2 = (codecvt *)// boost code
      // boost code
                ((char *)ppVar5,(char *)(ppVar5 + uVar3),(wstring *)&local_118,pcVar2);
      pvVar4 = local_108;
      if ((local_118 & 1) != 0) return;
    }
  }
  else {
    uVar3 = *(unsigned long *)(param_1 + 8);
    if (uVar3 != 0) {
      ppVar5 = *(path **)(param_1 + 0x10);
      return;
    }
  }
  pvVar4 = (void *)((long)&local_118 + 4);
  pugi::xml_document::save_file(local_f8,pvVar4,"  ",1,1);
  if ((local_118 & 1) != 0) {
    delete(local_108);
  }
  pugi::xml_document::~xml_document(local_f8);
  if (*(long *)PTR____stack_chk_guard_101ab4610 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}
}
