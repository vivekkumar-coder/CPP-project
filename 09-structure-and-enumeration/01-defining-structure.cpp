#include <iostream>

using namespace std;

// PascalCase
struct Movie
{
  string title;
  int releaseYear;
};

int main()
{
  Movie movie;
  movie.title = "Terminator";
  movie.releaseYear = 1984;

  cout << "Tile: " << movie.title << endl
       << "Release Year: " << movie.releaseYear << endl;

  // cout << movie << endl;

  return 0;
}