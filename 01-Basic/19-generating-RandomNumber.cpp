#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  // time(nullptr); // Jan 1, 1979
  long elapsedSeconds = time(0); // Jan 1, 1979
  cout << elapsedSeconds << endl;

  srand(3);
  int number = rand();
  cout << number << endl
       << rand() << endl
       << endl;

  long elapsedSeconds1 = time(0); // Jan 1, 1979
  srand(elapsedSeconds1);
  int number2 = rand() % 10;
  cout << elapsedSeconds1 << endl
       << number2 << endl
       << endl;

  srand(time(0));
  int number3 = rand() % 10;
  cout << number3 << endl;
  return 0;

  return 0;
}