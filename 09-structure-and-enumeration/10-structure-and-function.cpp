#include <iostream>
using namespace std;

struct Movie
{
  string title;
  int releaseYear;
  bool isPopular;
};

ostream &operator<<(ostream &stream, const Movie &movie)
{
  stream << movie.title;
  return stream;
}

Movie getMovie()
{
  return {"Terminator", 1874};
}

void showMovie(Movie &movie)
{
  cout << movie.title;
}

int main()
{
  auto movie = getMovie();
  showMovie(movie);

  return 0;
}