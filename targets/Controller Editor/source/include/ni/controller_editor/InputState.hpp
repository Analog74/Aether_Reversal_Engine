#pragma once
namespace NI::UIA {
class InputState {
public:
    virtual void getSyncModifierKeys();
    virtual void setModalKeyInput(bool);
};
}
