#include <ni/controller_editor/IMapTemplatePropertiesSupport.hpp>
namespace NI::NHL2 {

void IMapTemplatePropertiesSupport::resetTemplateProperties() {
unsigned long long *puVar1;
  uint uVar2;
  char cVar3;
  unsigned long long *puVar4;
  unsigned long long *puVar5;
  unsigned int uVar6;
  unsigned long long *puVar7;
  bool bVar8;
  unsigned int uVar9;
  unsigned long long *local_38;
  
  if (MapProperty::s_mapPropertiesToTypes != &0) {
    local_38 = &0;
    puVar7 = MapProperty::s_mapPropertiesToTypes;
    do {
      cVar3 = (**(code **)(*(long *)this + 0x40))(this,*(unsigned int *)((long)puVar7 + 0x1c),0);
      if (cVar3 == '\0') {
LAB_1000bb4b0:
        puVar5 = (unsigned long long *)puVar7[1];
        if ((unsigned long long *)puVar7[1] != (unsigned long long *)0x0) goto LAB_1000bb4c0;
LAB_1000bb4f0:
        puVar4 = (unsigned long long *)puVar7[2];
        if ((unsigned long long *)*puVar4 != puVar7) {
          do {
            puVar7 = (unsigned long long *)puVar7[2];
            puVar4 = (unsigned long long *)puVar7[2];
          } while ((unsigned long long *)*puVar4 != puVar7);
        }
      }
      else {
        uVar2 = *(uint *)((long)puVar7 + 0x1c);
        if (0 != (unsigned long long *)0x0) {
          puVar5 = &0;
          puVar4 = 0;
          do {
            bVar8 = *(uint *)((long)puVar4 + 0x1c) < uVar2;
            if (!bVar8) {
              puVar5 = puVar4;
            }
            puVar4 = (unsigned long long *)puVar4[bVar8];
          } while (puVar4 != (unsigned long long *)0x0);
          if ((((unsigned long long **)puVar5 != &0) &&
              (*(uint *)((long)puVar5 + 0x1c) <= uVar2)) && (*(int *)(puVar5 + 4) == 2))
          goto LAB_1000bb4b0;
        }
        uVar9 = 0;
        uVar6 = 0;
        puVar5 = local_38;
        puVar4 = 0;
        if (0 != (unsigned long long *)0x0) {
          do {
            bVar8 = *(uint *)((long)puVar4 + 0x1c) < uVar2;
            if (!bVar8) {
              puVar5 = puVar4;
            }
            puVar1 = puVar4 + bVar8;
            puVar4 = (unsigned long long *)*puVar1;
          } while ((unsigned long long *)*puVar1 != (unsigned long long *)0x0);
          if (((unsigned long long **)puVar5 != &0) && (*(uint *)((long)puVar5 + 0x1c) <= uVar2)
             ) {
            uVar6 = *(unsigned int *)(puVar5 + 4);
            uVar9 = *(unsigned int *)((long)puVar5 + 0x24);
          }
        }
        if (*(int *)(puVar7 + 4) != 2) {
          if (*(int *)(puVar7 + 4) == 1) {
            (**(code **)(*(long *)this + 0x10))(this,uVar2,uVar6,0);
          }
          goto LAB_1000bb4b0;
        }
        (**(code **)(*(long *)this + 0x18))(uVar9,this,uVar2,0);
        puVar5 = (unsigned long long *)puVar7[1];
        if ((unsigned long long *)puVar7[1] == (unsigned long long *)0x0) goto LAB_1000bb4f0;
LAB_1000bb4c0:
        do {
          puVar4 = puVar5;
          puVar5 = (unsigned long long *)*puVar4;
        } while ((unsigned long long *)*puVar4 != (unsigned long long *)0x0);
      }
      puVar7 = puVar4;
    } while (puVar4 != &0);
  }
  return;
}
}
