#pragma once
namespace NI::NHL2 {
class MCUDisplay {
public:
    virtual void copyAndSplitTextLineToDisplayBuffers(unsigned long, char*, char*) const;
};
}
