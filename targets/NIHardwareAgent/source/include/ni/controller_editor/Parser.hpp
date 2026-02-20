#pragma once
namespace NI::NHL2::MIDI {
class Parser {
public:
    virtual void parseData(unsigned char const*, unsigned long, bool);
    virtual void setIgnoreMask(unsigned int);
};
}
