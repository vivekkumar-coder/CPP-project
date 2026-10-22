#include <iostream>
using namespace std;

int main()
{
  int number = 10;
  cout << &number << endl; // address of number

  // The address of operator
  // auto* ptr=&number;
  int *ptr = nullptr; // *ptr = nullptr = 0 = NULL
  cout << ptr << endl;

  int *ptr1 = &number;
  cout << *ptr1 << endl; // it is called dereferencing pointer

  // Indirection (dereferencing) operator
  *ptr1 = 20;
  cout << number << endl;

  return 0;
}