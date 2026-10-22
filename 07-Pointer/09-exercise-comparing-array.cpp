#include <iostream>
using namespace std;

int main()
{
  int number[] = {10, 20, 30};
  int *ptr = &number[size(number) - 1];

  while (ptr >= number) // ptr >= &number[0]
  {
    cout << *ptr << endl;
    ptr--;
  }
  return 0;
}