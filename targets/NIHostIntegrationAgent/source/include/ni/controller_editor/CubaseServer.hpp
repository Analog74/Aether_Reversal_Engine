#pragma once
namespace NI::dawcontrol::cubase {
class CubaseServer {
public:
    virtual void onInstancePresent(bool);
    virtual ~CubaseServer();
};
}
