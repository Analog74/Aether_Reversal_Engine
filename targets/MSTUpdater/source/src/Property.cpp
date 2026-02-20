#include <ni/controller_editor/Property.hpp>
namespace NI::NWL {

void Property::getBoolValue() const {
int iVar1;
  void2 *puVar2;
  int *piVar3;
  char *pcVar4;
  
  if ((unsigned long)*(uint *)(this + 0x50) != 0) {
    puVar2 = (void2 *)
             (*(code *)(&eggs::variants::detail::
                         visitor<eggs::variants::detail::target<bool_const,eggs::variants::detail::_storage<eggs::variants::detail::pack<eggs::variants::detail::empty,float,unsigned_int,int,bool,// std code
                         ::
                         _table<eggs::variants::detail::index<0ul>,eggs::variants::detail::index<1ul>,eggs::variants::detail::index<2ul>,eggs::variants::detail::index<3ul>,eggs::variants::detail::index<4ul>,eggs::variants::detail::index<5ul>,eggs::variants::detail::index<6ul>,eggs::variants::detail::index<7ul>,eggs::variants::detail::index<8ul>>
                         ::value)[*(uint *)(this + 0x50)])(this);
    if (puVar2 != (void2 *)0x0) {
      return puVar2;
    }
    if ((unsigned long)*(uint *)(this + 0x50) != 0) {
      piVar3 = (int *)(*(code *)(&eggs::variants::detail::
                                  visitor<eggs::variants::detail::target<int_const,eggs::variants::detail::_storage<eggs::variants::detail::pack<eggs::variants::detail::empty,float,unsigned_int,int,bool,// std code
                                  ::
                                  _table<eggs::variants::detail::index<0ul>,eggs::variants::detail::index<1ul>,eggs::variants::detail::index<2ul>,eggs::variants::detail::index<3ul>,eggs::variants::detail::index<4ul>,eggs::variants::detail::index<5ul>,eggs::variants::detail::index<6ul>,eggs::variants::detail::index<7ul>,eggs::variants::detail::index<8ul>>
                                  ::value)[*(uint *)(this + 0x50)])(this);
      if ((piVar3 != (int *)0x0) && (*(int *)(this + 0x68) == 0)) {
LAB_1000357c6:
        return (void2 *)((long)&getBoolValue()::s_bValues + (unsigned long)(*piVar3 != 0));
      }
      if ((unsigned long)*(uint *)(this + 0x50) != 0) {
        piVar3 = (int *)(*(code *)(&eggs::variants::detail::
                                    visitor<eggs::variants::detail::target<unsigned_int_const,eggs::variants::detail::_storage<eggs::variants::detail::pack<eggs::variants::detail::empty,float,unsigned_int,int,bool,// std code
                                    ::
                                    _table<eggs::variants::detail::index<0ul>,eggs::variants::detail::index<1ul>,eggs::variants::detail::index<2ul>,eggs::variants::detail::index<3ul>,eggs::variants::detail::index<4ul>,eggs::variants::detail::index<5ul>,eggs::variants::detail::index<6ul>,eggs::variants::detail::index<7ul>,eggs::variants::detail::index<8ul>>
                                    ::value)[*(uint *)(this + 0x50)])(this);
        if ((piVar3 != (int *)0x0) && (*(int *)(this + 0x68) == 0)) goto LAB_1000357c6;
        if ((((unsigned long)*(uint *)(this + 0x50) != 0) &&
            (pcVar4 = (char *)(*(code *)(&eggs::variants::detail::
                                          visitor<eggs::variants::detail::target<// std code
                                          ::
                                          _table<eggs::variants::detail::index<0ul>,eggs::variants::detail::index<1ul>,eggs::variants::detail::index<2ul>,eggs::variants::detail::index<3ul>,eggs::variants::detail::index<4ul>,eggs::variants::detail::index<5ul>,eggs::variants::detail::index<6ul>,eggs::variants::detail::index<7ul>,eggs::variants::detail::index<8ul>>
                                          ::value)[*(uint *)(this + 0x50)])(this),
            pcVar4 != (char *)0x0)) && (*(int *)(this + 0x68) == 5)) {
          iVar1 = // std code
          if (iVar1 == 0) {
            return (void2 *)0x1001f9ff1;
          }
          iVar1 = // std code
          if (iVar1 == 0) {
            return (void2 *)0x1001f9ff1;
          }
          iVar1 = // std code
          if (iVar1 == 0) {
            return &getBoolValue()::s_bValues;
          }
          iVar1 = // std code
          if (iVar1 == 0) {
            return &getBoolValue()::s_bValues;
          }
        }
      }
    }
  }
  return (void2 *)0x0;
}
}
