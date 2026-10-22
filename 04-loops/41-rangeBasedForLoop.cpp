#include <iostream>
using namespace std;

int main()
{
  int numbers[] = {1, 2, 3};

  for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++)
    cout << numbers[i] << " ";
  cout << endl
       << endl;

  for (int n : numbers)
    cout << n << " ";
  cout << endl;

  string name;
  cout << "Name : ";
  getline(cin, name);

  for (char c : name)
    cout << c << "   ";
  cout << endl;

  return 0;
}