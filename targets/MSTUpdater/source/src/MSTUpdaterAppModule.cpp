#include <ni/controller_editor/MSTUpdaterAppModule.hpp>
namespace NI {

MSTUpdaterAppModule::~MSTUpdaterAppModule() {
UIA::AppModule::~AppModule((AppModule *)this);
  delete(this);
  return;
}
}
