#include <ni/controller_editor/LEDDisplay.hpp>
namespace NI::NHL2::Interfaces {

void LEDDisplay::setLEDDisplayNumber(unsigned int, unsigned int, bool) {
/* WARNING: Could not recover jumptable at 0x0001001c63f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 8))
            (this,param_1,
             param_3 | (&setLEDDisplayNumber(unsigned_int,unsigned_int,bool)::s_displayNumbers)
                       [param_2 % 10]);
  return;
}
}
