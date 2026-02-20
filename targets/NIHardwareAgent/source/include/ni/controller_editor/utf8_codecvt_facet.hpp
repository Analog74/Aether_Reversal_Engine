#pragma once
namespace boost::filesystem::detail {
class utf8_codecvt_facet {
public:
    virtual void do_always_noconv() const;
    virtual void do_encoding() const;
    virtual void do_max_length() const;
    virtual ~utf8_codecvt_facet();
};
}
