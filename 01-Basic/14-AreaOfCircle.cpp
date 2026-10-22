#include<iostream>
#include<cmath>

using namespace std;

int main()
{
  const double pi = 3.14;
  cout<<"Radius of circle : ";
  double radius;
  cin>>radius;

  double area = pi*pow(radius, 2);
  cout<< area;
  return 0;
}