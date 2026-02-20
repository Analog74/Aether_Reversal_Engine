#include <ni/controller_editor/OBJC.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP {

void OBJC::getIvarFloat(objc_object*, char const*) {
unsigned long long uVar1;
  long lVar2;
  
  uVar1 = _objc_opt_class();
  lVar2 = _class_getInstanceVariable(uVar1,param_2);
  if (lVar2 != 0) {
    lVar2 = _ivar_getOffset(lVar2);
    return *(unsigned int *)(param_1 + lVar2);
  }
  return 0;
}

void OBJC::getIvarPtr(objc_object*, char const*) {
unsigned long long uVar1;
  long lVar2;
  
  uVar1 = _objc_opt_class();
  lVar2 = _class_getInstanceVariable(uVar1,param_2);
  if (lVar2 != 0) {
    uVar1 = _object_getIvar(param_1,lVar2);
    return uVar1;
  }
  return 0;
}

void OBJC::getIvarUInt32(objc_object*, char const*) {
unsigned long long uVar1;
  long lVar2;
  
  uVar1 = _objc_opt_class();
  lVar2 = _class_getInstanceVariable(uVar1,param_2);
  if (lVar2 != 0) {
    lVar2 = _ivar_getOffset(lVar2);
    return *(unsigned int *)(param_1 + lVar2);
  }
  return 0;
}

void OBJC::setIvarFloat(objc_object*, char const*, float) {
unsigned long long uVar1;
  long lVar2;
  
  uVar1 = _objc_opt_class();
  lVar2 = _class_getInstanceVariable(uVar1,param_2);
  if (lVar2 != 0) {
    lVar2 = _ivar_getOffset(lVar2);
    *(float *)(param_1 + lVar2) = param_3;
  }
  return;
}

void OBJC::setIvarPtr(objc_object*, char const*, objc_object*) {
unsigned long long uVar1;
  long lVar2;
  
  uVar1 = _objc_opt_class();
  lVar2 = _class_getInstanceVariable(uVar1,param_2);
  if (lVar2 != 0) {
    _object_setIvar(param_1,lVar2,param_3);
    return;
  }
  return;
}

void OBJC::setIvarUInt32(objc_object*, char const*, unsigned int) {
unsigned long long uVar1;
  long lVar2;
  
  uVar1 = _objc_opt_class();
  lVar2 = _class_getInstanceVariable(uVar1,param_2);
  if (lVar2 != 0) {
    lVar2 = _ivar_getOffset(lVar2);
    *(uint *)(param_1 + lVar2) = param_3;
  }
  return;
}
}
