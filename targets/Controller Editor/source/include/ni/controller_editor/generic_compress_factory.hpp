#pragma once
namespace web::http::compression::builtin {
class generic_compress_factory {
public:
    virtual void make_compressor() const;
    virtual ~generic_compress_factory();
};
}
