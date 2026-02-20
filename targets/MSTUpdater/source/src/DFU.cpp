#include <ni/controller_editor/DFU.hpp>
namespace NI::NHL2::DFUDevice::writeImage(unsigned char const*, unsigned int, NI::NHL2 {

void DFU::GetStatus&) {
long lVar1;
  DFUDevice DVar2;
  ushort uVar3;
  unsigned long uVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  USBDeviceFilter *pUVar9;
  unsigned long uVar10;
  uint uVar11;
  unsigned long local_2148;
  unsigned long local_2140;
  unsigned long long local_2138;
  GetStatus local_2129;
  long local_2128 [4];
  long *local_2108;
  void **local_20f8;
  DFUDevice *local_20f0;
  GetStatus *local_20e8;
  void ***local_20d8;
  long local_20c8 [17];
  void2 local_2040;
  void2 local_203e;
  unsigned char local_203c [8196];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1002272e0;
  *(void2 *)(param_3 + 4) = 0;
  *(unsigned int *)param_3 = 0;
  if ((param_1 == (uchar *)0x0) || (param_2 == 0)) {
    *param_3 = (GetStatus)0x1;
  }
  else {
    uVar4 = *(unsigned long *)(this + 0x70);
    if ((char)uVar4 == '\x02') {
      uVar10 = uVar4 >> 0x20 & 0xffff;
      uVar11 = (uint)uVar10;
      if (((int)(uVar4 >> 0x20) - 1U & 0xffff) < 0x1fff) {
        uVar7 = (uint)(param_2 / uVar10);
        if (uVar11 <= param_2) {
          local_2040 = 0;
          local_2140 = uVar4 >> 0x20 & 0xffff;
          local_203e = (short)(uVar4 >> 0x20);
          memcpy(local_203c,param_1,local_2140);
          cVar5 = writeDFUData(this,(Payload *)&local_2040);
          local_2138 = (unsigned long)local_2138._4_4_ << 0x20;
          bVar6 = 0;
          if (cVar5 != '\0') {
            param_1 = param_1 + local_2140;
LAB_10001ed30:
            do {
              cVar5 = getDFUStatus(this,param_3);
              bVar6 = 0;
              if ((cVar5 == '\0') || (*param_3 != (GetStatus)0x0)) break;
              if (param_3[4] == (GetStatus)0x4) {
                uVar8 = (uint)*(uint3 *)(param_3 + 1);
                if (1000 < uVar8) {
                  uVar8 = 1000;
                }
                if (uVar8 == 0) goto LAB_10001ed30;
                local_20c8[0] = (unsigned long)uVar8 * 1000000;
                // std code
                if (param_3[4] != (GetStatus)0x5) goto LAB_10001ed30;
              }
              else if (param_3[4] != (GetStatus)0x5) goto LAB_10001eb98;
              uVar8 = (int)local_2138 + 1;
              local_2138 = CONCAT44(local_2138._4_4_,uVar8);
              if (uVar7 <= uVar8) goto LAB_10001ebe5;
              uVar3 = *(ushort *)(this + 0x74);
              local_2040 = (void2)uVar8;
              memcpy(local_203c,param_1,(unsigned long)uVar3);
              param_1 = param_1 + uVar3;
              cVar5 = writeDFUData(this,(Payload *)&local_2040);
              bVar6 = 0;
            } while (cVar5 != '\0');
          }
          goto LAB_10001eb9b;
        }
        local_2138 = local_2138 & 0xffffffff00000000;
LAB_10001ebe5:
        uVar11 = param_2 - uVar7 * uVar11;
        if (uVar11 == 0) {
LAB_10001ee07:
          local_203e = 0;
          local_2040 = (void2)local_2138;
          cVar5 = writeDFUData(this,(Payload *)&local_2040);
          if (cVar5 != '\0') {
            local_2129 = (GetStatus)0xa;
            getDFUState(this,(uchar *)&local_2129);
            DVar2 = this[0x71];
            USBDeviceFactory::USBDeviceFactory((USBDeviceFactory *)local_20c8);
            local_20f8 = &PTR____func_100228608;
            local_2108 = (long *)0x0;
            local_20f0 = this;
            local_20e8 = &local_2129;
            local_20d8 = &local_20f8;
            USBDeviceFactory::setCallbacks((USBDeviceFactory *)local_20c8,&local_20f8,local_2128);
            if (local_2108 == local_2128) {
              (**(code **)(local_2128[0] + 0x20))(local_2128);
            }
            else if (local_2108 != (long *)0x0) {
              (**(code **)(*local_2108 + 0x28))();
            }
            if (local_20d8 == &local_20f8) {
              (*(code *)local_20f8[4])(&local_20f8);
            }
            else if (local_20d8 != (void ***)0x0) {
              (*(code *)(*local_20d8)[5])();
            }
            if (*param_3 == (GetStatus)0x0) {
              lVar1 = (unsigned long)(((byte)DVar2 & 4) == 0) * 9 + 1;
              local_2138 = lVar1 * 1000000000;
              if (((byte)DVar2 & 4) == 0) {
                local_2140 = local_2140 & 0xffffffff00000000;
                bVar6 = 0;
LAB_10001eff4:
                switch(local_2129) {
                case (GetStatus)0x0:
                case (GetStatus)0x8:
                  goto switchD_10001ef79_caseD_0;
                default:
                  goto switchD_10001ef79_caseD_1;
                case (GetStatus)0x2:
                  goto switchD_10001ef79_caseD_2;
                case (GetStatus)0x6:
                  cVar5 = getDFUStatus(this,param_3);
                  if (((*param_3 != (GetStatus)0x0) && (cVar5 == '\x01')) ||
                     (local_2129 = (GetStatus)0x7, *param_3 != (GetStatus)0x0)) goto LAB_10001ef1a;
                  goto LAB_10001eff4;
                case (GetStatus)0x7:
                  goto switchD_10001f007_caseD_7;
                }
              }
              bVar6 = 0;
LAB_10001ef66:
              switch(local_2129) {
              case (GetStatus)0x0:
              case (GetStatus)0x8:
                goto switchD_10001ef79_caseD_0;
              default:
                goto switchD_10001ef79_caseD_1;
              case (GetStatus)0x2:
                goto switchD_10001ef79_caseD_2;
              case (GetStatus)0x6:
                cVar5 = getDFUStatus(this,param_3);
                if (((*param_3 != (GetStatus)0x0) && (cVar5 == '\x01')) ||
                   (local_2129 = (GetStatus)0x7, *param_3 != (GetStatus)0x0)) break;
                goto LAB_10001ef66;
              case (GetStatus)0x7:
                goto switchD_10001ef79_caseD_7;
              }
            }
            goto LAB_10001ef1a;
          }
          *param_3 = (GetStatus)0xe;
        }
        else {
          local_203e = (void2)uVar11;
          local_2040 = (void2)local_2138;
          memcpy(local_203c,param_1,(unsigned long)uVar11);
          cVar5 = writeDFUData(this,(Payload *)&local_2040);
          if (cVar5 != '\0') {
            cVar5 = getDFUStatus(this,param_3);
            bVar6 = 0;
            if ((cVar5 != '\0') && (*param_3 == (GetStatus)0x0)) {
              bVar6 = 0;
              do {
                if (param_3[4] != (GetStatus)0x4) {
                  if (param_3[4] == (GetStatus)0x5) goto LAB_10001ee07;
                  goto LAB_10001eb98;
                }
                uVar11 = (uint)*(uint3 *)(param_3 + 1);
                if (1000 < uVar11) {
                  uVar11 = 1000;
                }
                if (uVar11 != 0) {
                  local_20c8[0] = (unsigned long)uVar11 * 1000000;
                  // std code
                  if (param_3[4] == (GetStatus)0x5) goto LAB_10001ee07;
                }
                cVar5 = getDFUStatus(this,param_3);
              } while ((cVar5 != '\0') && (*param_3 == (GetStatus)0x0));
            }
            goto LAB_10001eb9b;
          }
        }
      }
      else {
        *param_3 = (GetStatus)0xe;
        if (Logging::detail::__reportLevelAsUInt < 3) {
          bVar6 = 0;
          Logging::detail::__trace__msg(2,"%s: Unsupported wTransferSize (%d)\n","DFUDevice");
          goto LAB_10001eb9b;
        }
      }
    }
    else {
      *param_3 = (GetStatus)0x3;
    }
  }
LAB_10001eb98:
  bVar6 = 0;
  goto LAB_10001eb9b;
switchD_10001f007_caseD_7:
  local_2148 = local_2138;
  // std code
  if (*(ushort *)(this + 0x72) < (uint)local_2140) goto switchD_10001ef79_caseD_1;
  pUVar9 = (USBDeviceFilter *)USBDeviceDB::getDeviceFilter(*(ushort *)(this + 0x22) & 0xfff0,3);
  if (pUVar9 != (USBDeviceFilter *)0x0) {
    USBDeviceFactory::initWithDeviceFilter((USBDeviceFactory *)local_20c8,pUVar9,false);
    USBDeviceFactory::deInit((USBDeviceFactory *)local_20c8);
  }
  local_2140 = CONCAT44(local_2140._4_4_,(uint)local_2140 + (int)lVar1);
  if (*param_3 != (GetStatus)0x0) goto LAB_10001ef1d;
  goto LAB_10001eff4;
switchD_10001ef79_caseD_7:
  local_2148 = local_2138;
  // std code
  cVar5 = getDFUState(this,(uchar *)&local_2129);
  if (cVar5 == '\0') goto switchD_10001ef79_caseD_1;
  if (*param_3 != (GetStatus)0x0) goto LAB_10001ef1d;
  goto LAB_10001ef66;
switchD_10001ef79_caseD_2:
  bVar6 = getDFUStatus(this,param_3);
  bVar6 = bVar6 & *param_3 == (GetStatus)0x0;
  goto LAB_10001ef1d;
switchD_10001ef79_caseD_1:
  *param_3 = (GetStatus)0xe;
LAB_10001ef1a:
  bVar6 = 0;
  goto LAB_10001ef1d;
switchD_10001ef79_caseD_0:
  param_3[4] = local_2129;
  *param_3 = (GetStatus)0x0;
  bVar6 = 1;
LAB_10001ef1d:
  USBDeviceFactory::~USBDeviceFactory((USBDeviceFactory *)local_20c8);
LAB_10001eb9b:
  if (*(long *)PTR____stack_chk_guard_1002272e0 == local_38) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}
}
