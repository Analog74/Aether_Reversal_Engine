#include <ni/controller_editor/writeTemplateProperties_pugi.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2::IMapTemplatePropertiesSupport {

void writeTemplateProperties(pugi::xml_node&) const {
unsigned long long *puVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  unsigned long long *puVar5;
  unsigned long long *puVar6;
  char *pcVar7;
  unsigned long long *puVar8;
  bool bVar9;
  void *local_88;
  unsigned long long uStack_80;
  char *local_78;
  float local_64;
  void *local_60;
  void *puStack_58;
  char *local_50;
  unsigned long long local_48;
  unsigned long long uStack_40;
  char *local_38;
  
  if (MapProperty::s_mapPropertiesToNames != &0) {
    puVar8 = MapProperty::s_mapPropertiesToNames;
    do {
      cVar4 = (**(code **)(*(long *)this + 0x40))(this,*(unsigned int *)(puVar8 + 4),0);
      if (cVar4 != '\0') {
        uVar2 = *(uint *)(puVar8 + 4);
        if (0 != (unsigned long long *)0x0) {
          puVar6 = &0;
          puVar5 = 0;
          do {
            bVar9 = *(uint *)((long)puVar5 + 0x1c) < uVar2;
            if (!bVar9) {
              puVar6 = puVar5;
            }
            puVar5 = (unsigned long long *)puVar5[bVar9];
          } while (puVar5 != (unsigned long long *)0x0);
          if ((((unsigned long long **)puVar6 != &0) &&
              (*(uint *)((long)puVar6 + 0x1c) <= uVar2)) && (*(int *)(puVar6 + 4) == 2))
          return;
        }
        puVar6 = &0;
        puVar5 = 0;
        if (0 == (unsigned long long *)0x0) {
          local_48 = (void *)0x0;
          uStack_40 = 0;
          local_38 = (char *)0x0;
        }
        else {
          do {
            bVar9 = *(uint *)((long)puVar5 + 0x1c) < uVar2;
            if (!bVar9) {
              puVar6 = puVar5;
            }
            puVar1 = puVar5 + bVar9;
            puVar5 = (unsigned long long *)*puVar1;
          } while ((unsigned long long *)*puVar1 != (unsigned long long *)0x0);
          if (((unsigned long long **)puVar6 == &0) || (uVar2 < *(uint *)((long)puVar6 + 0x1c)))
          return;
          local_48 = (void *)0x0;
          uStack_40 = 0;
          local_38 = (char *)0x0;
          if (*(int *)(puVar6 + 4) == 2) {
            local_64 = (float)(**(code **)(*(long *)this + 0x28))(this,uVar2,0);
            local_88 = (void *)0x0;
            uStack_80 = 0;
            local_78 = (char *)0x0;
            cVar4 = // boost code
                              (&local_64,(string *)&local_88);
            if (cVar4 == '\0') {
              // std code
              local_60 = (char*)PTR_vtable_101ab44d0 + 0x10;
              puStack_58 = PTR_typeinfo_101ab4340;
              local_50 = PTR_typeinfo_101ab42c0;
              // boost code
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            if (((unsigned long)local_48 & 1) != 0) {
              delete(local_38);
            }
            local_38 = local_78;
            local_48 = local_88;
            uStack_40 = uStack_80;
            local_88 = (void *)
                       pugi::xml_node::append_child((xml_node *)param_1,(char *)puVar8[5]);
            local_60 = (void *)pugi::xml_node::text((xml_node *)&local_88);
            pcVar7 = (char *)((long)&local_48 + 1);
            if (((unsigned long)local_48 & 1) != 0) {
              pcVar7 = local_38;
            }
            pugi::xml_text::set((xml_text *)&local_60,pcVar7);
          }
          else if (*(int *)(puVar6 + 4) == 1) {
            (**(code **)(*(long *)this + 0x20))(this,uVar2,0);
            // std code
            if (((unsigned long)local_48 & 1) != 0) {
              delete(local_38);
            }
            local_38 = local_50;
            local_48 = local_60;
            uStack_40 = puStack_58;
            local_88 = (void *)
                       pugi::xml_node::append_child((xml_node *)param_1,(char *)puVar8[5]);
            local_60 = (void *)pugi::xml_node::text((xml_node *)&local_88);
            pcVar7 = (char *)((long)&local_48 + 1);
            if (((unsigned long)local_48 & 1) != 0) {
              pcVar7 = local_38;
            }
            pugi::xml_text::set((xml_text *)&local_60,pcVar7);
          }
        }
        if (((unsigned long)local_48 & 1) != 0) {
          delete(local_38);
        }
      }
      puVar6 = (unsigned long long *)puVar8[1];
      if ((unsigned long long *)puVar8[1] == (unsigned long long *)0x0) {
        puVar5 = (unsigned long long *)puVar8[2];
        if ((unsigned long long *)*puVar5 != puVar8) {
          do {
            puVar8 = (unsigned long long *)puVar8[2];
            puVar5 = (unsigned long long *)puVar8[2];
          } while ((unsigned long long *)*puVar5 != puVar8);
        }
      }
      else {
        do {
          puVar5 = puVar6;
          puVar6 = (unsigned long long *)*puVar5;
        } while ((unsigned long long *)*puVar5 != (unsigned long long *)0x0);
      }
      puVar8 = puVar5;
    } while (puVar5 != &0);
  }
  return;
}
}
