#include <iostream>
#include <limits>

using namespace std;

int main()
{
  int first;
  while (true)
  {
    cout << "First: ";
    cin >> first;
    if (cin.fail())
    {
      cout << "Enter a valid number!" << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    else
      break;
  }

  cout << "Second: ";
  int second;
  cin >> second;

  cout << "You entered " << first << " and " << second << endl;
}