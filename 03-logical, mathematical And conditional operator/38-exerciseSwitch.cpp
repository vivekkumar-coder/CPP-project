#include <iostream>
using namespace std;

int main()
{
  double num1, num2;
  cout << "Enter the two number are ";
  cin >> num1 >> num2;

  char ch;
  cout << "Enter operator : ";
  cin >> ch;

  double result = 0;

  switch (ch)
  {
  case '+':
    result = num1 + num2;
    break;
  case '-':
    result = num1 - num2;
    break;
  case '/':
    result = num1 / num2;
    break;
  case '*':
    result = num1 * num2;
    break;

  default:
    cout << "Invalid Operator";
    break;
  }
  cout << num1 << " " << ch << " " << num2 << " = " << result;
  return 0;
}