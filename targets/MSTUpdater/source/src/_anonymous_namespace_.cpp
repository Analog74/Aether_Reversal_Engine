#include <ni/controller_editor/_anonymous_namespace_.hpp>
namespace NI::GP {

void (anonymous namespace)::getLocaleIdentifier(char const*) {
__darwin_ct_rune_t _Var1;
  __darwin_ct_rune_t _Var2;
  char *pcVar3;
  
  _Var1 = ___toupper((int)*param_1);
  _Var2 = ___toupper(0x6a);
  if (_Var1 == _Var2) {
    if (_Var1 == 0) {
      return "JPN";
    }
    _Var1 = ___toupper((int)param_1[1]);
    _Var2 = ___toupper(0x61);
    if (_Var1 == _Var2) {
      return "JPN";
    }
  }
  _Var1 = ___toupper((int)*param_1);
  _Var2 = ___toupper(0x6a);
  if (_Var1 == _Var2) {
    if (_Var1 == 0) {
      return "JPN";
    }
    _Var1 = ___toupper((int)param_1[1]);
    _Var2 = ___toupper(0x70);
    if (_Var1 == _Var2) {
      return "JPN";
    }
  }
  _Var1 = ___toupper((int)*param_1);
  _Var2 = ___toupper(0x66);
  if (_Var1 == _Var2) {
    if (_Var1 == 0) {
      return "FRA";
    }
    _Var1 = ___toupper((int)param_1[1]);
    _Var2 = ___toupper(0x72);
    if (_Var1 == _Var2) {
      return "FRA";
    }
  }
  _Var1 = ___toupper((int)*param_1);
  _Var2 = ___toupper(100);
  if (_Var1 == _Var2) {
    if (_Var1 == 0) {
      return "DEU";
    }
    _Var1 = ___toupper((int)param_1[1]);
    _Var2 = ___toupper(0x65);
    if (_Var1 == _Var2) {
      return "DEU";
    }
  }
  _Var1 = ___toupper((int)*param_1);
  _Var2 = ___toupper(0x69);
  if (_Var1 == _Var2) {
    if (_Var1 == 0) {
      return "ITA";
    }
    _Var1 = ___toupper((int)param_1[1]);
    _Var2 = ___toupper(0x74);
    if (_Var1 == _Var2) {
      return "ITA";
    }
  }
  _Var1 = ___toupper((int)*param_1);
  _Var2 = ___toupper(0x65);
  if (_Var1 == _Var2) {
    if (_Var1 == 0) {
      return "SPA";
    }
    _Var1 = ___toupper((int)param_1[1]);
    _Var2 = ___toupper(0x73);
    if (_Var1 == _Var2) {
      return "SPA";
    }
  }
  _Var1 = ___toupper((int)*param_1);
  _Var2 = ___toupper(0x73);
  if (_Var1 == _Var2) {
    if (_Var1 == 0) {
      pcVar3 = "SPA";
    }
    else {
      _Var1 = ___toupper((int)param_1[1]);
      _Var2 = ___toupper(0x70);
      pcVar3 = "ENG";
      if (_Var1 == _Var2) {
        pcVar3 = "SPA";
      }
    }
  }
  else {
    pcVar3 = "ENG";
  }
  return pcVar3;
}
}
