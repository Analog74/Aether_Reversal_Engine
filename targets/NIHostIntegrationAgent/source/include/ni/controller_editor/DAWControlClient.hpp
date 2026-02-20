#pragma once
namespace NI::dawcontrol {
class DAWControlClient {
public:
    virtual void hasFocus() const;
    virtual void notifyDawClientActive(bool);
    virtual void requestFocus();
    virtual void switchToPluginInstance();
    virtual ~DAWControlClient();
};
}
