#include <iostream>

using namespace std;

// copy price ;
void increasePrice(double price)
{
  price *= 1.2;
  // cout << price << endl;
}

double increasePrice1(double price)
{
  price *= 1.2;
  return price;
}

void increasePrice2(double &price)
{
  price *= 1.2;
  // return price;
}

void greet(string &name)
{
  cout << "Hello " << name;
  name = "vbof";
}

int main()
{
  double price = 100;
  increasePrice(price);
  cout << price << endl
       << increasePrice1 << endl;
  // increasePrice2(price);
  cout << price << endl;
  cout << increasePrice1(price) << endl
       << endl;

  string name = "Mosh";
  greet(name);
  cout << endl;
  greet(name);

  return 0;
}