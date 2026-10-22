#include <iostream>
using namespace std;

int main()
{
  bool isCitizen;
  cout << "Are you citizen of USA : ";
  cin >> boolalpha >> isCitizen;

  bool haveBachelorDegree;
  cout << "Have you Bacholar Degree : ";
  cin >> haveBachelorDegree;

  short experience;
  cout << "Experience year : ";
  cin >> experience;

  bool applicant = isCitizen && (haveBachelorDegree || (experience >= 2));
  cout << boolalpha << applicant << endl;

  return 0;
}