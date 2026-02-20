#include <ni/controller_editor/path_const___pugi.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2::ControllerMap::openFromFile(boost::filesystem {

void path const&, pugi::xml_document&) {
path pVar1;
  bool bVar2;
  int iVar3;
  codecvt *pcVar4;
  _func_void_xml_node_ptr_ptr_ptr *p_Var5;
  char *pcVar6;
  _func_void_xml_attribute_ptr_ptr_ptr *p_Var7;
  char cVar8;
  void *pvVar9;
  char *pcVar10;
  path *ppVar11;
  unsigned long uVar12;
  unsigned long long local_50 [3];
  unsigned long long local_38;
  unsigned long long uStack_30;
  void *local_28;
  
  // boost code if(2 param_2, 1 param_1, 2 param_2, 1 param_1, (intlocal_50[0] != 2 {
    return false;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (void *0x0;
  pVar1 = *param_1;
  if (((bytepVar1 & 1) == 0) {
    if (1 < (byte)pVar1) {
      ppVar11 = param_1 + 1;
      uVar12 = (unsigned long)((byte)pVar1 >> 1);
      pcVar4 = (codecvt *)// boost code
      // boost code
                ((char *)ppVar11,(char *)(ppVar11 + uVar12),(wstring *)&local_38,pcVar4);
      pvVar9 = local_28;
      if ((local_38 & 1) != 0) return;
    }
  }
  else {
    uVar12 = *(unsigned long *)(param_1 + 8);
    if (uVar12 != 0) {
      ppVar11 = *(path **)(param_1 + 0x10);
      return;
    }
  }
  pvVar9 = (void *)((long)&local_38 + 4);
  pugi::xml_document::load_file(local_50,param_2,pvVar9,0x377,0);
  bVar2 = pugi::xml_parse_result::operator_cast_to_bool((xml_parse_result *)local_50);
  if ((local_38 & 1) != 0) {
    delete(local_28);
  }
  if (bVar2) {
    pugi::xml_node::xml_node((xml_node *)local_50);
    local_50[0] = pugi::xml_document::document_element(param_2);
    p_Var5 = pugi::xml_node::operator_cast_to_function_pointer((xml_node *)local_50);
    if (p_Var5 != (_func_void_xml_node_ptr_ptr_ptr *)0x0) {
      pcVar6 = (char *)pugi::xml_node::name((xml_node *)local_50);
      cVar8 = *pcVar6;
      if (cVar8 == '\0') {
        pcVar10 = "ni-controller-midi-map";
      }
      else {
        pcVar10 = "ni-controller-midi-map";
        do {
          pcVar6 = pcVar6 + 1;
          if ((*pcVar10 == '\0') || (cVar8 != *pcVar10)) return;
          pcVar10 = pcVar10 + 1;
          cVar8 = *pcVar6;
        } while (cVar8 != '\0');
      }
      cVar8 = '\0';
      if (cVar8 == *pcVar10) {
        local_38 = pugi::xml_node::attribute((xml_node *)local_50,"version");
        p_Var7 = pugi::xml_attribute::operator_cast_to_function_pointer((xml_attribute *)&local_38);
        if (p_Var7 != (_func_void_xml_attribute_ptr_ptr_ptr *)0x0) {
          iVar3 = pugi::xml_attribute::as_int((xml_attribute *)&local_38,0);
          return iVar3 < 2;
        }
      }
    }
  }
  return false;
}
}
