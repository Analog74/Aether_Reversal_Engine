#pragma once
namespace NI::NHL2::SERVER {
class IPCServer {
public:
    virtual void getLogFileName();
    virtual void getName() const;
    virtual void initTraceConfiguration();
    virtual void initTraceReportLevel();
    virtual ~IPCServer();
};
}
