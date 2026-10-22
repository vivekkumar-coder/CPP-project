#include <iostream>
using namespace std;

int main()
{
  double temperature[] = {10, 20, 45.4, 34};
  int len = sizeof(temperature) / sizeof(temperature[0]);
  double totalTemperature = 0;

  for (double d : temperature)
    totalTemperature += d;

  cout << "Average temperature : " << totalTemperature / len;
  return 0;
}