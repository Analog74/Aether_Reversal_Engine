#pragma once
namespace NI {
class TraktorKontrolS4ControllerPreferencePanel {
public:
    virtual void onFootswitchChange(int);
    virtual void updateFootswitchMode(bool) [clone .cold.1];
};
}
