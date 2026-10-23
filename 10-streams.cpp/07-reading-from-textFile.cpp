#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

struct Movie
{
  int id;
  string title;
  int releaseYear;
};

int main()
{
  ifstream file;
  file.open("data.csv");
  if (file.is_open())
  {
    string str;
    getline(file, str);

    while (!file.eof())
    {
      getline(file, str, ',');
      if (str.empty())
        continue;

      Movie movie;
      movie.id = stoi(str);

      getline(file, str, ',');
      movie.title = str;

      getline(file, str, ',');
      movie.releaseYear = stoi(str);

      cout << movie.title << endl;
    }
  }

  return 0;
}