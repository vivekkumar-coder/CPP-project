#ifndef CONSTRUCTOR_H
#define CONSTRUCTOR_H

class Rectangle
{
public:
  Rectangle(int width, int height);
  void draw();
  int getArea();
  void setWidth(int width);
  int getWidth();
  void setHeight(int height);
  int getHeight();

private:
  int width = 0;
  int height = 0;
};

#endif // CONSTRUCTOR_H
