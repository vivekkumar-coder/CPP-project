#include <iostream>
using namespace std;

// int[] -> int*
void printNumbers(int numbers[], int size)
{
  // for (auto number : numbers)
  //   cout << number << endl;
  // cout << endl;
  for (int i = 0; i < size; i++)
    cout << numbers[i] << endl;
}

int main()
{
  int numbers[] = {10, 20, 30};
  int sizes = size(numbers);

  printNumbers(numbers, sizes);

  return 0;
}