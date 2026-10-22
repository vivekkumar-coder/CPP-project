#include <iostream>
using namespace std;

int main()
{
  int numbers[] = {10, 20};
  for (auto number : numbers)
    cout << number << endl;
  cout << endl;

  for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++)
    cout << numbers[i] << endl;
  cout << endl;

  for (int i = 0; i < size(numbers); i++)
    cout << numbers[i] << endl;
  cout << endl;
  cout << size(numbers);

  return 0;
}