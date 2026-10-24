#include "Rectangle.h"
#include <iostream>

using namespace std;

int main()
{
  Rectangle rectangle;
  rectangle.width = 100;
  rectangle.height = 200;

  cout << "Area: " << rectangle.getArea() << endl;
  rectangle.draw();

  Rectangle first;
  Rectangle second;
  cout << &first << endl
       << &second << endl;

  return 0;
}