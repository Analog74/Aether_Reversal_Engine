#pragma once
namespace NI::UIA {
class HMenu {
public:
    virtual void getItemEnabledId(int) const;
    HMenu();
    virtual ~HMenu();
};
}
