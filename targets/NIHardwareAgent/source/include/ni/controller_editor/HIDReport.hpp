#pragma once
namespace NI::NHL2 {
class HIDReport {
public:
    virtual void setID(unsigned char);
    virtual ~HIDReport();
};
}
