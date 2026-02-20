#include <ni/controller_editor/FileContainerParser.hpp>
namespace NI::GP {

FileContainerParser::~FileContainerParser() {
~FileContainerParser(this);
  delete(this);
  return;
}
}
