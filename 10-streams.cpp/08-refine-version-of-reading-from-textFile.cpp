#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

struct Movie
{
  int id;
  string title;
  int releaseYear;
};

int main()
{
  ifstream file("data.csv");

  if (!file.is_open())
  {
    cout << "Error opening file!" << endl;
    return 1;
  }

  string line;

  // Skip the header
  getline(file, line);

  // Read each row
  while (getline(file, line))
  {
    if (line.empty())
      continue;

    stringstream ss(line);
    string str;
    Movie movie;

    // Read ID
    if (!getline(ss, str, ',') || str.empty())
      continue;

    try
    {
      movie.id = stoi(str);
    }
    catch (const invalid_argument &)
    {
      cout << "Invalid movie ID: " << str << endl;
      continue;
    }

    // Read title
    if (!getline(ss, movie.title, ','))
      continue;

    // Read release year
    if (!getline(ss, str) || str.empty())
      continue;

    try
    {
      movie.releaseYear = stoi(str);
    }
    catch (const invalid_argument &)
    {
      cout << "Invalid release year: " << str << endl;
      continue;
    }

    cout << "ID: " << movie.id << endl;
    cout << "Title: " << movie.title << endl;
    cout << "Release Year: " << movie.releaseYear << endl;
    cout << "-------------------" << endl;
  }

  file.close();

  return 0;
}