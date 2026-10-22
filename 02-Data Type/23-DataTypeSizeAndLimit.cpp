#include <iostream>
#include <limits>

using namespace std;

int main()
{
  cout << "int " << sizeof(int) << endl
       << "char " << sizeof(char) << endl
       << "bool " << sizeof(bool) << endl
       << "long " << sizeof(long) << endl
       << "short " << sizeof(short) << endl
       << "float " << sizeof(float) << endl
       << "double " << sizeof(double) << endl
       << endl;

  int number = numeric_limits<int>::max();
  cout << numeric_limits<int>::min() << endl
       << numeric_limits<int>::max() << endl
       << number + 1 << endl;

  return 0;
}