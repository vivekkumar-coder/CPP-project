#include <iostream>

using namespace std;

int main()
{
  // Character
  char ch{'a'};
  char ch1{65};
  cout << ch << endl
       << +ch << endl
       << ch1 << endl
       << +ch1 << endl
       << endl;

  // String
  string name = "Mosh Hamedani";
  cout << name << endl;

  string friendName;
  cout << "Enter the name of your friends is ";
  // cin >> friendName;
  getline(cin, friendName);
  cout << friendName << endl;
  return 0;
}