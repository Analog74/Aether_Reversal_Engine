#include <ni/controller_editor/OSImpl.hpp>
namespace NI::NHL2::USBDeviceFactory {

void OSImpl::onDeviceAdded(void*, unsigned int) {
unsigned int uVar1;
  unsigned long long *puVar2;
  uint uVar3;
  __tree_node_base *p_Var4;
  long *plVar5;
  unsigned long long *puVar6;
  unsigned long long *puVar7;
  __tree_node_base *p_Var8;
  short sVar9;
  unsigned int local_98;
  void2 local_94 [2];
  unsigned long long local_90;
  unsigned long long local_88;
  unsigned long long local_80;
  unsigned long long local_78;
  unsigned long long local_70;
  unsigned long long local_68;
  unsigned long long local_60;
  unsigned long long local_58;
  unsigned long long local_50;
  uint local_48 [2];
  unsigned long long *local_40;
  uint local_38;
  unsigned int local_34;
  
  if (param_1 == (void *)0x0) {
    local_34 = 0;
  }
  else {
                    /* WARNING: Load size is inaccurate */
    local_34 = (unsigned int)0((int7)((unsigned long)*param_1 >> 8),*(long *)(*param_1 + 0x40) != 0);
  }
  local_38 = param_2;
  uVar3 = _IOIteratorNext(param_2);
  if (uVar3 != 0) {
    local_40 = (unsigned long long *)((long)param_1 + 0x78);
    do {
      puVar2 = (unsigned long long *)*local_40;
      puVar6 = local_40;
      puVar7 = local_40;
      while (puVar2 != (unsigned long long *)0x0) {
        while (puVar7 = puVar2, uVar3 < *(uint *)((long)puVar7 + 0x1c)) {
          puVar2 = (unsigned long long *)*puVar7;
          puVar6 = puVar7;
          if ((unsigned long long *)*puVar7 == (unsigned long long *)0x0) goto LAB_1000213d3;
        }
        if (uVar3 <= *(uint *)((long)puVar7 + 0x1c)) break;
        puVar6 = puVar7 + 1;
        puVar2 = (unsigned long long *)puVar7[1];
      }
LAB_1000213d3:
      p_Var4 = (__tree_node_base *)*puVar6;
      if (p_Var4 == (__tree_node_base *)0x0) {
        p_Var4 = (__tree_node_base *)new(0x28);
        *(uint *)(p_Var4 + 0x1c) = uVar3;
        p_Var4[0x20] = (__tree_node_base)0x0;
        *(unsigned long long *)(p_Var4 + 8) = 0;
        *(unsigned long long *)p_Var4 = 0;
        *(unsigned long long **)(p_Var4 + 0x10) = puVar7;
        *puVar6 = p_Var4;
        p_Var8 = p_Var4;
        if (**(long **)((long)param_1 + 0x70) != 0) {
          *(long *)((long)param_1 + 0x70) = **(long **)((long)param_1 + 0x70);
          p_Var8 = (__tree_node_base *)*puVar6;
        }
        // std code
                  (*(__tree_node_base **)((long)param_1 + 0x78),p_Var8);
        *(long *)((long)param_1 + 0x80) = *(long *)((long)param_1 + 0x80) + 1;
      }
      p_Var4[0x20] = (__tree_node_base)0x0;
      if (*(char *)((long)param_1 + 0x48) == '\0') {
LAB_1000215fa:
        puVar2 = (unsigned long long *)*local_40;
        puVar6 = local_40;
        puVar7 = local_40;
        while (puVar2 != (unsigned long long *)0x0) {
          while (puVar7 = puVar2, uVar3 < *(uint *)((long)puVar7 + 0x1c)) {
            puVar6 = puVar7;
            puVar2 = (unsigned long long *)*puVar7;
            if ((unsigned long long *)*puVar7 == (unsigned long long *)0x0) goto LAB_100021651;
          }
          if (uVar3 <= *(uint *)((long)puVar7 + 0x1c)) break;
          puVar6 = puVar7 + 1;
          puVar2 = (unsigned long long *)puVar7[1];
        }
LAB_100021651:
        p_Var4 = (__tree_node_base *)*puVar6;
        if (p_Var4 == (__tree_node_base *)0x0) {
          p_Var4 = (__tree_node_base *)new(0x28);
          *(uint *)(p_Var4 + 0x1c) = uVar3;
          p_Var4[0x20] = (__tree_node_base)0x0;
          *(unsigned long long *)(p_Var4 + 8) = 0;
          *(unsigned long long *)p_Var4 = 0;
          *(unsigned long long **)(p_Var4 + 0x10) = puVar7;
          *puVar6 = p_Var4;
          p_Var8 = p_Var4;
          if (**(long **)((long)param_1 + 0x70) != 0) {
            *(long *)((long)param_1 + 0x70) = **(long **)((long)param_1 + 0x70);
            p_Var8 = (__tree_node_base *)*puVar6;
          }
          // std code
                    (*(__tree_node_base **)((long)param_1 + 0x78),p_Var8);
          *(long *)((long)param_1 + 0x80) = *(long *)((long)param_1 + 0x80) + 1;
        }
        p_Var4[0x20] = (__tree_node_base)0x1;
        if ((char)local_34 != '\0') {
                    /* WARNING: Load size is inaccurate */
          plVar5 = *(long **)(*param_1 + 0x40);
          local_98 = uVar3;
          if (plVar5 == (long *)0x0) {
            puVar6 = (unsigned long long *)___cxa_allocate_exception(8);
            *puVar6 = PTR_vtable_100227298 + 0x10;
                    /* WARNING: Subroutine does not return */
            ___cxa_throw(puVar6,PTR_typeinfo_100227198,// std code
          }
          (**(code **)(*plVar5 + 0x30))(plVar5,&local_98,(long)param_1 + 8);
        }
      }
      else {
        uVar1 = *(unsigned int *)((long)param_1 + 0x40);
        local_98 = 0;
        local_94[0] = 0;
        local_50 = 0;
        local_58 = 0;
        local_60 = 0;
        local_68 = 0;
        local_70 = 0;
        local_78 = 0;
        local_80 = 0;
        local_88 = 0;
        local_90 = 0;
        switch(*(unsigned int *)((long)param_1 + 8)) {
        case 0:
          plVar5 = (long *)USBDevice::OSImpl::getUSBDeviceInterfaceFor(uVar3);
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x68))(plVar5,&local_98);
            (**(code **)(*plVar5 + 0x70))(plVar5,(long)&local_98 + 2);
            (**(code **)(*plVar5 + 0x78))(plVar5,local_94);
          }
          break;
        case 1:
          local_48[0] = uVar3;
          FX2Device::getDeviceInfoForOSHandle
                    ((USBDeviceOSHandle *)local_48,(USBDeviceInfo *)&local_98,false);
          break;
        case 2:
          HIDDevice::OSImpl::getHIDDeviceInfo(uVar3,(USBDeviceInfo *)&local_98,false);
          break;
        case 3:
          plVar5 = (long *)USBDevice::OSImpl::getUSBDeviceInterfaceFor(uVar3);
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x68))(plVar5,&local_98);
            (**(code **)(*plVar5 + 0x70))(plVar5,(long)&local_98 + 2);
            (**(code **)(*plVar5 + 0x78))(plVar5,local_94);
          }
          break;
        default:
          goto switchD_1000214c5_default;
        }
        sVar9 = (short)uVar1;
        if (((sVar9 == 0) || ((short)local_98 == sVar9)) &&
           ((sVar9 = (short)((uint)uVar1 >> 0x10), sVar9 == 0 ||
            ((short)(local_98 >> 0x10) == sVar9)))) {
          // std code
          // std code
          // std code
          goto LAB_1000215fa;
        }
