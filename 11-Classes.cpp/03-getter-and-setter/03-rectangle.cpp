#include "03-rectangle.h"
#include <iostream>

using namespace std;

void Rectangle::draw()
{
  cout << "Drawing a rectangle" << endl
       << "Dimensions: " << width << ", " << height << endl;
}

int Rectangle::getArea()
{
  return width * height;
}

void Rectangle::setWidth(int width)
{
  if (width < 0)
    throw invalid_argument("width");
  // width = theWidth;
  // m_width = width;
  // this->width=width;
  (*this).width = width;
}

int Rectangle::getWidth()
{
  return width;
}

void Rectangle::setHeight(int height)
{
  if (height < 0)
    throw invalid_argument("height");
  this->height = height;
  // Rectangle::height = height;
}

int Rectangle::getHeight()
{
  return height;
}