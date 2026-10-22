#include <iostream>
using namespace std;

int main()
{
  int values[3] = {10, 20, 30};

  // C++: structured binding
  // JavaScripting: destructing
  // Python: unpacking

  auto [x, y, z] = values; // unpacking in c++
  cout << x << ", " << y << ", " << z << endl;

  // Unpacking (Method - 1)
  // int x=values[0];
  // int y=values[1];
  // int z=values[2];

  return 0;
}