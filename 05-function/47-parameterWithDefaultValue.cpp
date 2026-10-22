#include <iostream>
using namespace std;

double calculateTax(double income, double taxRate = .2)
{
  return income * taxRate;
}

int main()
{
  cout << calculateTax(10'000) << endl;
  return 0;
}