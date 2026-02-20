#pragma once
namespace NI::UIA {
class AppModule {
public:
    AppModule();
    virtual void getCurrentModule();
    virtual void getLocale(bool) const;
    virtual void getLocaleInRegistry() [clone .cold.1];
    virtual void getModuleFileName() const;
    virtual void getVersion();
    virtual void initRegistry() const;
    virtual ~AppModule();
};
}
