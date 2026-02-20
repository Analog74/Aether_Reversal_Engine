#pragma once
namespace NI::UIA {
class AppModule {
public:
    AppModule();
    virtual void destroyApplication();
    virtual void getApplication() const;
    virtual void getCurrentModule();
    virtual void getLocaleInRegistry() [clone .cold.1];
    virtual void initRegistry() const;
    virtual ~AppModule();
};
}
