#pragma once
namespace NI {
namespace IControllerWithWidget {
public:
    virtual void createGUI();
    virtual void getGUI() const;
    virtual void ~IControllerWithWidget();
};
}
