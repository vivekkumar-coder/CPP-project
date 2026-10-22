#include <iostream>
using namespace std;

int main()
{
  bool isIndian;
  cout << "Are you Indian  : ";
  cin >> boolalpha >> isIndian;

  int tuitionFee;

  if (isIndian == true)
  {
    bool isLocal;
    cout << "Are you local : ";
    cin >> boolalpha >> isLocal;

    if (isLocal == true)
      tuitionFee = 0;
    else
      tuitionFee = 100;
  }
  else
    tuitionFee = 300;
  cout << "Tuition Fee " << tuitionFee << endl;

  return 0;
}