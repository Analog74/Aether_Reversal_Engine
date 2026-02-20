#pragma once
namespace NI::dawcontrol {
class DawControlServer {
public:
    virtual void onClientHandleCreated();
    virtual ~DawControlServer();
};
}
