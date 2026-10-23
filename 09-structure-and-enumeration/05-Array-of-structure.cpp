#include <iostream>
#include <vector>

using namespace std;

struct Movie
{
  string title;
  int releaseYear;
  bool isPopular;
};

int main()
{
  // Vector
  vector<Movie> movies;
  // Movie movie{"Terminator",1984};
  movies.push_back({"Terminator 1", 1984});
  movies.push_back({"Terminator 2", 1980});

  cout << movies[0].title << endl
       << movies[1].title << endl
       << movies[0].releaseYear << endl
       << movies[1].releaseYear << endl
       << movies[1].isPopular << endl
       << movies[1].isPopular << endl;

  for (auto movie : movies)
  {
    cout << movie.title << endl
         << movie.releaseYear << endl
         << movie.isPopular << endl;
  }

  return 0;
}