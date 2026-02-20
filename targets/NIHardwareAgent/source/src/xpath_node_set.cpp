#include <ni/controller_editor/xpath_node_set.hpp>
namespace pugi {

xpath_node_set::~xpath_node_set() {
if (*(xpath_node_set **)(this + 0x18) != this + 8) {
    (*impl::(anonymous_namespace)::xml_memory_management_function_storage<int>::deallocate)();
  }
  return;
}
}
