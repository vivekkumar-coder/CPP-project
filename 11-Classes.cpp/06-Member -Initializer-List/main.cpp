#include "member-initializer-list.h"
#include <iostream>

using namespace std;

int main()
{
  Rectangle rectangle{10, 20};
  cout << "Width: " << rectangle.getWidth() << endl
       << "Height: " << rectangle.getHeight() << endl;
       
  return 0;
}