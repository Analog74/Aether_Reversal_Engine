#include <ni/controller_editor/ClassFactory.hpp>
namespace NI::GP::OBJC {

void ClassFactory::addMethod(objc_selector*, void (*)(), char const*) {
char cVar1;
  
  cVar1 = _class_addMethod(**(unsigned long long **)param_1);
  return cVar1 == '\x01';
}

ClassFactory::ClassFactory(objc_class*&) {
*(objc_class ***)this = param_1;
  
}

void ClassFactory::doRegister() {
_objc_registerClassPair(**(unsigned long long **)this);
  return;
}

void ClassFactory::generateUniqueClass(char const*, char const*) {
void *puVar1;
  unsigned long long uVar2;
  unsigned long long uVar3;
  unsigned long long uVar4;
  unsigned long long uVar5;
  unsigned long long uVar6;
  long lVar7;
  long lVar8;
  
  uVar2 = _objc_getClass(param_2);
  uVar3 = _objc_autoreleasePoolPush();
  uVar4 = _objc_alloc(&_OBJC_CLASS___NSMutableString);
  puVar1 = PTR__objc_msgSend_1009cc358;
  lVar8 = 1;
  uVar4 = (*(code *)PTR__objc_msgSend_1009cc358)(uVar4,"initWithCString:encoding:",param_1,1);
  uVar4 = _objc_autorelease(uVar4);
  uVar5 = (*(code *)puVar1)(&_OBJC_CLASS___NSString,"stringWithCString:encoding:",param_1,1);
  uVar6 = (*(code *)puVar1)(uVar4,"UTF8String");
  lVar7 = _objc_lookUpClass(uVar6);
  while (lVar7 != 0) {
    uVar6 = (*(code *)puVar1)(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf____04ld,uVar5,lVar8);
    (*(code *)puVar1)(uVar4,"setString:",uVar6);
    uVar6 = (*(code *)puVar1)(uVar4,"UTF8String");
    lVar7 = _objc_lookUpClass(uVar6);
    lVar8 = lVar8 + 1;
  }
  uVar4 = (*(code *)PTR__objc_msgSend_1009cc358)(uVar4,"UTF8String");
  uVar2 = _objc_allocateClassPair(uVar2,uVar4,0);
  **(unsigned long long **)this = uVar2;
  lVar7 = **(long **)this;
  _objc_autoreleasePoolPop(uVar3);
  return 0((int7)((unsigned long)lVar8 >> 8),lVar7 != 0) & 0xffffffff;
}

ClassFactory::~ClassFactory() {
if (**(long **)this != 0) {
    _objc_disposeClassPair();
    **(unsigned long long **)this = 0;
  }
  return;
}
}
