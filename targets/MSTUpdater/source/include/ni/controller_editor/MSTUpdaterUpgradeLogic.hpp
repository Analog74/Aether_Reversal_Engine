#pragma once
namespace NI {
class MSTUpdaterUpgradeLogic {
public:
    virtual void applicationCloseRequest();
    virtual void connectInNormalMode();
    virtual void connectInUpdateMode();
    virtual void flashFirmwares(int&);
    virtual void isUpdateRunning();
    virtual void performUpdate(int&);
    virtual void resetIntoUpdateMode();
    virtual ~MSTUpdaterUpgradeLogic();
};
}
