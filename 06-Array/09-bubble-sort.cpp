#include <iostream>
using namespace std;

void swap(int &n, int &m)
{
  int temp = n;
  n = m;
  m = temp;
}

void bubbleSort(int array[], int size)
{
  for (int pass = 0; pass < size; pass++)
    for (int i = 1; i < size; i++)
      if (array[i] < array[i - 1])
        swap(array[i], array[i - 1]);
}

int main()
{
  int array[] = {10, 20, 30, 50, 80, 100, 20, 10};
  int sze = size(array);

  bubbleSort(array, sze);
  for (auto a : array)
    cout << a << endl;

  return 0;
}