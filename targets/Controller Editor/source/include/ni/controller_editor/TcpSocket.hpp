#pragma once
namespace anyrpc {
class TcpSocket {
public:
    virtual void Receive(char*, unsigned long, unsigned long&, bool&, int);
    virtual void Send(char const*, unsigned long, unsigned long&, int);
    virtual ~TcpSocket();
};
}
