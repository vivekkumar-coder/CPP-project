#include <iostream>
using namespace std;

int main()
{
  double sales;
  cout << "Sales : ";
  cin >> sales;

  if (sales <= 10'000)
    cout << "Commission(10%) : " << 0.1 * sales;
  else if (sales > 10'000 && sales <= 15'000)
    cout << "Commission(15%) : " << 0.15 * sales;
  else
    cout << "Commission(20%) : " << 0.2 * sales;

  return 0;
}