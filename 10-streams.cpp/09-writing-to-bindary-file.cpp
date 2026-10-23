#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  int numbers[] = {1'000'000, 2'000'000, 3'000'000};

  ofstream file("numbers.txt");

  if (file.is_open())
  {
    for (auto number : numbers)
      file << number << endl;
    file.close();
  }

  return 0;
}