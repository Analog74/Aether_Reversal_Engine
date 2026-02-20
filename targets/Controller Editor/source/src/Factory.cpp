#include <ni/controller_editor/Factory.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP::NIDeviceNotificationListener {

Factory::Factory() {
char cVar1;
  
  OBJC::ClassFactory::ClassFactory((ClassFactory *)this,(objc_class **)&theClass);
  cVar1 = OBJC::ClassFactory::generateUniqueClass
                    ((ClassFactory *)this,"ComNativeInstrumentsCocoaDeviceNotificationListener",
                     "NSObject");
  if (cVar1 != '\0') {
    OBJC::ClassFactory::addMethod
              ((objc_selector *)this,(_func_void *)"init",(char *)NIDeviceNotificationListener::init
              );
    OBJC::ClassFactory::addMethod((objc_selector *)this,(_func_void *)"dealloc",(char *)dealloc);
    OBJC::ClassFactory::addMethod
              ((objc_selector *)this,(_func_void *)"onDeviceDidMount:",(char *)onDeviceDidMount);
    OBJC::ClassFactory::addMethod
              ((objc_selector *)this,(_func_void *)"onDeviceDidUnmount:",(char *)onDeviceDidUnmount)
    ;
    OBJC::ClassFactory::doRegister((ClassFactory *)this);
  }
  
}

Factory::~Factory() {
OBJC::ClassFactory::~ClassFactory((ClassFactory *)this);
  return;
}
}
