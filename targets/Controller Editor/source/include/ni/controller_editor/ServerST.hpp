#pragma once
namespace anyrpc {
class ServerST {
public:
    virtual void AcceptConnection();
    virtual void Work(int);
};
}
