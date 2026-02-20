#include <ni/controller_editor/OBJC.hpp>
namespace NI::GP {

void OBJC::getIvarFloat(objc_object*, char const*) {
unsigned long long uVar1;
  long lVar2;
  unsigned int uVar3;
  
  uVar1 = (*(code *)PTR__objc_msgSend_100227360)(param_1,"class");
  lVar2 = _class_getInstanceVariable(uVar1,param_2);
  uVar3 = 0;
  if (lVar2 != 0) {
    lVar2 = _ivar_getOffset(0,lVar2);
    uVar3 = *(unsigned int *)(param_1 + lVar2);
  }
  return uVar3;
}

void OBJC::getIvarPtr(objc_object*, char const*) {
unsigned long long uVar1;
  long lVar2;
  
  uVar1 = (*(code *)PTR__objc_msgSend_100227360)(param_1,"class");
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
  unsigned int uVar3;
  
  uVar1 = (*(code *)PTR__objc_msgSend_100227360)(param_1,"class");
  lVar2 = _class_getInstanceVariable(uVar1,param_2);
  uVar3 = 0;
  if (lVar2 != 0) {
    lVar2 = _ivar_getOffset(lVar2);
    uVar3 = *(unsigned int *)(param_1 + lVar2);
  }
  return uVar3;
}

void OBJC::setIvarFloat(objc_object*, char const*, float) {
unsigned long long uVar1;
  long lVar2;
  
  uVar1 = (*(code *)PTR__objc_msgSend_100227360)(param_1,"class");
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
  
  uVar1 = (*(code *)PTR__objc_msgSend_100227360)(param_1,"class");
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
  
  uVar1 = (*(code *)PTR__objc_msgSend_100227360)(param_1,"class");
  lVar2 = _class_getInstanceVariable(uVar1,param_2);
  if (lVar2 != 0) {
    lVar2 = _ivar_getOffset(lVar2);
    *(uint *)(param_1 + lVar2) = param_3;
  }
  return;
}
}
