#pragma once
namespace anyrpc {
class Connection {
public:
    virtual void CheckClose();
    virtual void CheckExecuteState();
    virtual void ForcedDisconnectAllowed();
    virtual void GetFileDescriptor();
    virtual void GetLastTransactionTime();
    virtual void Process(bool);
    virtual void ReadRequest();
    virtual void SetActive(bool);
    virtual void SetCloseState();
    virtual void WaitForReadability();
    virtual void WaitForWritability();
    virtual void WriteResponse();
    virtual ~Connection();
};
}
