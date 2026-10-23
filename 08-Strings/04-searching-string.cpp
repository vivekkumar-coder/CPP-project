#include <iostream>
using namespace std;

int main()
{
  string name = "Mosh Hamedani";
  cout << name.find('a') << endl
       << name.find('a', 7) << endl
       << name.find('A', 7) << endl
       << name.find('A') << endl;

  size_t t = -1; // unsigned long long
  cout << t << endl;

  cout << name.rfind('a') << endl;

  cout << name.find_first_of("a") << endl;
  cout << name.find_last_of("a") << endl;

  cout << name.find_first_of(",.;") << endl; // any of these
  cout << name.find_last_of(",.; ") << endl; // any of these

  cout << name.find_first_not_of(",.;") << endl;
  cout << name.find_last_not_of(",.; ") << endl;

  return 0;
}