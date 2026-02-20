#pragma once
namespace web::http::compression::builtin {
class generic_decompress_factory {
public:
    virtual void algorithm() const;
    virtual void make_decompressor() const;
    virtual void weight() const;
    virtual ~generic_decompress_factory();
};
}
