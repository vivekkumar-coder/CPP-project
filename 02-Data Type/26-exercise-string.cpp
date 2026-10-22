#include <iostream>

using namespace std;

int main()
{
  string street, city, state, zipCode;
  cout << "Enter the street";
  getline(cin, street);
  cout << "City : ";
  getline(cin, city);
  cout << "State : ";
  getline(cin, state);
  cout << "zipCode : ";
  getline(cin, zipCode);

  cout << endl
       << street << endl
       << city << ", " << state << ", " << zipCode;

  return 0;
}