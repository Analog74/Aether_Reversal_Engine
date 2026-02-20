#include <ni/controller_editor/PrecisionHandler.hpp>
namespace fmt::internal {

void PrecisionHandler::report_unhandled_arg() {
FormatError *pFVar1;
  
  pFVar1 = (FormatError *)___cxa_allocate_exception(0x10);
  FormatError::FormatError(pFVar1,"precision is not integer");
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(pFVar1,&FormatError::typeinfo,FormatError::~FormatError);
}
}
