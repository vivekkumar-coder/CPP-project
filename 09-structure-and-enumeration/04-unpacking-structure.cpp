#include <iostream>
using namespace std;

struct Movie
{
  string title;
  int releaseYear;
  bool isPopular;
};

int main()
{
  Movie movie = {"Terminator", 1984};
  // string title=movie.title;
  // int releaseYear=movie.releaseYear;
  // bool isPopular=movie.releaseYear;

  // C++ : structured binding
  // JS : destructuring
  // Python : unpacking

  auto [title, releaseYear, isPopular]{movie};
  cout << title << endl
       << releaseYear << endl
       << isPopular << endl;

  return 0;
}