#include <iostream>

using namespace std;

int main()
{
  bool isNewUser = false;
  bool isValid = true;
  cout << isNewUser << endl
       << isValid << endl
       << endl
       << boolalpha << isNewUser << endl
       << isValid << endl
       << endl
       << noboolalpha << isNewUser << endl
       << isValid << endl
       << endl;
  return 0;
}