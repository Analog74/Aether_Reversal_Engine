#pragma once
namespace NI::UIA {
class HMenu {
public:
    virtual void destroyItemAt(int);
    virtual void enableItemId(int, bool);
    virtual void getItemCount() const;
    virtual void getItemEnabledId(int) const;
    virtual void globalDeinit();
    virtual void globalInit();
    HMenu();
    virtual void insertSeparatorAt(int);
    virtual ~HMenu();
};
}
