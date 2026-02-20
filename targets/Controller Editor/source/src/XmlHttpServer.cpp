#include <ni/controller_editor/XmlHttpServer.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace anyrpc {

void XmlHttpServer::CreateConnection(int param_1) {
}

XmlHttpServer::XmlHttpServer() {
ushort local_48 [8];
  void *local_38;
  byte local_30 [16];
  void *local_20;
  
  Server::Server((Server *)this);
  *(void ***)this = &PTR__XmlHttpServer_101b0d918;
  local_48[0] = 0;
  local_30[0] = 0x10;
  local_30[1] = 0x74;
  local_30[2] = 0x65;
  local_30[3] = 0x78;
  local_30[4] = 0x74;
  local_30[5] = 0x2f;
  local_30[6] = 0x78;
  local_30[7] = 0x6d;
  local_30[8] = 0x6c;
  local_30[9] = 0;
  Server::AddHandler((Server *)this,XmlRpcHandler,local_48,local_30);
  if ((local_30[0] & 1) != 0) {
    delete(local_20);
  }
  if ((local_48[0] & 1) != 0) {
    delete(local_38);
  }
  
}

XmlHttpServer::~XmlHttpServer() {
Server::~Server((Server *)this);
  delete(this);
  return;
}
}
