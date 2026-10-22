#include <iostream>
#include <memory>

using namespace std;

int main()
{
  // unique_ptr<int> x(new int);
  auto x = make_unique<int[]>(10);

  // unique_ptr<int> y= make_unique<int>();
  auto y = make_unique<int>();

  *y = 10;

  cout << *y << endl;

  x[0] = 20;
  cout << x[0] << endl;

  return 0;
}