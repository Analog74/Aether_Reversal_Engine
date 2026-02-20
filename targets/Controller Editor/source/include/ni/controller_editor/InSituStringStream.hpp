#pragma once
namespace anyrpc {
class InSituStringStream {
public:
    virtual void Eof() const;
    virtual void GetClear();
    virtual void InSitu() const;
    virtual void Peek() const;
    virtual void PutBegin();
    virtual void PutEnd();
    virtual void Skip(unsigned long);
    virtual void Tell() const;
    virtual void UseStringCopy() const;
    virtual ~InSituStringStream();
};
}
