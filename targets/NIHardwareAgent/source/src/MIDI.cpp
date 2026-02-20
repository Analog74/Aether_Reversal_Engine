#include <ni/controller_editor/MIDI.hpp>
namespace NI::NHL2::MaschineJam::Map::onSysExEvent(NI::NHL2 {

void MIDI::SysEx const&) {
byte bVar1;
  ushort *puVar2;
  byte *pbVar3;
  Assignment *pAVar4;
  long lVar5;
  int iVar6;
  unsigned long uVar7;
  uint uVar8;
  unsigned long uVar9;
  byte *pbVar10;
  unsigned long long unaff_R15;
  void7 uVar12;
  unsigned long uVar11;
  
  if (*(int *)param_1 == 0x2109) {
    puVar2 = *(ushort **)(param_1 + 8);
    pbVar3 = *(byte **)(param_1 + 0x10);
    uVar7 = (long)pbVar3 - (long)puVar2;
    if ((((7 < uVar7) && ((ushort)(*puVar2 << 8 | *puVar2 >> 8) == 0x1500)) &&
        ((ushort)(puVar2[1] << 8 | puVar2[1] >> 8) == 0x4d50)) &&
       ((ushort)(puVar2[2] << 8 | puVar2[2] >> 8) == 1)) {
      uVar12 = (void7)((unsigned long)unaff_R15 >> 8);
      switch((char)puVar2[3]) {
      case '\x01':
        if (uVar7 - 7 < 0x23) {
          uVar11 = 0(uVar12,1);
          if ((byte *)((long)puVar2 + 7) != pbVar3) {
            uVar9 = 0;
            do {
              bVar1 = ((byte *)((long)puVar2 + 7))[uVar9];
              pAVar4 = (Assignment *)
                       (**(code **)(*(long *)this + 0x28))
                                 (this,(&onSysExEvent(NI::NHL2::MIDI::SysEx_const&)::idBtn)
                                       [uVar9 & 0xffffffff] + 0x10000000);
              if ((pAVar4 != (Assignment *)0x0) && (pAVar4[0xa2] != (Assignment)0x0)) {
                Assignment::feedbackMidiValue(pAVar4,(uint)bVar1);
              }
              uVar9 = uVar9 + 1;
            } while (uVar7 - 7 != uVar9);
          }
          goto LAB_10010dee9;
        }
        break;
      case '\x02':
        if (uVar7 - 7 < 0x51) {
          uVar11 = 0(uVar12,1);
          if ((byte *)((long)puVar2 + 7) != pbVar3) {
            uVar9 = 0;
            do {
              bVar1 = ((byte *)((long)puVar2 + 7))[uVar9];
              uVar8 = (uint)uVar9;
              if (uVar8 < 8) {
                iVar6 = uVar8 + 0x10000001;
              }
              else {
                iVar6 = uVar8 + 0x1000000a;
              }
              pAVar4 = (Assignment *)(**(code **)(*(long *)this + 0x28))(this,iVar6);
              if ((pAVar4 != (Assignment *)0x0) && (pAVar4[0xa2] != (Assignment)0x0)) {
                Assignment::feedbackMidiValue(pAVar4,(uint)bVar1);
              }
              uVar9 = uVar9 + 1;
            } while (uVar7 - 7 != uVar9);
          }
          goto LAB_10010dee9;
        }
        break;
      case '\x03':
      case '\x04':
        if (uVar7 - 7 < 9) {
          pbVar10 = (byte *)((long)puVar2 + 7);
          uVar11 = 0(uVar12,1);
          if (pbVar10 != pbVar3) {
            iVar6 = -0x80000000;
            do {
              bVar1 = *pbVar10;
              pAVar4 = (Assignment *)(**(code **)(*(long *)this + 0x28))(this,iVar6);
              if ((pAVar4 != (Assignment *)0x0) && (pAVar4[0xa2] != (Assignment)0x0)) {
                if ((char)puVar2[3] == '\x03') {
                  Assignment::feedbackMidiValue(pAVar4,(uint)bVar1);
                }
                else {
                  Assignment::setMidiValue(pAVar4,(uint)bVar1,false);
                }
              }
              pbVar10 = pbVar10 + 1;
              iVar6 = iVar6 + 1;
            } while (pbVar3 != pbVar10);
          }
          goto LAB_10010dee9;
        }
        break;
      case '\x05':
        if (uVar7 - 7 < 0x11) {
          uVar7 = uVar7 - 7 >> 1;
          uVar11 = 0(uVar12,1);
          if (0 < (int)uVar7) {
            uVar9 = 0;
            do {
              lVar5 = (**(code **)(*(long *)this + 0x28))(this,(uint)uVar9 | 0x80000000);
              if (lVar5 != 0) {
                *(ushort *)(lVar5 + 0x16) = *(byte *)((long)puVar2 + uVar9 * 2 + 7) & 3;
                bVar1 = (byte)puVar2[uVar9 + 4] >> 2;
                if (bVar1 == 0) {
                  iVar6 = 0x10;
                }
                else if (bVar1 == 0x1f) {
                  iVar6 = 0x12;
                }
                else if (bVar1 == 0x1e) {
                  iVar6 = 0x11;
                }
                else {
                  iVar6 = 0x12;
                  if ((byte)puVar2[uVar9 + 4] < 0x50) {
                    iVar6 = bVar1 - 1;
                  }
                }
                *(int *)(**(long **)(lVar5 + 0x18) + 0x10) = iVar6;
              }
              uVar9 = uVar9 + 1;
            } while (uVar7 != uVar9);
          }
          goto LAB_10010dee9;
        }
      }
    }
  }
  uVar11 = 0;
LAB_10010dee9:
  return uVar11 & 0xffffffff;
}
}
