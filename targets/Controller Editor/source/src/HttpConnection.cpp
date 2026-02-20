#include <ni/controller_editor/HttpConnection.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace anyrpc {

void HttpConnection::ExecuteRequest() {
char cVar1;
  int iVar2;
  unsigned long uVar3;
  unsigned long uVar4;
  byte bVar5;
  RpcContentHandler *this_00;
  string *this_01;
  unsigned long uVar6;
  
  void *local_50;
  byte local_48 [17];
  void7 uStack_37;
  
  this_01 = (string *)(this + 0x1140);
  uVar3 = (unsigned long)((byte)this[0x1140] >> 1);
  bVar5 = (byte)this[0x1140] & 1;
  uVar4 = *(unsigned long *)(this + 0x1148);
  uVar6 = uVar4;
  if (bVar5 == 0) {
    uVar6 = uVar3;
  }
  if (uVar6 == 4) {
    iVar2 = // std code
    if (iVar2 == 0) {
      this_00 = (RpcContentHandler *)**(long **)(this + 0x1188);
      if (this_00 != (RpcContentHandler *)(*(long **)(this + 0x1188))[1]) {
        do {
          // std code
          cVar1 = RpcContentHandler::CanProcessContentType(this_00,local_60);
          if (((byte)local_60[0] & 1) != 0) {
            delete(local_50);
          }
          if (cVar1 != '\0') {
            if (*(RpcContentHandler **)(*(long *)(this + 0x1188) + 8) != this_00) {
              RpcContentHandler::HandleRequest
                        (this_00,*(MethodManager **)(this + 0x20),*(char **)(this + 0x858),
                         *(unsigned long *)(this + 0x848),(Stream *)(this + 0xcb0));
              if (((byte)this_00[0x20] & 1) == 0) {
                uVar4 = (unsigned long)((byte)this_00[0x20] >> 1);
              }
              else {
                uVar4 = *(unsigned long *)(this_00 + 0x28);
              }
              this_01 = (string *)(this_00 + 0x20);
              if (uVar4 == 0) {
                // std code
              }
              GeneratePOSTResponseHeader(this,*(unsigned long *)(this + 0xcd0),this_01);
              return;
            }
            break;
          }
          this_00 = this_00 + 0x40;
        } while (this_00 != *(RpcContentHandler **)(*(long *)(this + 0x1188) + 8));
      }
      uVar4 = 0;
      (**(code **)(*(long *)this + 0x10))(this,0);
      return;
    }
    uVar4 = *(unsigned long *)(this + 0x1148);
    bVar5 = (byte)this[0x1140] & 1;
    uVar3 = (unsigned long)((byte)this[0x1140] >> 1);
  }
  if (bVar5 != 0) {
    uVar3 = uVar4;
  }
  if ((uVar3 == 7) &&
     (iVar2 = // std code
     iVar2 == 0)) {
    this_01 = (string *)(this + 0x870);
    (**(code **)(*(long *)(this + 0x870) + 0x60))(this_01,"HTTP/1.1 200 OK\r\n");
    (**(code **)(*(long *)(this + 0x870) + 0x60))(this_01,"Access-Control-Allow-Origin: *\r\n");
    (**(code **)(*(long *)(this + 0x870) + 0x60))(this_01,"Access-Control-Allow-Methods: POST\r\n");
    (**(code **)(*(long *)(this + 0x870) + 0x60))(this_01,"Access-Control-Max-Age: 1728000\r\n");
    (**(code **)(*(long *)(this + 0x870) + 0x60))
              (this_01,"Access-Control-Allow-Headers: Content-Type\r\n");
    (**(code **)(*(long *)(this + 0x870) + 0x60))(this_01,"Vary: Accept-Encoding, Origin\r\n");
    (**(code **)(*(long *)(this + 0x870) + 0x60))(this_01,"Keep-Alive: timeout=2, max=100\r\n");
    (**(code **)(*(long *)(this + 0x870) + 0x60))(this_01,"Connection: keep-alive\r\n");
    (**(code **)(*(long *)(this + 0x870) + 0x60))(this_01,"\r\n");
  }
  else {
    local_48[0] = 0x1e;
    local_48[1] = 0x4e;
    local_48[2] = 0x6f;
    local_48[3] = 0x74;
    local_48[4] = 0x20;
    local_48[5] = 0x49;
    local_48[6] = 0x6d;
    local_48[7] = 0x70;
    local_48[8] = 0x6c;
    local_48[9] = 0x65;
    local_48[10] = 0x6d;
    local_48[0xb] = 0x65;
    local_48[0xc] = 0x6e;
    local_48[0xd] = 0x74;
    local_48[0xe] = 0x65;
    local_48[0xf] = 100;
    local_48[0x10] = 0;
    GenerateErrorResponseHeader(this,0x1f5,local_48);
    if ((local_48[0] & 1) != 0) {
      delete((void *)0(uStack_37,local_48[0x10]));
    }
  }
  *(unsigned int *)(this + 0x28) = 3;
  uVar4 = 0((int7)((unsigned long)this_01 >> 8),1);
  return uVar4 & 0xffffffff;
}

void HttpConnection::ReadHeader() {
long lVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  unsigned long uVar6;
  unsigned long long unaff_R14;
  unsigned long uVar7;
  unsigned long local_38;
  bool local_29;
  
  cVar3 = TcpSocket::Receive((TcpSocket *)(this + 8),(char *)(this + *(long *)(this + 0x840) + 0x39)
                             ,0x800 - *(long *)(this + 0x840),&local_38,&local_29,-1);
  if (cVar3 != '\0') {
    lVar1 = *(long *)(this + 0x840);
    *(unsigned long *)(this + 0x840) = lVar1 + local_38;
    iVar4 = internal::HttpHeader::ProcessHeaderData
                      ((HttpHeader *)(this + 0x10f0),(char *)(this + 0x39),lVar1 + local_38,local_29
                      );
    uVar7 = 0((int7)((unsigned long)unaff_R14 >> 8),1);
    if (iVar4 == 1) return;
    if (iVar4 != 2) {
      lVar1 = *(long *)(this + 0x1130);
      uVar6 = (unsigned long)*(int *)(this + 0x1128);
      lVar2 = *(long *)(this + 0x840);
      *(unsigned long *)(this + 0x848) = uVar6;
      *(long *)(this + 0x860) = lVar2 - lVar1;
      this[0x850] = this[0x112c];
      if (uVar6 < 0xf4241) {
        if (0x800U - lVar1 < uVar6) {
          pvVar5 = _calloc(uVar6 + 1,1);
          *(void **)(this + 0x858) = pvVar5;
          if (pvVar5 == (void *)0x0) return;
          memcpy(pvVar5,this + lVar1 + 0x39,lVar2 - lVar1);
          this[0x868] = (HttpConnection)0x1;
        }
        else {
          this[0x868] = (HttpConnection)0x0;
          *(HttpConnection **)(this + 0x858) = this + lVar1 + 0x39;
        }
        *(unsigned int *)(this + 0x28) = 1;
        return;
      }
    }
  }
  uVar7 = 0;
  (**(code **)(*(long *)this + 0x10))(this,0);
  return uVar7 & 0xffffffff;
}
}
