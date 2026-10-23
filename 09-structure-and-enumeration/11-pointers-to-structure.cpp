#include <iostream>
using namespace std;

struct Movie
{
  string title;
  int releaseYear;
  bool isPopular;
};

Movie getMovie()
{
  return {"Terminator", 1984};
}

void showMovie(Movie &movie)
{
  cout << movie.title << "\t" << movie.releaseYear << endl;
}

void showMovie1(Movie *movie)
{
  cout << (*movie).title << "\t" << (*movie).releaseYear << endl; // member access operator
  cout << movie->title << "\t" << movie->releaseYear << endl;     // -> structured pointer operator
}

int main()
{
  auto movie = getMovie();
  showMovie(movie);
  showMovie1(&movie);

  return 0;
}