#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  const short maxValue = 6;
  const short minValue = 1;
  srand(time(0));
  short dice1 = (rand() % (maxValue - minValue + 1)) + minValue;
  short dice2 = (rand() % (maxValue - minValue + 1)) + minValue;
  cout << dice1 << endl
       << dice2 << endl;
  return 0;
}