#include <iostream>
using namespace std;

int main()
{
  int first[] = {10, 20, 30};
  int second[size(first)];

  for (int i = 0; i < size(first); i++)
    second[i] = first[i];

  for (auto second : second)
    cout << second << endl;

  return 0;
}