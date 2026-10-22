#include <iostream>
#include "greet.hpp"

// using namespace std;

namespace messaging
{
  // Function Definition
  void greet(std::string name)
  {
    std::cout << "Hello " << name << std::endl;
  }
}