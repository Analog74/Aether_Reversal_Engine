#include <ni/controller_editor/PageCollection.hpp>
namespace NI::NHL2::Traktor::KontrolS4MK1 {

void PageCollection::addEmptyPage(bool param_1) {
}

PageCollection::~PageCollection() {
AssignmentMapCollBase::~AssignmentMapCollBase((AssignmentMapCollBase *)this);
  delete(this);
  return;
}
}
