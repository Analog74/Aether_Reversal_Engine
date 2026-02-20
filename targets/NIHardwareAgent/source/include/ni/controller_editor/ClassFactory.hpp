#pragma once
namespace NI::GP::OBJC {
class ClassFactory {
public:
    virtual void addMethod(objc_selector*, void (*)(), char const*);
    ClassFactory(objc_class*&);
    virtual void doRegister();
    virtual void generateUniqueClass(char const*, char const*);
    virtual ~ClassFactory();
};
}
