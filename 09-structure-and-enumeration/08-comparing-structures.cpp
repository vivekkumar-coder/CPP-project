#include <iostream>
using namespace std;

struct Date
{
  short year = 1988;
  short month = 1;
  short day = 1;
};

struct Movie
{
  string title;
  Date releaseDate;
  bool isPopular;
};

int main()
{
  Movie movie1 = {
      "Terminator",
      {1945, 4, 23},
      true};

  Movie movie2 = {
      "Terminator",
      {1945, 4, 23},
      true};

  if (movie1.title == movie2.title &&
      movie1.releaseDate.year == movie2.releaseDate.year &&
      movie1.releaseDate.month == movie2.releaseDate.month &&
      movie1.releaseDate.day == movie2.releaseDate.day &&
      movie1.isPopular == movie2.isPopular)
    cout << "Equal";
  else
    cout << "not equal";

  return 0;
}