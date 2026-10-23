#include <iostream>
#include <string>

using namespace std;

int main()
{
  // unique_ptr<int> (int*)
  string name = "Mani";
  name += " Hell0";

  cout << name.length() << endl
       << name;

  string anotherName = name;

  if (name == anotherName)
    cout << "Same";
  else
    cout << "Not same";
  cout << endl;

  cout << (!name.empty() && name.front() == 'm') << boolalpha << (!name.empty() && name.front() == 'm') << endl;

  cout << (!name.empty() && name.back() == 'M') << endl;

  cout << name.front() << endl
       << name.back() << endl
       << name.empty() << endl;
  return 0;
}