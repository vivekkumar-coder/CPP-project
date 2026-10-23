#include <iostream>

using namespace std;

enum Action
{
  List = 1,
  Add,   // Add=2,
  Update // Update=3
};

int main()
{
  // const int list = 1;
  // const int add = 2;
  // const int update = 3;

  cout << "1: List invoices" << endl
       << "2: Add invoice" << endl
       << "3: Update invoice" << endl
       << "Select: ";

  int input;
  cin >> input;

  if (input == Action::List)
    cout << "List invoices";
  else if (input == Action::Update)
    cout << "Update invoices";
  else if (input == Action::Add)
    cout << "Add invoices";

  return 0;
}