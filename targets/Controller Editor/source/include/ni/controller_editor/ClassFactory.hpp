#pragma once
namespace NI::GP::OBJC {
class ClassFactory {
public:
    virtual void addMethodByLookup(objc_selector*, void (*)());
    virtual void addProtocol(char const*);
    ClassFactory(objc_class*&);
    virtual void doRegister();
    virtual void generateUniqueClass(char const*, char const*);
    virtual void getClassName() const;
    virtual ~ClassFactory();
};
}
