#include <iostream>
using namespace std;

struct Date
{
  short Year = 1900;
  short month = 1;
  short day = 1;
};

struct Movie
{
  string title;
  Date releaseYear;
  bool isPopular;
};

int main()
{
  Movie movie1{"Terminator", 1984};

  Date date{1990, 12, 23};
  Movie movie{"Terminator", date};
  cout << movie.title << endl
       << movie.releaseYear.Year << endl
       << movie.releaseYear.month << endl
       << movie.releaseYear.day << endl;

  return 0;
}