#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

string to_string(double number, int prescision)
{
  stringstream stream;
  stream << fixed << setprecision(prescision) << number;
  return stream.str();
}

int main()
{
  double number = 12.34;
  int precision = 4;

  cout << to_string(number, precision);

  return 0;
}