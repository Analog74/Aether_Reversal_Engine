#pragma once
namespace NI::NHL2::Display {
class GenericHID {
public:
    virtual void disconnectBulkInterface();
    GenericHID(unsigned char);
    virtual void isBulkInterfaceAvailable();
    virtual void setBacklight(unsigned int);
    virtual ~GenericHID();
};
}
