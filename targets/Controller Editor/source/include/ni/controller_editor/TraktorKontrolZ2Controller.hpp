#pragma once
namespace NI {
class TraktorKontrolZ2Controller {
public:
    virtual void createControllerPreferencePanel() const;
    virtual void getName() const;
    virtual ~TraktorKontrolZ2Controller();
};
}
