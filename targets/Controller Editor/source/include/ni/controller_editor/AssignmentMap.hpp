#pragma once
namespace NI::NHL2 {
class AssignmentMap {
public:
    AssignmentMap(char const*, unsigned int);
    virtual void setMIDIChannelForAll(unsigned char);
    virtual ~AssignmentMap();
};
}
