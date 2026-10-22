#include <iostream>
using namespace std;

void greet(string firstName)
{
  cout << "Hello World " << firstName << endl;
  ;
}

string fullName(string firstName, string lastName)
{
  return firstName + " " + lastName;
}

double larger(int a, int b)
{
  return (a > b) ? a : b;
}

int main()
{
  // Calling - invoking -executing
  greet("hello ");

  cout << "\nDone" << endl
       << fullName("Kaladfla ", "d fjalsdjf") << endl;

  greet(fullName("Kaladfla ", "d fjalsdjf"));
  cout << endl
       << larger(10, 20) << endl;

  return 0;
}