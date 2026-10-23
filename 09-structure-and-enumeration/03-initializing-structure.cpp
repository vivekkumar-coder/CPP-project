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
  // Movie movie{"Terminator",1984,true};
  Movie movie = {"Terminator", 1984, true};
  cout << "Title : " << movie.title << endl
       << "releaseYear : " << movie.releaseYear << endl
       << "isPopular : " << boolalpha << movie.isPopular << "\t" << noboolalpha << movie.isPopular << endl
       << endl;

  Movie movie1 = {"Terminator", 1984};
  cout << "Title : " << movie1.title << endl
       << "releaseYear : " << movie1.releaseYear << endl
       << "isPopular : " << boolalpha << movie1.isPopular << "\t" << noboolalpha << movie1.isPopular << endl;

  return 0;
}