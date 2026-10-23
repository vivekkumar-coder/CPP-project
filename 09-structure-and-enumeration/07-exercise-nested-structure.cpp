#include <iostream>
using namespace std;

struct Address
{
  string street;
  string city;
  int zipCode;
};

struct Customer
{
  int customerID;
  string name;
  Address address;
};

int main()
{
  Address address{"Zero road", "Khalpatvari", 323434};
  Customer customer{34, "Kafdkl", address};
  cout << "customer ID : " << customer.customerID << endl
       << "Name : " << customer.name << endl
       << "Street : " << customer.address.street << endl
       << "City: " << customer.address.city << endl
       << "Zip-Code : " << customer.address.zipCode << endl;
  return 0;
}