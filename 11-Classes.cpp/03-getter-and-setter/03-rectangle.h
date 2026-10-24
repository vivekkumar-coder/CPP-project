
#ifndef ADVANCED_RECTANGLE_H
#define ADVANCED_RECTANGLE_H

class Rectangle
{
public:
  void draw();
  int getArea();
  // Getter (accessor)
  int getWidth();
  // Setter (mutator)
  void setWidth(int width);
  // Getter (accessor)
  int getHeight();
  // Setter (mutator)
  void setHeight(int height);

private:
  int width;
  int height;
};

#endif // ADVANCED_RECTANGLE_H