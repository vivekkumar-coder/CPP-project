#include <iostream>
using namespace std;

int main()
{
  int num1, num2;
  cout << "Enter two number are ";
  cin >> num1 >> num2;

  int largerNumber = (num1 > num2) ? num1 : num2;
  cout << largerNumber;
  return 0;
}