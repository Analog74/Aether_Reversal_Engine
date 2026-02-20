#include <ni/controller_editor/LogicControlClient.hpp>
namespace NI::dawcontrol::logic {

void LogicControlClient::setupLogicConnection() {
uint uVar1;
  char cVar2;
  ushort uVar3;
  void *pvVar4;
  char *pcVar5;
  size_t sVar6;
  unsigned long uVar7;
  unsigned long long local_58;
  unsigned long long uStack_50;
  void *local_48;
  
  if (this[0x71] == (LogicControlClient)0x0) {
    return;
  }
  if (this[0x72] == (LogicControlClient)0x0) {
    return;
  }
  cVar2 = util::OSCClient::setupSocket((OSCClient *)(this + 0x370),0);
  if (cVar2 == '\0') {
    return;
  }
  if (*(long *)(this + 0x388) == 0) {
    uVar7 = 0xffffffffffffffff;
  }
  else {
    // boost code
    uVar3 = // boost code
    uVar7 = (unsigned long)uVar3;
  }
  uVar1 = *(uint *)(this + 0x120);
  if (uVar1 < 2) {
    pcVar5 = "KOMPLETE KONTROL S-Series";
LAB_1000281d5:
    pvVar4 = new(0x20);
    local_58 = 0x21;
    uStack_50 = 0x19;
    sVar6 = 0x19;
    local_48 = pvVar4;
  }
  else {
    if (uVar1 == 4) {
      pcVar5 = "MASCHINE MK3";
      sVar6 = 0xc;
    }
    else {
      if (uVar1 != 5) {
        pcVar5 = "KOMPLETE KONTROL A-Series";
        goto LAB_1000281d5;
      }
      pcVar5 = "MASCHINE+";
      sVar6 = 9;
    }
    local_58 = 0(local_58._1_7_,(char)sVar6 * '\x02');
    pvVar4 = (void *)((long)&local_58 + 1);
  }
  memcpy(pvVar4,pcVar5,sVar6);
  *(unsigned char *)((long)pvVar4 + sVar6) = 0;
  BonjourRegister::registerLocalService((BonjourRegister *)(this + 0x128),uVar7,(string *)&local_58)
  ;
  if ((local_58 & 1) != 0) {
    delete(local_48);
  }
  DAWControlClient::requestFocus((DAWControlClient *)this);
  (**(code **)(**(long **)(this + 0x118) + 0x18))();
  return;
}

LogicControlClient::~LogicControlClient() {
~LogicControlClient(this);
  delete(this);
  return;
}
}
