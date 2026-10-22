#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  // Write a program for printing this table
  short cpp = 100, JavaScript = 50;
  cout << left << setw(20) << "Course" << setw(20) << "Students" << endl
       << setw(20) << "C++" << right << setw(20) << cpp << endl
       << left << setw(20) << "JavaScript" << right << setw(20) << JavaScript << endl
       << endl;

  cout << left << setw(15) << "Course" << setw(10) << "Students" << endl
       << setw(15) << "C++" << right << setw(10) << cpp << left << endl
       << setw(15) << "JavaScript" << right << setw(10) << JavaScript << left << endl;

  return 0;
}