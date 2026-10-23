#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  string name3 = "Mosh"; // string of cpp

  // Null terminator (\0)
  char name5[50] = {'M', 'a', 'n', 'i', '\0'};

  // String literal
  char name1[40] = "Mosh";

  cout << endl
       << "Length " << strlen(name1) << endl;

  // Character literal
  name5[0] = 'm';
  cout << name5[0] << endl;

  char name[50] = "Mosh";
  char lastName[] = "Hamedani";

  // string concatention
  cout << strcat(name, lastName) << endl // strcat(name, lastName) -->  name=name+lastName
       << strlen(name) << endl           // strlen(name)=strlen(name)+strlen(lastName)
       << strlen(lastName) << endl;

  // string copy
  cout << strcpy(name, lastName) << endl;

  // string comparision
  bool isEqual = strcmp(name, lastName);
  cout << isEqual << boolalpha << isEqual << endl;

  if (strcmp(name, lastName) == 0)
    cout << "Not Equal";
  else
    cout << "Equal";
  cout << endl;

  return 0;
}