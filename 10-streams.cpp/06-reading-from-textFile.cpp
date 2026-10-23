#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
  ifstream file;
  file.open("data.csv");

  if (file.is_open())
  {
    string str;
    // file >> str;
    getline(file, str);

    while (!file.eof())
    {
      // getline(file, str);
      getline(file, str, ',');
      cout << str << endl;
    }
    file.close();
  }

  return 0;
}