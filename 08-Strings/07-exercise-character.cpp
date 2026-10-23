#include <iostream>
using namespace std;

bool isValid(string customerNumber)
{
  if (customerNumber.length() != 6)
    return false;

  for (int i = 0; i < 2; i++)
    if (!isalpha(customerNumber[i]))
      return false;

  for (int i = 2; i < customerNumber.length(); i++)
    if (!isdigit(customerNumber[i]))
      return false;

  return true;
}

int main()
{
  string customerNumer;
  cout << "Customer Number ";
  cin >> customerNumer;
  cout << endl
       << isValid(customerNumer) << endl;

  return 0;
}