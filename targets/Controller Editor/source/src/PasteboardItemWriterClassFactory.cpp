#include <ni/controller_editor/PasteboardItemWriterClassFactory.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA {

PasteboardItemWriterClassFactory::PasteboardItemWriterClassFactory() {
char cVar1;
  unsigned long long uVar2;
  
  GP::OBJC::ClassFactory::ClassFactory
            ((ClassFactory *)this,(objc_class **)&NICocoaPasteboardItemWriterClass);
  cVar1 = GP::OBJC::ClassFactory::generateUniqueClass
                    ((ClassFactory *)this,"NICocoaPasteboardItemWriter","NSObject");
  if (cVar1 != '\0') {
    GP::OBJC::ClassFactory::addProtocol((ClassFactory *)this,"NSPasteboardWriting");
    GP::OBJC::ClassFactory::addMethodByLookup
              ((ClassFactory *)this,(objc_selector *)"init",initWriter);
    GP::OBJC::ClassFactory::addMethodByLookup
              ((ClassFactory *)this,(objc_selector *)"dealloc",deallocWriter);
    GP::OBJC::ClassFactory::addMethodByLookup
              ((ClassFactory *)this,(objc_selector *)"writableTypesForPasteboard:",
               writableTypesForPasteboard);
    GP::OBJC::ClassFactory::addMethodByLookup
              ((ClassFactory *)this,(objc_selector *)"pasteboardPropertyListForType:",
               pasteboardPropertyListForType);
    uVar2 = (*(code *)PTR__objc_msgSend_101ab46d8)
                      (&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__s___s__s_,"v","@","@");
    (*(code *)PTR__objc_msgSend_101ab46d8)(uVar2,"UTF8String");
    GP::OBJC::ClassFactory::addMethod
              ((objc_selector *)this,(_func_void *)"assignWritableData:forType:",
               (char *)assignWritableData);
    uVar2 = (*(code *)PTR__objc_msgSend_101ab46d8)
                      (&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__s___s_,"@","@");
    (*(code *)PTR__objc_msgSend_101ab46d8)(uVar2,"UTF8String");
    GP::OBJC::ClassFactory::addMethod
              ((objc_selector *)this,(_func_void *)"findWritableData:",(char *)findWritableData);
    GP::OBJC::ClassFactory::addMemberVar((char *)this,0x1009d7330,'\b',(char *)0x3);
    GP::OBJC::ClassFactory::addMemberVar((char *)this,0x1009d733b,'\b',(char *)0x3);
    GP::OBJC::ClassFactory::addMemberVar((char *)this,0x1009d7347,'\b',(char *)0x3);
    GP::OBJC::ClassFactory::addMemberVar((char *)this,0x1009d7354,'\b',(char *)0x3);
    GP::OBJC::ClassFactory::doRegister((ClassFactory *)this);
  }
  
}

PasteboardItemWriterClassFactory::~PasteboardItemWriterClassFactory() {
GP::OBJC::ClassFactory::~ClassFactory((ClassFactory *)this);
  return;
}
}
