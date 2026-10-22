#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
  int x = 1;
  double y = 2.2;
  double z = x + y;
  cout << z << endl
       << typeid(z).name() << endl
       << typeid(x + y).name() << endl;

  int a = x + (int)y; // c type conversion
  int b = x + static_cast<int>(y);
  cout << a << endl
       << b << endl;

  int m = 10;
  int n = 20;
  double p = m / static_cast<double>(n);
  cout << p << endl;

  return 0;
}