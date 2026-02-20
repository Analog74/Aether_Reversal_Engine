#include <ni/controller_editor/FileName_const___std.hpp>
namespace NI::GP::FileContainer::isContainerFileContent(NI::GP {

void FileName const&, std::string const&) {
char cVar1;
  unsigned char uVar2;
  FileContainerStorage local_2e0 [536];
  FileName local_c8 [176];
  
  FileContainerStorage::FileContainerStorage(local_2e0);
  FileName::FileName(local_c8,(string *)param_1);
  cVar1 = FileContainerStorage::open(local_2e0,local_c8,1,0,0x7fffffffffffffff);
  FileName::~FileName(local_c8);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FileContainerStorage::openContentFromSubpath(local_2e0,param_2,0xffffffff);
  }
  FileContainerStorage::~FileContainerStorage(local_2e0);
  return uVar2;
}
}
