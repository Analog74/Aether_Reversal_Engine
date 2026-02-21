//! `atlas_recover` library — Stage B texture reconstructor.
//!
//! Public modules are exposed here so that integration tests (`tests/`) and
//! benchmarks (`benches/`) can import them via `atlas_recover::…`.
pub mod contact;
pub mod formats;
pub mod macho;
pub mod reconstruct;
