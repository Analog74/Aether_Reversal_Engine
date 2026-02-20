#pragma once
namespace NI::NHL2::Traktor {
class KontrolS4MK2 {
public:
    virtual void getLEDForButton(unsigned int, unsigned int&, bool);
    virtual void getRGBLEDForButton(unsigned int, unsigned int, unsigned int&);
};
}
