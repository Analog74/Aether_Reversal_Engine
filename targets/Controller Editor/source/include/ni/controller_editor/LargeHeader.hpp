#pragma once
namespace NI {
class LargeHeader {
public:
    virtual void connectController(int);
    virtual void controllerSelectionChanged(unsigned int);
    LargeHeader() [clone .cold.5];
    virtual void onSubmitButton();
    virtual void updateSelectedController();
    virtual ~LargeHeader();
};
}
