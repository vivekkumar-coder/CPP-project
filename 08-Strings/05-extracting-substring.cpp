#include <iostream>
using namespace std;

int main()
{
  string name = "Mosh Hamedani";
  string copy = name.substr();
  cout << name << endl
       << copy << endl;

  string substring = name.substr(5);
  cout << substring << endl;

  // string substring1 = name.substr(50); // it cout of range;

  string substring2 = name.substr(5, 3);
  cout << substring2 << endl;

  // int index=name.find(' ');
  size_t index = name.find(' ');
  // auto index=name.find(' ');

  string firstName = name.substr(0, index);
  cout << firstName << endl;

  string lastName = name.substr(index + 1, name.length());
  cout << lastName << endl
       << endl;

  string nameAnother = "Mosh Mani Manu";
  size_t indexFirst = nameAnother.find(' ');
  size_t indexlast = nameAnother.rfind(' ');
  cout << nameAnother.substr(0, indexFirst) << endl
       << nameAnother.substr(indexFirst + 1, indexlast - indexFirst) << endl
       << nameAnother.substr(indexlast + 1, nameAnother.length()) << endl;

  return 0;
}