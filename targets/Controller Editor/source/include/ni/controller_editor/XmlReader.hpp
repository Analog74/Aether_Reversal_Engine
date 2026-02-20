#pragma once
namespace anyrpc {
class XmlReader {
public:
    virtual void GetNextTag(bool);
    virtual void ParseArray();
    virtual void ParseBase64();
    virtual void ParseBoolean();
    virtual void ParseDateTime();
    virtual void ParseKey();
    virtual void ParseMap();
    virtual void ParseMethodName();
    virtual void ParseNumber(int);
    virtual void ParseParams();
    virtual void ParseString(int);
    virtual void ParseValue(bool);
    virtual void TagToString(int);
    virtual ~XmlReader();
};
}
