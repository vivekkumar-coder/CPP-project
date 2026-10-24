#include "member-initializer-list.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle(int width, int height) : width{width}, height{height}
{
  // this->width = width;
  // this->height = height;
}

void Rectangle::draw()
{
  cout << "Dimension: " << width << ", " << height << endl;
}

int Rectangle::getArea()
{
  return width * height;
}

void Rectangle::setWidth(int width)
{
  if (width < 0)
    throw invalid_argument("Width");
  (*this).width = width;
}

int Rectangle::getWidth()
{
  return width;
}

void Rectangle::setHeight(int height)
{
  if (height < 0)
    throw invalid_argument("Height");
  Rectangle::height = height;
}

int Rectangle::getHeight()
{
  return height;
}
