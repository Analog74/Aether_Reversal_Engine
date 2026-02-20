#pragma once
namespace NI {
class TraktorKontrolX1MK2Controller {
public:
    virtual void recalibratePotiGroup(unsigned int) const;
    TraktorKontrolX1MK2Controller(unsigned int);
    virtual ~TraktorKontrolX1MK2Controller();
};
}
