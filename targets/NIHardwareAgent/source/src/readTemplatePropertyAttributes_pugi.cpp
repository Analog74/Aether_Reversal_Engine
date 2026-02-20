#include <ni/controller_editor/readTemplatePropertyAttributes_pugi.hpp>
namespace NI::NHL2::IMapTemplatePropertiesSupport {

void readTemplatePropertyAttributes(pugi::xml_node const&) {
uint uVar1;
  char cVar2;
  unsigned int uVar3;
  int iVar4;
  _func_void_xml_attribute_ptr_ptr_ptr *p_Var5;
  char *pcVar6;
  size_t sVar7;
  unsigned long long *puVar8;
  void *pvVar9;
  unsigned long uVar10;
  unsigned long long *puVar11;
  unsigned long uVar12;
  unsigned long long uVar13;
  unsigned char *puVar14;
  unsigned long long *puVar15;
  void7 uVar16;
  bool bVar17;
  unsigned long long local_50;
  size_t local_48;
  void *local_40;
  unsigned long long local_38;
  
  pugi::xml_attribute::xml_attribute((xml_attribute *)&local_38);
  uVar12 = 0;
  puVar15 = MapProperty::s_mapPropertiesToNames;
  if (MapProperty::s_mapPropertiesToNames != &0) {
    do {
      local_38 = pugi::xml_node::attribute(param_1,(char *)puVar15[5]);
      p_Var5 = pugi::xml_attribute::operator_cast_to_function_pointer((xml_attribute *)&local_38);
      if (p_Var5 == (_func_void_xml_attribute_ptr_ptr_ptr *)0x0) goto LAB_1000bab20;
      cVar2 = (**(code **)(*(long *)this + 0x40))(this,*(unsigned int *)(puVar15 + 4),0);
      uVar1 = *(uint *)(puVar15 + 4);
      if (cVar2 == '\0') {
        uVar12 = uVar12 & 0xff;
        if (uVar1 == 0x4d704d70) {
          uVar12 = 1;
        }
        puVar11 = (unsigned long long *)puVar15[1];
joined_r0x0001000ba96b:
        if (puVar11 == (unsigned long long *)0x0) goto LAB_1000bab70;
LAB_1000bab30:
        do {
          puVar8 = puVar11;
          puVar11 = (unsigned long long *)*puVar8;
        } while ((unsigned long long *)*puVar8 != (unsigned long long *)0x0);
      }
      else {
        if (uVar1 == 0x4d704d70) {
          pcVar6 = (char *)pugi::xml_attribute::value((xml_attribute *)&local_38);
          sVar7 = strlen(pcVar6);
          if (0xffffffffffffffef < sVar7) {
                    /* WARNING: Subroutine does not return */
            // std code
          }
          if (sVar7 < 0x17) {
            local_50 = 0(local_50._1_7_,(char)sVar7 * '\x02');
            pvVar9 = (void *)((long)&local_50 + 1);
            if (sVar7 != 0) goto LAB_1000baa2e;
          }
          else {
            uVar12 = sVar7 + 0x10 & 0xfffffffffffffff0;
            pvVar9 = new(uVar12);
            local_50 = uVar12 | 1;
            local_48 = sVar7;
            local_40 = pvVar9;
LAB_1000baa2e:
            memcpy(pvVar9,pcVar6,sVar7);
          }
          *(unsigned char *)((long)pvVar9 + sVar7) = 0;
          uVar3 = *(unsigned int *)(puVar15 + 4);
          uVar10 = local_50 >> 1 & 0x7f;
          uVar12 = uVar10;
          if ((local_50 & 1) != 0) {
            uVar12 = local_48;
          }
          sVar7 = 0;
          if ((s_strExternal & 1) == 0) {
            sVar7 = (unsigned long)(s_strExternal >> 1);
          }
          uVar13 = 1;
          if (uVar12 == sVar7) {
            uVar13 = 1;
            if ((s_strExternal & 1) == 0) {
              bVar17 = (local_50 & 1) == 0;
              puVar14 = &0;
              if (bVar17) goto LAB_1000baaaa;
LAB_1000baae5:
              pvVar9 = local_40;
              if (!bVar17) goto LAB_1000baaeb;
LAB_1000baaac:
              if (uVar12 != 0) {
                uVar12 = 0;
                do {
                  if (*(char *)((long)&local_50 + uVar12 + 1) != puVar14[uVar12])
                  goto LAB_1000baafe;
                  uVar12 = uVar12 + 1;
                } while (uVar10 != uVar12);
              }
            }
            else {
              bVar17 = (local_50 & 1) == 0;
              puVar14 = 0;
              if (!bVar17) goto LAB_1000baae5;
LAB_1000baaaa:
              pvVar9 = (void *)((long)&local_50 + 1);
              if (bVar17) goto LAB_1000baaac;
LAB_1000baaeb:
              if ((uVar12 != 0) && (iVar4 = _memcmp(pvVar9,puVar14,uVar12), iVar4 != 0))
              goto LAB_1000baafe;
            }
            uVar13 = 2;
          }
LAB_1000baafe:
          (**(code **)(*(long *)this + 0x10))(this,uVar3,uVar13,0);
          if ((local_50 & 1) != 0) {
            delete(local_40);
          }
          uVar12 = 0((uint7)(uint3)((uint)uVar3 >> 8),1);
LAB_1000bab20:
          puVar11 = (unsigned long long *)puVar15[1];
        }
        else {
          if (0 == (unsigned long long *)0x0) goto LAB_1000bab20;
          puVar8 = &0;
          puVar11 = 0;
          do {
            bVar17 = *(uint *)((long)puVar11 + 0x1c) < uVar1;
            if (!bVar17) {
              puVar8 = puVar11;
            }
            puVar11 = (unsigned long long *)puVar11[bVar17];
          } while (puVar11 != (unsigned long long *)0x0);
          if (((unsigned long long **)puVar8 == &0) || (uVar1 < *(uint *)((long)puVar8 + 0x1c)))
          goto LAB_1000bab20;
          uVar16 = (void7)(uVar12 >> 8);
          if (*(int *)(puVar8 + 4) != 2) {
            if (*(int *)(puVar8 + 4) == 1) {
              uVar3 = pugi::xml_attribute::as_uint((xml_attribute *)&local_38,0);
              (**(code **)(*(long *)this + 0x10))(this,uVar1,uVar3,0);
              uVar12 = 0(uVar16,1);
              puVar11 = (unsigned long long *)puVar15[1];
              goto joined_r0x0001000ba96b;
            }
            goto LAB_1000bab20;
          }
          pugi::xml_attribute::as_float((xml_attribute *)&local_38,0.0);
          (**(code **)(*(long *)this + 0x18))(this,uVar1,0);
          uVar12 = 0(uVar16,1);
          puVar11 = (unsigned long long *)puVar15[1];
        }
        if (puVar11 != (unsigned long long *)0x0) goto LAB_1000bab30;
LAB_1000bab70:
        puVar8 = (unsigned long long *)puVar15[2];
        if ((unsigned long long *)*puVar8 != puVar15) {
          do {
            puVar15 = (unsigned long long *)puVar15[2];
            puVar8 = (unsigned long long *)puVar15[2];
          } while ((unsigned long long *)*puVar8 != puVar15);
        }
      }
      puVar15 = puVar8;
    } while (puVar8 != &0);
  }
  return uVar12;
}
}
