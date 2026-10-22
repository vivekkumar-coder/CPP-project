#include <iostream>
using namespace std;

int main()
{
  int age = 40;
  bool isEligible = age > 18 && age < 65;
  bool isEligible1 = age > 18 || age < 65;
  cout << boolalpha << isEligible << endl
       << isEligible1 << endl
       << !isEligible1 << endl;
  return 0;
}