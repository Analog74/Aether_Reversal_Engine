#include <ni/controller_editor/XmlWriter.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace anyrpc {

void XmlWriter::ArraySeparator() {
int iVar1;
  
  if (this[0x10] != (XmlWriter)0x0) {
    (**(code **)(**(long **)(this + 8) + 0x58))(*(long **)(this + 8),10);
    if (0 < *(int *)(this + 0x14)) {
      iVar1 = 0;
      do {
        (**(code **)(**(long **)(this + 8) + 0x60))(*(long **)(this + 8),"\t");
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(this + 0x14));
    }
  }
  return;
}

void XmlWriter::Binary(unsigned char const*, unsigned long, bool) {
void7 in_register_00000011;
  
  (**(code **)(**(long **)(param_1 + 8) + 0x60))(*(long **)(param_1 + 8),"<value><base64>");
  internal::Base64Encode
            (*(Stream **)(param_1 + 8),(uchar *)param_2,0(in_register_00000011,param_3));
                    /* WARNING: Could not recover jumptable at 0x0001009508ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x60))(*(long **)(param_1 + 8),"</base64></value>");
  return;
}

void XmlWriter::BoolFalse() {
/* WARNING: Could not recover jumptable at 0x00010094fd67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 8) + 0x60))
            (*(long **)(this + 8),"<value><boolean>0</boolean></value>");
  return;
}

void XmlWriter::BoolTrue() {
/* WARNING: Could not recover jumptable at 0x00010094fd47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 8) + 0x60))
            (*(long **)(this + 8),"<value><boolean>1</boolean></value>");
  return;
}

void XmlWriter::DateTime(long param_1) {
}

void XmlWriter::Double(double param_1) {
}

void XmlWriter::EndArray(unsigned long) {
EndToken((XmlWriter *)param_1,"</data></array></value>");
                    /* WARNING: Could not recover jumptable at 0x000100950e72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x88))();
  return;
}

void XmlWriter::EndMap(unsigned long) {
if (param_1 != 0) {
    EndToken(this,"</member>");
  }
  EndToken(this,"</struct></value>");
                    /* WARNING: Could not recover jumptable at 0x000100950d49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 8) + 0x88))();
  return;
}

void XmlWriter::EndToken(char const*) {
void *puVar1;
  void *puVar2;
  unsigned long long uVar3;
  int iVar4;
  void *local_160;
  void *local_158 [8];
  unsigned long long local_118;
  unsigned long long uStack_110;
  unsigned long long local_108;
  unsigned long long uStack_100;
  unsigned int local_f8;
  void *local_f0 [17];
  unsigned long long local_68;
  unsigned int local_60;
  
  unsigned int *local_40;
  unsigned int local_34;
  
  if (this[0x10] != (XmlWriter)0x0) {
    iVar4 = *(int *)(this + 0x14);
    *(int *)(this + 0x14) = iVar4 + -1;
    puVar2 = PTR_vtable_101ab45a8;
    if (iVar4 < 1) {
      puVar1 = (char*)PTR_vtable_101ab45a8 + 0x40;
      local_f0[0] = (char*)PTR_construction_vtable_101ab4158 + 0x40;
      local_160 = puVar1;
      // std code
      local_68 = 0;
      local_60 = 0xffffffff;
      local_f0[0] = puVar2 + 0x68;
      local_160 = puVar1;
      // std code
      local_158[0] = (char*)PTR_vtable_101ab4590 + 0x10;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 0x18;
      // std code
                ((ostream *)&local_160,"Pretty printing level underflow",0x1f);
      local_40 = (unsigned int *)___cxa_allocate_exception(0x28);
      uVar3 = // std code
      *local_40 = 0xffff8163;
      local_34 = (unsigned int)0((int7)((unsigned long)uVar3 >> 8),1);
      // std code
      *(unsigned long long *)(local_40 + 8) = 0;
      local_34 = 0;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(local_40,&AnyRpcException::typeinfo,AnyRpcException::~AnyRpcException);
    }
    (**(code **)(**(long **)(this + 8) + 0x58))(*(long **)(this + 8),10);
    if (0 < *(int *)(this + 0x14)) {
      iVar4 = 0;
      do {
        (**(code **)(**(long **)(this + 8) + 0x60))(*(long **)(this + 8),"\t");
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(this + 0x14));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000100950b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 8) + 0x60))(*(long **)(this + 8),param_1);
  return;
}

void XmlWriter::Int(int param_1) {
}

void XmlWriter::Int64(long long) {
long *plVar1;
  byte local_40 [16];
  void *local_30;
  
  (**(code **)(**(long **)(param_1 + 8) + 0x60))(*(long **)(param_1 + 8),"<value><i8>");
  plVar1 = *(long **)(param_1 + 8);
  // std code
  (**(code **)(*plVar1 + 0x68))(plVar1,local_40);
  if ((local_40[0] & 1) != 0) {
    delete(local_30);
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x60))(*(long **)(param_1 + 8),"</i8></value>");
  return;
}

void XmlWriter::Key(char const*, unsigned long, bool) {
void7 in_register_00000011;
  int iVar1;
  
  if (param_1[0x10] != '\0') {
    (**(code **)(**(long **)(param_1 + 8) + 0x58))(*(long **)(param_1 + 8),10);
    if (0 < *(int *)(param_1 + 0x14)) {
      iVar1 = 0;
      do {
        (**(code **)(**(long **)(param_1 + 8) + 0x60))(*(long **)(param_1 + 8),"\t");
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x14));
    }
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x60))(*(long **)(param_1 + 8),"<member>");
  if (param_1[0x10] != '\0') {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    (**(code **)(**(long **)(param_1 + 8) + 0x58))(*(long **)(param_1 + 8),10);
    if (0 < *(int *)(param_1 + 0x14)) {
      iVar1 = 0;
      do {
        (**(code **)(**(long **)(param_1 + 8) + 0x60))(*(long **)(param_1 + 8),"\t");
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x14));
    }
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x60))(*(long **)(param_1 + 8),"<name>");
  StringData((XmlWriter *)param_1,(char *)param_2,0(in_register_00000011,param_3));
  (**(code **)(**(long **)(param_1 + 8) + 0x60))(*(long **)(param_1 + 8),"</name>");
  if (param_1[0x10] != '\0') {
    (**(code **)(**(long **)(param_1 + 8) + 0x58))(*(long **)(param_1 + 8),10);
    if (0 < *(int *)(param_1 + 0x14)) {
      iVar1 = 0;
      do {
        (**(code **)(**(long **)(param_1 + 8) + 0x60))(*(long **)(param_1 + 8),"\t");
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x14));
    }
  }
  return;
}

void XmlWriter::MapSeparator() {
EndToken(this,"</member>");
  return;
}

void XmlWriter::Null() {
/* WARNING: Could not recover jumptable at 0x00010094fd27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 8) + 0x60))(*(long **)(this + 8),"<value><nil/></value>");
  return;
}

void XmlWriter::StringData(char const*, unsigned long) {
void *puVar1;
  byte bVar2;
  void *puVar3;
  int iVar4;
  long lVar5;
  unsigned long long uVar6;
  char *pcVar7;
  long *plVar8;
  unsigned long uVar9;
  void *local_160;
  void *local_158 [8];
  unsigned long long local_118;
  unsigned long long uStack_110;
  unsigned long long local_108;
  unsigned long long uStack_100;
  unsigned int local_f8;
  void *local_f0 [17];
  unsigned long long local_68;
  unsigned int local_60;
  
  unsigned int *local_40;
  unsigned int local_34;
  
  if (param_2 != 0) {
    uVar9 = 0;
    do {
      puVar3 = PTR_vtable_101ab45a8;
      bVar2 = param_1[uVar9];
      iVar4 = (int)" !\"#$%&\'()*+,-./0123AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA0123456789ABCDEFiuuuuuuuu"
                   [(unsigned long)bVar2 + 0xa9];
      if (" !\"#$%&\'()*+,-./0123AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA0123456789ABCDEFiuuuuuuuu"
          [(unsigned long)bVar2 + 0xa9] == '\0') {
        plVar8 = *(long **)(this + 8);
        lVar5 = *plVar8;
        iVar4 = (int)(char)bVar2;
        (**(code **)(lVar5 + 0x58))(plVar8,iVar4);
        goto switchD_10095059c_caseD_23;
      }
      switch(iVar4) {
      case 0x22:
        plVar8 = *(long **)(this + 8);
        lVar5 = *plVar8;
        pcVar7 = "&quot;";
        break;
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x28:
      case 0x29:
      case 0x2a:
      case 0x2b:
      case 0x2c:
      case 0x2d:
      case 0x2e:
      case 0x2f:
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3a:
      case 0x3b:
      case 0x3d:
        goto switchD_10095059c_caseD_23;
      case 0x26:
        plVar8 = *(long **)(this + 8);
        lVar5 = *plVar8;
        pcVar7 = "&amp;";
        break;
      case 0x27:
        plVar8 = *(long **)(this + 8);
        lVar5 = *plVar8;
        pcVar7 = "&apos;";
        break;
      case 0x3c:
        plVar8 = *(long **)(this + 8);
        lVar5 = *plVar8;
        pcVar7 = "&lt;";
        break;
      case 0x3e:
        plVar8 = *(long **)(this + 8);
        lVar5 = *plVar8;
        pcVar7 = "&gt;";
        break;
      default:
        if (iVar4 == 0x75) {
          (**(code **)(**(long **)(this + 8) + 0x60))(*(long **)(this + 8),"&#x");
          (**(code **)(**(long **)(this + 8) + 0x58))
                    (*(long **)(this + 8),
                     (int)" !\"#$%&\'()*+,-./0123AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA0123456789ABCDEFiuuuuuuuu"
                          [(unsigned long)(bVar2 >> 4) + 0x99]);
          (**(code **)(**(long **)(this + 8) + 0x58))
                    (*(long **)(this + 8),
                     (int)" !\"#$%&\'()*+,-./0123AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA0123456789ABCDEFiuuuuuuuu"
                          [(unsigned long)(bVar2 & 0xf) + 0x99]);
          plVar8 = *(long **)(this + 8);
          lVar5 = *plVar8;
          iVar4 = 0x3b;
          return;
        }
        if (iVar4 == 0x69) {
          puVar1 = (char*)PTR_vtable_101ab45a8 + 0x40;
          local_f0[0] = (char*)PTR_construction_vtable_101ab4158 + 0x40;
          local_160 = puVar1;
          // std code
          local_68 = 0;
          local_60 = 0xffffffff;
          local_f0[0] = puVar3 + 0x68;
          local_160 = puVar1;
          // std code
          local_158[0] = (char*)PTR_vtable_101ab4590 + 0x10;
          local_118 = 0;
          uStack_110 = 0;
          local_108 = 0;
          uStack_100 = 0;
          local_f8 = 0x18;
          // std code
                    ((ostream *)&local_160,"Null value detection in string",0x1e);
          local_40 = (unsigned int *)___cxa_allocate_exception(0x28);
          uVar6 = // std code
          *local_40 = 0xffff815e;
          local_34 = (unsigned int)0((int7)((unsigned long)uVar6 >> 8),1);
          // std code
          *(unsigned long long *)(local_40 + 8) = 0;
          local_34 = 0;
                    /* WARNING: Subroutine does not return */
          ___cxa_throw(local_40,&AnyRpcException::typeinfo,AnyRpcException::~AnyRpcException);
        }
        goto switchD_10095059c_caseD_23;
      }
      (**(code **)(lVar5 + 0x60))(plVar8,pcVar7);
