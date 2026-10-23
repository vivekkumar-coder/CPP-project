#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  int numbers[3];

  ifstream file("numbers.dat", ios::binary); // .bind

  if (file.is_open())
  {
    int number;

    // file.read(reinterpret_cast<char *>(&number), sizeof(numbers));
    // cout << number << endl;

    while (file.read(reinterpret_cast<char *>(&number), sizeof(number)))
    {
      cout << number << endl;
    }

    file.close();
  }

  return 0;
}