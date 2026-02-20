#include <ni/controller_editor/ClassFactory.hpp>
namespace NI::GP::OBJC {

void ClassFactory::addProtocol(char const*) {
char cVar1;
  long lVar2;
  bool bVar3;
  
  lVar2 = _objc_getProtocol(param_1);
  if (lVar2 == 0) {
    bVar3 = false;
  }
  else {
    cVar1 = _class_addProtocol(**(unsigned long long **)this,lVar2);
    bVar3 = cVar1 == '\x01';
  }
  return bVar3;
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
  puVar1 = PTR__objc_msgSend_100227360;
  uVar4 = (*(code *)PTR__objc_msgSend_100227360)(&_OBJC_CLASS___NSMutableString,"alloc");
  uVar4 = (*(code *)puVar1)(uVar4,"initWithCString:encoding:",param_1,1);
  uVar4 = (*(code *)puVar1)(uVar4,"autorelease");
  uVar5 = (*(code *)puVar1)(&_OBJC_CLASS___NSString,"stringWithCString:encoding:",param_1,1);
  uVar6 = (*(code *)puVar1)(uVar4,"UTF8String");
  lVar7 = _objc_lookUpClass(uVar6);
  if (lVar7 != 0) {
    lVar7 = 1;
    do {
      uVar6 = (*(code *)puVar1)(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf____04ld,uVar5,lVar7)
      ;
      (*(code *)puVar1)(uVar4,"setString:",uVar6);
      uVar6 = (*(code *)puVar1)(uVar4,"UTF8String");
      lVar8 = _objc_lookUpClass(uVar6);
      lVar7 = lVar7 + 1;
    } while (lVar8 != 0);
  }
  uVar5 = (*(code *)PTR__objc_msgSend_100227360)(uVar4,"UTF8String");
  uVar2 = _objc_allocateClassPair(uVar2,uVar5,0);
  **(unsigned long long **)this = uVar2;
  lVar7 = **(long **)this;
  _objc_autoreleasePoolPop(uVar3);
  return 0((int7)((unsigned long)uVar4 >> 8),lVar7 != 0) & 0xffffffff;
}

void ClassFactory::getClassName() const {
unsigned long long uVar1;
  
  if (**(long **)this != 0) {
    uVar1 = _class_getName();
    return uVar1;
  }
  return 0;
}

ClassFactory::~ClassFactory() {
if (**(long **)this != 0) {
    _objc_disposeClassPair();
    **(unsigned long long **)this = 0;
  }
  return;
}
}
