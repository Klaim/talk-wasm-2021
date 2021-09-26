#include <iostream>
#include <fmt/core.h>
#include <fmt/ostream.h>
#include <boost/container/string.hpp>

int main (int argc, char* argv[])
{
  using namespace std;

  if (argc < 2)
  {
    fmt::print(std::cerr, "error: missing name\n");
    return 1;
  }

  const boost::container::string name = argv[1];

  fmt::print("Hello, {}!\n", name);
}
