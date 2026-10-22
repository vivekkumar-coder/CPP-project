#include <iostream>
using namespace std;

int main()
{
  unsigned int number;
  cout << "Enter the positive number : ";
  cin >> number;

  int fact = 1;

  if (number < 0)
  {
    cout << "Invalid is error";
  }

  else
  {
    for (int i = 1; i <= number; i++)
      fact *= i;
    cout << "Factorial : " << fact;
  }
  return 0;
}