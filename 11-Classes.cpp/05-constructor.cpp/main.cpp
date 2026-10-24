#include "constructor.h"
#include <iostream>

using namespace std;

int main()
{
  // Rectangle rectangle(10,20);
  Rectangle rectangle{10, 20};
  cout
      << rectangle.getWidth() << endl;
  cout << rectangle.getHeight() << endl;

  return 0;
}