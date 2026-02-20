#pragma once
namespace anyrpc {
class XmlHttpServer {
public:
    virtual void CreateConnection(int);
    XmlHttpServer();
    virtual ~XmlHttpServer();
};
}
