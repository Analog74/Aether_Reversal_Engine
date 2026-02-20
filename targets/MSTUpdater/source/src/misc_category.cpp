#include <ni/controller_editor/misc_category.hpp>
namespace boost::asio::error::detail {

void misc_category::message(int) const {
unsigned int in_EDX;
  char *pcVar1;
  unsigned int in_register_0000003c;
  char *pcVar2;
  
  pcVar2 = (char *)CONCAT44(in_register_0000003c,param_1);
  switch(in_EDX) {
  case 1:
    pcVar2[0x10] = '\0';
    pcVar2[0x11] = '\0';
    pcVar2[0x12] = '\0';
    pcVar2[0x13] = '\0';
    pcVar2[0x14] = '\0';
    pcVar2[0x15] = '\0';
    pcVar2[0x16] = '\0';
    pcVar2[0x17] = '\0';
    pcVar2[8] = '\0';
    pcVar2[9] = '\0';
    pcVar2[10] = '\0';
    pcVar2[0xb] = '\0';
    pcVar2[0xc] = '\0';
    pcVar2[0xd] = '\0';
    pcVar2[0xe] = '\0';
    pcVar2[0xf] = '\0';
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2[4] = '\0';
    pcVar2[5] = '\0';
    pcVar2[6] = '\0';
    pcVar2[7] = '\0';
    pcVar1 = "Already open";
    break;
  case 2:
    pcVar2[0x10] = '\0';
    pcVar2[0x11] = '\0';
    pcVar2[0x12] = '\0';
    pcVar2[0x13] = '\0';
    pcVar2[0x14] = '\0';
    pcVar2[0x15] = '\0';
    pcVar2[0x16] = '\0';
    pcVar2[0x17] = '\0';
    pcVar2[8] = '\0';
    pcVar2[9] = '\0';
    pcVar2[10] = '\0';
    pcVar2[0xb] = '\0';
    pcVar2[0xc] = '\0';
    pcVar2[0xd] = '\0';
    pcVar2[0xe] = '\0';
    pcVar2[0xf] = '\0';
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2[4] = '\0';
    pcVar2[5] = '\0';
    pcVar2[6] = '\0';
    pcVar2[7] = '\0';
    pcVar1 = "End of file";
    break;
  case 3:
    pcVar2[0x10] = '\0';
    pcVar2[0x11] = '\0';
    pcVar2[0x12] = '\0';
    pcVar2[0x13] = '\0';
    pcVar2[0x14] = '\0';
    pcVar2[0x15] = '\0';
    pcVar2[0x16] = '\0';
    pcVar2[0x17] = '\0';
    pcVar2[8] = '\0';
    pcVar2[9] = '\0';
    pcVar2[10] = '\0';
    pcVar2[0xb] = '\0';
    pcVar2[0xc] = '\0';
    pcVar2[0xd] = '\0';
    pcVar2[0xe] = '\0';
    pcVar2[0xf] = '\0';
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2[4] = '\0';
    pcVar2[5] = '\0';
    pcVar2[6] = '\0';
    pcVar2[7] = '\0';
    pcVar1 = "Element not found";
    break;
  case 4:
    pcVar2[0x10] = '\0';
    pcVar2[0x11] = '\0';
    pcVar2[0x12] = '\0';
    pcVar2[0x13] = '\0';
    pcVar2[0x14] = '\0';
    pcVar2[0x15] = '\0';
    pcVar2[0x16] = '\0';
    pcVar2[0x17] = '\0';
    pcVar2[8] = '\0';
    pcVar2[9] = '\0';
    pcVar2[10] = '\0';
    pcVar2[0xb] = '\0';
    pcVar2[0xc] = '\0';
    pcVar2[0xd] = '\0';
    pcVar2[0xe] = '\0';
    pcVar2[0xf] = '\0';
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2[4] = '\0';
    pcVar2[5] = '\0';
    pcVar2[6] = '\0';
    pcVar2[7] = '\0';
    pcVar1 = "The descriptor does not fit into the select call\'s fd_set";
    break;
  default:
    pcVar2[0x10] = '\0';
    pcVar2[0x11] = '\0';
    pcVar2[0x12] = '\0';
    pcVar2[0x13] = '\0';
    pcVar2[0x14] = '\0';
    pcVar2[0x15] = '\0';
    pcVar2[0x16] = '\0';
    pcVar2[0x17] = '\0';
    pcVar2[8] = '\0';
    pcVar2[9] = '\0';
    pcVar2[10] = '\0';
    pcVar2[0xb] = '\0';
    pcVar2[0xc] = '\0';
    pcVar2[0xd] = '\0';
    pcVar2[0xe] = '\0';
    pcVar2[0xf] = '\0';
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2[4] = '\0';
    pcVar2[5] = '\0';
    pcVar2[6] = '\0';
    pcVar2[7] = '\0';
    pcVar1 = "asio.misc error";
  }
  // std code
  return pcVar2;
}

void misc_category::name() const {
return "asio.misc";
}

misc_category::~misc_category() {
*(void ***)this = &PTR__error_category_10023ac38;
  // std code
  delete(this);
  return;
}
}
