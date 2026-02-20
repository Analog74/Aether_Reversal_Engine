#include <ni/controller_editor/readTemplateProperty_pugi.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2::IMapTemplatePropertiesSupport {

void readTemplateProperty(1 param_1, 1 param_1, pugi::xml_node const& {
uint uVar1;
  unsigned int uVar2;
  char cVar3;
  unsigned int uVar4;
  unsigned long long *puVar5;
  char *pcVar6;
  unsigned long long *puVar7;
  _func_void_xml_text_ptr_ptr_ptr *p_Var8;
  unsigned long long *puVar9;
  bool bVar10;
  unsigned long long local_38;
  
  puVar9 = MapProperty::s_mapPropertiesToNames;
  if (MapProperty::s_mapPropertiesToNames != &0 {
    do {
      pcVar6 = (char *)pugi::xml_node::name((xml_node *)param_1);
      cVar3 = XMLUtil::isName(pcVar6,(char *)puVar9[5]);
      if (cVar3 != '\0') {
        cVar3 = (**(code **)(*(long *)this + 0x40))(this,*(unsigned int *)(puVar9 + 4),0);
        if (cVar3 == '\0') {
          return 0x1b91d01;
        }
        if (0 == (unsigned long long *)0x0) {
          return 0x1b91d01;
        }
        uVar1 = *(uint *)(puVar9 + 4);
        puVar7 = &0;
        puVar5 = 0;
        do {
          bVar10 = *(uint *)((long)puVar5 + 0x1c) < uVar1;
          if (!bVar10) {
            puVar7 = puVar5;
          }
          puVar5 = (unsigned long long *)puVar5[bVar10];
        } while (puVar5 != (unsigned long long *)0x0);
        if ((unsigned long long **)puVar7 == &0) {
          return 0x1b91d01;
        }
        if (uVar1 < *(uint *)((long)puVar7 + 0x1c)) {
          return 0x1b91d01;
        }
        if (*(int *)(puVar7 + 4) != 2) {
          if (*(int *)(puVar7 + 4) != 1) {
            return 0x1b91d01;
          }
          pugi::xml_text::xml_text((xml_text *)&local_38);
          local_38 = pugi::xml_node::text((xml_node *)param_1);
          p_Var8 = pugi::xml_text::operator_cast_to_function_pointer((xml_text *)&local_38);
          uVar2 = *(unsigned int *)(puVar9 + 4);
          if (p_Var8 != (_func_void_xml_text_ptr_ptr_ptr *)0x0) {
            uVar4 = pugi::xml_text::as_uint((xml_text *)&local_38,0);
            (**(code **)(*(long *)this + 0x10))(this,uVar2,uVar4,0);
            return 0x1b91d01;
          }
          (**(code **)(*(long *)this + 0x10))(this,uVar2,1,0);
          return 0x1b91d01;
        }
        pugi::xml_text::xml_text((xml_text *)&local_38);
        local_38 = pugi::xml_node::text((xml_node *)param_1);
        p_Var8 = pugi::xml_text::operator_cast_to_function_pointer((xml_text *)&local_38);
        if (p_Var8 == (_func_void_xml_text_ptr_ptr_ptr *)0x0) {
          return 0x1b91d01;
        }
        uVar2 = *(unsigned int *)(puVar9 + 4);
        pugi::xml_text::as_float((xml_text *)&local_38,0.0);
        (**(code **)(*(long *)this + 0x18))(this,uVar2,0);
        return 0x1b91d01;
      }
      puVar7 = (unsigned long long *)puVar9[1];
      if ((unsigned long long *)puVar9[1] == (unsigned long long *)0x0) {
        puVar5 = (unsigned long long *)puVar9[2];
        if ((unsigned long long *)*puVar5 != puVar9) {
          do {
            puVar9 = (unsigned long long *)puVar9[2];
            puVar5 = (unsigned long long *)puVar9[2];
          } while ((unsigned long long *)*puVar5 != puVar9);
        }
      }
      else {
        do {
          puVar5 = puVar7;
          puVar7 = (unsigned long long *)*puVar5;
        } while ((unsigned long long *)*puVar5 != (unsigned long long *)0x0);
      }
      puVar9 = puVar5;
    } while (puVar5 != &0);
  }
  return 0;
}
}
