#include <ni/controller_editor/processImport_unsigned_int__std.hpp>
namespace NI::NWL::StyleParser2 {

void processImport(unsigned int, std::string) {
FileName *this_00;
  __tree<// std code
  unsigned long long *puVar1;
  __tree_node_base *p_Var2;
  long *plVar3;
  char cVar4;
  __tree_node_base *p_Var5;
  long *plVar6;
  unsigned long extraout_RDX;
  unsigned long uVar7;
  unsigned char *puVar8;
  StyleParser2 *pSVar9;
  string *this_02;
  unsigned int uVar10;
  FileName local_160 [24];
  byte local_148;
  unsigned char local_147 [7];
  unsigned long local_140;
  unsigned char *local_138;
  byte local_130;
  unsigned char auStack_12f [15];
  unsigned char *local_120;
  
  
  fmt local_80 [24];
  unsigned long long local_68;
  long local_60;
  string *local_58;
  size_t sStack_50;
  unsigned long long local_48;
  unsigned int local_38;
  uint local_34;
  
  this_00 = (FileName *)(this + 0x58);
  local_34 = param_1;
  GP::FileName::FileName(local_160,this_00);
  uVar10 = *(unsigned int *)(this + 0x50);
  GP::FileName::setFull(this_00,param_3);
  // std code
  this_01 = (__tree<// std code
  ;
  // std code
  __emplace_unique_key_args<// std code
  if ((extraout_RDX & 1) == 0) {
    fmt::sprintf<unsigned_int>
              ((fmt *)&local_58,"PARSER ERROR at line %d: recursive import of stylesheet ",&local_34
              );
    pSVar9 = this + 0x59;
    if (((byte)this[0x58] & 1) != 0) {
      pSVar9 = *(StyleParser2 **)(this + 0x68);
    }
    // std code
    addErrorMessage(this,(string *)local_160,local_34,(string *)&local_58);
    this_02 = (string *)&local_58;
  }
  else {
    if (this[0x100] == (StyleParser2)0x0) {
      cVar4 = processFile(this,this_00);
    }
    else {
      puVar1 = *(unsigned long long **)this;
      local_38 = uVar10;
      if (puVar1 == (unsigned long long *)0x0) {
        local_58 = (string *)0x0;
        sStack_50 = 0;
        local_48 = 0;
        uVar7 = (unsigned long)(local_148 >> 1);
        if ((local_148 & 1) != 0) {
          uVar7 = local_140;
        }
        puVar8 = local_147;
        if ((local_148 & 1) != 0) {
          puVar8 = local_138;
        }
        // std code
        puVar8 = auStack_12f;
        if ((local_130 & 1) != 0) {
          puVar8 = local_120;
        }
        // std code
        GP::FileName::setPath(this_00,&local_58,1);
        uVar10 = local_38;
        // std code
        cVar4 = processFile(this,this_00);
      }
      else {
        if (((byte)*param_3 & 1) == 0) {
          local_58 = param_3 + 1;
        }
        else {
          local_58 = *(string **)(param_3 + 0x10);
        }
        sStack_50 = strlen((char *)local_58);
        ManagerContainer::getResourceStream(&local_68,*puVar1,&local_58,1,1);
        // std code
        cVar4 = processStream(this,local_68,local_98);
        // std code
        uVar10 = local_38;
        if (local_60 != 0) {
          // std code
        }
      }
    }
    if (cVar4 != '\0') goto LAB_10003809d;
    fmt::sprintf<unsigned_int>
              (local_80,"PARSER ERROR at line %d: Failed to import stylesheet ",&local_34);
    pSVar9 = this + 0x59;
    if (((byte)this[0x58] & 1) != 0) {
      pSVar9 = *(StyleParser2 **)(this + 0x68);
    }
    // std code
    addErrorMessage(this,(string *)local_160,local_34,(string *)local_80);
    p_Var5 = (__tree_node_base *)
             // std code
             find<// std code
    if (p_Var5 != (__tree_node_base *)(this + 0x110)) {
      plVar3 = *(long **)(p_Var5 + 8);
      if (*(long **)(p_Var5 + 8) == (long *)0x0) {
        plVar6 = *(long **)(p_Var5 + 0x10);
        p_Var2 = p_Var5;
        if ((__tree_node_base *)*plVar6 != p_Var5) {
          do {
            p_Var2 = *(__tree_node_base **)(p_Var2 + 0x10);
            plVar6 = *(long **)(p_Var2 + 0x10);
          } while ((__tree_node_base *)*plVar6 != p_Var2);
        }
      }
      else {
        do {
          plVar6 = plVar3;
          plVar3 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
      if (*(__tree_node_base **)this_01 == p_Var5) {
        *(long **)this_01 = plVar6;
      }
      *(long *)(this + 0x118) = *(long *)(this + 0x118) + -1;
      // std code
      ;
      // std code
      delete(p_Var5);
    }
    this_02 = (string *)local_80;
  }
  // std code
LAB_10003809d:
  GP::FileName::operator=(this_00,local_160);
  *(unsigned int *)(this + 0x50) = uVar10;
  // std code
  GP::FileName::~FileName(local_160);
  return;
}
}
