#pragma once
namespace NI::NHL2::SERVER {
class KompleteKontrolMK1 {
public:
    virtual void isMCUEnabled() const;
    virtual void needsTransportProcessing() const;
    virtual ~KompleteKontrolMK1();
};
}
