#include <iostream>
using namespace std;

void greet(string name)
{
  cout << "Hello " << name << endl;
}

void greet(string title, string name)
{
  cout << "Hello " << title << " " << name << endl;
}

void greet(int n, int m)
{
  cout << "n = " << n << " m = " << m << endl;
}

// Signature = name + (number and type of parameters)

int main()
{
  greet("kandf sadkfj asdjfl ");
  greet(" adfjladjf asdlkfjl fasldjf", " xxxxxxx");
  greet(8, 3);
  return 0;
}