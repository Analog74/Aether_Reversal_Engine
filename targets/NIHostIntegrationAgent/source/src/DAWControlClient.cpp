#include <ni/controller_editor/DAWControlClient.hpp>
namespace NI::dawcontrol {

void DAWControlClient::hasFocus() const {
return this[0x70];
}

void DAWControlClient::notifyDawClientActive(bool param_1) {
}

void DAWControlClient::requestFocus() {
if ((this[0x72] != (DAWControlClient)0x0) && (this[0x70] == (DAWControlClient)0x0)) {
    NHL2::SERVER::InternalClient::sendServerMessage((Message *)this);
    return;
  }
  return;
}

void DAWControlClient::switchToPluginInstance() {
DAWControlClient DVar1;
  unsigned long long local_248;
  unsigned long long uStack_240;
  unsigned int local_238;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_100a44490;
  DVar1 = this[0x78];
  if (((byte)DVar1 & 1) == 0) {
    if ((byte)DVar1 >> 1 == 0) goto LAB_100008a63;
  }
  else if (*(long *)(this + 0x80) == 0) goto LAB_100008a63;
  if (((byte)DVar1 & 1) == 0) {
    if ((byte)DVar1 >> 1 != 0) goto LAB_100008a40;
LAB_100008a89:
    if ((this[0x72] == (DAWControlClient)0x0) || (this[0x70] != (DAWControlClient)0x0))
    goto LAB_100008a63;
    local_248 = 0x1000000008;
    uStack_240 = 0x343430000000000;
    local_238 = 0x75736572;
  }
  else {
    if (*(long *)(this + 0x80) == 0) goto LAB_100008a89;
LAB_100008a40:
    NHL2::MessageSetString::MessageSetString((MessageSetString *)&local_248,0x537346,this + 0x78);
  }
  NHL2::SERVER::InternalClient::sendServerMessage((Message *)this);
LAB_100008a63:
  if (*(long *)PTR____stack_chk_guard_100a44490 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

DAWControlClient::~DAWControlClient() {
DAWControlClient DVar1;
  long *plVar2;
  DAWControlClient *pDVar3;
  
  *(void ***)this = &PTR__DAWControlClient_100a44a80;
  plVar2 = *(long **)(this + 0x118);
  *(unsigned long long *)(this + 0x118) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  // boost code
  ~stack((stack<NI::dawcontrol::NHL2MessageVariant,// boost code
         (this + 0xc0));
  pDVar3 = *(DAWControlClient **)(this + 0xb0);
  if (this + 0x90 == pDVar3) {
    (**(code **)(*(long *)pDVar3 + 0x20))();
    DVar1 = this[0x78];
  }
  else {
    if (pDVar3 != (DAWControlClient *)0x0) {
      (**(code **)(*(long *)pDVar3 + 0x28))();
    }
    DVar1 = this[0x78];
  }
  if (((byte)DVar1 & 1) != 0) {
    delete(*(void **)(this + 0x88));
  }
  *(void ***)this = &PTR__InternalClient_100a57970;
  pDVar3 = *(DAWControlClient **)(this + 0x60);
  if (this + 0x40 == pDVar3) {
    (**(code **)(*(long *)pDVar3 + 0x20))();
    DVar1 = this[0x20];
  }
  else {
    if (pDVar3 != (DAWControlClient *)0x0) {
      (**(code **)(*(long *)pDVar3 + 0x28))();
    }
    DVar1 = this[0x20];
  }
  if (((byte)DVar1 & 1) == 0) {
    return;
  }
  delete(*(void **)(this + 0x30));
  return;
}
}
