#include <iostream>
using namespace std;

int main()
{
  int numBin = 0b11111;
  cout << numBin << endl;
  int numHex = 0xfff;
  cout << numHex << endl;
  int numDec = 255;
  cout << numDec << endl;
  unsigned int numPositive1 = 255;
  unsigned int numPositive2 = -255;
  cout << numPositive1 << endl
       << numPositive2 << endl;
  return 0;
}