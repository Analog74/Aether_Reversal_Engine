#pragma once
namespace web::http::compression::builtin {
class deflate_decompressor {
public:
    virtual ~deflate_decompressor();
};
}
