#include<iostream>
using namespace std;

int main()
{
  double a=10;
  int b=3;
  double c=a/b;
  int d=(int)a%b;
  std::cout<<c<<std::endl<<d<<"\n";

  // increment operator
  int x=100;
  int y=x++; // y=x then x=x+1  output y=100, x=101
  int z=++x; // x=x+1 then y=x output y=z=101
  std::cout<<x<<std::endl<<y<<std::endl<<z;
  return 0;
}