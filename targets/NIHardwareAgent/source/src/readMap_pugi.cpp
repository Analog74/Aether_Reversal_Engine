#include <ni/controller_editor/readMap_pugi.hpp>
namespace NI::NHL2::ControllerMap {

void readMap(pugi::xml_node const&, bool) {
ControllerMap CVar1;
  char cVar2;
  int iVar3;
  unsigned int uVar4;
  _func_void_xml_attribute_ptr_ptr_ptr *p_Var5;
  char *pcVar6;
  size_t sVar7;
  void *pvVar8;
  unsigned long uVar9;
  void7 in_register_00000011;
  ControllerMap *pCVar10;
  unsigned long uVar11;
  unsigned long uVar12;
  bool bVar13;
  unsigned long long local_70;
  size_t local_68;
  void *local_60;
  uint local_54;
  unsigned long long local_50;
  unsigned long long local_48;
  size_t sStack_40;
  void *local_38;
  
  uVar12 = 0(in_register_00000011,param_2) & 0xffffffff;
  local_48 = 0;
  sStack_40 = 0;
  local_38 = (void *)0x0;
  cVar2 = readMapHeader(this,param_1,(string *)&local_48);
  if (cVar2 != '\0') {
    uVar9 = local_48 >> 1 & 0x7f;
    uVar11 = uVar9;
    if ((local_48 & 1) != 0) {
      uVar11 = sStack_40;
    }
    CVar1 = this[0x98];
    if (((byte)CVar1 & 1) == 0) {
      sVar7 = (size_t)((byte)CVar1 >> 1);
    }
    else {
      sVar7 = *(size_t *)(this + 0xa0);
    }
    if (uVar11 == sVar7) {
      if (((byte)CVar1 & 1) == 0) {
        pCVar10 = this + 0x99;
        bVar13 = (local_48 & 1) == 0;
        if (bVar13) goto LAB_1000a6072;
LAB_1000a60b7:
        pvVar8 = local_38;
        if (!bVar13) goto LAB_1000a6078;
LAB_1000a60bd:
        if (uVar11 != 0) {
          uVar11 = 0;
          do {
            if (*(ControllerMap *)((long)&local_48 + uVar11 + 1) != pCVar10[uVar11])
            goto LAB_1000a6086;
            uVar11 = uVar11 + 1;
          } while (uVar9 != uVar11);
        }
      }
      else {
        pCVar10 = *(ControllerMap **)(this + 0xa8);
        bVar13 = (local_48 & 1) == 0;
        if (!bVar13) goto LAB_1000a60b7;
LAB_1000a6072:
        pvVar8 = (void *)((long)&local_48 + 1);
        if (bVar13) goto LAB_1000a60bd;
LAB_1000a6078:
        if ((uVar11 != 0) && (iVar3 = _memcmp(pvVar8,pCVar10,uVar11), iVar3 != 0))
        goto LAB_1000a6086;
      }
      pugi::xml_attribute::xml_attribute((xml_attribute *)&local_50);
      local_50 = pugi::xml_node::attribute(param_1,"name");
      p_Var5 = pugi::xml_attribute::operator_cast_to_function_pointer((xml_attribute *)&local_50);
      if (p_Var5 != (_func_void_xml_attribute_ptr_ptr_ptr *)0x0) {
        local_54 = (uint)0(in_register_00000011,param_2);
        pcVar6 = (char *)pugi::xml_attribute::value((xml_attribute *)&local_50);
        sVar7 = strlen(pcVar6);
        if (0xffffffffffffffef < sVar7) {
                    /* WARNING: Subroutine does not return */
          // std code
        }
        if (sVar7 < 0x17) {
          local_70 = 0(local_70._1_7_,(char)sVar7 * '\x02');
          pvVar8 = (void *)((long)&local_70 + 1);
          if (sVar7 != 0) goto LAB_1000a617d;
        }
        else {
          uVar12 = sVar7 + 0x10 & 0xfffffffffffffff0;
          pvVar8 = new(uVar12);
          local_70 = uVar12 | 1;
          local_68 = sVar7;
          local_60 = pvVar8;
LAB_1000a617d:
          memcpy(pvVar8,pcVar6,sVar7);
        }
        *(unsigned char *)((long)pvVar8 + sVar7) = 0;
        // std code
        uVar12 = (unsigned long)local_54;
        if ((local_70 & 1) != 0) {
          delete(local_60);
        }
      }
      IMapTemplatePropertiesSupport::readTemplatePropertyAttributes
                ((IMapTemplatePropertiesSupport *)(this + 0x60),param_1);
      uVar4 = (**(code **)(*(long *)this + 0x118))(this,param_1,uVar12 & 0xff);
      goto joined_r0x0001000a608c;
    }
  }
LAB_1000a6086:
  uVar4 = 0;
joined_r0x0001000a608c:
  if ((local_48 & 1) != 0) {
    delete(local_38);
  }
  return uVar4;
}
}
