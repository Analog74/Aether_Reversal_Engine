#include <ni/controller_editor/Factory.hpp>
namespace NI::GP::NIDeviceNotificationListener {

Factory::Factory() {
char cVar1;
  
  OBJC::ClassFactory::ClassFactory((ClassFactory *)this,(objc_class **)&theClass);
  cVar1 = OBJC::ClassFactory::generateUniqueClass
                    ((ClassFactory *)this,"ComNativeInstrumentsCocoaDeviceNotificationListener",
                     "NSObject");
  if (cVar1 != '\0') {
    OBJC::ClassFactory::addMethod
              ((objc_selector *)this,
               (_func_objc_object_ptr_objc_object_ptr_objc_selector_ptr____ *)"init",
               (char *)NIDeviceNotificationListener::init);
    OBJC::ClassFactory::addMethod
              ((objc_selector *)this,
               (_func_objc_object_ptr_objc_object_ptr_objc_selector_ptr____ *)"dealloc",
               (char *)dealloc);
    OBJC::ClassFactory::addMethod
              ((objc_selector *)this,
               (_func_objc_object_ptr_objc_object_ptr_objc_selector_ptr____ *)"onDeviceDidMount:",
               (char *)onDeviceDidMount);
    OBJC::ClassFactory::addMethod
              ((objc_selector *)this,
               (_func_objc_object_ptr_objc_object_ptr_objc_selector_ptr____ *)"onDeviceDidUnmount:",
               (char *)onDeviceDidUnmount);
    OBJC::ClassFactory::doRegister((ClassFactory *)this);
  }
  
}

Factory::~Factory() {
OBJC::ClassFactory::~ClassFactory((ClassFactory *)this);
  return;
}
}
