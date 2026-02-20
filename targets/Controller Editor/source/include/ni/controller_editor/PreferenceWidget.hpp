#pragma once
namespace NI {
class PreferenceWidget {
public:
    virtual void createControllerPrefs() [clone .cold.1];
    virtual void createGeneralPrefs() [clone .cold.10];
    virtual void fillDeviceMenu(bool) [clone .cold.1];
    virtual void onAnyCapacitiveTouchChange(bool) [clone .cold.1];
    virtual void onChildsAligned() [clone .cold.1];
    virtual void onPreferenceDialogClosed() [clone .cold.1];
    virtual void onScrollbarChange() [clone .cold.1];
    virtual void onScrollbarRequiredCheck();
    virtual void selectTab(int);
    virtual void updateSelectedPreferenceWidget();
    virtual ~PreferenceWidget();
};
}
