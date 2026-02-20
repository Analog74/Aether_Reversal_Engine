#pragma once
namespace std {
class codecvt<wchar_t, char, __mbstate_t> {
public:
    virtual void ~codecvt();
};
}
