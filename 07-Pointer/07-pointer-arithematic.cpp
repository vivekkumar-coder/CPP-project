#include <iostream>

using namespace std;

int main()
{
  int numbers[] = {10, 20, 30};
  int *ptr = numbers;
  cout << ptr << " " << numbers << endl;
  cout << *--ptr << endl;
  cout << *ptr-- << endl;

  cout << *ptr++ << endl;
  cout << *++ptr << endl;

  ptr++; // sizeof(data); // 100 - 103
  cout << ptr << " " << *ptr << endl;

  cout << *(ptr + 1) << endl;
  cout << ptr[1] << endl;
  cout << numbers[1] << endl;

  return 0;
}