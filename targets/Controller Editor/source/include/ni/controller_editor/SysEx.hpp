#pragma once
namespace NI::NHL2::MIDI {
class SysEx {
public:
    virtual void copyToBuffer(unsigned char*, unsigned long, unsigned long&) const;
    virtual ~SysEx();
};
}
