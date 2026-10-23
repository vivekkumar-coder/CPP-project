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

  // Methods
  bool equals(const Movie &movie)
  {
    return (
        title == movie.title &&
        releaseDate.year == movie.releaseDate.year &&
        releaseDate.month == movie.releaseDate.month &&
        releaseDate.day == movie.releaseDate.day &&
        isPopular == movie.isPopular);
  }
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

  if (movie1.equals(movie2))
    cout << "Equal";
  else
    cout << "not equal";
  cout << endl;

  return 0;
}