#include <iostream>
using namespace std;

int main()
{
  int number = 1'000'000;
  short another = number;
  cout << number << endl
       << another << endl
       << endl;

  short number2 = 1000;
  int another2 = number2; // Brace initializer another{number}
  cout << number2 << endl
       << another2 << endl;
  return 0;
}