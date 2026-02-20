#include <ni/controller_editor/DoubleToStream_anyrpc.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace anyrpc::XmlWriter {

void DoubleToStream(1 param_1, anyrpc::Stream&, double {
bool bVar1;
  unsigned long uVar2;
  uint uVar3;
  int iVar4;
  unsigned long long extraout_XMM0_Qb;
  unsigned char auVar5 [16];
  double dVar6;
  double dVar7;
  
  if ((param_2 == 0.0) && (!NAN(param_2))) {
                    /* WARNING: Could not recover jumptable at 0x000100950119. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x58))(param_1,0x30);
    return;
  }
  if (param_2 < 0.0) {
    (**(code **)(*(long *)param_1 + 0x58))(param_1,0x2d);
    param_2 = -param_2;
  }
  auVar5._0_8_ = _log10();
  auVar5._8_8_ = extraout_XMM0_Qb;
  auVar5 = roundsd(auVar5,auVar5,9);
  uVar3 = (uint)auVar5._0_8_;
  if ((int)uVar3 < 1) {
    if ((int)uVar3 < -0x134) {
      dVar6 = param_2 * 1e+308 *
              *(double *)(&internal::Pow10(int)::e + (long)(int)(-0x134 - uVar3) * 8);
    }
    else {
      dVar6 = param_2 * *(double *)(&internal::Pow10(int)::e + (long)(int)-uVar3 * 8);
      if (-1 < (int)uVar3) return;
    }
    (**(code **)(*(long *)param_1 + 0x60))(param_1,"0.");
    if ((int)uVar3 < -1) {
      iVar4 = uVar3 + 1;
      do {
        (**(code **)(*(long *)param_1 + 0x58))(param_1,0x30);
        iVar4 = iVar4 + 1;
      } while (iVar4 != 0);
    }
    if (2.220446049250313e-16 < dVar6) {
      dVar7 = 2.220446049250313e-16;
      do {
        uVar2 = (long)(dVar6 + dVar7) & 0xffffffff;
        if (8 < (uint)(long)(dVar6 + dVar7)) {
          uVar2 = 9;
        }
        (**(code **)(*(long *)param_1 + 0x58))(param_1,(int)(char)((byte)uVar2 | 0x30));
        dVar6 = (dVar6 - (double)uVar2) * 10.0;
        dVar7 = dVar7 * 10.0;
      } while (dVar7 < dVar6);
    }
  }
  else {
    dVar6 = param_2 / *(double *)(&internal::Pow10(int)::e + (unsigned long)uVar3 * 8);
    dVar7 = 2.220446049250313e-16;
    do {
      uVar2 = (long)(dVar6 + dVar7) & 0xffffffff;
      if (8 < (uint)(long)(dVar6 + dVar7)) {
        uVar2 = 9;
      }
      (**(code **)(*(long *)param_1 + 0x58))(param_1,(int)(char)((byte)uVar2 | 0x30));
      dVar6 = (dVar6 - (double)uVar2) * 10.0;
      dVar7 = dVar7 * 10.0;
      if (dVar6 < dVar7) {
        dVar6 = 0.0;
        if (0 < (int)uVar3) {
          iVar4 = uVar3 + 1;
          do {
            (**(code **)(*(long *)param_1 + 0x58))(param_1,0x30);
            iVar4 = iVar4 + -1;
          } while (1 < iVar4);
          dVar6 = 0.0;
        }
        break;
      }
      bVar1 = 0 < (int)uVar3;
      uVar3 = uVar3 - 1;
    } while (bVar1);
    if (dVar7 < dVar6) {
      (**(code **)(*(long *)param_1 + 0x58))(param_1,0x2e);
      do {
        uVar2 = (long)(dVar6 + dVar7) & 0xffffffff;
        if (8 < (uint)(long)(dVar6 + dVar7)) {
          uVar2 = 9;
        }
        (**(code **)(*(long *)param_1 + 0x58))(param_1,(int)(char)((byte)uVar2 | 0x30));
        dVar6 = (dVar6 - (double)uVar2) * 10.0;
        dVar7 = dVar7 * 10.0;
      } while (dVar7 < dVar6);
    }
  }
  return;
}
}
