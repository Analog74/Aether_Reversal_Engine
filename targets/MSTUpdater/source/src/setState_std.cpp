#include <ni/controller_editor/setState_std.hpp>
namespace NI::NWL::StateSelector {

void setState(std::string const&, bool) {
int iVar1;
  long lVar2;
  
  iVar1 = // std code
  if (iVar1 == 0) {
    lVar2 = 0;
  }
  else {
    iVar1 = // std code
    if (iVar1 == 0) {
      lVar2 = 1;
    }
    else {
      iVar1 = // std code
      if (iVar1 == 0) {
        lVar2 = 2;
      }
      else {
        iVar1 = // std code
        if (iVar1 == 0) {
          lVar2 = 3;
        }
        else {
          iVar1 = // std code
          if (iVar1 == 0) {
            lVar2 = 4;
          }
          else {
            iVar1 = // std code
            if (iVar1 == 0) {
              lVar2 = 5;
            }
            else {
              iVar1 = // std code
              if (iVar1 != 0) {
                return;
              }
              lVar2 = 6;
            }
          }
        }
      }
    }
  }
  *(uint *)(this + lVar2 * 4) = (uint)param_2;
  return;
}
}
