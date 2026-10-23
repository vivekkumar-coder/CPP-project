#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
  ofstream file;
  file.open("data.csv");

  if (file.is_open())
  {
    // CSV: Commas Separated Value
    file << "id,title,year\n"
         << "1, Terminator 1, 1990\n"
         << "2, Terminator 2, 1983\n"
         << "3, Terminator 3, 1984\n";
    file.close();
  }
  return 0;
}