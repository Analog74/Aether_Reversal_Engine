#pragma once
namespace anyrpc {
class HttpConnection {
public:
    virtual void ExecuteRequest();
    virtual void ReadHeader();
};
}
