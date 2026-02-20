#pragma once
namespace NI::NHL2 {
class IPCConnection {
public:
    virtual void drop();
    virtual void getLastConnectionError() const;
    virtual void getLastConnectionErrorAsString() const;
    IPCConnection(char const*) [clone .cold.1];
    virtual void isConnected() const;
    virtual ~IPCConnection();
};
}
