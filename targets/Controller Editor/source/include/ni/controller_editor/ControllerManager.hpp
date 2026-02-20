#pragma once
namespace NI {
class ControllerManager {
public:
    virtual void addSupportedControllers();
    ControllerManager();
    virtual void createControllerFamilyTree();
    virtual void deinitControllers();
    virtual void getControllerAtIndex(int);
    virtual void getNCCMapVersion();
    virtual void getSelectedControllerModel() const;
    virtual void isControllerAvailable() const;
    virtual void isDeviceAvailableForFamily(unsigned long) const;
    virtual void isDeviceAvailableForFamilyAtIndex(unsigned long, unsigned long) const;
    virtual void releaseInstance();
    virtual void showConnectionErrors() const;
    virtual ~ControllerManager();
};
}
