#include <iostream>
using namespace std;

int main()
{
  int a = 10;
  double b = 30;
  bool result = a == b;
  cout << result << endl
       << boolalpha << result << endl;

  return 0;
}