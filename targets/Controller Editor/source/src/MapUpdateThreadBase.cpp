#include <ni/controller_editor/MapUpdateThreadBase.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2::Maschine {

void MapUpdateThreadBase::drawPads() {
Picture *this_00;
  Picture *this_01;
  Graphics *this_02;
  char *pcVar1;
  MapUpdateThreadBase *pMVar2;
  MapUpdateThreadBase *pMVar3;
  int iVar4;
  unsigned long long local_58;
  MapUpdateThreadBase *local_50;
  unsigned long long local_48;
  unsigned long long uStack_40;
  
  this_00 = (Picture *)(this + 0x1a6e0);
  UIA::Picture::clear(this_00,0xffffffff);
  this_01 = (Picture *)(this + 0x1a760);
  UIA::Picture::clear(this_01,0xffffffff);
  this_02 = (Graphics *)(this + 0x1a500);
  local_48 = 0x100000001;
  uStack_40 = 0xa0000003b;
  local_58 = 0x100000000;
  Graphics::renderSingleTextLine(this_02,this_00,this + 0x1a5a0,&local_48,"Pads",0,&local_58,0x100);
  local_48 = 0x1100000008;
  uStack_40 = 0x27000000f7;
  Graphics::renderSolidInfoBoxEx
            (this_02,this_00,(Font *)(this + 0x1a550),0x40,(Rect *)&local_48,"TEMPLATE:",(char *)0x0
             ,(char *)(this + 0x175f8),(char *)0x0,(char *)(this + 0x16ef0),(char *)0x0,0);
  if (this[0x1a290] == (MapUpdateThreadBase)0x0) {
    iVar4 = 0;
    pMVar3 = (MapUpdateThreadBase *)0x0;
    pMVar2 = (MapUpdateThreadBase *)0x0;
    pcVar1 = (char *)0x0;
  }
  else {
    local_50 = this + 0x173a0;
    pMVar2 = this + 0x17274;
    pMVar3 = this + 0x17148;
    iVar4 = 0x200;
    pcVar1 = "PAD PAGE:";
  }
  uStack_40 = 0x3e000000f7;
  local_48 = 0x2800000008;
  Graphics::renderSolidInfoBoxEx
            (this_02,this_00,(Font *)(this + 0x1a550),0x40,(Rect *)&local_48,"KNOB PAGE:",pcVar1,
             (char *)(this + 0x173a0),(char *)pMVar2,(char *)(this + 0x1701c),(char *)pMVar3,iVar4);
  local_48 = 0x1000000008;
  Graphics::renderDottedLineH(this_02,this_00,(Point *)&local_48,0xf0,1);
  local_48 = 0x2700000008;
  Graphics::renderDottedLineH(this_02,this_00,(Point *)&local_48,0xf0,1);
  local_48 = 0x3e00000008;
  Graphics::renderDottedLineH(this_02,this_00,(Point *)&local_48,0xf0,1);
  pcVar1 = (char *)(this + 0x18f80);
  if (this[0x18f80] == (MapUpdateThreadBase)0x0) {
    pcVar1 = "Off";
  }
  Graphics::renderPadsMatrix(this_02,this_01,0,0,pcVar1);
  pcVar1 = (char *)(this + 0x190ac);
  if (this[0x190ac] == (MapUpdateThreadBase)0x0) {
    pcVar1 = "Off";
  }
  Graphics::renderPadsMatrix(this_02,this_01,0,1,pcVar1);
  pcVar1 = (char *)(this + 0x191d8);
  if (this[0x191d8] == (MapUpdateThreadBase)0x0) {
    pcVar1 = "Off";
  }
  Graphics::renderPadsMatrix(this_02,this_01,0,2,pcVar1);
  pcVar1 = (char *)(this + 0x19304);
  if (this[0x19304] == (MapUpdateThreadBase)0x0) {
    pcVar1 = "Off";
  }
  Graphics::renderPadsMatrix(this_02,this_01,0,3,pcVar1);
  pcVar1 = (char *)(this + 0x19430);
  if (this[0x19430] == (MapUpdateThreadBase)0x0) {
    pcVar1 = "Off";
  }
  Graphics::renderPadsMatrix(this_02,this_01,1,0,pcVar1);
  pcVar1 = (char *)(this + 0x1955c);
  if (this[0x1955c] == (MapUpdateThreadBase)0x0) {
    pcVar1 = "Off";
  }
  Graphics::renderPadsMatrix(this_02,this_01,1,1,pcVar1);
  pcVar1 = (char *)(this + 0x19688);
  if (this[0x19688] == (MapUpdateThreadBase)0x0) {
    pcVar1 = "Off";
  }
  Graphics::renderPadsMatrix(this_02,this_01,1,2,pcVar1);
  pcVar1 = (char *)(this + 0x197b4);
  if (this[0x197b4] == (MapUpdateThreadBase)0x0) {
    pcVar1 = "Off";
  }
  Graphics::renderPadsMatrix(this_02,this_01,1,3,pcVar1);
  pcVar1 = (char *)(this + 0x198e0);
  if (this[0x198e0] == (MapUpdateThreadBase)0x0) {
    pcVar1 = "Off";
  }
  Graphics::renderPadsMatrix(this_02,this_01,2,0,pcVar1);
  pcVar1 = (char *)(this + 0x19a0c);
  if (this[0x19a0c] == (MapUpdateThreadBase)0x0) {
    pcVar1 = "Off";
  }
  Graphics::renderPadsMatrix(this_02,this_01,2,1,pcVar1);
  pcVar1 = (char *)(this + 0x19b38);
  if (this[0x19b38] == (MapUpdateThreadBase)0x0) {
    pcVar1 = "Off";
  }
  Graphics::renderPadsMatrix(this_02,this_01,2,2,pcVar1);
  pcVar1 = (char *)(this + 0x19c64);
  if (this[0x19c64] == (MapUpdateThreadBase)0x0) {
    pcVar1 = "Off";
  }
  Graphics::renderPadsMatrix(this_02,this_01,2,3,pcVar1);
  pcVar1 = (char *)(this + 0x19d90);
  if (this[0x19d90] == (MapUpdateThreadBase)0x0) {
    pcVar1 = "Off";
  }
  Graphics::renderPadsMatrix(this_02,this_01,3,0,pcVar1);
  pcVar1 = (char *)(this + 0x19ebc);
  if (this[0x19ebc] == (MapUpdateThreadBase)0x0) {
    pcVar1 = "Off";
  }
  Graphics::renderPadsMatrix(this_02,this_01,3,1,pcVar1);
  pcVar1 = (char *)(this + 0x19fe8);
  if (this[0x19fe8] == (MapUpdateThreadBase)0x0) {
    pcVar1 = "Off";
  }
  Graphics::renderPadsMatrix(this_02,this_01,3,2,pcVar1);
  pcVar1 = (char *)(this + 0x1a114);
  if (this[0x1a114] == (MapUpdateThreadBase)0x0) {
    pcVar1 = "Off";
  }
  Graphics::renderPadsMatrix(this_02,this_01,3,3,pcVar1);
  return;
}
}
