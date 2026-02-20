#pragma once
namespace NI::NHL2::Display {
class ST7529 {
public:
    virtual void getContrast() const;
    virtual void initialize(bool);
    virtual void setInverted(bool);
    virtual void setRevision(unsigned short);
    ST7529();
};
}
