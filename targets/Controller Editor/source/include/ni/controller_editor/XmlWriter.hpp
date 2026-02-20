#pragma once
namespace anyrpc {
class XmlWriter {
public:
    virtual void ArraySeparator();
    virtual void Binary(unsigned char const*, unsigned long, bool);
    virtual void BoolFalse();
    virtual void BoolTrue();
    virtual void DateTime(long);
    virtual void Double(double);
    virtual void EndArray(unsigned long);
    virtual void EndMap(unsigned long);
    virtual void EndToken(char const*);
    virtual void Int(int);
    virtual void Int64(long long);
    virtual void Key(char const*, unsigned long, bool);
    virtual void MapSeparator();
    virtual void Null();
    virtual void StringData(char const*, unsigned long);
    virtual void Uint(unsigned int);
    virtual void Uint64(unsigned long long);
    virtual ~XmlWriter();
};
}
