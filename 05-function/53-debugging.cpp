#include <iostream>

using namespace std;

void printOddNumber(int n)
{
  for (int i = 1; i <= n; i++)
  {
    if (i % 2 != 0)
      cout << i << endl;
  }
}

int main()
{
  printOddNumber(10);
  return 0;
}