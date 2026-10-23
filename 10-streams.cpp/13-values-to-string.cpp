#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

int main()
{
  double number1 = 12.34;
  string str = to_string(number1);
  cout << number1 << endl
       << str << endl;

  double number2 = 12.23;
  stringstream stream;
  stream << fixed << setprecision(4) << number2;
  string str1 = stream.str();
  cout << number2 << endl
       << str1 << endl;
  return 0;
}