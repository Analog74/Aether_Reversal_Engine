#include <ni/controller_editor/Page_.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2::AssignmentMapColl<NI::NHL2::Traktor::KontrolZ2 {

void Page>::createNewItem(unsigned int) {
Page *this_00;
  
  this_00 = (Page *)new char[0x60];
  Traktor::KontrolZ2::Page::Page(this_00,param_1);
  return this_00;
}

void Page>::~AssignmentMapColl() {
AssignmentMapCollBase::~AssignmentMapCollBase((AssignmentMapCollBase *)this);
  delete(this);
  return;
}
}
