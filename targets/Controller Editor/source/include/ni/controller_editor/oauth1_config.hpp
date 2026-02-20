#pragma once
namespace web::http::oauth1::experimental {
class oauth1_config {
public:
    virtual void _build_key() const;
    virtual void _generate_auth_state();
};
}
