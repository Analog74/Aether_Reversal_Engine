#include <ni/controller_editor/system.hpp>
namespace boost::filesystem::detail::status(boost::filesystem::path const&, boost {

void system::error_code*) {
void *puVar1;
  int iVar2;
  unsigned int uVar3;
  int *piVar4;
  filesystem_error *pfVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  unsigned char local_d0 [4];
  ushort local_cc;
  int local_40;
  unsigned int uStack_3c;
  void *puStack_38;
  unsigned long local_30;
  
  if (param_2 != (error_code *)0x0) {
    *(unsigned long long *)param_2 = 0;
    *(unsigned long long *)(param_2 + 8) = 0;
    *(unsigned long long *)(param_2 + 0x10) = 0;
  }
  if (((byte)*param_1 & 1) == 0) {
    iVar2 = _stat_INODE64(param_1 + 1,local_d0);
  }
  else {
    iVar2 = _stat_INODE64(*(unsigned long long *)(param_1 + 0x10),local_d0);
  }
  if (iVar2 == 0) {
    uVar8 = (local_cc & 0xf000) - 0x1000 >> 0xc;
    uVar7 = 0xffff;
    uVar3 = 10;
    if (uVar8 < 0xc) {
      uVar6 = (uint)local_cc;
      switch(uVar8) {
      case 0:
        uVar7 = uVar6 & 0xfff;
        uVar3 = 7;
        break;
      case 1:
        uVar7 = uVar6 & 0xfff;
        uVar3 = 6;
        break;
      case 3:
        uVar7 = uVar6 & 0xfff;
        uVar3 = 3;
        break;
      case 5:
        uVar7 = uVar6 & 0xfff;
        uVar3 = 5;
        break;
      case 7:
        uVar7 = uVar6 & 0xfff;
        uVar3 = 2;
        break;
      case 0xb:
        uVar7 = local_cc & 0xfff;
        uVar3 = 8;
      }
    }
  }
  else {
    piVar4 = ___error();
    puVar1 = PTR_instance_1009cc038;
    iVar2 = *piVar4;
    if (param_2 == (error_code *)0x0) {
      uVar3 = 1;
      uVar7 = 0;
      if ((iVar2 != 2) && (uVar7 = 0, iVar2 != 0x14)) {
        pfVar5 = (filesystem_error *)___cxa_allocate_exception(0x30);
        puStack_38 = PTR_instance_1009cc038;
        if (*(unsigned long *)(PTR_instance_1009cc038 + 8) >> 1 == 0x595588bd12bf6fe8) {
          bVar9 = iVar2 != 0;
        }
        else {
          bVar9 = (**(code **)(*(long *)PTR_instance_1009cc038 + 0x30))
                            (PTR_instance_1009cc038,iVar2);
        }
        local_30 = (unsigned long)bVar9 | 2;
        uStack_3c = 0;
        local_40 = iVar2;
        filesystem_error::filesystem_error(pfVar5,"// boost code
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(pfVar5,&filesystem_error::typeinfo,filesystem_error::~filesystem_error);
      }
    }
    else {
      if (*(unsigned long *)(PTR_instance_1009cc038 + 8) >> 1 == 0x595588bd12bf6fe8) {
        bVar9 = iVar2 != 0;
      }
      else {
        bVar9 = (**(code **)(*(long *)PTR_instance_1009cc038 + 0x30))(PTR_instance_1009cc038,iVar2);
      }
      *(int *)param_2 = iVar2;
      *(unsigned int *)(param_2 + 4) = 0;
      *(void **)(param_2 + 8) = puVar1;
      *(unsigned long *)(param_2 + 0x10) = (unsigned long)bVar9 | 2;
      uVar3 = 1;
      uVar7 = 0;
      if ((iVar2 != 2) && (iVar2 != 0x14)) {
        uVar3 = 0;
        uVar7 = 0xffff;
      }
    }
  }
  *(unsigned int *)this = uVar3;
  *(uint *)(this + 4) = uVar7;
  return this;
}
}
