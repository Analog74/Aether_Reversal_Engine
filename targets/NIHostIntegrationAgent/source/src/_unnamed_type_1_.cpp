#include <ni/controller_editor/_unnamed_type_1_.hpp>
namespace ni::logic_osc_strings {

void {unnamed type#1}::~logic_osc_strings() {
unnamed type#1}::~logic_osc_strings() */

void __thiscall ni::logic_osc_strings::{unnamed_type#1}::~logic_osc_strings(_unnamed_type_1_ *this)

{
  _unnamed_type_1_ _Var1;
  
  if (((byte)this[0x108] & 1) == 0) {
    _Var1 = this[0xf0];
  }
  else {
    delete(*(void **)(this + 0x118));
    _Var1 = this[0xf0];
  }
  if (((byte)_Var1 & 1) == 0) {
    _Var1 = this[0xd8];
  }
  else {
    delete(*(void **)(this + 0x100));
    _Var1 = this[0xd8];
  }
  if (((byte)_Var1 & 1) == 0) {
    _Var1 = this[0xc0];
  }
  else {
    delete(*(void **)(this + 0xe8));
    _Var1 = this[0xc0];
  }
  if (((byte)_Var1 & 1) == 0) {
    _Var1 = this[0xa8];
  }
  else {
    delete(*(void **)(this + 0xd0));
    _Var1 = this[0xa8];
  }
  if (((byte)_Var1 & 1) == 0) {
    _Var1 = this[0x90];
  }
  else {
    delete(*(void **)(this + 0xb8));
    _Var1 = this[0x90];
  }
  if (((byte)_Var1 & 1) == 0) {
    _Var1 = this[0x78];
  }
  else {
    delete(*(void **)(this + 0xa0));
    _Var1 = this[0x78];
  }
  if (((byte)_Var1 & 1) == 0) {
    _Var1 = this[0x60];
  }
  else {
    delete(*(void **)(this + 0x88));
    _Var1 = this[0x60];
  }
  if (((byte)_Var1 & 1) == 0) {
    _Var1 = this[0x48];
  }
  else {
    delete(*(void **)(this + 0x70));
    _Var1 = this[0x48];
  }
  if (((byte)_Var1 & 1) == 0) {
    _Var1 = this[0x30];
  }
  else {
    delete(*(void **)(this + 0x58));
    _Var1 = this[0x30];
  }
  if (((byte)_Var1 & 1) == 0) {
    _Var1 = this[0x18];
  }
  else {
    delete(*(void **)(this + 0x40));
    _Var1 = this[0x18];
  }
  if (((byte)_Var1 & 1) == 0) {
    _Var1 = *this;
  }
  else {
    delete(*(void **)(this + 0x28));
    _Var1 = *this;
  }
  if (((byte)_Var1 & 1) != 0) {
    delete(*(void **)(this + 0x10));
    return;
  }
  return;
}
}
