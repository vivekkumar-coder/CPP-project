#include <iostream>
using namespace std;

// Global variable (global scope)
// double taxRate=.2;
const double taxRate = .2;

double calculateTax(int sales)
{
  return sales * taxRate;
}

int main()
{
  // Local variables(local scope)
  int sales = 10'000;

  // taxRate = 0;
  cout << calculateTax(sales);

  return 0;
}