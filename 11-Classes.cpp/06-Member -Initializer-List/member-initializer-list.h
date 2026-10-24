#ifndef MEMBER_INITIALIZER_H
#define MEMBER_INITIALIZER_H

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
  int width;
  int height;
};

#endif
