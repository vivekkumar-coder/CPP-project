#include <iostream>
using namespace std;

int main()
{
  string name = "Bind";

  name.append(" Hello");
  cout << name << endl;

  name.insert(0, " I am ");
  cout << name << endl;

  name.erase(0, 2);
  cout << name << endl;
  ;

  // name.replace();
  // cout<<name<<endl;

  name.replace(0, 3, "lsd");
  cout << name << endl;

  name.clear();
  cout << name << endl;
  return 0;
}