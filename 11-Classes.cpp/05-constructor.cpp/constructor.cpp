#include "constructor.h"
#include <iostream>

using namespace std;

void Rectangle::setWidth(int width)
{
  if (width < 0)
    throw invalid_argument("width");
  (*this).width = width;
}

int Rectangle::getWidth()
{
  return width;
}

void Rectangle::setHeight(int height)
{
  (*this).height = height;
}

int Rectangle::getHeight()
{
  return height;
}

void Rectangle::draw()
{
  cout << "Dimension: " << width << ", " << height << endl;
}

int Rectangle::getArea()
{
  return width * height;
}

Rectangle::Rectangle(int width, int height)
{
  cout << "Constructing a Rectangle\n";
  setWidth(width);
  setHeight(height);
}