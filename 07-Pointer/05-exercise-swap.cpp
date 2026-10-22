#include <iostream>
using namespace std;

void swap(int *n, int *m)
{
  auto temp = *n;
  *n = *m;
  *m = temp;
}

int main()
{
  int n = 10, m = 20;
  swap(&n, &m);
  cout << n << endl
       << m << endl;
  return 0;
}