#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  cout << setw(10) << "Spring" << setw(10) << "Nice" << endl
       << setw(10) << "Summer" << setw(10) << "Nice" << endl
       << left << setw(10) << "Spring" << setw(10) << "Nice" << endl
       << left << setw(10) << "Summer" << setw(10) << "Hot" << endl
       << left << setw(10) << "Spring" << right << setw(10) << "Nice" << endl
       << left << setw(10) << "Summer" << right << setw(10) << "Hot" << endl
       << right << setw(10) << "Spring" << setw(10) << "Nice" << endl
       << right << setw(10) << "Summer" << setw(10) << "Hot" << endl
       << "Summer" << "Hot" << endl
       << endl;

  // it work only when you give width
  cout << "Spring" << "Nice" << endl
       << "Summer" << "Nice" << endl
       << left << "Spring" << "Nice" << endl
       << left << "Summer" << "Hot" << endl
       << left << "Spring" << right << "Nice" << endl
       << left << "Summer" << right << "Hot" << endl
       << right << "Spring" << "Nice" << endl
       << right << "Summer" << "Hot" << endl
       << "Summer" << "Hot" << endl
       << endl;

  double number = 12.34567;
  cout << number << endl
       << fixed << number << endl
       << setprecision(10) << number << endl
       << setprecision(2) << number << endl
       << setprecision(0) << number << endl;
  return 0;
}