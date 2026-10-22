#include <iostream>
using namespace std;

int main()
{
  int x = 10;
  int y = 20;
  auto *ptrX = &x;
  auto *ptrZ = &x;
  auto *ptrY = &y;

  if (ptrX == ptrY)
    cout << "Same ptr X and ptr Y" << endl;

  if (ptrX == ptrZ)
    cout << "Same ptr X and ptr Z" << endl;

  if (ptrX != nullptr)
    cout << *ptrX << endl;
  return 0;
}