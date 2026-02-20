#pragma once
namespace NI {
class SimplePagePanel {
public:
    virtual void onPagesEnabledStateChanged();
    virtual void onRecalculateLayout();
    virtual ~SimplePagePanel();
};
}
