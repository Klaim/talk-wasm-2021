#include <libhello/hello.hpp>

#include <iostream>
#include <sstream>
#include <stdexcept>

#include <fmt/core.h>
#include <fmt/ostream.h>

#include <boost/container/string.hpp>

namespace hello
{
  void say_hello(std::ostream& o, const std::string& name)
  {
    if (name.empty()) {
      throw std::invalid_argument("empty name");
    }

    fmt::print(o, "Hello, {}!\n", name);
  }

  void say_hello_log(const std::string& name)
  {
    std::ostringstream stream;
    say_hello(stream, name);
    fmt::print("{}", stream.str());
  }

}
