#pragma once
namespace NI::NHL2::Traktor::KontrolS4MK3::Device {
class FlagHandler {
public:
    virtual void beginTransaction();
    virtual void endTransaction();
    virtual ~FlagHandler();
};
}
