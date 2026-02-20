#include <ni/controller_editor/Master.hpp>
namespace NI::NHL2::MaschineStudio {

Master::Master(unsigned int) {
unsigned char uVar1;
  Assignment *pAVar2;
  
  AssignmentMap::AssignmentMap((AssignmentMap *)this,"master",0);
  *(void ***)this = &PTR__Master_1009df038;
  uVar1 = ILEDControl::getDefaultLEDOnIfButtonDown()::s_bDefaultLEDOnIfButtonDown;
  ILEDControl::getDefaultLEDOnIfButtonDown()::s_bDefaultLEDOnIfButtonDown = 1;
  switch(param_1 param_1) {
  }
  ILEDControl::getDefaultLEDOnIfButtonDown()::s_bDefaultLEDOnIfButtonDown = uVar1;
  
}

Master::~Master() {
AssignmentMap::~AssignmentMap((AssignmentMap *)this);
  delete(this);
  return;
}
}
