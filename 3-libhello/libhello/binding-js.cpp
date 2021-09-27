#include <libhello/hello.hpp>

#include <iostream>
#include <sstream>
#include <fmt/core.h>

#include <emscripten/bind.h>

namespace hello {
    void say_hello_log(const std::string& name){
        std::stringstream stream;
        say_hello(stream, name);
        fmt::print("{}", stream.str());
    }
}

EMSCRIPTEN_BINDINGS(hello){
    emscripten::function("say_hello", &hello::say_hello_log);
}

int main()
{
    fmt::print("WASM Module 'hello' ready to use.\n");
}
