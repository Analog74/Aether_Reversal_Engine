#pragma once
namespace NI::UIA::DETAIL {
class WindowImpl {
public:
    virtual void getPositionPhysical(bool) const;
    virtual void getSizePhysical(bool) const;
    virtual void setDeleteWindowObject(bool);
};
}