switchD_10095059c_caseD_23:
      uVar9 = uVar9 + 1;
    } while (param_2 != uVar9);
  }
  return;
}

void XmlWriter::Uint(unsigned int) {
long *plVar1;
  unsigned int in_register_0000003c;
  long lVar2;
  byte local_40 [16];
  void *local_30;
  
  lVar2 = CONCAT44(in_register_0000003c,param_1);
  (**(code **)(**(long **)(lVar2 + 8) + 0x60))(*(long **)(lVar2 + 8),"<value><i4>");
  plVar1 = *(long **)(lVar2 + 8);
  // std code
  (**(code **)(*plVar1 + 0x68))(plVar1,local_40);
  if ((local_40[0] & 1) != 0) {
    delete(local_30);
  }
  (**(code **)(**(long **)(lVar2 + 8) + 0x60))(*(long **)(lVar2 + 8),"</i4></value>");
  return;
}

void XmlWriter::Uint64(unsigned long long) {
long *plVar1;
  byte local_40 [16];
  void *local_30;
  
  (**(code **)(**(long **)(param_1 + 8) + 0x60))(*(long **)(param_1 + 8),"<value><i8>");
  plVar1 = *(long **)(param_1 + 8);
  // std code
  (**(code **)(*plVar1 + 0x68))(plVar1,local_40);
  if ((local_40[0] & 1) != 0) {
    delete(local_30);
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x60))(*(long **)(param_1 + 8),"</i8></value>");
  return;
}

XmlWriter::~XmlWriter() {
delete(this);
  return;
}
}
