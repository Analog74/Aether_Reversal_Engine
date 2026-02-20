#pragma once
namespace NI::dawcontrol::logic {
class LogicControlClient {
public:
    virtual void setupLogicConnection();
    virtual ~LogicControlClient();
};
}
