#include <iostream>
using namespace std;

int main()
{
  for (int i = 1; i <= 5; i++)
  {
    if (i % 3 == 0)
      continue;
    cout << i << endl;
  }

  cout << endl;

  for (int i = 1; i <= 5; i++)
  {
    if (i % 3 == 0)
      break;
    cout << i << endl;
  }

  while (true)
  {
    cout << "Number : ";
    int number;
    cin >> number;
    if (number >= 1 && number <= 5)
      break;
    cout << "Error! Enter a number between 1 and 5";
  }
  return 0;
}