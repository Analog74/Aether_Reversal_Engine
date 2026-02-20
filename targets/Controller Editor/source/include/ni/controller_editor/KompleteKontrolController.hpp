#pragma once
namespace NI {
class KompleteKontrolController {
public:
    virtual void hasSubmitButton() const;
    virtual void isSubmitButtonEnabled() const;
    KompleteKontrolController(unsigned int);
    virtual ~KompleteKontrolController();
};
}
