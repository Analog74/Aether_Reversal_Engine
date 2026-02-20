#include <ni/controller_editor/SupportedDeviceClass.hpp>
namespace NI::NHL2::SERVER::USBDeviceManager {

void SupportedDeviceClass::checkEnabledStateAndForwarding() {
char cVar1;
  int iVar2;
  _func_void_xml_node_ptr_ptr_ptr *p_Var3;
  char *pcVar4;
  _func_void_xml_attribute_ptr_ptr_ptr *p_Var5;
  unsigned long long *puVar6;
  size_t sVar7;
  void *pvVar8;
  unsigned long uVar9;
  bool bVar10;
  unsigned long local_198;
  size_t sStack_190;
  unsigned int local_188;
  SupportedDeviceClass *local_178;
  unsigned char local_170 [16];
  unsigned char local_160 [16];
  unsigned long long local_150;
  unsigned long long local_148;
  unsigned long long local_140;
  size_t sStack_138;
  void *local_130;
  unsigned long long local_128;
  unsigned long uStack_120;
  char *local_118;
  unsigned long long local_110;
  unsigned int local_108;
  unsigned int uStack_104;
  unsigned long uStack_100;
  char *local_f8;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009cc2c8;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = (char *)0x0;
  if ((this[0x168] == (SupportedDeviceClass)0x0) || (this[0x16a] != (SupportedDeviceClass)0x0)) {
    ni::filesystem::system_data_ni_dir((filesystem *)&local_108);
    if ((local_128 & 1) != 0) {
      delete(local_118);
    }
    local_118 = local_f8;
    local_128 = CONCAT44(uStack_104,local_108);
    uStack_120 = uStack_100;
    // boost code
    // boost code
    // std code
    pcVar4 = local_f8;
    if ((local_108 & 1) == 0) {
      uStack_100 = (unsigned long)((byte)local_108._0_1_ >> 1);
      pcVar4 = (char *)((long)&local_108 + 1);
    }
    // boost code
    if ((local_108 & 1) != 0) {
      delete(local_f8);
    }
    // boost code
    this[0x169] = (SupportedDeviceClass)(this[0x168] != (SupportedDeviceClass)0x0 || 1 < local_108);
    if (((this[0x168] != (SupportedDeviceClass)0x0 || 1 < local_108) &&
        (this[0x16a] != (SupportedDeviceClass)0x0)) && (1 < local_108)) {
      pugi::xml_document::xml_document((xml_document *)&local_108);
      pugi::xml_parse_result::xml_parse_result((xml_parse_result *)&local_198);
      pcVar4 = local_118;
      if ((local_128 & 1) == 0) {
        pcVar4 = (char *)((long)&local_128 + 1);
      }
      pugi::xml_document::load_file(&local_140,&local_108,pcVar4,0x377,0);
      local_188 = local_130._0_4_;
      local_198 = local_140;
      uVar9 = local_198;
      sStack_190 = sStack_138;
      local_198._0_4_ = (int)local_140;
      bVar10 = (int)local_198 == 0;
      local_198 = uVar9;
      if (bVar10) {
        pugi::xml_node::xml_node((xml_node *)&local_110);
        local_110 = pugi::xml_document::document_element((xml_document *)&local_108);
        p_Var3 = pugi::xml_node::operator_cast_to_function_pointer((xml_node *)&local_110);
        if (p_Var3 != (_func_void_xml_node_ptr_ptr_ptr *)0x0) {
          pcVar4 = (char *)pugi::xml_node::name((xml_node *)&local_110);
          cVar1 = XMLUtil::isName(pcVar4,"ni-hardware-controller");
          if (cVar1 != '\0') {
            pugi::xml_attribute::xml_attribute((xml_attribute *)&local_148);
            local_148 = pugi::xml_node::attribute((xml_node *)&local_110,"version");
            p_Var5 = pugi::xml_attribute::operator_cast_to_function_pointer
                               ((xml_attribute *)&local_148);
            if (p_Var5 != (_func_void_xml_attribute_ptr_ptr_ptr *)0x0) {
              iVar2 = pugi::xml_attribute::as_int((xml_attribute *)&local_148,0);
              if (1 < iVar2) {
                local_170 = pugi::xml_node::begin((xml_node *)&local_110);
                local_160 = pugi::xml_node::end((xml_node *)&local_110);
                local_178 = this + 0x170;
                while( true ) {
                  cVar1 = pugi::xml_node_iterator::operator!=
                                    ((xml_node_iterator *)local_170,(xml_node_iterator *)local_160);
                  if (cVar1 == '\0') break;
                  puVar6 = (unsigned long long *)
                           pugi::xml_node_iterator::operator*((xml_node_iterator *)local_170);
                  local_150 = *puVar6;
                  pcVar4 = (char *)pugi::xml_node::name((xml_node *)&local_150);
                  cVar1 = XMLUtil::isName(pcVar4,"forward-port-name");
                  if (cVar1 != '\0') {
                    pcVar4 = (char *)pugi::xml_node::child_value((xml_node *)&local_150);
                    sVar7 = strlen(pcVar4);
                    if (0xffffffffffffffef < sVar7) {
                    /* WARNING: Subroutine does not return */
                      // std code
                    }
                    if (sVar7 < 0x17) {
                      local_140 = 0(local_140._1_7_,(char)sVar7 * '\x02');
                      pvVar8 = (void *)((long)&local_140 + 1);
                      if (sVar7 != 0) goto LAB_10007e1b6;
                    }
                    else {
                      uVar9 = sVar7 + 0x10 & 0xfffffffffffffff0;
                      pvVar8 = new(uVar9);
                      local_140 = uVar9 | 1;
                      sStack_138 = sVar7;
                      local_130 = pvVar8;
LAB_10007e1b6:
                      memcpy(pvVar8,pcVar4,sVar7);
                    }
                    *(unsigned char *)((long)pvVar8 + sVar7) = 0;
                    uVar9 = sStack_138;
                    if ((local_140 & 1) == 0) {
                      uVar9 = (unsigned long)((byte)local_140._0_1_ >> 1);
                    }
                    if (uVar9 != 0) {
                      // std code
                      this[0x169] = (SupportedDeviceClass)0x0;
                    }
                    if (((byte)local_140._0_1_ & 1) != 0) {
                      delete(local_130);
                    }
                    if (uVar9 != 0) break;
                  }
                  pugi::xml_node_iterator::operator++((xml_node_iterator *)local_170);
                }
              }
            }
          }
        }
      }
      pugi::xml_document::~xml_document((xml_document *)&local_108);
      goto joined_r0x00010007dfe9;
    }
  }
  else {
    this[0x169] = (SupportedDeviceClass)0x1;
  }
joined_r0x00010007dfe9:
  if ((local_128 & 1) != 0) {
    delete(local_118);
  }
  if (*(long *)PTR____stack_chk_guard_1009cc2c8 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

SupportedDeviceClass::~SupportedDeviceClass() {
code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
}
