#pragma once
namespace NI::NHL2::SERVER {
class FX2Controller {
public:
    virtual void configureDevice();
    virtual void getERPBytePosition(int, int&, int&);
    virtual ~FX2Controller();
};
}
