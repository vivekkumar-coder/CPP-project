#include "03-rectangle.h"
#include <iostream>

using namespace std;

int main()
{
  Rectangle rectangle;

  rectangle.setWidth(-1);
  cout << rectangle.getWidth() << endl;

  rectangle.setHeight(-1);
  cout << rectangle.getHeight() << endl;
  return 0;
}