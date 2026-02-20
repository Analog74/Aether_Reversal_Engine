#include <ni/controller_editor/Port.hpp>
namespace bmidilib {

void Port::initInputPort() {
BString *this_00;
  int iVar1;
  unsigned long long uVar2;
  Port *pPVar3;
  uint local_50 [2];
  Bome local_48 [8];
  Bome local_40 [8];
  BString local_38 [8];
  BString local_30 [8];
  
  this_00 = (BString *)(this + 0x40);
  uVar2 = Bome::BString::toCFString(this_00);
  pPVar3 = this + 0xc;
  iVar1 = _MIDISourceCreate(**(unsigned int **)this,uVar2,pPVar3);
  _CFRelease(uVar2);
  if (iVar1 == 0) {
    SetMidiStringProperty(*(uint *)pPVar3,*(__CFString **)PTR__kMIDIPropertyModel_1009cc330,this_00)
    ;
    Bome::BString::BString(local_30,"Bome Software GmbH & Co. KG",0x7fffffff,-1);
    iVar1 = Bome::BString::isNotEmpty(local_30);
    if (iVar1 != 0) {
      SetMidiStringProperty
                (*(uint *)pPVar3,*(__CFString **)PTR__kMIDIPropertyManufacturer_1009cc320,local_30);
    }
    Bome::BString::BString(local_38,local_30);
    Bome::operator+(local_40,local_38,this_00);
    Bome::operator+(local_48,local_40,"in");
    Bome::BCRC32::BCRC32((BCRC32 *)local_50,(BString *)local_48);
    Bome::BString::~BString((BString *)local_48);
    Bome::BString::~BString((BString *)local_40);
    Bome::BString::~BString(local_38);
    iVar1 = _MIDIObjectSetIntegerProperty
                      (*(uint *)pPVar3,*(unsigned long long *)PTR__kMIDIPropertyUniqueID_1009cc340,
                       ~local_50[0]);
    _MIDIObjectSetIntegerProperty
              (*(uint *)pPVar3,*(unsigned long long *)PTR__kMIDIPropertyMaxSysExSpeed_1009cc328,0x400000);
    Bome::BString::~BString(local_30);
  }
  return iVar1;
}

void Port::initOutputPort() {
BString *this_00;
  Port *pPVar1;
  int iVar2;
  int iVar3;
  unsigned long long uVar4;
  uint local_58 [2];
  Bome local_50 [8];
  Bome local_48 [8];
  BString local_40 [8];
  BString local_38 [8];
  
  this_00 = (BString *)(this + 0x48);
  uVar4 = Bome::BString::toCFString(this_00);
  pPVar1 = this + 0x10;
  iVar2 = _MIDIDestinationCreate(**(unsigned int **)this,uVar4,port_read_proc,this,pPVar1);
  _CFRelease(uVar4);
  if (iVar2 == 0) {
    SetMidiStringProperty(*(uint *)pPVar1,*(__CFString **)PTR__kMIDIPropertyModel_1009cc330,this_00)
    ;
    Bome::BString::BString(local_38,"Bome Software GmbH & Co. KG",0x7fffffff,-1);
    iVar3 = Bome::BString::isNotEmpty(local_38);
    if (iVar3 != 0) {
      SetMidiStringProperty
                (*(uint *)pPVar1,*(__CFString **)PTR__kMIDIPropertyManufacturer_1009cc320,local_38);
    }
    Bome::BString::BString(local_40,local_38);
    Bome::operator+(local_48,local_40,this_00);
    Bome::operator+(local_50,local_48,"out");
    Bome::BCRC32::BCRC32((BCRC32 *)local_58,(BString *)local_50);
    Bome::BString::~BString((BString *)local_50);
    Bome::BString::~BString((BString *)local_48);
    Bome::BString::~BString(local_40);
    _MIDIObjectSetIntegerProperty
              (*(uint *)pPVar1,*(unsigned long long *)PTR__kMIDIPropertyUniqueID_1009cc340,~local_58[0]);
    _MIDIObjectSetIntegerProperty
              (*(uint *)pPVar1,*(unsigned long long *)PTR__kMIDIPropertyMaxSysExSpeed_1009cc328,0x400000);
    Bome::BString::~BString(local_38);
  }
  return iVar2;
}

Port::~Port() {
if (*(int *)(this + 0xc) != 0) {
    _MIDIEndpointDispose();
    *(unsigned int *)(this + 0xc) = 0;
  }
  if (*(int *)(this + 0x10) != 0) {
    _MIDIEndpointDispose();
    *(unsigned int *)(this + 0x10) = 0;
  }
  Bome::BString::~BString((BString *)(this + 0x48));
  Bome::BString::~BString((BString *)(this + 0x40));
  Bome::BString::~BString((BString *)(this + 0x38));
  Bome::BString::~BString((BString *)(this + 0x30));
  return;
}
}
