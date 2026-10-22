#include <iostream>
using namespace std;

int main()
{
  string name1;
  cout << "Enter the name of first student ";
  getline(cin, name1);
  string name2;
  cout << "Enter the name of second student ";
  getline(cin, name2);
  string name3;
  cout << "Enter the name of third student ";
  getline(cin, name3);

  string names[3] = {name1, name2, name3};
  for (string s : names)
    cout << s << endl;
  return 0;
}