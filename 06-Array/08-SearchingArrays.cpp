#include <iostream>
using namespace std;

int linearSearch(int array[], int size, int target)
{
  for (int i = 0; i < size; i++)

    if (array[i] == target)
      return i;

  return -1;
}

int main()
{
  int array[] = {10, 20, 30};
  int sizes = size(array);
  cout << linearSearch(array, sizes, 70);
  return 0;
}