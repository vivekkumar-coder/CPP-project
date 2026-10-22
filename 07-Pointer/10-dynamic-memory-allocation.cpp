#include <iostream>
using namespace std;

int main()
{
  // Stack
  int numbers[10];
  int x;

  // Heap (Free Store)
  int *array = new int[10];

  int *number = new int;

  delete[] array;
  delete number;
  number = nullptr;
  array = nullptr;

  return 0;
}