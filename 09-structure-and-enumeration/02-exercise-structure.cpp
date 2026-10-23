#include <iostream>
#include <string>
#include <limits>

using namespace std;

struct Customer
{
  int ID;
  string name, email;
};

int main()
{
  Customer customer;

  cout << "Customer ID : ";
  cin >> customer.ID;

  // Clear the leftover newline character from the buffer
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  cout << "Customer name : ";
  getline(cin, customer.name);

  cout << "Customer email : ";
  getline(cin, customer.email);

  cout << "Customer ID : " << customer.ID << endl
       << "Name : " << customer.name << endl
       << "E-mail : " << customer.email << endl;

  return 0;
}