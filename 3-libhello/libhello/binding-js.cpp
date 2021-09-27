#include <libhello/hello.hpp>

#include <fmt/core.h>

#include <emscripten/bind.h>

EMSCRIPTEN_BINDINGS(hello){
    emscripten::function("say_hello", &hello::say_hello_log);
}

int main()
{
    fmt::print("WASM Module 'hello' ready to use.\n");
}
