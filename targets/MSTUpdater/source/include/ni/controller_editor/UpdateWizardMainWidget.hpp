#pragma once
namespace NI {
class UpdateWizardMainWidget {
public:
    virtual void createAboutOverlay();
    virtual void createBody();
    virtual void createButtonPanel();
    virtual void createFirmwarePanel();
    virtual void createInfoPanel();
    virtual void createTitle();
    virtual void hideAbout();
    virtual void onAction();
    virtual void onQuit();
    virtual void resetFirmwareRevisionsAndSerialNumber();
    virtual void showAbout();
    virtual void showPageNoDeviceConnected();
    virtual void showPageNoUpdateAvailable();
    virtual void showPageNoUpdateMode();
    virtual void showPageUpdateAvailable();
    virtual void showPageUpdateFailed();
    virtual void showPageUpdateSuccessful();
    virtual void showPageUpdating();
    virtual ~UpdateWizardMainWidget();
};
}
