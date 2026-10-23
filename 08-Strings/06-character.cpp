#include <iostream>
using namespace std;

int main()
{
  string name = "Mosh Hamedani";
  cout << islower(name[0]) << endl
       << isupper(name[0]) << endl
       << isalpha(name[0]) << endl
       << isalnum(name[0]) << endl
       << isdigit(name[0]) << endl
       << isspace(name[0]) << endl
       << endl;

  cout << toupper(name[0]) << endl
       << (char)toupper(name[0]) << endl;

  cout << (char)toupper('-') << endl
       << (char)toupper('A') << endl
       << endl;

  char input;

  // if(input=='x'|| input=='X')break;
  // if (tolower(input) == 'x')

  return 0;
}