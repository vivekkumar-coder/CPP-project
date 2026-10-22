#include <iostream>
using namespace std;

int main()
{
  int i = 0;
  while (i <= 5)
  {
    cout << i << " ";
    i++;
  }

  int number = 0;
  while (number < 1 || number > 5)
  {
    cout << "\nNumber : ";
    cin >> number;
    if (number < 1 || number > 5)
      cout << "Enter  a number between 1 and 5!" << endl;
  }
  return 0;
}