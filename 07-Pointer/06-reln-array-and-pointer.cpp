#include <iostream>
using namespace std;

void printArray(int numbers[], int size)
{
  for (int i = 0; i < size; i++)
    cout << numbers[i] << endl;
}

int main()
{
  int numbers[] = {10, 20, 30};
  numbers[2] = 300;
  cout << numbers << endl
       << *numbers << endl;

  int *ptr = numbers;
  cout << ptr << " " << *ptr << " " << numbers << " " << *numbers << endl;
  cout << ptr[1] << endl;

  printArray(ptr, size(numbers));
  cout << numbers[2] << endl;

  return 0;
}