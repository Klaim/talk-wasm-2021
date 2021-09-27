#include <libhello/hello.hpp>

#include <ostream>
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

}
