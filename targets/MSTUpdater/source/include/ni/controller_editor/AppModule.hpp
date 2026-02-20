#pragma once
namespace NI::UIA {
class AppModule {
public:
    AppModule();
    virtual void destroyApplication();
    virtual void getApplication() const;
    virtual void getCurrentModule();
    virtual void getLocale(bool) const;
    virtual void getLocaleInRegistry();
    virtual void initRegistry() const;
    virtual ~AppModule();
};
}
