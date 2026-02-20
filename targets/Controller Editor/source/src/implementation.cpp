#include <ni/controller_editor/implementation.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace ni::robot::server {

void implementation::registerRobotXmlRpcMethods() {
MethodManager *this_00;
  Method *pMVar1;
  char *pcVar2;
  string local_68;
  void5 uStack_67;
  void2 uStack_62;
  unsigned char uStack_60;
  void5 uStack_5f;
  unsigned char uStack_5a;
  unsigned char uStack_59;
  char *local_58;
  string local_48;
  void7 uStack_47;
  unsigned int uStack_40;
  unsigned char uStack_3c;
  unsigned char uStack_3b;
  void2 uStack_3a;
  unsigned char uStack_38;
  void2 uStack_37;
  unsigned int uStack_35;
  unsigned char uStack_31;
  
  local_48 = (string)0x22;
  uStack_47 = 0x79656b5f746567;
  uStack_40 = 0x64726f77;
  uStack_3c = 0x5f;
  uStack_3b = 0x6e;
  uStack_3a = 0x6d61;
  uStack_38 = 0x65;
  uStack_37 = 0x73;
  local_58 = (char *)new char[0x20];
  local_68 = (string)0x21;
  uStack_67 = 0;
  uStack_62 = 0;
  uStack_60 = 0x1b;
  uStack_5f = 0;
  uStack_5a = 0;
  uStack_59 = 0;
  builtin_strncpy(local_58,"List all keywords available",0x1c);
  pMVar1 = (Method *)new char[0x50];
  *(void ***)pMVar1 = &PTR__Method_101b837f0;
  // std code
  // std code
  this_00 = (MethodManager *)(this + 0x68);
  pMVar1[0x38] = (Method)0x1;
  *(unsigned int *)(pMVar1 + 0x3c) = 0;
  pMVar1[0x40] = (Method)0x0;
  *(void ***)pMVar1 = &PTR__RPCMethod_101b0d998;
  *(implementation **)(pMVar1 + 0x48) = this;
  anyrpc::MethodManager::AddMethod(this_00,pMVar1);
  if (((byte)local_68 & 1) != 0) {
    delete(local_58);
  }
  if (((byte)local_48 & 1) != 0) {
    delete((void *)CONCAT17(uStack_31,CONCAT43(uStack_35,CONCAT21(uStack_37,uStack_38))));
  }
  local_48 = (string)0x16;
  uStack_47 = 0x79656b5f6e7572;
  uStack_40 = 0x64726f77;
  uStack_3c = 0;
  local_68 = (string)0x1a;
  uStack_67 = 0x61206e7552;
  uStack_62 = 0x6b20;
  uStack_60 = 0x65;
  uStack_5f = 0x64726f7779;
  uStack_5a = 0;
  pMVar1 = (Method *)new char[0x50];
  *(void ***)pMVar1 = &PTR__Method_101b837f0;
  // std code
  // std code
  pMVar1[0x38] = (Method)0x1;
  *(unsigned int *)(pMVar1 + 0x3c) = 0;
  pMVar1[0x40] = (Method)0x0;
  *(void ***)pMVar1 = &PTR__RPCMethod_101b0d9d8;
  *(implementation **)(pMVar1 + 0x48) = this;
  anyrpc::MethodManager::AddMethod(this_00,pMVar1);
  if (((byte)local_68 & 1) != 0) {
    delete(local_58);
  }
  if (((byte)local_48 & 1) != 0) {
    delete((void *)CONCAT17(uStack_31,CONCAT43(uStack_35,CONCAT21(uStack_37,uStack_38))));
  }
  pcVar2 = (char *)new char[0x20];
  uStack_38 = SUB81(pcVar2,0);
  uStack_37 = (void2)((unsigned long)pcVar2 >> 8);
  uStack_35 = (unsigned int)((unsigned long)pcVar2 >> 0x18);
  uStack_31 = (unsigned char)((unsigned long)pcVar2 >> 0x38);
  local_48 = (string)0x21;
  uStack_47 = 0;
  uStack_40 = 0x19;
  uStack_3c = 0;
  uStack_3b = 0;
  uStack_3a = 0;
  builtin_strncpy(pcVar2,"get_keyword_documentation",0x1a);
  local_58 = (char *)new char[0x20];
  local_68 = (string)0x21;
  uStack_67 = 0;
  uStack_62 = 0;
  uStack_60 = 0x19;
  uStack_5f = 0;
  uStack_5a = 0;
  uStack_59 = 0;
  builtin_strncpy(local_58,"get keyword documentation",0x1a);
  pMVar1 = (Method *)new char[0x50];
  *(void ***)pMVar1 = &PTR__Method_101b837f0;
  // std code
  // std code
  pMVar1[0x38] = (Method)0x1;
  *(unsigned int *)(pMVar1 + 0x3c) = 0;
  pMVar1[0x40] = (Method)0x0;
  *(void ***)pMVar1 = &PTR__RPCMethod_101b0da18;
  *(implementation **)(pMVar1 + 0x48) = this;
  anyrpc::MethodManager::AddMethod(this_00,pMVar1);
  if (((byte)local_68 & 1) != 0) {
    delete(local_58);
  }
  if (((byte)local_48 & 1) != 0) {
    delete((void *)CONCAT17(uStack_31,CONCAT43(uStack_35,CONCAT21(uStack_37,uStack_38))));
  }
  local_48 = (string)0x2a;
  uStack_47 = 0x79656b5f746567;
  uStack_40 = 0x64726f77;
  uStack_3c = 0x5f;
  uStack_3b = 0x61;
  uStack_3a = 0x6772;
  uStack_38 = 0x75;
  uStack_37 = 0x656d;
  uStack_35 = 0x73746e;
  local_58 = (char *)new char[0x30];
  local_68 = (string)0x31;
  uStack_67 = 0;
  uStack_62 = 0;
  uStack_60 = 0x21;
  uStack_5f = 0;
  uStack_5a = 0;
  uStack_59 = 0;
  builtin_strncpy(local_58,"get list of arguments for keyword",0x22);
  pMVar1 = (Method *)new char[0x50];
  *(void ***)pMVar1 = &PTR__Method_101b837f0;
  // std code
  // std code
  pMVar1[0x38] = (Method)0x1;
  *(unsigned int *)(pMVar1 + 0x3c) = 0;
  pMVar1[0x40] = (Method)0x0;
  *(void ***)pMVar1 = &PTR__RPCMethod_101b0da58;
  *(implementation **)(pMVar1 + 0x48) = this;
  anyrpc::MethodManager::AddMethod(this_00,pMVar1);
  if (((byte)local_68 & 1) != 0) {
    delete(local_58);
  }
  if (((byte)local_48 & 1) != 0) {
    delete((void *)CONCAT17(uStack_31,CONCAT43(uStack_35,CONCAT21(uStack_37,uStack_38))));
  }
  return;
}
}
