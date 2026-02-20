#include <ni/controller_editor/MaschineMikroMK3ModelBase.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

void MaschineMikroMK3ModelBase::setLEDsBrightness(unsigned int) {
long *plVar1;
  
  // std code
  plVar1 = *(long **)(this + 0xc90);
  // std code
  (**(code **)(*plVar1 + 0x40))(plVar1,0x4c454431,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010013e7f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(this + 0xa30) + 0xa0))(this + 0xa30,0x4c454431,param_1);
  return;
}
}
