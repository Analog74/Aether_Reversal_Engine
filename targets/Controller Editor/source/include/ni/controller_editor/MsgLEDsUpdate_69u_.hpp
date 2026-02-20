#pragma once
namespace NI::NHL2 {
class MsgLEDsUpdate<69u> {
public:
    virtual void setLEDLevels(unsigned char const*);
};
}
