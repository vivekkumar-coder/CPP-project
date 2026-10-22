#include<iostream>
using namespace std;

int main(){
  int number=10;
  cout<<&number; // address of number

  double x=10;
  double *xtr = &x;

  // The address of operator
  int *ptr = &number;
  int *ptr1=nullptr;

  // Indirection (de-referencing) operator
  *ptr=30;
  cout<<endl<<ptr<<endl<<ptr1<<endl<<*ptr<<endl;

  return 0;
}