switchD_1000214c5_default:
        // std code
        // std code
        // std code
      }
      uVar3 = _IOIteratorNext(local_38);
    } while (uVar3 != 0);
  }
  return;
}

void OSImpl::onDeviceRemoved(void*, unsigned int) {
__tree_node_base *p_Var1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  __tree_node_base *p_Var5;
  __tree_node_base *p_Var6;
  long *plVar7;
  unsigned long long *puVar8;
  unsigned long long *puVar9;
  unsigned long long *puVar10;
  uint uVar11;
  __tree_node_base *p_Var12;
  uint local_48 [2];
  long *local_40;
  unsigned int local_34;
  
  if (param_1 == (void *)0x0) {
    local_34 = 0;
  }
  else {
                    /* WARNING: Load size is inaccurate */
    local_34 = (unsigned int)0((int7)((unsigned long)*param_1 >> 8),*(long *)(*param_1 + 0x40) != 0);
  }
  local_40 = (long *)param_1;
  uVar4 = _IOIteratorNext(param_2);
  if (uVar4 != 0) {
    p_Var1 = (__tree_node_base *)(local_40 + 0xf);
    plVar2 = local_40 + 1;
    do {
      p_Var5 = *(__tree_node_base **)p_Var1;
      p_Var12 = p_Var1;
      if (p_Var5 != (__tree_node_base *)0x0) {
        do {
          if (*(uint *)(p_Var5 + 0x1c) < uVar4) {
            p_Var6 = *(__tree_node_base **)(p_Var5 + 8);
          }
          else {
            p_Var6 = *(__tree_node_base **)p_Var5;
            p_Var12 = p_Var5;
          }
          p_Var5 = p_Var6;
        } while (p_Var6 != (__tree_node_base *)0x0);
        if ((p_Var12 != p_Var1) && (uVar11 = *(uint *)(p_Var12 + 0x1c), uVar11 <= uVar4)) {
          if (((char)local_34 != '\0') && (p_Var12[0x20] != (__tree_node_base)0x0)) {
            plVar3 = *(long **)(*local_40 + 0x70);
            local_48[0] = uVar4;
            if (plVar3 == (long *)0x0) {
              puVar9 = (unsigned long long *)___cxa_allocate_exception(8);
              *puVar9 = PTR_vtable_100227298 + 0x10;
                    /* WARNING: Subroutine does not return */
              ___cxa_throw(puVar9,PTR_typeinfo_100227198,// std code
              ;
            }
            (**(code **)(*plVar3 + 0x30))(plVar3,local_48,plVar2);
            uVar11 = *(uint *)(p_Var12 + 0x1c);
          }
          _IOObjectRelease(uVar11);
          plVar3 = *(long **)(p_Var12 + 8);
          if (*(long **)(p_Var12 + 8) == (long *)0x0) {
            plVar7 = *(long **)(p_Var12 + 0x10);
            p_Var5 = p_Var12;
            if ((__tree_node_base *)*plVar7 != p_Var12) {
              do {
                p_Var5 = *(__tree_node_base **)(p_Var5 + 0x10);
                plVar7 = *(long **)(p_Var5 + 0x10);
              } while ((__tree_node_base *)*plVar7 != p_Var5);
            }
          }
          else {
            do {
              plVar7 = plVar3;
              plVar3 = (long *)*plVar7;
            } while ((long *)*plVar7 != (long *)0x0);
          }
          if ((__tree_node_base *)local_40[0xe] == p_Var12) {
            local_40[0xe] = (long)plVar7;
          }
          local_40[0x10] = local_40[0x10] + -1;
          // std code
                    ((__tree_node_base *)local_40[0xf],p_Var12);
          delete(p_Var12);
        }
      }
      // std code
      if (0 != (unsigned long long *)0x0) {
        puVar10 = &0;
        puVar9 = 0;
        do {
          if (*(uint *)(puVar9 + 4) < uVar4) {
            puVar8 = (unsigned long long *)puVar9[1];
          }
          else {
            puVar8 = (unsigned long long *)*puVar9;
            puVar10 = puVar9;
          }
          puVar9 = puVar8;
        } while (puVar8 != (unsigned long long *)0x0);
        if (((unsigned long long **)puVar10 != &0) && (*(uint *)(puVar10 + 4) <= uVar4)) {
          // std code
          __tree<// std code
          ::erase((__tree<// std code
                   *)&s_mapHIDDeviceInfos);
        }
      }
      // std code
      _IOObjectRelease(uVar4);
      uVar4 = _IOIteratorNext(param_2);
    } while (uVar4 != 0);
  }
  return;
}
}
