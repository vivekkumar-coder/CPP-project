#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
  ofstream file;
  file.open("data.txt");

  if (file.is_open())
  {
    file << setw(30) << "Hello" << setw(30) << "World" << endl;
    file.close();
  }
  return 0;
}