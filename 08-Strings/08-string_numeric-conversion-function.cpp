#include <iostream>
using namespace std;

int main()
{
  // string to number conversion
  string price = "19.99X45";
  double price1 = stod(price);
  cout << price << endl
       << price1 << endl
       << price1 + 1 << endl;

  // string price2 = "s199.99";
  // cout << price2 << endl
  //      << stod(price2) << endl;

  // number to string coversion
  string str = to_string(19);
  cout << str << endl;
  string str1 = to_string(19.99);
  cout << str1 << endl;

  return 0;
}