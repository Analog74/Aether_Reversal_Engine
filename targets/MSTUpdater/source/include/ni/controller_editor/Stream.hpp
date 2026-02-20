#pragma once
namespace NI::GP {
class Stream {
public:
    virtual void readBoolean();
    virtual void readRaw(void*, unsigned long);
    virtual void readS32();
    virtual void readS8();
    virtual void readU16();
    virtual void readU32();
    virtual void readU8();
    virtual void writeBoolean(bool);
    virtual void writeS32(int);
    virtual void writeU32(unsigned int);
};
}
