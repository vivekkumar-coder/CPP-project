#include <iostream>
using namespace std;

int main()
{
  // ()
  // !
  // &&
  // ||

  bool a = true;
  bool b = false;
  bool c = false;
  bool result = (a || b) && c;
  cout << result << " " << boolalpha << result << endl;
  return 0;
}