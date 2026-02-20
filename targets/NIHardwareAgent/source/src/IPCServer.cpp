#include <ni/controller_editor/IPCServer.hpp>
namespace NI::NHL2::SERVER {

void IPCServer::getLogFileName() {
string *psVar1;
  unsigned long uVar2;
  long *in_RSI;
  string *in_RDI;
  filesystem local_c0 [16];
  void *local_b0;
  unsigned long local_a8;
  unsigned long long uStack_a0;
  void *local_98;
  unsigned long local_88;
  unsigned long long uStack_80;
  void *local_78;
  detail local_68;
  void7 uStack_67;
  unsigned char uStack_60;
  void7 uStack_5f;
  void *local_58;
  unsigned long local_48;
  unsigned long uStack_40;
  void *local_38;
  
  if ((*(byte *)(in_RSI + 0x11) & 1) == 0) {
    if (*(byte *)(in_RSI + 0x11) >> 1 != 0) goto LAB_10008a5cb;
  }
  else if (in_RSI[0x12] != 0) goto LAB_10008a5cb;
  ni::filesystem::user_logs_dir(local_c0);
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = (void *)0x0;
  // boost code
  if ((uint)local_48 < 2) {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = (void *)0x0;
    // boost code
              ((path *)local_c0,(path *)0x0,(error_code *)&local_48);
    // boost code
  }
  (**(code **)(*in_RSI + 0x68))(&local_48);
  // std code
  if ((local_48 & 1) == 0) {
    uVar2 = local_48 >> 1 & 0x7f;
    if (uVar2 != 0) goto LAB_10008a4fc;
LAB_10008a539:
    local_68 = (detail)0x1e;
    uStack_67 = 0x65736b64737768;
    uStack_60 = 0x72;
    uStack_5f = 0x676f6c2e726576;
    local_58 = (void *)((unsigned long)local_58 & 0xffffffffffffff00);
  }
  else {
    uVar2 = uStack_40;
    if (uStack_40 == 0) goto LAB_10008a539;
LAB_10008a4fc:
    // std code
    local_58 = local_78;
    local_68 = SUB81(local_88,0);
    uStack_67 = (void7)(local_88 >> 8);
    uStack_60 = (unsigned char)uStack_80;
    uStack_5f = (void7)((unsigned long)uStack_80 >> 8);
    local_88 = 0;
    uStack_80 = 0;
    local_78 = (void *)0x0;
  }
  // boost code
  if (((byte)local_68 & 1) != 0) {
    delete(local_58);
  }
  if ((uVar2 != 0) && ((local_88 & 1) != 0)) {
    delete(local_78);
  }
  psVar1 = (string *)ni::filesystem::to_utf8_string((path *)&local_a8);
  // std code
  if ((local_48 & 1) != 0) {
    delete(local_38);
  }
  if ((local_a8 & 1) != 0) {
    delete(local_98);
  }
  if (((byte)local_c0[0] & 1) != 0) {
    delete(local_b0);
  }
LAB_10008a5cb:
  // std code
  return;
}

void IPCServer::getName() const {
long lVar1;
  string *psVar2;
  path local_30 [16];
  void *local_20;
  
  lVar1 = UIA::AppModule::getCurrentModule();
  if (lVar1 != 0) {
    UIA::AppModule::getModuleFileName();
    // boost code
    psVar2 = (string *)ni::filesystem::to_utf8_string(local_30);
    // std code
    if (((byte)local_30[0] & 1) != 0) {
      delete(local_20);
    }
    if (((byte)*this & 1) == 0) {
      if (1 < (byte)*this) {
        return this;
      }
    }
    else {
      if (*(long *)(this + 8) != 0) {
        return this;
      }
      delete(*(void **)(this + 0x10));
    }
  }
  *this = (IPCServer)0x16;
  *(unsigned long long *)(this + 1) = 0x7265736b64737768;
  *(unsigned int *)(this + 8) = 0x72657672;
  this[0xc] = (IPCServer)0x0;
  return this;
}

void IPCServer::initTraceConfiguration() {
(**(code **)(*(long *)this + 0x78))();
                    /* WARNING: Could not recover jumptable at 0x00010008a6eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x70))(this);
  return;
}

void IPCServer::initTraceReportLevel() {
unsigned char in_AL;
  unsigned char uVar1;
  char cVar2;
  void7 in_register_00000001;
  uint uVar3;
  unsigned long long uStack_18;
  
  uStack_18._0_4_ = (unsigned int)0(in_register_00000001,in_AL);
  uVar1 = Logging::getReportLevel();
  uStack_18 = (unsigned long)CONCAT14(uVar1,(unsigned int)uStack_18);
  cVar2 = GP::Registry::get("TraceReportLevel",uVar1,(long)&uStack_18 + 4,2);
  uVar3 = uStack_18._4_4_;
  if (4 < uStack_18._4_4_) {
    uVar3 = 2;
  }
  if (cVar2 == '\0') {
    uVar3 = 2;
  }
  Logging::setReportLevel(uVar3 & 0xff);
  return;
}

IPCServer::~IPCServer() {
~IPCServer(this);
  delete(this);
  return;
}
}
