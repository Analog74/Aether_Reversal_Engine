#pragma once
namespace anyrpc {
class Handler {
public:
    virtual void EndDocument();
    virtual void Float(float);
    virtual void StartArray();
    virtual void StartDocument();
    virtual void StartMap(unsigned long);
};
}
