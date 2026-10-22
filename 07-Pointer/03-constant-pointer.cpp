#include <iostream>

using namespace std;

int main()
{
  int x = 10;
  int *ptr = &x;
  cout << ptr << " " << *ptr << " " << x << " " << &x << endl;

  // const int x1 = 10;
  // int *ptr1 = &x1;

  const int x2 = 20;
  const int *ptr2 = &x2;
  cout << ptr2 << " " << *ptr2 << " " << x2 << " " << &x2 << endl;

  ptr2 = &x;

  int x3 = 30;
  int *const ptr3 = &x3; // it is constant pointer we can not change it
  x3 = 20;
  // ptr3 = &x2;

  // const int x4 = 40;
  // int *const ptr4 = &x4;

  const int x5 = 50;
  const int *const ptr5 = &x5;

  return 0;
}