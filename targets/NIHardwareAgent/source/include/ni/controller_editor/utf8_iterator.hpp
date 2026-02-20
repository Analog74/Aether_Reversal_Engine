#pragma once
namespace ni::string {
class utf8_iterator {
public:
    virtual void import_next_codepoint();
    virtual void import_next_nfc_codepoint();
    virtual void import_next_nfd_codepoint();
};
}
